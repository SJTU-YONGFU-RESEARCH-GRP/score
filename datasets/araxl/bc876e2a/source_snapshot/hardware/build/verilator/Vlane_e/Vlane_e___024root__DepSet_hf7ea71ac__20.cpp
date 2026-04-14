// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlane_e.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vlane_e__Syms.h"
#include "Vlane_e___024root.h"

VL_INLINE_OPT void Vlane_e___024root___nba_comb__TOP__176(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___nba_comb__TOP__176\n"); );
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
                        goto __Vlabel1882;
                    } else {
                        vlSelf->__Vfunc_get_opgroup__404__Vfuncout = 3U;
                        goto __Vlabel1882;
                    }
                } else {
                    vlSelf->__Vfunc_get_opgroup__404__Vfuncout = 3U;
                    goto __Vlabel1882;
                }
            } else if ((2U & (IData)(__Vfunc_get_opgroup__404__op))) {
                vlSelf->__Vfunc_get_opgroup__404__Vfuncout = 3U;
                goto __Vlabel1882;
            } else {
                vlSelf->__Vfunc_get_opgroup__404__Vfuncout = 2U;
                goto __Vlabel1882;
            }
        } else if ((4U & (IData)(__Vfunc_get_opgroup__404__op))) {
            if ((2U & (IData)(__Vfunc_get_opgroup__404__op))) {
                vlSelf->__Vfunc_get_opgroup__404__Vfuncout = 2U;
                goto __Vlabel1882;
            } else {
                vlSelf->__Vfunc_get_opgroup__404__Vfuncout = 1U;
                goto __Vlabel1882;
            }
        } else {
            vlSelf->__Vfunc_get_opgroup__404__Vfuncout = 0U;
            goto __Vlabel1882;
        }
        __Vlabel1882: ;
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

extern const VlUnpacked<CData/*0:0*/, 64> Vlane_e__ConstPool__TABLE_hb5f425c0_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vlane_e__ConstPool__TABLE_h1741a1ba_0;
extern const VlUnpacked<CData/*1:0*/, 64> Vlane_e__ConstPool__TABLE_h1e39ee31_0;

VL_INLINE_OPT void Vlane_e___024root___nba_comb__TOP__191(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___nba_comb__TOP__191\n"); );
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
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT____VdfgTmp_h7840609b__0 
        = ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__Start_S) 
           & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__unit_ready));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__RM_DN 
        = (7U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT____VdfgTmp_h7840609b__0)
                  ? (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__inp_pipe_rnd_mode_q)
                  : (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__i_divsqrt_lei__DOT__preprocess_U0__DOT__RM_DP)));
}

VL_INLINE_OPT void Vlane_e___024root___nba_comb__TOP__192(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___nba_comb__TOP__192\n"); );
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

extern const VlWide<10>/*319:0*/ Vlane_e__ConstPool__CONST_h895f8a77_0;

VL_INLINE_OPT void Vlane_e___024root___nba_comb__TOP__333(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___nba_comb__TOP__333\n"); );
    // Init
    CData/*5:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_exp;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_exp = 0;
    CData/*5:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_exp;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_exp = 0;
    CData/*5:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__final_exp;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__final_exp = 0;
    QData/*32:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__preshift_mant;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__preshift_mant = 0;
    QData/*32:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant = 0;
    CData/*4:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt = 0;
    CData/*1:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits = 0;
    SData/*15:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__pre_round_abs;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__pre_round_abs = 0;
    SData/*15:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_int_res;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_int_res = 0;
    CData/*0:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_ha261d65c__0;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_ha261d65c__0 = 0;
    CData/*0:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_hebcd766f__0;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_hebcd766f__0 = 0;
    CData/*0:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_h305cd680__0;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_h305cd680__0 = 0;
    CData/*0:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_he1b68fee__0;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_he1b68fee__0 = 0;
    IData/*31:0*/ __Vfunc_bias__448__Vfuncout;
    __Vfunc_bias__448__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_bias__448__fmt;
    __Vfunc_bias__448__fmt = 0;
    CData/*1:0*/ __Vfunc_int_width__451__ifmt;
    __Vfunc_int_width__451__ifmt = 0;
    IData/*31:0*/ __Vfunc_exp_bits__452__Vfuncout;
    __Vfunc_exp_bits__452__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_exp_bits__452__fmt;
    __Vfunc_exp_bits__452__fmt = 0;
    IData/*31:0*/ __Vfunc_man_bits__454__Vfuncout;
    __Vfunc_man_bits__454__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_man_bits__454__fmt;
    __Vfunc_man_bits__454__fmt = 0;
    IData/*31:0*/ __Vfunc_man_bits__455__Vfuncout;
    __Vfunc_man_bits__455__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_man_bits__455__fmt;
    __Vfunc_man_bits__455__fmt = 0;
    VlWide<3>/*95:0*/ __Vtemp_hd0fe6006__0;
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_exp_q 
        = ((0x3fU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_exp_q)) 
           | (0xfc0U & (((0xcU == (0xfU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_op_q)))
                          ? ((IData)(0xfU) - (0xfU 
                                              & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes)))
                          : ((((((0x1dU >= (0x1fU & 
                                            ((IData)(6U) 
                                             * (7U 
                                                & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_src_fmt_q)))))
                                  ? ((0x3ffc0fffU | 
                                      (0x1f000U & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_operands_q 
                                                   << 2U))) 
                                     >> (0x1fU & ((IData)(6U) 
                                                  * 
                                                  (7U 
                                                   & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_src_fmt_q)))))
                                  : 0U) + VL_EXTENDS_II(6,2, 
                                                        ((0x27U 
                                                          >= 
                                                          ((IData)(6U) 
                                                           + 
                                                           (0x38U 
                                                            & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_src_fmt_q) 
                                                               << 3U)))) 
                                                         & (IData)(
                                                                   ((0xffff000000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                | ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____Vcellout__fmt_init_inputs__BRA__2__KET____DOT__active_format__DOT__i_fpnew_classifier__info_o) 
                                                                                << 0x10U))))) 
                                                                    >> 
                                                                    ((IData)(6U) 
                                                                     + 
                                                                     (0x38U 
                                                                      & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_src_fmt_q) 
                                                                         << 3U)))))))) 
                               - (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__src_bias)) 
                              - (0xfU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes))) 
                             + ((0x1dU >= (0x1fU & 
                                           ((IData)(6U) 
                                            * (7U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_src_fmt_q)))))
                                 ? (0x3ffc5fffU >> 
                                    (0x1fU & ((IData)(6U) 
                                              * (7U 
                                                 & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_src_fmt_q)))))
                                 : 0U))) << 6U)));
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_exp 
        = (0x3fU & ((0xcU == (0xfU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_op_q)))
                     ? ((IData)(0xfU) - (0xfU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes)))
                     : ((((((0x1dU >= (0x1fU & ((IData)(6U) 
                                                * (7U 
                                                   & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_src_fmt_q)))))
                             ? ((0x3ffc0fffU | (0x1f000U 
                                                & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_operands_q 
                                                   << 2U))) 
                                >> (0x1fU & ((IData)(6U) 
                                             * (7U 
                                                & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_src_fmt_q)))))
                             : 0U) + VL_EXTENDS_II(6,2, 
                                                   ((0x27U 
                                                     >= 
                                                     ((IData)(6U) 
                                                      + 
                                                      (0x38U 
                                                       & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_src_fmt_q) 
                                                          << 3U)))) 
                                                    & (IData)(
                                                              ((0xffff000000ULL 
                                                                | (QData)((IData)(
                                                                                (0xffffU 
                                                                                | ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____Vcellout__fmt_init_inputs__BRA__2__KET____DOT__active_format__DOT__i_fpnew_classifier__info_o) 
                                                                                << 0x10U))))) 
                                                               >> 
                                                               ((IData)(6U) 
                                                                + 
                                                                (0x38U 
                                                                 & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_src_fmt_q) 
                                                                    << 3U)))))))) 
                          - (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__src_bias)) 
                         - (0xfU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes))) 
                        + ((0x1dU >= (0x1fU & ((IData)(6U) 
                                               * (7U 
                                                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_src_fmt_q)))))
                            ? (0x3ffc5fffU >> (0x1fU 
                                               & ((IData)(6U) 
                                                  * 
                                                  (7U 
                                                   & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_src_fmt_q)))))
                            : 0U))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_mant_q 
        = ((0xffffU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_mant_q) 
           | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__encoded_mant) 
               << (0xfU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes))) 
              << 0x10U));
    __Vfunc_int_width__451__ifmt = (3U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_int_fmt_q));
    {
        if ((2U & (IData)(__Vfunc_int_width__451__ifmt))) {
            if ((1U & (IData)(__Vfunc_int_width__451__ifmt))) {
                vlSelf->__Vfunc_int_width__451__Vfuncout = 0x40U;
                goto __Vlabel1883;
            } else {
                vlSelf->__Vfunc_int_width__451__Vfuncout = 0x20U;
                goto __Vlabel1883;
            }
        } else if ((1U & (IData)(__Vfunc_int_width__451__ifmt))) {
            vlSelf->__Vfunc_int_width__451__Vfuncout = 0x10U;
            goto __Vlabel1883;
        } else {
            vlSelf->__Vfunc_int_width__451__Vfuncout = 8U;
            goto __Vlabel1883;
        }
        __Vlabel1883: ;
    }
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_ha261d65c__0 
        = VL_GTES_III(32, VL_EXTENDS_II(32,6, (0x3fU 
                                               & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_exp_q))), 
                      ((vlSelf->__Vfunc_int_width__451__Vfuncout 
                        - (IData)(1U)) + (1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_op_mod_q))));
    __Vfunc_bias__448__fmt = (7U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_dst_fmt_q));
    __Vfunc_bias__448__Vfuncout = (VL_POWSS_III(32,32,32, (IData)(2U), 
                                                (((0x13fU 
                                                   >= 
                                                   (0x1ffU 
                                                    & ((IData)(0x20U) 
                                                       + 
                                                       (((IData)(4U) 
                                                         - (IData)(__Vfunc_bias__448__fmt)) 
                                                        << 6U))))
                                                   ? 
                                                  (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x20U) 
                                                         + 
                                                         (((IData)(4U) 
                                                           - (IData)(__Vfunc_bias__448__fmt)) 
                                                          << 6U))))
                                                     ? 0U
                                                     : 
                                                    (Vlane_e__ConstPool__CONST_h895f8a77_0[
                                                     (((IData)(0x1fU) 
                                                       + 
                                                       (0x1ffU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           (((IData)(4U) 
                                                             - (IData)(__Vfunc_bias__448__fmt)) 
                                                            << 6U)))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(0x20U) 
                                                          + 
                                                          (((IData)(4U) 
                                                            - (IData)(__Vfunc_bias__448__fmt)) 
                                                           << 6U)))))) 
                                                   | (Vlane_e__ConstPool__CONST_h895f8a77_0[
                                                      (0xfU 
                                                       & (((IData)(0x20U) 
                                                           + 
                                                           (((IData)(4U) 
                                                             - (IData)(__Vfunc_bias__448__fmt)) 
                                                            << 6U)) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(0x20U) 
                                                          + 
                                                          (((IData)(4U) 
                                                            - (IData)(__Vfunc_bias__448__fmt)) 
                                                           << 6U)))))
                                                   : 0U) 
                                                 - (IData)(1U)), 1,0) 
                                   - (IData)(1U));
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_exp 
        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_exp)) 
                    + __Vfunc_bias__448__Vfuncout));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dest_exp_q 
        = ((0x3fU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dest_exp_q)) 
           | ((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_exp) 
              << 6U));
    __Vfunc_man_bits__454__fmt = (7U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q));
    __Vfunc_man_bits__454__Vfuncout = ((0x13fU >= (0x1ffU 
                                                   & (((IData)(4U) 
                                                       - (IData)(__Vfunc_man_bits__454__fmt)) 
                                                      << 6U)))
                                        ? (((0U == 
                                             (0x1fU 
                                              & (((IData)(4U) 
                                                  - (IData)(__Vfunc_man_bits__454__fmt)) 
                                                 << 6U)))
                                             ? 0U : 
                                            (Vlane_e__ConstPool__CONST_h895f8a77_0[
                                             (((IData)(0x1fU) 
                                               + (0x1ffU 
                                                  & (((IData)(4U) 
                                                      - (IData)(__Vfunc_man_bits__454__fmt)) 
                                                     << 6U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & (((IData)(4U) 
                                                      - (IData)(__Vfunc_man_bits__454__fmt)) 
                                                     << 6U))))) 
                                           | (Vlane_e__ConstPool__CONST_h895f8a77_0[
                                              (0xeU 
                                               & (((IData)(4U) 
                                                   - (IData)(__Vfunc_man_bits__454__fmt)) 
                                                  << 1U))] 
                                              >> (0x1fU 
                                                  & (((IData)(4U) 
                                                      - (IData)(__Vfunc_man_bits__454__fmt)) 
                                                     << 6U))))
                                        : 0U);
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_h305cd680__0 
        = (VL_GTS_III(32, 1U, VL_EXTENDS_II(32,6, (0x3fU 
                                                   & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dest_exp_q)))) 
           & VL_GTES_III(32, VL_EXTENDS_II(32,6, (0x3fU 
                                                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dest_exp_q))), 
                         (- __Vfunc_man_bits__454__Vfuncout)));
    __Vfunc_man_bits__455__fmt = (7U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q));
    __Vfunc_man_bits__455__Vfuncout = ((0x13fU >= (0x1ffU 
                                                   & (((IData)(4U) 
                                                       - (IData)(__Vfunc_man_bits__455__fmt)) 
                                                      << 6U)))
                                        ? (((0U == 
                                             (0x1fU 
                                              & (((IData)(4U) 
                                                  - (IData)(__Vfunc_man_bits__455__fmt)) 
                                                 << 6U)))
                                             ? 0U : 
                                            (Vlane_e__ConstPool__CONST_h895f8a77_0[
                                             (((IData)(0x1fU) 
                                               + (0x1ffU 
                                                  & (((IData)(4U) 
                                                      - (IData)(__Vfunc_man_bits__455__fmt)) 
                                                     << 6U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & (((IData)(4U) 
                                                      - (IData)(__Vfunc_man_bits__455__fmt)) 
                                                     << 6U))))) 
                                           | (Vlane_e__ConstPool__CONST_h895f8a77_0[
                                              (0xeU 
                                               & (((IData)(4U) 
                                                   - (IData)(__Vfunc_man_bits__455__fmt)) 
                                                  << 1U))] 
                                              >> (0x1fU 
                                                  & (((IData)(4U) 
                                                      - (IData)(__Vfunc_man_bits__455__fmt)) 
                                                     << 6U))))
                                        : 0U);
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_he1b68fee__0 
        = VL_LTS_III(32, VL_EXTENDS_II(32,6, (0x3fU 
                                              & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dest_exp_q))), 
                     (- __Vfunc_man_bits__455__Vfuncout));
    __Vfunc_exp_bits__452__fmt = (7U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q));
    __Vfunc_exp_bits__452__Vfuncout = ((0x13fU >= (0x1ffU 
                                                   & ((IData)(0x20U) 
                                                      + 
                                                      (((IData)(4U) 
                                                        - (IData)(__Vfunc_exp_bits__452__fmt)) 
                                                       << 6U))))
                                        ? (((0U == 
                                             (0x1fU 
                                              & ((IData)(0x20U) 
                                                 + 
                                                 (((IData)(4U) 
                                                   - (IData)(__Vfunc_exp_bits__452__fmt)) 
                                                  << 6U))))
                                             ? 0U : 
                                            (Vlane_e__ConstPool__CONST_h895f8a77_0[
                                             (((IData)(0x1fU) 
                                               + (0x1ffU 
                                                  & ((IData)(0x20U) 
                                                     + 
                                                     (((IData)(4U) 
                                                       - (IData)(__Vfunc_exp_bits__452__fmt)) 
                                                      << 6U)))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x20U) 
                                                     + 
                                                     (((IData)(4U) 
                                                       - (IData)(__Vfunc_exp_bits__452__fmt)) 
                                                      << 6U)))))) 
                                           | (Vlane_e__ConstPool__CONST_h895f8a77_0[
                                              (0xfU 
                                               & (((IData)(0x20U) 
                                                   + 
                                                   (((IData)(4U) 
                                                     - (IData)(__Vfunc_exp_bits__452__fmt)) 
                                                    << 6U)) 
                                                  >> 5U))] 
                                              >> (0x1fU 
                                                  & ((IData)(0x20U) 
                                                     + 
                                                     (((IData)(4U) 
                                                       - (IData)(__Vfunc_exp_bits__452__fmt)) 
                                                      << 6U)))))
                                        : 0U);
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_hebcd766f__0 
        = (1U & (VL_GTES_III(32, VL_EXTENDS_II(32,6, 
                                               (0x3fU 
                                                & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dest_exp_q))), 
                             (VL_POWSS_III(32,32,32, (IData)(2U), __Vfunc_exp_bits__452__Vfuncout, 1,0) 
                              - (IData)(1U))) | ((~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_src_is_int_q)) 
                                                 & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q) 
                                                    >> 4U))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_before_round = 0U;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__final_exp 
        = (0x3fU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dest_exp_q));
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__preshift_mant 
        = (0x1ffffffffULL & ((QData)((IData)((0xffffU 
                                              & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_mant_q))) 
                             << 0x11U));
    if ((1U & (~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_is_int_q)))) {
        if (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_hebcd766f__0) {
            lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__final_exp 
                = vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_h2478ff31__0;
            lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__preshift_mant = 0x1ffffffffULL;
        } else if (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_h305cd680__0) {
            lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__final_exp = 0U;
        } else if (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_he1b68fee__0) {
            lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__final_exp = 0U;
        }
    }
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt 
        = vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_h7e48dbe1__0;
    if ((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_is_int_q))) {
        lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt 
            = (0x1fU & ((IData)(0xfU) - (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_exp_q)));
        if (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_ha261d65c__0) {
            vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_before_round = 1U;
            lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt = 0U;
        } else if (VL_GTS_III(32, 0xffffffffU, VL_EXTENDS_II(32,6, 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_exp_q))))) {
            lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt = 0x11U;
        }
    } else {
        if (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_hebcd766f__0) {
            vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_before_round = 1U;
        }
        if ((1U & (~ (IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_hebcd766f__0)))) {
            if (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_h305cd680__0) {
                lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt 
                    = (0x1fU & (((IData)(1U) + (IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt)) 
                                - (0x3fU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dest_exp_q))));
            } else if (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_he1b68fee__0) {
                vlSelf->__Vfunc_man_bits__449__fmt 
                    = (7U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q));
                vlSelf->__Vfunc_man_bits__449__Vfuncout 
                    = ((0x13fU >= (0x1ffU & (((IData)(4U) 
                                              - (IData)(vlSelf->__Vfunc_man_bits__449__fmt)) 
                                             << 6U)))
                        ? (((0U == (0x1fU & (((IData)(4U) 
                                              - (IData)(vlSelf->__Vfunc_man_bits__449__fmt)) 
                                             << 6U)))
                             ? 0U : (Vlane_e__ConstPool__CONST_h895f8a77_0[
                                     (((IData)(0x1fU) 
                                       + (0x1ffU & 
                                          (((IData)(4U) 
                                            - (IData)(vlSelf->__Vfunc_man_bits__449__fmt)) 
                                           << 6U))) 
                                      >> 5U)] << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & (((IData)(4U) 
                                                       - (IData)(vlSelf->__Vfunc_man_bits__449__fmt)) 
                                                      << 6U))))) 
                           | (Vlane_e__ConstPool__CONST_h895f8a77_0[
                              (0xeU & (((IData)(4U) 
                                        - (IData)(vlSelf->__Vfunc_man_bits__449__fmt)) 
                                       << 1U))] >> 
                              (0x1fU & (((IData)(4U) 
                                         - (IData)(vlSelf->__Vfunc_man_bits__449__fmt)) 
                                        << 6U)))) : 0U);
                lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt 
                    = (0x1fU & ((IData)(2U) + ((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt) 
                                               + vlSelf->__Vfunc_man_bits__449__Vfuncout)));
            }
        }
    }
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant 
        = (0x1ffffffffULL & (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__preshift_mant 
                             >> (IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt)));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_pre_round_abs 
        = ((0xffffffff0000ffffULL & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_pre_round_abs) 
           | ((QData)((IData)((0xffffU & (- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant 
                                                                >> 0x20U)))))))) 
              << 0x10U));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_pre_round_abs 
        = ((0xffffffff0000ffffULL & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_pre_round_abs) 
           | ((QData)((IData)((0xffffU & (IData)((lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant 
                                                  >> 0x11U))))) 
              << 0x10U));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_round_sticky_bits 
        = ((2U & ((IData)((lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant 
                           >> 0x15U)) << 1U)) | (0U 
                                                 != 
                                                 (0x1fffffU 
                                                  & (IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_round_sticky_bits 
        = ((2U & ((IData)((lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant 
                           >> 0x10U)) << 1U)) | (0U 
                                                 != 
                                                 (0xffffU 
                                                  & (IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant))));
    __Vtemp_hd0fe6006__0[0U] = (IData)((0xffffffffULL 
                                        | (((QData)((IData)(
                                                            (0x1fU 
                                                             & (IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__final_exp)))) 
                                            << 0x2aU) 
                                           | ((QData)((IData)(
                                                              (0x3ffU 
                                                               & (IData)(
                                                                         (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant 
                                                                          >> 0x16U))))) 
                                              << 0x20U))));
    __Vtemp_hd0fe6006__0[1U] = (0xffff0000U | (IData)(
                                                      ((0xffffffffULL 
                                                        | (((QData)((IData)(
                                                                            (0x1fU 
                                                                             & (IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__final_exp)))) 
                                                            << 0x2aU) 
                                                           | ((QData)((IData)(
                                                                              (0x3ffU 
                                                                               & (IData)(
                                                                                (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant 
                                                                                >> 0x16U))))) 
                                                              << 0x20U))) 
                                                       >> 0x20U)));
    __Vtemp_hd0fe6006__0[2U] = 0xffffU;
    if ((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_is_int_q))) {
        lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__pre_round_abs 
            = (0xffffU & (IData)((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_pre_round_abs 
                                  >> (0x30U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_int_fmt_q) 
                                               << 4U)))));
        lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits 
            = vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_round_sticky_bits;
    } else {
        lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__pre_round_abs 
            = (0xffffU & ((0x4fU >= (0x70U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q) 
                                              << 4U)))
                           ? (((0U == (0x10U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q) 
                                                << 4U)))
                                ? 0U : (__Vtemp_hd0fe6006__0[
                                        (((IData)(0xfU) 
                                          + (0x70U 
                                             & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q) 
                                                << 4U))) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (0x10U & 
                                            ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q) 
                                             << 4U))))) 
                              | (__Vtemp_hd0fe6006__0[
                                 (3U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q) 
                                        >> 1U))] >> 
                                 (0x10U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q) 
                                           << 4U))))
                           : 0U));
        lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits 
            = vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_round_sticky_bits;
    }
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_abs 
        = (0xffffU & ((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__pre_round_abs) 
                      + (1U & ((4U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_rnd_mode_q))
                                ? (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_rnd_mode_q) 
                                    >> 1U) | ((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_rnd_mode_q))
                                               ? ((~ (IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__pre_round_abs)) 
                                                  & (0U 
                                                     != (IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits)))
                                               : ((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits) 
                                                  >> 1U)))
                                : ((2U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_rnd_mode_q))
                                    ? ((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_rnd_mode_q))
                                        ? ((0U != (IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits)) 
                                           & (~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_sign_q)))
                                        : ((0U != (IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits)) 
                                           & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_sign_q)))
                                    : ((~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_rnd_mode_q)) 
                                       & (((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits) 
                                           >> 1U) & 
                                          ((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits) 
                                           | (IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__pre_round_abs)))))))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_uf_after_round 
        = ((0x1bU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_uf_after_round)) 
           | ((0U == (0x1fU & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_abs) 
                               >> 0xaU))) << 2U));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result[1U] 
        = (0xffffU | vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result[1U]);
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result[1U] 
        = ((0xffff0000U & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result[1U]) 
           | ((1U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_src_is_int_q) 
                     & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_mant_zero_q)))
               ? 0U : ((0x8000U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_sign_q) 
                                   << 0xfU)) | (0x7fffU 
                                                & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_abs)))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_of_after_round 
        = ((0x1bU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_of_after_round)) 
           | ((0x1fU == (0x1fU & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_abs) 
                                  >> 0xaU))) << 2U));
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_int_res 
        = (0xffffU & ((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_sign_q))
                       ? (- (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_abs))
                       : (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_abs)));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_of_after_round 
        = (0xdU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_of_after_round));
    if (((~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_sign_q)) 
         & (VL_EXTENDS_II(32,6, (0x3fU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_exp_q))) 
            == ((IData)(0xeU) + (1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_op_mod_q)))))) {
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_of_after_round 
            = ((0xdU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_of_after_round)) 
               | (2U & ((~ ((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_int_res) 
                            >> (0xfU & ((IData)(0xeU) 
                                        + (1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_op_mod_q)))))) 
                        << 1U)));
    }
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_after_round 
        = (1U & ((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_is_int_q))
                  ? ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_of_after_round) 
                     >> (3U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_int_fmt_q)))
                  : ((4U >= (7U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q))) 
                     & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_of_after_round) 
                        >> (7U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q))))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result_is_special 
        = (1U & ((((1U != (0x19U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q))) 
                   | (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_before_round)) 
                  | (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_after_round)) 
                 | ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_sign_q) 
                    & ((0U != (IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_int_res)) 
                       & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_op_mod_q)))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result 
        = (0xffffU & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result_is_special)
                       ? (IData)((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_special_result 
                                  >> (0x30U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_int_fmt_q) 
                                               << 4U))))
                       : (IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_int_res)));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o 
        = (1U & ((~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_is_int_q)) 
                 | ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result) 
                    >> 0xfU)));
}

VL_INLINE_OPT void Vlane_e___024root___nba_comb__TOP__334(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___nba_comb__TOP__334\n"); );
    // Init
    CData/*5:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_exp;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_exp = 0;
    CData/*5:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_exp;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_exp = 0;
    CData/*5:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__final_exp;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__final_exp = 0;
    QData/*32:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__preshift_mant;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__preshift_mant = 0;
    QData/*32:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant = 0;
    CData/*4:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt = 0;
    CData/*1:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits = 0;
    SData/*15:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__pre_round_abs;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__pre_round_abs = 0;
    SData/*15:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_int_res;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_int_res = 0;
    CData/*0:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_ha261d65c__0;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_ha261d65c__0 = 0;
    CData/*0:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_hebcd766f__0;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_hebcd766f__0 = 0;
    CData/*0:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_h305cd680__0;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_h305cd680__0 = 0;
    CData/*0:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_he1b68fee__0;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_he1b68fee__0 = 0;
    IData/*31:0*/ __Vfunc_bias__457__Vfuncout;
    __Vfunc_bias__457__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_bias__457__fmt;
    __Vfunc_bias__457__fmt = 0;
    CData/*1:0*/ __Vfunc_int_width__460__ifmt;
    __Vfunc_int_width__460__ifmt = 0;
    IData/*31:0*/ __Vfunc_exp_bits__461__Vfuncout;
    __Vfunc_exp_bits__461__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_exp_bits__461__fmt;
    __Vfunc_exp_bits__461__fmt = 0;
    IData/*31:0*/ __Vfunc_man_bits__463__Vfuncout;
    __Vfunc_man_bits__463__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_man_bits__463__fmt;
    __Vfunc_man_bits__463__fmt = 0;
    IData/*31:0*/ __Vfunc_man_bits__464__Vfuncout;
    __Vfunc_man_bits__464__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_man_bits__464__fmt;
    __Vfunc_man_bits__464__fmt = 0;
    VlWide<3>/*95:0*/ __Vtemp_h61dd2f0b__0;
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_exp_q 
        = ((0x3fU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_exp_q)) 
           | (0xfc0U & (((0xcU == (0xfU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_op_q)))
                          ? ((IData)(0xfU) - (0xfU 
                                              & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes)))
                          : ((((((0x1dU >= (0x1fU & 
                                            ((IData)(6U) 
                                             * (7U 
                                                & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_src_fmt_q)))))
                                  ? ((0x3ffc0fffU | 
                                      (0x1f000U & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_operands_q 
                                                   << 2U))) 
                                     >> (0x1fU & ((IData)(6U) 
                                                  * 
                                                  (7U 
                                                   & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_src_fmt_q)))))
                                  : 0U) + VL_EXTENDS_II(6,2, 
                                                        ((0x27U 
                                                          >= 
                                                          ((IData)(6U) 
                                                           + 
                                                           (0x38U 
                                                            & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_src_fmt_q) 
                                                               << 3U)))) 
                                                         & (IData)(
                                                                   ((0xffff000000ULL 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                | ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____Vcellout__fmt_init_inputs__BRA__2__KET____DOT__active_format__DOT__i_fpnew_classifier__info_o) 
                                                                                << 0x10U))))) 
                                                                    >> 
                                                                    ((IData)(6U) 
                                                                     + 
                                                                     (0x38U 
                                                                      & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_src_fmt_q) 
                                                                         << 3U)))))))) 
                               - (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__src_bias)) 
                              - (0xfU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes))) 
                             + ((0x1dU >= (0x1fU & 
                                           ((IData)(6U) 
                                            * (7U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_src_fmt_q)))))
                                 ? (0x3ffc5fffU >> 
                                    (0x1fU & ((IData)(6U) 
                                              * (7U 
                                                 & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_src_fmt_q)))))
                                 : 0U))) << 6U)));
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_exp 
        = (0x3fU & ((0xcU == (0xfU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_op_q)))
                     ? ((IData)(0xfU) - (0xfU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes)))
                     : ((((((0x1dU >= (0x1fU & ((IData)(6U) 
                                                * (7U 
                                                   & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_src_fmt_q)))))
                             ? ((0x3ffc0fffU | (0x1f000U 
                                                & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_operands_q 
                                                   << 2U))) 
                                >> (0x1fU & ((IData)(6U) 
                                             * (7U 
                                                & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_src_fmt_q)))))
                             : 0U) + VL_EXTENDS_II(6,2, 
                                                   ((0x27U 
                                                     >= 
                                                     ((IData)(6U) 
                                                      + 
                                                      (0x38U 
                                                       & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_src_fmt_q) 
                                                          << 3U)))) 
                                                    & (IData)(
                                                              ((0xffff000000ULL 
                                                                | (QData)((IData)(
                                                                                (0xffffU 
                                                                                | ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____Vcellout__fmt_init_inputs__BRA__2__KET____DOT__active_format__DOT__i_fpnew_classifier__info_o) 
                                                                                << 0x10U))))) 
                                                               >> 
                                                               ((IData)(6U) 
                                                                + 
                                                                (0x38U 
                                                                 & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_src_fmt_q) 
                                                                    << 3U)))))))) 
                          - (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__src_bias)) 
                         - (0xfU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes))) 
                        + ((0x1dU >= (0x1fU & ((IData)(6U) 
                                               * (7U 
                                                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_src_fmt_q)))))
                            ? (0x3ffc5fffU >> (0x1fU 
                                               & ((IData)(6U) 
                                                  * 
                                                  (7U 
                                                   & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_src_fmt_q)))))
                            : 0U))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_mant_q 
        = ((0xffffU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_mant_q) 
           | (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__encoded_mant) 
               << (0xfU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes))) 
              << 0x10U));
    __Vfunc_int_width__460__ifmt = (3U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_int_fmt_q));
    {
        if ((2U & (IData)(__Vfunc_int_width__460__ifmt))) {
            if ((1U & (IData)(__Vfunc_int_width__460__ifmt))) {
                vlSelf->__Vfunc_int_width__460__Vfuncout = 0x40U;
                goto __Vlabel1884;
            } else {
                vlSelf->__Vfunc_int_width__460__Vfuncout = 0x20U;
                goto __Vlabel1884;
            }
        } else if ((1U & (IData)(__Vfunc_int_width__460__ifmt))) {
            vlSelf->__Vfunc_int_width__460__Vfuncout = 0x10U;
            goto __Vlabel1884;
        } else {
            vlSelf->__Vfunc_int_width__460__Vfuncout = 8U;
            goto __Vlabel1884;
        }
        __Vlabel1884: ;
    }
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_ha261d65c__0 
        = VL_GTES_III(32, VL_EXTENDS_II(32,6, (0x3fU 
                                               & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_exp_q))), 
                      ((vlSelf->__Vfunc_int_width__460__Vfuncout 
                        - (IData)(1U)) + (1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_op_mod_q))));
    __Vfunc_bias__457__fmt = (7U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_dst_fmt_q));
    __Vfunc_bias__457__Vfuncout = (VL_POWSS_III(32,32,32, (IData)(2U), 
                                                (((0x13fU 
                                                   >= 
                                                   (0x1ffU 
                                                    & ((IData)(0x20U) 
                                                       + 
                                                       (((IData)(4U) 
                                                         - (IData)(__Vfunc_bias__457__fmt)) 
                                                        << 6U))))
                                                   ? 
                                                  (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x20U) 
                                                         + 
                                                         (((IData)(4U) 
                                                           - (IData)(__Vfunc_bias__457__fmt)) 
                                                          << 6U))))
                                                     ? 0U
                                                     : 
                                                    (Vlane_e__ConstPool__CONST_h895f8a77_0[
                                                     (((IData)(0x1fU) 
                                                       + 
                                                       (0x1ffU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           (((IData)(4U) 
                                                             - (IData)(__Vfunc_bias__457__fmt)) 
                                                            << 6U)))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(0x20U) 
                                                          + 
                                                          (((IData)(4U) 
                                                            - (IData)(__Vfunc_bias__457__fmt)) 
                                                           << 6U)))))) 
                                                   | (Vlane_e__ConstPool__CONST_h895f8a77_0[
                                                      (0xfU 
                                                       & (((IData)(0x20U) 
                                                           + 
                                                           (((IData)(4U) 
                                                             - (IData)(__Vfunc_bias__457__fmt)) 
                                                            << 6U)) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(0x20U) 
                                                          + 
                                                          (((IData)(4U) 
                                                            - (IData)(__Vfunc_bias__457__fmt)) 
                                                           << 6U)))))
                                                   : 0U) 
                                                 - (IData)(1U)), 1,0) 
                                   - (IData)(1U));
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_exp 
        = (0x3fU & (VL_EXTENDS_II(6,6, (IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_exp)) 
                    + __Vfunc_bias__457__Vfuncout));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dest_exp_q 
        = ((0x3fU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dest_exp_q)) 
           | ((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_exp) 
              << 6U));
    __Vfunc_man_bits__463__fmt = (7U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q));
    __Vfunc_man_bits__463__Vfuncout = ((0x13fU >= (0x1ffU 
                                                   & (((IData)(4U) 
                                                       - (IData)(__Vfunc_man_bits__463__fmt)) 
                                                      << 6U)))
                                        ? (((0U == 
                                             (0x1fU 
                                              & (((IData)(4U) 
                                                  - (IData)(__Vfunc_man_bits__463__fmt)) 
                                                 << 6U)))
                                             ? 0U : 
                                            (Vlane_e__ConstPool__CONST_h895f8a77_0[
                                             (((IData)(0x1fU) 
                                               + (0x1ffU 
                                                  & (((IData)(4U) 
                                                      - (IData)(__Vfunc_man_bits__463__fmt)) 
                                                     << 6U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & (((IData)(4U) 
                                                      - (IData)(__Vfunc_man_bits__463__fmt)) 
                                                     << 6U))))) 
                                           | (Vlane_e__ConstPool__CONST_h895f8a77_0[
                                              (0xeU 
                                               & (((IData)(4U) 
                                                   - (IData)(__Vfunc_man_bits__463__fmt)) 
                                                  << 1U))] 
                                              >> (0x1fU 
                                                  & (((IData)(4U) 
                                                      - (IData)(__Vfunc_man_bits__463__fmt)) 
                                                     << 6U))))
                                        : 0U);
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_h305cd680__0 
        = (VL_GTS_III(32, 1U, VL_EXTENDS_II(32,6, (0x3fU 
                                                   & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dest_exp_q)))) 
           & VL_GTES_III(32, VL_EXTENDS_II(32,6, (0x3fU 
                                                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dest_exp_q))), 
                         (- __Vfunc_man_bits__463__Vfuncout)));
    __Vfunc_man_bits__464__fmt = (7U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q));
    __Vfunc_man_bits__464__Vfuncout = ((0x13fU >= (0x1ffU 
                                                   & (((IData)(4U) 
                                                       - (IData)(__Vfunc_man_bits__464__fmt)) 
                                                      << 6U)))
                                        ? (((0U == 
                                             (0x1fU 
                                              & (((IData)(4U) 
                                                  - (IData)(__Vfunc_man_bits__464__fmt)) 
                                                 << 6U)))
                                             ? 0U : 
                                            (Vlane_e__ConstPool__CONST_h895f8a77_0[
                                             (((IData)(0x1fU) 
                                               + (0x1ffU 
                                                  & (((IData)(4U) 
                                                      - (IData)(__Vfunc_man_bits__464__fmt)) 
                                                     << 6U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & (((IData)(4U) 
                                                      - (IData)(__Vfunc_man_bits__464__fmt)) 
                                                     << 6U))))) 
                                           | (Vlane_e__ConstPool__CONST_h895f8a77_0[
                                              (0xeU 
                                               & (((IData)(4U) 
                                                   - (IData)(__Vfunc_man_bits__464__fmt)) 
                                                  << 1U))] 
                                              >> (0x1fU 
                                                  & (((IData)(4U) 
                                                      - (IData)(__Vfunc_man_bits__464__fmt)) 
                                                     << 6U))))
                                        : 0U);
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_he1b68fee__0 
        = VL_LTS_III(32, VL_EXTENDS_II(32,6, (0x3fU 
                                              & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dest_exp_q))), 
                     (- __Vfunc_man_bits__464__Vfuncout));
    __Vfunc_exp_bits__461__fmt = (7U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q));
    __Vfunc_exp_bits__461__Vfuncout = ((0x13fU >= (0x1ffU 
                                                   & ((IData)(0x20U) 
                                                      + 
                                                      (((IData)(4U) 
                                                        - (IData)(__Vfunc_exp_bits__461__fmt)) 
                                                       << 6U))))
                                        ? (((0U == 
                                             (0x1fU 
                                              & ((IData)(0x20U) 
                                                 + 
                                                 (((IData)(4U) 
                                                   - (IData)(__Vfunc_exp_bits__461__fmt)) 
                                                  << 6U))))
                                             ? 0U : 
                                            (Vlane_e__ConstPool__CONST_h895f8a77_0[
                                             (((IData)(0x1fU) 
                                               + (0x1ffU 
                                                  & ((IData)(0x20U) 
                                                     + 
                                                     (((IData)(4U) 
                                                       - (IData)(__Vfunc_exp_bits__461__fmt)) 
                                                      << 6U)))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x20U) 
                                                     + 
                                                     (((IData)(4U) 
                                                       - (IData)(__Vfunc_exp_bits__461__fmt)) 
                                                      << 6U)))))) 
                                           | (Vlane_e__ConstPool__CONST_h895f8a77_0[
                                              (0xfU 
                                               & (((IData)(0x20U) 
                                                   + 
                                                   (((IData)(4U) 
                                                     - (IData)(__Vfunc_exp_bits__461__fmt)) 
                                                    << 6U)) 
                                                  >> 5U))] 
                                              >> (0x1fU 
                                                  & ((IData)(0x20U) 
                                                     + 
                                                     (((IData)(4U) 
                                                       - (IData)(__Vfunc_exp_bits__461__fmt)) 
                                                      << 6U)))))
                                        : 0U);
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_hebcd766f__0 
        = (1U & (VL_GTES_III(32, VL_EXTENDS_II(32,6, 
                                               (0x3fU 
                                                & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dest_exp_q))), 
                             (VL_POWSS_III(32,32,32, (IData)(2U), __Vfunc_exp_bits__461__Vfuncout, 1,0) 
                              - (IData)(1U))) | ((~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_src_is_int_q)) 
                                                 & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q) 
                                                    >> 4U))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_before_round = 0U;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__final_exp 
        = (0x3fU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dest_exp_q));
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__preshift_mant 
        = (0x1ffffffffULL & ((QData)((IData)((0xffffU 
                                              & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_mant_q))) 
                             << 0x11U));
    if ((1U & (~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_is_int_q)))) {
        if (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_hebcd766f__0) {
            lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__final_exp 
                = vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_h2478ff31__0;
            lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__preshift_mant = 0x1ffffffffULL;
        } else if (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_h305cd680__0) {
            lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__final_exp = 0U;
        } else if (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_he1b68fee__0) {
            lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__final_exp = 0U;
        }
    }
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt 
        = vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_h7e48dbe1__0;
    if ((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_is_int_q))) {
        lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt 
            = (0x1fU & ((IData)(0xfU) - (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_exp_q)));
        if (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_ha261d65c__0) {
            vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_before_round = 1U;
            lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt = 0U;
        } else if (VL_GTS_III(32, 0xffffffffU, VL_EXTENDS_II(32,6, 
                                                             (0x3fU 
                                                              & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_exp_q))))) {
            lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt = 0x11U;
        }
    } else {
        if (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_hebcd766f__0) {
            vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_before_round = 1U;
        }
        if ((1U & (~ (IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_hebcd766f__0)))) {
            if (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_h305cd680__0) {
                lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt 
                    = (0x1fU & (((IData)(1U) + (IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt)) 
                                - (0x3fU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dest_exp_q))));
            } else if (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_he1b68fee__0) {
                vlSelf->__Vfunc_man_bits__458__fmt 
                    = (7U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q));
                vlSelf->__Vfunc_man_bits__458__Vfuncout 
                    = ((0x13fU >= (0x1ffU & (((IData)(4U) 
                                              - (IData)(vlSelf->__Vfunc_man_bits__458__fmt)) 
                                             << 6U)))
                        ? (((0U == (0x1fU & (((IData)(4U) 
                                              - (IData)(vlSelf->__Vfunc_man_bits__458__fmt)) 
                                             << 6U)))
                             ? 0U : (Vlane_e__ConstPool__CONST_h895f8a77_0[
                                     (((IData)(0x1fU) 
                                       + (0x1ffU & 
                                          (((IData)(4U) 
                                            - (IData)(vlSelf->__Vfunc_man_bits__458__fmt)) 
                                           << 6U))) 
                                      >> 5U)] << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & (((IData)(4U) 
                                                       - (IData)(vlSelf->__Vfunc_man_bits__458__fmt)) 
                                                      << 6U))))) 
                           | (Vlane_e__ConstPool__CONST_h895f8a77_0[
                              (0xeU & (((IData)(4U) 
                                        - (IData)(vlSelf->__Vfunc_man_bits__458__fmt)) 
                                       << 1U))] >> 
                              (0x1fU & (((IData)(4U) 
                                         - (IData)(vlSelf->__Vfunc_man_bits__458__fmt)) 
                                        << 6U)))) : 0U);
                lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt 
                    = (0x1fU & ((IData)(2U) + ((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt) 
                                               + vlSelf->__Vfunc_man_bits__458__Vfuncout)));
            }
        }
    }
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant 
        = (0x1ffffffffULL & (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__preshift_mant 
                             >> (IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt)));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_pre_round_abs 
        = ((0xffffffff0000ffffULL & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_pre_round_abs) 
           | ((QData)((IData)((0xffffU & (- (IData)(
                                                    (1U 
                                                     & (IData)(
                                                               (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant 
                                                                >> 0x20U)))))))) 
              << 0x10U));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_pre_round_abs 
        = ((0xffffffff0000ffffULL & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_pre_round_abs) 
           | ((QData)((IData)((0xffffU & (IData)((lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant 
                                                  >> 0x11U))))) 
              << 0x10U));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_round_sticky_bits 
        = ((2U & ((IData)((lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant 
                           >> 0x15U)) << 1U)) | (0U 
                                                 != 
                                                 (0x1fffffU 
                                                  & (IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_round_sticky_bits 
        = ((2U & ((IData)((lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant 
                           >> 0x10U)) << 1U)) | (0U 
                                                 != 
                                                 (0xffffU 
                                                  & (IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant))));
    __Vtemp_h61dd2f0b__0[0U] = (IData)((0xffffffffULL 
                                        | (((QData)((IData)(
                                                            (0x1fU 
                                                             & (IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__final_exp)))) 
                                            << 0x2aU) 
                                           | ((QData)((IData)(
                                                              (0x3ffU 
                                                               & (IData)(
                                                                         (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant 
                                                                          >> 0x16U))))) 
                                              << 0x20U))));
    __Vtemp_h61dd2f0b__0[1U] = (0xffff0000U | (IData)(
                                                      ((0xffffffffULL 
                                                        | (((QData)((IData)(
                                                                            (0x1fU 
                                                                             & (IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__final_exp)))) 
                                                            << 0x2aU) 
                                                           | ((QData)((IData)(
                                                                              (0x3ffU 
                                                                               & (IData)(
                                                                                (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant 
                                                                                >> 0x16U))))) 
                                                              << 0x20U))) 
                                                       >> 0x20U)));
    __Vtemp_h61dd2f0b__0[2U] = 0xffffU;
    if ((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_is_int_q))) {
        lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__pre_round_abs 
            = (0xffffU & (IData)((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_pre_round_abs 
                                  >> (0x30U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_int_fmt_q) 
                                               << 4U)))));
        lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits 
            = vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_round_sticky_bits;
    } else {
        lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__pre_round_abs 
            = (0xffffU & ((0x4fU >= (0x70U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q) 
                                              << 4U)))
                           ? (((0U == (0x10U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q) 
                                                << 4U)))
                                ? 0U : (__Vtemp_h61dd2f0b__0[
                                        (((IData)(0xfU) 
                                          + (0x70U 
                                             & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q) 
                                                << 4U))) 
                                         >> 5U)] << 
                                        ((IData)(0x20U) 
                                         - (0x10U & 
                                            ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q) 
                                             << 4U))))) 
                              | (__Vtemp_h61dd2f0b__0[
                                 (3U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q) 
                                        >> 1U))] >> 
                                 (0x10U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q) 
                                           << 4U))))
                           : 0U));
        lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits 
            = vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_round_sticky_bits;
    }
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_abs 
        = (0xffffU & ((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__pre_round_abs) 
                      + (1U & ((4U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_rnd_mode_q))
                                ? (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_rnd_mode_q) 
                                    >> 1U) | ((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_rnd_mode_q))
                                               ? ((~ (IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__pre_round_abs)) 
                                                  & (0U 
                                                     != (IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits)))
                                               : ((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits) 
                                                  >> 1U)))
                                : ((2U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_rnd_mode_q))
                                    ? ((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_rnd_mode_q))
                                        ? ((0U != (IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits)) 
                                           & (~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_sign_q)))
                                        : ((0U != (IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits)) 
                                           & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_sign_q)))
                                    : ((~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_rnd_mode_q)) 
                                       & (((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits) 
                                           >> 1U) & 
                                          ((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits) 
                                           | (IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__pre_round_abs)))))))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_uf_after_round 
        = ((0x1bU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_uf_after_round)) 
           | ((0U == (0x1fU & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_abs) 
                               >> 0xaU))) << 2U));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result[1U] 
        = (0xffffU | vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result[1U]);
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result[1U] 
        = ((0xffff0000U & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result[1U]) 
           | ((1U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_src_is_int_q) 
                     & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_mant_zero_q)))
               ? 0U : ((0x8000U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_sign_q) 
                                   << 0xfU)) | (0x7fffU 
                                                & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_abs)))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_of_after_round 
        = ((0x1bU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_of_after_round)) 
           | ((0x1fU == (0x1fU & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_abs) 
                                  >> 0xaU))) << 2U));
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_int_res 
        = (0xffffU & ((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_sign_q))
                       ? (- (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_abs))
                       : (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_abs)));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_of_after_round 
        = (0xdU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_of_after_round));
    if (((~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_sign_q)) 
         & (VL_EXTENDS_II(32,6, (0x3fU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_exp_q))) 
            == ((IData)(0xeU) + (1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_op_mod_q)))))) {
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_of_after_round 
            = ((0xdU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_of_after_round)) 
               | (2U & ((~ ((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_int_res) 
                            >> (0xfU & ((IData)(0xeU) 
                                        + (1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_op_mod_q)))))) 
                        << 1U)));
    }
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_after_round 
        = (1U & ((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_is_int_q))
                  ? ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_of_after_round) 
                     >> (3U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_int_fmt_q)))
                  : ((4U >= (7U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q))) 
                     & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_of_after_round) 
                        >> (7U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q))))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result_is_special 
        = (1U & ((((1U != (0x19U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q))) 
                   | (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_before_round)) 
                  | (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_after_round)) 
                 | ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_sign_q) 
                    & ((0U != (IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_int_res)) 
                       & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_op_mod_q)))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result 
        = (0xffffU & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result_is_special)
                       ? (IData)((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_special_result 
                                  >> (0x30U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_int_fmt_q) 
                                               << 4U))))
                       : (IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_int_res)));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o 
        = (1U & ((~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_is_int_q)) 
                 | ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result) 
                    >> 0xfU)));
}

VL_INLINE_OPT void Vlane_e___024root___nba_comb__TOP__335(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___nba_comb__TOP__335\n"); );
    // Init
    SData/*11:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_exp;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_exp = 0;
    SData/*11:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_exp;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_exp = 0;
    SData/*11:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__final_exp;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__final_exp = 0;
    VlWide<5>/*128:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__preshift_mant;
    VL_ZERO_W(129, lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__preshift_mant);
    VlWide<5>/*128:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant;
    VL_ZERO_W(129, lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant);
    CData/*6:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt = 0;
    CData/*1:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits = 0;
    QData/*63:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__pre_round_abs;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__pre_round_abs = 0;
    QData/*63:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_int_res;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_int_res = 0;
    CData/*0:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_hdca02594__0;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_hdca02594__0 = 0;
    CData/*0:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_h0bf5fbc6__0;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_h0bf5fbc6__0 = 0;
    CData/*0:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_h56a8bf0a__0;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_h56a8bf0a__0 = 0;
    CData/*0:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_hb8f90c41__0;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_hb8f90c41__0 = 0;
    IData/*31:0*/ __Vfunc_bias__439__Vfuncout;
    __Vfunc_bias__439__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_bias__439__fmt;
    __Vfunc_bias__439__fmt = 0;
    CData/*1:0*/ __Vfunc_int_width__442__ifmt;
    __Vfunc_int_width__442__ifmt = 0;
    IData/*31:0*/ __Vfunc_exp_bits__443__Vfuncout;
    __Vfunc_exp_bits__443__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_exp_bits__443__fmt;
    __Vfunc_exp_bits__443__fmt = 0;
    IData/*31:0*/ __Vfunc_man_bits__445__Vfuncout;
    __Vfunc_man_bits__445__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_man_bits__445__fmt;
    __Vfunc_man_bits__445__fmt = 0;
    IData/*31:0*/ __Vfunc_man_bits__446__Vfuncout;
    __Vfunc_man_bits__446__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_man_bits__446__fmt;
    __Vfunc_man_bits__446__fmt = 0;
    VlWide<5>/*159:0*/ __Vtemp_hf1d4991d__0;
    VlWide<5>/*159:0*/ __Vtemp_h3a620982__0;
    VlWide<5>/*159:0*/ __Vtemp_h561bfd6c__0;
    VlWide<10>/*319:0*/ __Vtemp_h2360de28__0;
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_exp_q 
        = ((0xfffU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_exp_q) 
           | (0xfff000U & (((0xcU == (0xfU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_op_q)))
                             ? ((IData)(0x3fU) - (0x3fU 
                                                  & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U]))
                             : ((((((0x3bU >= (0x3fU 
                                               & ((IData)(0xcU) 
                                                  * 
                                                  (7U 
                                                   & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_src_fmt_q)))))
                                     ? (IData)(((0xffffff000000000ULL 
                                                 | (((QData)((IData)(
                                                                     (0xfffU 
                                                                      & VL_EXTENDS_II(12,6, 
                                                                                (0x1fU 
                                                                                & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_operands_q[0U] 
                                                                                >> 0xaU)))))) 
                                                     << 0x18U) 
                                                    | (QData)((IData)(
                                                                      ((0x7ff000U 
                                                                        & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_operands_q[1U] 
                                                                           >> 8U)) 
                                                                       | (0xfffU 
                                                                          & VL_EXTENDS_II(12,9, 
                                                                                (0xffU 
                                                                                & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_operands_q[0U] 
                                                                                >> 0x17U))))))))) 
                                                >> 
                                                (0x3fU 
                                                 & ((IData)(0xcU) 
                                                    * 
                                                    (7U 
                                                     & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_src_fmt_q))))))
                                     : 0U) + VL_EXTENDS_II(12,2, 
                                                           ((0x27U 
                                                             >= 
                                                             ((IData)(6U) 
                                                              + 
                                                              (0x38U 
                                                               & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_src_fmt_q) 
                                                                  << 3U)))) 
                                                            & (IData)(
                                                                      (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__info 
                                                                       >> 
                                                                       ((IData)(6U) 
                                                                        + 
                                                                        (0x38U 
                                                                         & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_src_fmt_q) 
                                                                            << 3U)))))))) 
                                  - (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__src_bias)) 
                                 - (0x3fU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U])) 
                                + ((0x3bU >= (0x3fU 
                                              & ((IData)(0xcU) 
                                                 * 
                                                 (7U 
                                                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_src_fmt_q)))))
                                    ? (IData)((0xffffff03500b028ULL 
                                               >> (0x3fU 
                                                   & ((IData)(0xcU) 
                                                      * 
                                                      (7U 
                                                       & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_src_fmt_q))))))
                                    : 0U))) << 0xcU)));
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_exp 
        = (0xfffU & ((0xcU == (0xfU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_op_q)))
                      ? ((IData)(0x3fU) - (0x3fU & 
                                           vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U]))
                      : ((((((0x3bU >= (0x3fU & ((IData)(0xcU) 
                                                 * 
                                                 (7U 
                                                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_src_fmt_q)))))
                              ? (IData)(((0xffffff000000000ULL 
                                          | (((QData)((IData)(
                                                              (0xfffU 
                                                               & VL_EXTENDS_II(12,6, 
                                                                               (0x1fU 
                                                                                & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_operands_q[0U] 
                                                                                >> 0xaU)))))) 
                                              << 0x18U) 
                                             | (QData)((IData)(
                                                               ((0x7ff000U 
                                                                 & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_operands_q[1U] 
                                                                    >> 8U)) 
                                                                | (0xfffU 
                                                                   & VL_EXTENDS_II(12,9, 
                                                                                (0xffU 
                                                                                & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_operands_q[0U] 
                                                                                >> 0x17U))))))))) 
                                         >> (0x3fU 
                                             & ((IData)(0xcU) 
                                                * (7U 
                                                   & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_src_fmt_q))))))
                              : 0U) + VL_EXTENDS_II(12,2, 
                                                    ((0x27U 
                                                      >= 
                                                      ((IData)(6U) 
                                                       + 
                                                       (0x38U 
                                                        & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_src_fmt_q) 
                                                           << 3U)))) 
                                                     & (IData)(
                                                               (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__info 
                                                                >> 
                                                                ((IData)(6U) 
                                                                 + 
                                                                 (0x38U 
                                                                  & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_src_fmt_q) 
                                                                     << 3U)))))))) 
                           - (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__src_bias)) 
                          - (0x3fU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U])) 
                         + ((0x3bU >= (0x3fU & ((IData)(0xcU) 
                                                * (7U 
                                                   & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_src_fmt_q)))))
                             ? (IData)((0xffffff03500b028ULL 
                                        >> (0x3fU & 
                                            ((IData)(0xcU) 
                                             * (7U 
                                                & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_src_fmt_q))))))
                             : 0U))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_mant_q[2U] 
        = (IData)((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__encoded_mant 
                   << (0x3fU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U])));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_mant_q[3U] 
        = (IData)(((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__encoded_mant 
                    << (0x3fU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U])) 
                   >> 0x20U));
    __Vfunc_int_width__442__ifmt = (3U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_int_fmt_q));
    {
        if ((2U & (IData)(__Vfunc_int_width__442__ifmt))) {
            if ((1U & (IData)(__Vfunc_int_width__442__ifmt))) {
                vlSelf->__Vfunc_int_width__442__Vfuncout = 0x40U;
                goto __Vlabel1885;
            } else {
                vlSelf->__Vfunc_int_width__442__Vfuncout = 0x20U;
                goto __Vlabel1885;
            }
        } else if ((1U & (IData)(__Vfunc_int_width__442__ifmt))) {
            vlSelf->__Vfunc_int_width__442__Vfuncout = 0x10U;
            goto __Vlabel1885;
        } else {
            vlSelf->__Vfunc_int_width__442__Vfuncout = 8U;
            goto __Vlabel1885;
        }
        __Vlabel1885: ;
    }
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_hdca02594__0 
        = VL_GTES_III(32, VL_EXTENDS_II(32,12, (0xfffU 
                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_exp_q)), 
                      ((vlSelf->__Vfunc_int_width__442__Vfuncout 
                        - (IData)(1U)) + (1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_op_mod_q))));
    __Vfunc_bias__439__fmt = (7U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_dst_fmt_q));
    __Vfunc_bias__439__Vfuncout = (VL_POWSS_III(32,32,32, (IData)(2U), 
                                                (((0x13fU 
                                                   >= 
                                                   (0x1ffU 
                                                    & ((IData)(0x20U) 
                                                       + 
                                                       (((IData)(4U) 
                                                         - (IData)(__Vfunc_bias__439__fmt)) 
                                                        << 6U))))
                                                   ? 
                                                  (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x20U) 
                                                         + 
                                                         (((IData)(4U) 
                                                           - (IData)(__Vfunc_bias__439__fmt)) 
                                                          << 6U))))
                                                     ? 0U
                                                     : 
                                                    (Vlane_e__ConstPool__CONST_h895f8a77_0[
                                                     (((IData)(0x1fU) 
                                                       + 
                                                       (0x1ffU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           (((IData)(4U) 
                                                             - (IData)(__Vfunc_bias__439__fmt)) 
                                                            << 6U)))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(0x20U) 
                                                          + 
                                                          (((IData)(4U) 
                                                            - (IData)(__Vfunc_bias__439__fmt)) 
                                                           << 6U)))))) 
                                                   | (Vlane_e__ConstPool__CONST_h895f8a77_0[
                                                      (0xfU 
                                                       & (((IData)(0x20U) 
                                                           + 
                                                           (((IData)(4U) 
                                                             - (IData)(__Vfunc_bias__439__fmt)) 
                                                            << 6U)) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(0x20U) 
                                                          + 
                                                          (((IData)(4U) 
                                                            - (IData)(__Vfunc_bias__439__fmt)) 
                                                           << 6U)))))
                                                   : 0U) 
                                                 - (IData)(1U)), 1,0) 
                                   - (IData)(1U));
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_exp 
        = (0xfffU & (VL_EXTENDS_II(12,12, (IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_exp)) 
                     + __Vfunc_bias__439__Vfuncout));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dest_exp_q 
        = ((0xfffU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dest_exp_q) 
           | ((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_exp) 
              << 0xcU));
    __Vfunc_man_bits__445__fmt = (7U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q));
    __Vfunc_man_bits__445__Vfuncout = ((0x13fU >= (0x1ffU 
                                                   & (((IData)(4U) 
                                                       - (IData)(__Vfunc_man_bits__445__fmt)) 
                                                      << 6U)))
                                        ? (((0U == 
                                             (0x1fU 
                                              & (((IData)(4U) 
                                                  - (IData)(__Vfunc_man_bits__445__fmt)) 
                                                 << 6U)))
                                             ? 0U : 
                                            (Vlane_e__ConstPool__CONST_h895f8a77_0[
                                             (((IData)(0x1fU) 
                                               + (0x1ffU 
                                                  & (((IData)(4U) 
                                                      - (IData)(__Vfunc_man_bits__445__fmt)) 
                                                     << 6U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & (((IData)(4U) 
                                                      - (IData)(__Vfunc_man_bits__445__fmt)) 
                                                     << 6U))))) 
                                           | (Vlane_e__ConstPool__CONST_h895f8a77_0[
                                              (0xeU 
                                               & (((IData)(4U) 
                                                   - (IData)(__Vfunc_man_bits__445__fmt)) 
                                                  << 1U))] 
                                              >> (0x1fU 
                                                  & (((IData)(4U) 
                                                      - (IData)(__Vfunc_man_bits__445__fmt)) 
                                                     << 6U))))
                                        : 0U);
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_h56a8bf0a__0 
        = (VL_GTS_III(32, 1U, VL_EXTENDS_II(32,12, 
                                            (0xfffU 
                                             & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dest_exp_q))) 
           & VL_GTES_III(32, VL_EXTENDS_II(32,12, (0xfffU 
                                                   & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dest_exp_q)), 
                         (- __Vfunc_man_bits__445__Vfuncout)));
    __Vfunc_man_bits__446__fmt = (7U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q));
    __Vfunc_man_bits__446__Vfuncout = ((0x13fU >= (0x1ffU 
                                                   & (((IData)(4U) 
                                                       - (IData)(__Vfunc_man_bits__446__fmt)) 
                                                      << 6U)))
                                        ? (((0U == 
                                             (0x1fU 
                                              & (((IData)(4U) 
                                                  - (IData)(__Vfunc_man_bits__446__fmt)) 
                                                 << 6U)))
                                             ? 0U : 
                                            (Vlane_e__ConstPool__CONST_h895f8a77_0[
                                             (((IData)(0x1fU) 
                                               + (0x1ffU 
                                                  & (((IData)(4U) 
                                                      - (IData)(__Vfunc_man_bits__446__fmt)) 
                                                     << 6U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & (((IData)(4U) 
                                                      - (IData)(__Vfunc_man_bits__446__fmt)) 
                                                     << 6U))))) 
                                           | (Vlane_e__ConstPool__CONST_h895f8a77_0[
                                              (0xeU 
                                               & (((IData)(4U) 
                                                   - (IData)(__Vfunc_man_bits__446__fmt)) 
                                                  << 1U))] 
                                              >> (0x1fU 
                                                  & (((IData)(4U) 
                                                      - (IData)(__Vfunc_man_bits__446__fmt)) 
                                                     << 6U))))
                                        : 0U);
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_hb8f90c41__0 
        = VL_LTS_III(32, VL_EXTENDS_II(32,12, (0xfffU 
                                               & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dest_exp_q)), 
                     (- __Vfunc_man_bits__446__Vfuncout));
    __Vfunc_exp_bits__443__fmt = (7U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q));
    __Vfunc_exp_bits__443__Vfuncout = ((0x13fU >= (0x1ffU 
                                                   & ((IData)(0x20U) 
                                                      + 
                                                      (((IData)(4U) 
                                                        - (IData)(__Vfunc_exp_bits__443__fmt)) 
                                                       << 6U))))
                                        ? (((0U == 
                                             (0x1fU 
                                              & ((IData)(0x20U) 
                                                 + 
                                                 (((IData)(4U) 
                                                   - (IData)(__Vfunc_exp_bits__443__fmt)) 
                                                  << 6U))))
                                             ? 0U : 
                                            (Vlane_e__ConstPool__CONST_h895f8a77_0[
                                             (((IData)(0x1fU) 
                                               + (0x1ffU 
                                                  & ((IData)(0x20U) 
                                                     + 
                                                     (((IData)(4U) 
                                                       - (IData)(__Vfunc_exp_bits__443__fmt)) 
                                                      << 6U)))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x20U) 
                                                     + 
                                                     (((IData)(4U) 
                                                       - (IData)(__Vfunc_exp_bits__443__fmt)) 
                                                      << 6U)))))) 
                                           | (Vlane_e__ConstPool__CONST_h895f8a77_0[
                                              (0xfU 
                                               & (((IData)(0x20U) 
                                                   + 
                                                   (((IData)(4U) 
                                                     - (IData)(__Vfunc_exp_bits__443__fmt)) 
                                                    << 6U)) 
                                                  >> 5U))] 
                                              >> (0x1fU 
                                                  & ((IData)(0x20U) 
                                                     + 
                                                     (((IData)(4U) 
                                                       - (IData)(__Vfunc_exp_bits__443__fmt)) 
                                                      << 6U)))))
                                        : 0U);
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_h0bf5fbc6__0 
        = (1U & (VL_GTES_III(32, VL_EXTENDS_II(32,12, 
                                               (0xfffU 
                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dest_exp_q)), 
                             (VL_POWSS_III(32,32,32, (IData)(2U), __Vfunc_exp_bits__443__Vfuncout, 1,0) 
                              - (IData)(1U))) | ((~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_src_is_int_q)) 
                                                 & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q) 
                                                    >> 4U))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_before_round = 0U;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__final_exp 
        = (0xfffU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dest_exp_q);
    __Vtemp_hf1d4991d__0[0U] = (IData)((((QData)((IData)(
                                                         vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_mant_q[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_mant_q[0U]))));
    __Vtemp_hf1d4991d__0[1U] = (IData)(((((QData)((IData)(
                                                          vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_mant_q[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_mant_q[0U]))) 
                                        >> 0x20U));
    __Vtemp_hf1d4991d__0[2U] = 0U;
    __Vtemp_hf1d4991d__0[3U] = 0U;
    __Vtemp_hf1d4991d__0[4U] = 0U;
    VL_SHIFTL_WWI(129,129,32, __Vtemp_h3a620982__0, __Vtemp_hf1d4991d__0, 0x41U);
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__preshift_mant[0U] 
        = __Vtemp_h3a620982__0[0U];
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__preshift_mant[1U] 
        = __Vtemp_h3a620982__0[1U];
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__preshift_mant[2U] 
        = __Vtemp_h3a620982__0[2U];
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__preshift_mant[3U] 
        = __Vtemp_h3a620982__0[3U];
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__preshift_mant[4U] 
        = (1U & __Vtemp_h3a620982__0[4U]);
    if ((1U & (~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_is_int_q)))) {
        if (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_h0bf5fbc6__0) {
            lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__final_exp 
                = vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_h52133aaf__0;
            lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__preshift_mant[0U] = 0xffffffffU;
            lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__preshift_mant[1U] = 0xffffffffU;
            lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__preshift_mant[2U] = 0xffffffffU;
            lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__preshift_mant[3U] = 0xffffffffU;
            lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__preshift_mant[4U] = 1U;
        } else if (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_h56a8bf0a__0) {
            lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__final_exp = 0U;
        } else if (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_hb8f90c41__0) {
            lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__final_exp = 0U;
        }
    }
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt 
        = vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_h80475cf1__0;
    if ((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_is_int_q))) {
        lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt 
            = (0x7fU & ((IData)(0x3fU) - vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_exp_q));
        if (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_hdca02594__0) {
            vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_before_round = 1U;
            lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt = 0U;
        } else if (VL_GTS_III(32, 0xffffffffU, VL_EXTENDS_II(32,12, 
                                                             (0xfffU 
                                                              & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_exp_q)))) {
            lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt = 0x41U;
        }
    } else {
        if (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_h0bf5fbc6__0) {
            vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_before_round = 1U;
        }
        if ((1U & (~ (IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_h0bf5fbc6__0)))) {
            if (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_h56a8bf0a__0) {
                lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt 
                    = (0x7fU & (((IData)(1U) + (IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt)) 
                                - (0xfffU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dest_exp_q)));
            } else if (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_hb8f90c41__0) {
                vlSelf->__Vfunc_man_bits__440__fmt 
                    = (7U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q));
                vlSelf->__Vfunc_man_bits__440__Vfuncout 
                    = ((0x13fU >= (0x1ffU & (((IData)(4U) 
                                              - (IData)(vlSelf->__Vfunc_man_bits__440__fmt)) 
                                             << 6U)))
                        ? (((0U == (0x1fU & (((IData)(4U) 
                                              - (IData)(vlSelf->__Vfunc_man_bits__440__fmt)) 
                                             << 6U)))
                             ? 0U : (Vlane_e__ConstPool__CONST_h895f8a77_0[
                                     (((IData)(0x1fU) 
                                       + (0x1ffU & 
                                          (((IData)(4U) 
                                            - (IData)(vlSelf->__Vfunc_man_bits__440__fmt)) 
                                           << 6U))) 
                                      >> 5U)] << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & (((IData)(4U) 
                                                       - (IData)(vlSelf->__Vfunc_man_bits__440__fmt)) 
                                                      << 6U))))) 
                           | (Vlane_e__ConstPool__CONST_h895f8a77_0[
                              (0xeU & (((IData)(4U) 
                                        - (IData)(vlSelf->__Vfunc_man_bits__440__fmt)) 
                                       << 1U))] >> 
                              (0x1fU & (((IData)(4U) 
                                         - (IData)(vlSelf->__Vfunc_man_bits__440__fmt)) 
                                        << 6U)))) : 0U);
                lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt 
                    = (0x7fU & ((IData)(2U) + ((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt) 
                                               + vlSelf->__Vfunc_man_bits__440__Vfuncout)));
            }
        }
    }
    VL_SHIFTR_WWI(129,129,7, __Vtemp_h561bfd6c__0, lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__preshift_mant, (IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt));
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[0U] 
        = __Vtemp_h561bfd6c__0[0U];
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[1U] 
        = __Vtemp_h561bfd6c__0[1U];
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[2U] 
        = __Vtemp_h561bfd6c__0[2U];
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[3U] 
        = __Vtemp_h561bfd6c__0[3U];
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[4U] 
        = (1U & __Vtemp_h561bfd6c__0[4U]);
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_pre_round_abs[2U] 
        = (IData)((- (QData)((IData)((1U & (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[2U] 
                                            >> 0x10U))))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_pre_round_abs[3U] 
        = (IData)(((- (QData)((IData)((1U & (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[2U] 
                                             >> 0x10U))))) 
                   >> 0x20U));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_pre_round_abs[2U] 
        = ((0xffff0000U & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_pre_round_abs[2U]) 
           | (0xffffU & (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[2U] 
                         >> 1U)));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_pre_round_abs[4U] 
        = (IData)((- (QData)((IData)((1U & lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[3U])))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_pre_round_abs[5U] 
        = (IData)(((- (QData)((IData)((1U & lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[3U])))) 
                   >> 0x20U));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_pre_round_abs[4U] 
        = ((lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[3U] 
            << 0x1fU) | (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[2U] 
                         >> 1U));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_pre_round_abs[6U] 
        = (IData)((- (QData)((IData)((1U & lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[4U])))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_pre_round_abs[7U] 
        = (IData)(((- (QData)((IData)((1U & lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[4U])))) 
                   >> 0x20U));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_pre_round_abs[6U] 
        = (IData)((((QData)((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[4U])) 
                    << 0x3fU) | (((QData)((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[3U])) 
                                  << 0x1fU) | ((QData)((IData)(
                                                               lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[2U])) 
                                               >> 1U))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_pre_round_abs[7U] 
        = (IData)(((((QData)((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[4U])) 
                     << 0x3fU) | (((QData)((IData)(
                                                   lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[3U])) 
                                   << 0x1fU) | ((QData)((IData)(
                                                                lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[2U])) 
                                                >> 1U))) 
                   >> 0x20U));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_round_sticky_bits 
        = ((2U & (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[2U] 
                  >> 0xaU)) | (0U != ((lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[0U] 
                                       | lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[1U]) 
                                      | (0x7ffU & lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[2U]))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_round_sticky_bits 
        = ((2U & (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[2U] 
                  << 1U)) | (0U != (((QData)((IData)(
                                                     lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[0U])))));
    __Vtemp_h2360de28__0[0U] = (IData)((QData)((IData)(
                                                       ((0x7f800000U 
                                                         & ((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__final_exp) 
                                                            << 0x17U)) 
                                                        | (0x7fffffU 
                                                           & ((lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[3U] 
                                                               << 0x14U) 
                                                              | (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[2U] 
                                                                 >> 0xcU)))))));
    __Vtemp_h2360de28__0[1U] = (IData)(((QData)((IData)(
                                                        ((0x7f800000U 
                                                          & ((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__final_exp) 
                                                             << 0x17U)) 
                                                         | (0x7fffffU 
                                                            & ((lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[3U] 
                                                                << 0x14U) 
                                                               | (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[2U] 
                                                                  >> 0xcU)))))) 
                                        >> 0x20U));
    __Vtemp_h2360de28__0[2U] = (IData)((0xfffffffffffffULL 
                                        & (((QData)((IData)(
                                                            lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[3U])) 
                                            << 0x14U) 
                                           | ((QData)((IData)(
                                                              lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[2U])) 
                                              >> 0xcU))));
    __Vtemp_h2360de28__0[3U] = ((0x7ff00000U & ((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__final_exp) 
                                                << 0x14U)) 
                                | (IData)(((0xfffffffffffffULL 
                                            & (((QData)((IData)(
                                                                lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[3U])) 
                                                << 0x14U) 
                                               | ((QData)((IData)(
                                                                  lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[2U])) 
                                                  >> 0xcU))) 
                                           >> 0x20U)));
    __Vtemp_h2360de28__0[4U] = ((0x7c00U & ((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__final_exp) 
                                            << 0xaU)) 
                                | (0x3ffU & (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[2U] 
                                             >> 0xcU)));
    __Vtemp_h2360de28__0[5U] = 0U;
    __Vtemp_h2360de28__0[6U] = 0xffffffffU;
    __Vtemp_h2360de28__0[7U] = 0xffffffffU;
    __Vtemp_h2360de28__0[8U] = 0xffffffffU;
    __Vtemp_h2360de28__0[9U] = 0xffffffffU;
    if ((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_is_int_q))) {
        lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__pre_round_abs 
            = (((QData)((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_pre_round_abs[
                                (((IData)(0x3fU) + 
                                  (0xc0U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_int_fmt_q) 
                                            << 6U))) 
                                 >> 5U)])) << 0x20U) 
               | (QData)((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_pre_round_abs[
                                 (6U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_int_fmt_q) 
                                        << 1U))])));
        lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits 
            = vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_round_sticky_bits;
    } else {
        lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__pre_round_abs 
            = ((0x13fU >= (0x1c0U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q) 
                                     << 6U))) ? (((QData)((IData)(
                                                                  __Vtemp_h2360de28__0[
                                                                  (((IData)(0x3fU) 
                                                                    + 
                                                                    (0x1c0U 
                                                                     & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q) 
                                                                        << 6U))) 
                                                                   >> 5U)])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   __Vtemp_h2360de28__0[
                                                                   (0xeU 
                                                                    & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q) 
                                                                       << 1U))])))
                : 0ULL);
        lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits 
            = vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_round_sticky_bits;
    }
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_abs 
        = (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__pre_round_abs 
           + (QData)((IData)((1U & ((4U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_rnd_mode_q))
                                     ? (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_rnd_mode_q) 
                                         >> 1U) | (
                                                   (1U 
                                                    & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_rnd_mode_q))
                                                    ? 
                                                   ((~ (IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__pre_round_abs)) 
                                                    & (0U 
                                                       != (IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits)))
                                                    : 
                                                   ((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits) 
                                                    >> 1U)))
                                     : ((2U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_rnd_mode_q))
                                         ? ((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_rnd_mode_q))
                                             ? ((0U 
                                                 != (IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits)) 
                                                & (~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_sign_q)))
                                             : ((0U 
                                                 != (IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits)) 
                                                & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_sign_q)))
                                         : ((~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_rnd_mode_q)) 
                                            & (((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits) 
                                                >> 1U) 
                                               & ((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits) 
                                                  | (IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__pre_round_abs))))))))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_uf_after_round 
        = ((0x1cU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_uf_after_round)) 
           | (((0U == (0x7ffU & (IData)((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_abs 
                                         >> 0x34U)))) 
               << 1U) | (0U == (0xffU & (IData)((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_abs 
                                                 >> 0x17U))))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_uf_after_round 
        = ((0x1bU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_uf_after_round)) 
           | ((0U == (0x1fU & (IData)((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_abs 
                                       >> 0xaU)))) 
              << 2U));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result[0U] = 0xffffffffU;
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result[1U] = 0xffffffffU;
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result[0U] 
        = ((1U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_src_is_int_q) 
                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_mant_zero_q)))
            ? 0U : (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_sign_q) 
                     << 0x1fU) | (0x7fffffffU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_abs))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result[2U] = 0xffffffffU;
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result[3U] = 0xffffffffU;
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result[2U] 
        = (IData)(((1U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_src_is_int_q) 
                          & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_mant_zero_q)))
                    ? 0ULL : (((QData)((IData)((1U 
                                                & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_sign_q)))) 
                               << 0x3fU) | (0x7fffffffffffffffULL 
                                            & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_abs))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result[3U] 
        = (IData)((((1U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_src_is_int_q) 
                           & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_mant_zero_q)))
                     ? 0ULL : (((QData)((IData)((1U 
                                                 & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_sign_q)))) 
                                << 0x3fU) | (0x7fffffffffffffffULL 
                                             & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_abs))) 
                   >> 0x20U));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result[4U] = 0xffffffffU;
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result[5U] = 0xffffffffU;
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result[4U] 
        = ((0xffff0000U & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result[4U]) 
           | ((1U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_src_is_int_q) 
                     & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_mant_zero_q)))
               ? 0U : ((0x8000U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_sign_q) 
                                   << 0xfU)) | (0x7fffU 
                                                & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_abs)))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_of_after_round 
        = ((0x1cU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_of_after_round)) 
           | (((0x7ffU == (0x7ffU & (IData)((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_abs 
                                             >> 0x34U)))) 
               << 1U) | (0xffU == (0xffU & (IData)(
                                                   (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_abs 
                                                    >> 0x17U))))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_of_after_round 
        = ((0x1bU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_of_after_round)) 
           | ((0x1fU == (0x1fU & (IData)((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_abs 
                                          >> 0xaU)))) 
              << 2U));
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_int_res 
        = ((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_sign_q))
            ? (- vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_abs)
            : vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_abs);
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_of_after_round 
        = (0xdU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_of_after_round));
    if (((~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_sign_q)) 
         & (VL_EXTENDS_II(32,12, (0xfffU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_exp_q)) 
            == ((IData)(0xeU) + (1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_op_mod_q)))))) {
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_of_after_round 
            = ((0xdU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_of_after_round)) 
               | (2U & ((~ (IData)((lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_int_res 
                                    >> (0x3fU & ((IData)(0xeU) 
                                                 + 
                                                 (1U 
                                                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_op_mod_q))))))) 
                        << 1U)));
    }
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_of_after_round 
        = (0xbU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_of_after_round));
    if (((~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_sign_q)) 
         & (VL_EXTENDS_II(32,12, (0xfffU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_exp_q)) 
            == ((IData)(0x1eU) + (1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_op_mod_q)))))) {
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_of_after_round 
            = ((0xbU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_of_after_round)) 
               | (4U & ((~ (IData)((lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_int_res 
                                    >> (0x3fU & ((IData)(0x1eU) 
                                                 + 
                                                 (1U 
                                                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_op_mod_q))))))) 
                        << 2U)));
    }
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_of_after_round 
        = (7U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_of_after_round));
    if (((~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_sign_q)) 
         & (VL_EXTENDS_II(32,12, (0xfffU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_exp_q)) 
            == ((IData)(0x3eU) + (1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_op_mod_q)))))) {
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_of_after_round 
            = ((7U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_of_after_round)) 
               | (8U & ((~ (IData)((lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_int_res 
                                    >> (0x3fU & ((IData)(0x3eU) 
                                                 + 
                                                 (1U 
                                                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_op_mod_q))))))) 
                        << 3U)));
    }
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_after_round 
        = (1U & ((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_is_int_q))
                  ? ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_of_after_round) 
                     >> (3U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_int_fmt_q)))
                  : ((4U >= (7U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q))) 
                     & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_of_after_round) 
                        >> (7U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q))))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result_is_special 
        = (1U & ((((1U != (0x19U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q))) 
                   | (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_before_round)) 
                  | (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_after_round)) 
                 | ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_sign_q) 
                    & ((0ULL != lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_int_res) 
                       & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_op_mod_q)))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result 
        = ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result_is_special)
            ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_special_result[
                                (((IData)(0x3fU) + 
                                  (0xc0U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_int_fmt_q) 
                                            << 6U))) 
                                 >> 5U)])) << 0x20U) 
               | (QData)((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_special_result[
                                 (6U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_int_fmt_q) 
                                        << 1U))])))
            : lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_int_res);
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o 
        = (1U & ((~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_is_int_q)) 
                 | (IData)((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result 
                            >> 0x3fU))));
}

VL_INLINE_OPT void Vlane_e___024root___nba_comb__TOP__336(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___nba_comb__TOP__336\n"); );
    // Init
    SData/*11:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_exp;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_exp = 0;
    SData/*11:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_exp;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_exp = 0;
    SData/*11:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__final_exp;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__final_exp = 0;
    VlWide<5>/*128:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__preshift_mant;
    VL_ZERO_W(129, lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__preshift_mant);
    VlWide<5>/*128:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant;
    VL_ZERO_W(129, lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant);
    CData/*6:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt = 0;
    CData/*1:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits = 0;
    QData/*63:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__pre_round_abs;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__pre_round_abs = 0;
    QData/*63:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_int_res;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_int_res = 0;
    CData/*0:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_hdca02594__0;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_hdca02594__0 = 0;
    CData/*0:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_h0bf5fbc6__0;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_h0bf5fbc6__0 = 0;
    CData/*0:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_h56a8bf0a__0;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_h56a8bf0a__0 = 0;
    CData/*0:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_hb8f90c41__0;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_hb8f90c41__0 = 0;
    IData/*31:0*/ __Vfunc_bias__430__Vfuncout;
    __Vfunc_bias__430__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_bias__430__fmt;
    __Vfunc_bias__430__fmt = 0;
    CData/*1:0*/ __Vfunc_int_width__433__ifmt;
    __Vfunc_int_width__433__ifmt = 0;
    IData/*31:0*/ __Vfunc_exp_bits__434__Vfuncout;
    __Vfunc_exp_bits__434__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_exp_bits__434__fmt;
    __Vfunc_exp_bits__434__fmt = 0;
    IData/*31:0*/ __Vfunc_man_bits__436__Vfuncout;
    __Vfunc_man_bits__436__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_man_bits__436__fmt;
    __Vfunc_man_bits__436__fmt = 0;
    IData/*31:0*/ __Vfunc_man_bits__437__Vfuncout;
    __Vfunc_man_bits__437__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_man_bits__437__fmt;
    __Vfunc_man_bits__437__fmt = 0;
    VlWide<5>/*159:0*/ __Vtemp_hccbba47a__0;
    VlWide<5>/*159:0*/ __Vtemp_h6253a7d6__0;
    VlWide<5>/*159:0*/ __Vtemp_h5fa060f8__0;
    VlWide<10>/*319:0*/ __Vtemp_h21648333__0;
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_exp_q 
        = ((0xfffU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_exp_q) 
           | (0xfff000U & (((0xcU == (0xfU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_op_q)))
                             ? ((IData)(0x3fU) - (0x3fU 
                                                  & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U]))
                             : ((((((0x3bU >= (0x3fU 
                                               & ((IData)(0xcU) 
                                                  * 
                                                  (7U 
                                                   & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_src_fmt_q)))))
                                     ? (IData)(((0xffffff000000000ULL 
                                                 | (((QData)((IData)(
                                                                     (0xfffU 
                                                                      & VL_EXTENDS_II(12,6, 
                                                                                (0x1fU 
                                                                                & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_operands_q[0U] 
                                                                                >> 0xaU)))))) 
                                                     << 0x18U) 
                                                    | (QData)((IData)(
                                                                      ((0x7ff000U 
                                                                        & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_operands_q[1U] 
                                                                           >> 8U)) 
                                                                       | (0xfffU 
                                                                          & VL_EXTENDS_II(12,9, 
                                                                                (0xffU 
                                                                                & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_operands_q[0U] 
                                                                                >> 0x17U))))))))) 
                                                >> 
                                                (0x3fU 
                                                 & ((IData)(0xcU) 
                                                    * 
                                                    (7U 
                                                     & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_src_fmt_q))))))
                                     : 0U) + VL_EXTENDS_II(12,2, 
                                                           ((0x27U 
                                                             >= 
                                                             ((IData)(6U) 
                                                              + 
                                                              (0x38U 
                                                               & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_src_fmt_q) 
                                                                  << 3U)))) 
                                                            & (IData)(
                                                                      (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__info 
                                                                       >> 
                                                                       ((IData)(6U) 
                                                                        + 
                                                                        (0x38U 
                                                                         & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_src_fmt_q) 
                                                                            << 3U)))))))) 
                                  - (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__src_bias)) 
                                 - (0x3fU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U])) 
                                + ((0x3bU >= (0x3fU 
                                              & ((IData)(0xcU) 
                                                 * 
                                                 (7U 
                                                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_src_fmt_q)))))
                                    ? (IData)((0xffffff03500b028ULL 
                                               >> (0x3fU 
                                                   & ((IData)(0xcU) 
                                                      * 
                                                      (7U 
                                                       & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_src_fmt_q))))))
                                    : 0U))) << 0xcU)));
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_exp 
        = (0xfffU & ((0xcU == (0xfU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_op_q)))
                      ? ((IData)(0x3fU) - (0x3fU & 
                                           vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U]))
                      : ((((((0x3bU >= (0x3fU & ((IData)(0xcU) 
                                                 * 
                                                 (7U 
                                                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_src_fmt_q)))))
                              ? (IData)(((0xffffff000000000ULL 
                                          | (((QData)((IData)(
                                                              (0xfffU 
                                                               & VL_EXTENDS_II(12,6, 
                                                                               (0x1fU 
                                                                                & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_operands_q[0U] 
                                                                                >> 0xaU)))))) 
                                              << 0x18U) 
                                             | (QData)((IData)(
                                                               ((0x7ff000U 
                                                                 & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_operands_q[1U] 
                                                                    >> 8U)) 
                                                                | (0xfffU 
                                                                   & VL_EXTENDS_II(12,9, 
                                                                                (0xffU 
                                                                                & (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_operands_q[0U] 
                                                                                >> 0x17U))))))))) 
                                         >> (0x3fU 
                                             & ((IData)(0xcU) 
                                                * (7U 
                                                   & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_src_fmt_q))))))
                              : 0U) + VL_EXTENDS_II(12,2, 
                                                    ((0x27U 
                                                      >= 
                                                      ((IData)(6U) 
                                                       + 
                                                       (0x38U 
                                                        & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_src_fmt_q) 
                                                           << 3U)))) 
                                                     & (IData)(
                                                               (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__info 
                                                                >> 
                                                                ((IData)(6U) 
                                                                 + 
                                                                 (0x38U 
                                                                  & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_src_fmt_q) 
                                                                     << 3U)))))))) 
                           - (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__src_bias)) 
                          - (0x3fU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U])) 
                         + ((0x3bU >= (0x3fU & ((IData)(0xcU) 
                                                * (7U 
                                                   & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_src_fmt_q)))))
                             ? (IData)((0xffffff03500b028ULL 
                                        >> (0x3fU & 
                                            ((IData)(0xcU) 
                                             * (7U 
                                                & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_src_fmt_q))))))
                             : 0U))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_mant_q[2U] 
        = (IData)((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__encoded_mant 
                   << (0x3fU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U])));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_mant_q[3U] 
        = (IData)(((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__encoded_mant 
                    << (0x3fU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__i_lzc__DOT__gen_lzc__DOT__index_nodes[0U])) 
                   >> 0x20U));
    __Vfunc_int_width__433__ifmt = (3U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_int_fmt_q));
    {
        if ((2U & (IData)(__Vfunc_int_width__433__ifmt))) {
            if ((1U & (IData)(__Vfunc_int_width__433__ifmt))) {
                vlSelf->__Vfunc_int_width__433__Vfuncout = 0x40U;
                goto __Vlabel1886;
            } else {
                vlSelf->__Vfunc_int_width__433__Vfuncout = 0x20U;
                goto __Vlabel1886;
            }
        } else if ((1U & (IData)(__Vfunc_int_width__433__ifmt))) {
            vlSelf->__Vfunc_int_width__433__Vfuncout = 0x10U;
            goto __Vlabel1886;
        } else {
            vlSelf->__Vfunc_int_width__433__Vfuncout = 8U;
            goto __Vlabel1886;
        }
        __Vlabel1886: ;
    }
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_hdca02594__0 
        = VL_GTES_III(32, VL_EXTENDS_II(32,12, (0xfffU 
                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_exp_q)), 
                      ((vlSelf->__Vfunc_int_width__433__Vfuncout 
                        - (IData)(1U)) + (1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_op_mod_q))));
    __Vfunc_bias__430__fmt = (7U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__inp_pipe_dst_fmt_q));
    __Vfunc_bias__430__Vfuncout = (VL_POWSS_III(32,32,32, (IData)(2U), 
                                                (((0x13fU 
                                                   >= 
                                                   (0x1ffU 
                                                    & ((IData)(0x20U) 
                                                       + 
                                                       (((IData)(4U) 
                                                         - (IData)(__Vfunc_bias__430__fmt)) 
                                                        << 6U))))
                                                   ? 
                                                  (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x20U) 
                                                         + 
                                                         (((IData)(4U) 
                                                           - (IData)(__Vfunc_bias__430__fmt)) 
                                                          << 6U))))
                                                     ? 0U
                                                     : 
                                                    (Vlane_e__ConstPool__CONST_h895f8a77_0[
                                                     (((IData)(0x1fU) 
                                                       + 
                                                       (0x1ffU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           (((IData)(4U) 
                                                             - (IData)(__Vfunc_bias__430__fmt)) 
                                                            << 6U)))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(0x20U) 
                                                          + 
                                                          (((IData)(4U) 
                                                            - (IData)(__Vfunc_bias__430__fmt)) 
                                                           << 6U)))))) 
                                                   | (Vlane_e__ConstPool__CONST_h895f8a77_0[
                                                      (0xfU 
                                                       & (((IData)(0x20U) 
                                                           + 
                                                           (((IData)(4U) 
                                                             - (IData)(__Vfunc_bias__430__fmt)) 
                                                            << 6U)) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(0x20U) 
                                                          + 
                                                          (((IData)(4U) 
                                                            - (IData)(__Vfunc_bias__430__fmt)) 
                                                           << 6U)))))
                                                   : 0U) 
                                                 - (IData)(1U)), 1,0) 
                                   - (IData)(1U));
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_exp 
        = (0xfffU & (VL_EXTENDS_II(12,12, (IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__input_exp)) 
                     + __Vfunc_bias__430__Vfuncout));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dest_exp_q 
        = ((0xfffU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dest_exp_q) 
           | ((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_exp) 
              << 0xcU));
    __Vfunc_man_bits__436__fmt = (7U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q));
    __Vfunc_man_bits__436__Vfuncout = ((0x13fU >= (0x1ffU 
                                                   & (((IData)(4U) 
                                                       - (IData)(__Vfunc_man_bits__436__fmt)) 
                                                      << 6U)))
                                        ? (((0U == 
                                             (0x1fU 
                                              & (((IData)(4U) 
                                                  - (IData)(__Vfunc_man_bits__436__fmt)) 
                                                 << 6U)))
                                             ? 0U : 
                                            (Vlane_e__ConstPool__CONST_h895f8a77_0[
                                             (((IData)(0x1fU) 
                                               + (0x1ffU 
                                                  & (((IData)(4U) 
                                                      - (IData)(__Vfunc_man_bits__436__fmt)) 
                                                     << 6U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & (((IData)(4U) 
                                                      - (IData)(__Vfunc_man_bits__436__fmt)) 
                                                     << 6U))))) 
                                           | (Vlane_e__ConstPool__CONST_h895f8a77_0[
                                              (0xeU 
                                               & (((IData)(4U) 
                                                   - (IData)(__Vfunc_man_bits__436__fmt)) 
                                                  << 1U))] 
                                              >> (0x1fU 
                                                  & (((IData)(4U) 
                                                      - (IData)(__Vfunc_man_bits__436__fmt)) 
                                                     << 6U))))
                                        : 0U);
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_h56a8bf0a__0 
        = (VL_GTS_III(32, 1U, VL_EXTENDS_II(32,12, 
                                            (0xfffU 
                                             & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dest_exp_q))) 
           & VL_GTES_III(32, VL_EXTENDS_II(32,12, (0xfffU 
                                                   & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dest_exp_q)), 
                         (- __Vfunc_man_bits__436__Vfuncout)));
    __Vfunc_man_bits__437__fmt = (7U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q));
    __Vfunc_man_bits__437__Vfuncout = ((0x13fU >= (0x1ffU 
                                                   & (((IData)(4U) 
                                                       - (IData)(__Vfunc_man_bits__437__fmt)) 
                                                      << 6U)))
                                        ? (((0U == 
                                             (0x1fU 
                                              & (((IData)(4U) 
                                                  - (IData)(__Vfunc_man_bits__437__fmt)) 
                                                 << 6U)))
                                             ? 0U : 
                                            (Vlane_e__ConstPool__CONST_h895f8a77_0[
                                             (((IData)(0x1fU) 
                                               + (0x1ffU 
                                                  & (((IData)(4U) 
                                                      - (IData)(__Vfunc_man_bits__437__fmt)) 
                                                     << 6U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & (((IData)(4U) 
                                                      - (IData)(__Vfunc_man_bits__437__fmt)) 
                                                     << 6U))))) 
                                           | (Vlane_e__ConstPool__CONST_h895f8a77_0[
                                              (0xeU 
                                               & (((IData)(4U) 
                                                   - (IData)(__Vfunc_man_bits__437__fmt)) 
                                                  << 1U))] 
                                              >> (0x1fU 
                                                  & (((IData)(4U) 
                                                      - (IData)(__Vfunc_man_bits__437__fmt)) 
                                                     << 6U))))
                                        : 0U);
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_hb8f90c41__0 
        = VL_LTS_III(32, VL_EXTENDS_II(32,12, (0xfffU 
                                               & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dest_exp_q)), 
                     (- __Vfunc_man_bits__437__Vfuncout));
    __Vfunc_exp_bits__434__fmt = (7U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q));
    __Vfunc_exp_bits__434__Vfuncout = ((0x13fU >= (0x1ffU 
                                                   & ((IData)(0x20U) 
                                                      + 
                                                      (((IData)(4U) 
                                                        - (IData)(__Vfunc_exp_bits__434__fmt)) 
                                                       << 6U))))
                                        ? (((0U == 
                                             (0x1fU 
                                              & ((IData)(0x20U) 
                                                 + 
                                                 (((IData)(4U) 
                                                   - (IData)(__Vfunc_exp_bits__434__fmt)) 
                                                  << 6U))))
                                             ? 0U : 
                                            (Vlane_e__ConstPool__CONST_h895f8a77_0[
                                             (((IData)(0x1fU) 
                                               + (0x1ffU 
                                                  & ((IData)(0x20U) 
                                                     + 
                                                     (((IData)(4U) 
                                                       - (IData)(__Vfunc_exp_bits__434__fmt)) 
                                                      << 6U)))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(0x20U) 
                                                     + 
                                                     (((IData)(4U) 
                                                       - (IData)(__Vfunc_exp_bits__434__fmt)) 
                                                      << 6U)))))) 
                                           | (Vlane_e__ConstPool__CONST_h895f8a77_0[
                                              (0xfU 
                                               & (((IData)(0x20U) 
                                                   + 
                                                   (((IData)(4U) 
                                                     - (IData)(__Vfunc_exp_bits__434__fmt)) 
                                                    << 6U)) 
                                                  >> 5U))] 
                                              >> (0x1fU 
                                                  & ((IData)(0x20U) 
                                                     + 
                                                     (((IData)(4U) 
                                                       - (IData)(__Vfunc_exp_bits__434__fmt)) 
                                                      << 6U)))))
                                        : 0U);
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_h0bf5fbc6__0 
        = (1U & (VL_GTES_III(32, VL_EXTENDS_II(32,12, 
                                               (0xfffU 
                                                & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dest_exp_q)), 
                             (VL_POWSS_III(32,32,32, (IData)(2U), __Vfunc_exp_bits__434__Vfuncout, 1,0) 
                              - (IData)(1U))) | ((~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_src_is_int_q)) 
                                                 & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q) 
                                                    >> 4U))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_before_round = 0U;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__final_exp 
        = (0xfffU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dest_exp_q);
    __Vtemp_hccbba47a__0[0U] = (IData)((((QData)((IData)(
                                                         vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_mant_q[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_mant_q[0U]))));
    __Vtemp_hccbba47a__0[1U] = (IData)(((((QData)((IData)(
                                                          vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_mant_q[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_mant_q[0U]))) 
                                        >> 0x20U));
    __Vtemp_hccbba47a__0[2U] = 0U;
    __Vtemp_hccbba47a__0[3U] = 0U;
    __Vtemp_hccbba47a__0[4U] = 0U;
    VL_SHIFTL_WWI(129,129,32, __Vtemp_h6253a7d6__0, __Vtemp_hccbba47a__0, 0x41U);
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__preshift_mant[0U] 
        = __Vtemp_h6253a7d6__0[0U];
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__preshift_mant[1U] 
        = __Vtemp_h6253a7d6__0[1U];
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__preshift_mant[2U] 
        = __Vtemp_h6253a7d6__0[2U];
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__preshift_mant[3U] 
        = __Vtemp_h6253a7d6__0[3U];
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__preshift_mant[4U] 
        = (1U & __Vtemp_h6253a7d6__0[4U]);
    if ((1U & (~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_is_int_q)))) {
        if (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_h0bf5fbc6__0) {
            lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__final_exp 
                = vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_h52133aaf__0;
            lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__preshift_mant[0U] = 0xffffffffU;
            lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__preshift_mant[1U] = 0xffffffffU;
            lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__preshift_mant[2U] = 0xffffffffU;
            lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__preshift_mant[3U] = 0xffffffffU;
            lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__preshift_mant[4U] = 1U;
        } else if (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_h56a8bf0a__0) {
            lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__final_exp = 0U;
        } else if (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_hb8f90c41__0) {
            lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__final_exp = 0U;
        }
    }
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt 
        = vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_h80475cf1__0;
    if ((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_is_int_q))) {
        lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt 
            = (0x7fU & ((IData)(0x3fU) - vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_exp_q));
        if (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_hdca02594__0) {
            vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_before_round = 1U;
            lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt = 0U;
        } else if (VL_GTS_III(32, 0xffffffffU, VL_EXTENDS_II(32,12, 
                                                             (0xfffU 
                                                              & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_exp_q)))) {
            lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt = 0x41U;
        }
    } else {
        if (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_h0bf5fbc6__0) {
            vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_before_round = 1U;
        }
        if ((1U & (~ (IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_h0bf5fbc6__0)))) {
            if (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_h56a8bf0a__0) {
                lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt 
                    = (0x7fU & (((IData)(1U) + (IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt)) 
                                - (0xfffU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dest_exp_q)));
            } else if (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT____VdfgExtracted_hb8f90c41__0) {
                vlSelf->__Vfunc_man_bits__431__fmt 
                    = (7U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q));
                vlSelf->__Vfunc_man_bits__431__Vfuncout 
                    = ((0x13fU >= (0x1ffU & (((IData)(4U) 
                                              - (IData)(vlSelf->__Vfunc_man_bits__431__fmt)) 
                                             << 6U)))
                        ? (((0U == (0x1fU & (((IData)(4U) 
                                              - (IData)(vlSelf->__Vfunc_man_bits__431__fmt)) 
                                             << 6U)))
                             ? 0U : (Vlane_e__ConstPool__CONST_h895f8a77_0[
                                     (((IData)(0x1fU) 
                                       + (0x1ffU & 
                                          (((IData)(4U) 
                                            - (IData)(vlSelf->__Vfunc_man_bits__431__fmt)) 
                                           << 6U))) 
                                      >> 5U)] << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & (((IData)(4U) 
                                                       - (IData)(vlSelf->__Vfunc_man_bits__431__fmt)) 
                                                      << 6U))))) 
                           | (Vlane_e__ConstPool__CONST_h895f8a77_0[
                              (0xeU & (((IData)(4U) 
                                        - (IData)(vlSelf->__Vfunc_man_bits__431__fmt)) 
                                       << 1U))] >> 
                              (0x1fU & (((IData)(4U) 
                                         - (IData)(vlSelf->__Vfunc_man_bits__431__fmt)) 
                                        << 6U)))) : 0U);
                lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt 
                    = (0x7fU & ((IData)(2U) + ((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt) 
                                               + vlSelf->__Vfunc_man_bits__431__Vfuncout)));
            }
        }
    }
    VL_SHIFTR_WWI(129,129,7, __Vtemp_h5fa060f8__0, lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__preshift_mant, (IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__denorm_shamt));
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[0U] 
        = __Vtemp_h5fa060f8__0[0U];
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[1U] 
        = __Vtemp_h5fa060f8__0[1U];
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[2U] 
        = __Vtemp_h5fa060f8__0[2U];
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[3U] 
        = __Vtemp_h5fa060f8__0[3U];
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[4U] 
        = (1U & __Vtemp_h5fa060f8__0[4U]);
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_pre_round_abs[2U] 
        = (IData)((- (QData)((IData)((1U & (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[2U] 
                                            >> 0x10U))))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_pre_round_abs[3U] 
        = (IData)(((- (QData)((IData)((1U & (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[2U] 
                                             >> 0x10U))))) 
                   >> 0x20U));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_pre_round_abs[2U] 
        = ((0xffff0000U & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_pre_round_abs[2U]) 
           | (0xffffU & (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[2U] 
                         >> 1U)));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_pre_round_abs[4U] 
        = (IData)((- (QData)((IData)((1U & lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[3U])))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_pre_round_abs[5U] 
        = (IData)(((- (QData)((IData)((1U & lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[3U])))) 
                   >> 0x20U));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_pre_round_abs[4U] 
        = ((lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[3U] 
            << 0x1fU) | (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[2U] 
                         >> 1U));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_pre_round_abs[6U] 
        = (IData)((- (QData)((IData)((1U & lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[4U])))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_pre_round_abs[7U] 
        = (IData)(((- (QData)((IData)((1U & lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[4U])))) 
                   >> 0x20U));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_pre_round_abs[6U] 
        = (IData)((((QData)((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[4U])) 
                    << 0x3fU) | (((QData)((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[3U])) 
                                  << 0x1fU) | ((QData)((IData)(
                                                               lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[2U])) 
                                               >> 1U))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_pre_round_abs[7U] 
        = (IData)(((((QData)((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[4U])) 
                     << 0x3fU) | (((QData)((IData)(
                                                   lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[3U])) 
                                   << 0x1fU) | ((QData)((IData)(
                                                                lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[2U])) 
                                                >> 1U))) 
                   >> 0x20U));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_round_sticky_bits 
        = ((2U & (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[2U] 
                  >> 0xaU)) | (0U != ((lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[0U] 
                                       | lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[1U]) 
                                      | (0x7ffU & lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[2U]))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_round_sticky_bits 
        = ((2U & (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[2U] 
                  << 1U)) | (0U != (((QData)((IData)(
                                                     lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[0U])))));
    __Vtemp_h21648333__0[0U] = (IData)((QData)((IData)(
                                                       ((0x7f800000U 
                                                         & ((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__final_exp) 
                                                            << 0x17U)) 
                                                        | (0x7fffffU 
                                                           & ((lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[3U] 
                                                               << 0x14U) 
                                                              | (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[2U] 
                                                                 >> 0xcU)))))));
    __Vtemp_h21648333__0[1U] = (IData)(((QData)((IData)(
                                                        ((0x7f800000U 
                                                          & ((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__final_exp) 
                                                             << 0x17U)) 
                                                         | (0x7fffffU 
                                                            & ((lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[3U] 
                                                                << 0x14U) 
                                                               | (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[2U] 
                                                                  >> 0xcU)))))) 
                                        >> 0x20U));
    __Vtemp_h21648333__0[2U] = (IData)((0xfffffffffffffULL 
                                        & (((QData)((IData)(
                                                            lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[3U])) 
                                            << 0x14U) 
                                           | ((QData)((IData)(
                                                              lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[2U])) 
                                              >> 0xcU))));
    __Vtemp_h21648333__0[3U] = ((0x7ff00000U & ((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__final_exp) 
                                                << 0x14U)) 
                                | (IData)(((0xfffffffffffffULL 
                                            & (((QData)((IData)(
                                                                lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[3U])) 
                                                << 0x14U) 
                                               | ((QData)((IData)(
                                                                  lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[2U])) 
                                                  >> 0xcU))) 
                                           >> 0x20U)));
    __Vtemp_h21648333__0[4U] = ((0x7c00U & ((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__final_exp) 
                                            << 0xaU)) 
                                | (0x3ffU & (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__destination_mant[2U] 
                                             >> 0xcU)));
    __Vtemp_h21648333__0[5U] = 0U;
    __Vtemp_h21648333__0[6U] = 0xffffffffU;
    __Vtemp_h21648333__0[7U] = 0xffffffffU;
    __Vtemp_h21648333__0[8U] = 0xffffffffU;
    __Vtemp_h21648333__0[9U] = 0xffffffffU;
    if ((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_is_int_q))) {
        lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__pre_round_abs 
            = (((QData)((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_pre_round_abs[
                                (((IData)(0x3fU) + 
                                  (0xc0U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_int_fmt_q) 
                                            << 6U))) 
                                 >> 5U)])) << 0x20U) 
               | (QData)((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_pre_round_abs[
                                 (6U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_int_fmt_q) 
                                        << 1U))])));
        lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits 
            = vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_round_sticky_bits;
    } else {
        lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__pre_round_abs 
            = ((0x13fU >= (0x1c0U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q) 
                                     << 6U))) ? (((QData)((IData)(
                                                                  __Vtemp_h21648333__0[
                                                                  (((IData)(0x3fU) 
                                                                    + 
                                                                    (0x1c0U 
                                                                     & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q) 
                                                                        << 6U))) 
                                                                   >> 5U)])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   __Vtemp_h21648333__0[
                                                                   (0xeU 
                                                                    & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q) 
                                                                       << 1U))])))
                : 0ULL);
        lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits 
            = vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_round_sticky_bits;
    }
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_abs 
        = (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__pre_round_abs 
           + (QData)((IData)((1U & ((4U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_rnd_mode_q))
                                     ? (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_rnd_mode_q) 
                                         >> 1U) | (
                                                   (1U 
                                                    & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_rnd_mode_q))
                                                    ? 
                                                   ((~ (IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__pre_round_abs)) 
                                                    & (0U 
                                                       != (IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits)))
                                                    : 
                                                   ((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits) 
                                                    >> 1U)))
                                     : ((2U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_rnd_mode_q))
                                         ? ((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_rnd_mode_q))
                                             ? ((0U 
                                                 != (IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits)) 
                                                & (~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_sign_q)))
                                             : ((0U 
                                                 != (IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits)) 
                                                & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_sign_q)))
                                         : ((~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_rnd_mode_q)) 
                                            & (((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits) 
                                                >> 1U) 
                                               & ((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__round_sticky_bits) 
                                                  | (IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__pre_round_abs))))))))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_uf_after_round 
        = ((0x1cU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_uf_after_round)) 
           | (((0U == (0x7ffU & (IData)((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_abs 
                                         >> 0x34U)))) 
               << 1U) | (0U == (0xffU & (IData)((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_abs 
                                                 >> 0x17U))))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_uf_after_round 
        = ((0x1bU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_uf_after_round)) 
           | ((0U == (0x1fU & (IData)((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_abs 
                                       >> 0xaU)))) 
              << 2U));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result[0U] = 0xffffffffU;
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result[1U] = 0xffffffffU;
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result[0U] 
        = ((1U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_src_is_int_q) 
                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_mant_zero_q)))
            ? 0U : (((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_sign_q) 
                     << 0x1fU) | (0x7fffffffU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_abs))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result[2U] = 0xffffffffU;
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result[3U] = 0xffffffffU;
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result[2U] 
        = (IData)(((1U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_src_is_int_q) 
                          & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_mant_zero_q)))
                    ? 0ULL : (((QData)((IData)((1U 
                                                & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_sign_q)))) 
                               << 0x3fU) | (0x7fffffffffffffffULL 
                                            & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_abs))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result[3U] 
        = (IData)((((1U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_src_is_int_q) 
                           & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_mant_zero_q)))
                     ? 0ULL : (((QData)((IData)((1U 
                                                 & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_sign_q)))) 
                                << 0x3fU) | (0x7fffffffffffffffULL 
                                             & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_abs))) 
                   >> 0x20U));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result[4U] = 0xffffffffU;
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result[5U] = 0xffffffffU;
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result[4U] 
        = ((0xffff0000U & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result[4U]) 
           | ((1U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_src_is_int_q) 
                     & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_mant_zero_q)))
               ? 0U : ((0x8000U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_sign_q) 
                                   << 0xfU)) | (0x7fffU 
                                                & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_abs)))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_of_after_round 
        = ((0x1cU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_of_after_round)) 
           | (((0x7ffU == (0x7ffU & (IData)((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_abs 
                                             >> 0x34U)))) 
               << 1U) | (0xffU == (0xffU & (IData)(
                                                   (vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_abs 
                                                    >> 0x17U))))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_of_after_round 
        = ((0x1bU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_of_after_round)) 
           | ((0x1fU == (0x1fU & (IData)((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_abs 
                                          >> 0xaU)))) 
              << 2U));
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_int_res 
        = ((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_sign_q))
            ? (- vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_abs)
            : vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_abs);
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_of_after_round 
        = (0xdU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_of_after_round));
    if (((~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_sign_q)) 
         & (VL_EXTENDS_II(32,12, (0xfffU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_exp_q)) 
            == ((IData)(0xeU) + (1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_op_mod_q)))))) {
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_of_after_round 
            = ((0xdU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_of_after_round)) 
               | (2U & ((~ (IData)((lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_int_res 
                                    >> (0x3fU & ((IData)(0xeU) 
                                                 + 
                                                 (1U 
                                                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_op_mod_q))))))) 
                        << 1U)));
    }
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_of_after_round 
        = (0xbU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_of_after_round));
    if (((~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_sign_q)) 
         & (VL_EXTENDS_II(32,12, (0xfffU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_exp_q)) 
            == ((IData)(0x1eU) + (1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_op_mod_q)))))) {
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_of_after_round 
            = ((0xbU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_of_after_round)) 
               | (4U & ((~ (IData)((lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_int_res 
                                    >> (0x3fU & ((IData)(0x1eU) 
                                                 + 
                                                 (1U 
                                                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_op_mod_q))))))) 
                        << 2U)));
    }
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_of_after_round 
        = (7U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_of_after_round));
    if (((~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_sign_q)) 
         & (VL_EXTENDS_II(32,12, (0xfffU & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_exp_q)) 
            == ((IData)(0x3eU) + (1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_op_mod_q)))))) {
        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_of_after_round 
            = ((7U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_of_after_round)) 
               | (8U & ((~ (IData)((lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_int_res 
                                    >> (0x3fU & ((IData)(0x3eU) 
                                                 + 
                                                 (1U 
                                                  & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_op_mod_q))))))) 
                        << 3U)));
    }
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_after_round 
        = (1U & ((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_is_int_q))
                  ? ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_of_after_round) 
                     >> (3U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_int_fmt_q)))
                  : ((4U >= (7U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q))) 
                     & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_of_after_round) 
                        >> (7U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q))))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result_is_special 
        = (1U & ((((1U != (0x19U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q))) 
                   | (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_before_round)) 
                  | (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_after_round)) 
                 | ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_input_sign_q) 
                    & ((0ULL != lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_int_res) 
                       & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_op_mod_q)))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result 
        = ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result_is_special)
            ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_special_result[
                                (((IData)(0x3fU) + 
                                  (0xc0U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_int_fmt_q) 
                                            << 6U))) 
                                 >> 5U)])) << 0x20U) 
               | (QData)((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__ifmt_special_result[
                                 (6U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_int_fmt_q) 
                                        << 1U))])))
            : lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__rounded_int_res);
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o 
        = (1U & ((~ (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_is_int_q)) 
                 | (IData)((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result 
                            >> 0x3fU))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__local_result 
        = ((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_valid_q))
            ? ((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_is_int_q))
                ? vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result
                : ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_result_is_special)
                    ? ((0x13fU >= (0x1c0U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q) 
                                             << 6U)))
                        ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_special_result[
                                            (((IData)(0x3fU) 
                                              + (0x1c0U 
                                                 & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q) 
                                                    << 6U))) 
                                             >> 5U)])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_special_result[
                                                        (0xeU 
                                                         & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q) 
                                                            << 1U))])))
                        : 0ULL) : ((0x13fU >= (0x1c0U 
                                               & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q) 
                                                  << 6U)))
                                    ? (((QData)((IData)(
                                                        vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result[
                                                        (((IData)(0x3fU) 
                                                          + 
                                                          (0x1c0U 
                                                           & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q) 
                                                              << 6U))) 
                                                         >> 5U)])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_result[
                                                                    (0xeU 
                                                                     & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q) 
                                                                        << 1U))])))
                                    : 0ULL))) : (- (QData)((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____Vcellout__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__extension_bit_o))));
}

VL_INLINE_OPT void Vlane_e___024root___nba_comb__TOP__388(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___nba_comb__TOP__388\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__local_result 
        = ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____VdfgTmp_h67097a05__0)
            ? vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_result_q[0U]
            : 0xffffffffU);
}

VL_INLINE_OPT void Vlane_e___024root___nba_comb__TOP__389(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___nba_comb__TOP__389\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__simd_synch_rdy 
        = ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__in_ready) 
           & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__in_ready) 
              & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__in_ready) 
                 & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__in_ready))));
}

VL_INLINE_OPT void Vlane_e___024root___nba_comb__TOP__391(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___nba_comb__TOP__391\n"); );
    // Body
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__local_result 
        = ((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_valid_q))
            ? (((QData)((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_result_q[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_result_q[0U])))
            : 0xffffffffffffffffULL);
}

extern const VlWide<8>/*255:0*/ Vlane_e__ConstPool__CONST_h9e67c271_0;
extern const VlWide<10>/*319:0*/ Vlane_e__ConstPool__CONST_h0f1381cf_0;

VL_INLINE_OPT void Vlane_e___024root___nba_comb__TOP__393(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___nba_comb__TOP__393\n"); );
    // Init
    CData/*4:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_merged_slice__DOT__i_multifmt_slice__status_o;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_merged_slice__DOT__i_multifmt_slice__status_o = 0;
    QData/*63:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_merged_slice__DOT__i_multifmt_slice__result_o;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_merged_slice__DOT__i_multifmt_slice__result_o = 0;
    IData/*19:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_status;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_status = 0;
    CData/*4:0*/ lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__output_processing__DOT__temp_status;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__output_processing__DOT__temp_status = 0;
    VlWide<8>/*255:0*/ __Vtemp_h6a2ec0da__0;
    VlWide<10>/*319:0*/ __Vtemp_h0b7305f6__0;
    // Body
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_status 
        = ((((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____VdfgTmp_h5be20b23__0)
              ? (0x1fU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_status_q))
              : 0U) << 0xfU) | ((((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____VdfgTmp_hbd568b8e__0)
                                   ? (0x1fU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_status_q))
                                   : 0U) << 0xaU) | 
                                ((((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____VdfgTmp_h67097a05__0)
                                    ? (0x1fU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_status_q))
                                    : 0U) << 5U) | 
                                 ((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_valid_q))
                                   ? (0x1fU & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_status_q))
                                   : 0U))));
    __Vtemp_h6a2ec0da__0[7U] = 0xffffffffU;
    __Vtemp_h0b7305f6__0[0U] = (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__local_result);
    __Vtemp_h0b7305f6__0[1U] = vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__local_result;
    __Vtemp_h0b7305f6__0[2U] = (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__local_result);
    __Vtemp_h0b7305f6__0[3U] = (IData)((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__local_result 
                                        >> 0x20U));
    __Vtemp_h0b7305f6__0[4U] = (IData)((((QData)((IData)(
                                                         ((((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____VdfgTmp_h5be20b23__0)
                                                             ? 
                                                            (0xffffU 
                                                             & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_result_q))
                                                             : 0xffffU) 
                                                           << 0x10U) 
                                                          | ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____VdfgTmp_hbd568b8e__0)
                                                              ? 
                                                             (0xffffU 
                                                              & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_result_q))
                                                              : 0xffffU)))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__local_result 
                                                            << 0x10U) 
                                                           | (0xffffU 
                                                              & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__local_result)))))));
    __Vtemp_h0b7305f6__0[5U] = (IData)(((((QData)((IData)(
                                                          ((((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____VdfgTmp_h5be20b23__0)
                                                              ? 
                                                             (0xffffU 
                                                              & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__3__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_result_q))
                                                              : 0xffffU) 
                                                            << 0x10U) 
                                                           | ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT____VdfgTmp_hbd568b8e__0)
                                                               ? 
                                                              (0xffffU 
                                                               & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__2__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_result_q))
                                                               : 0xffffU)))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__local_result 
                                                             << 0x10U) 
                                                            | (0xffffU 
                                                               & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__local_result)))))) 
                                        >> 0x20U));
    __Vtemp_h0b7305f6__0[6U] = 0xffffffffU;
    __Vtemp_h0b7305f6__0[7U] = __Vtemp_h6a2ec0da__0[7U];
    __Vtemp_h0b7305f6__0[8U] = 0xffffffffU;
    __Vtemp_h0b7305f6__0[9U] = 0xffffffffU;
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_merged_slice__DOT__i_multifmt_slice__result_o 
        = ((0x10U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_aux_q))
            ? (((QData)((IData)(Vlane_e__ConstPool__CONST_h9e67c271_0[
                                (((IData)(0x3fU) + 
                                  (0xc0U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_aux_q) 
                                            << 6U))) 
                                 >> 5U)])) << 0x20U) 
               | (QData)((IData)(Vlane_e__ConstPool__CONST_h9e67c271_0[
                                 (6U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_aux_q) 
                                        << 1U))])))
            : ((0x13fU >= (0x1c0U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_aux_q) 
                                     << 6U))) ? (((QData)((IData)(
                                                                  __Vtemp_h0b7305f6__0[
                                                                  (((IData)(0x3fU) 
                                                                    + 
                                                                    (0x1c0U 
                                                                     & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_aux_q) 
                                                                        << 6U))) 
                                                                   >> 5U)])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   __Vtemp_h0b7305f6__0[
                                                                   (0xeU 
                                                                    & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_aux_q) 
                                                                       << 1U))])))
                : 0ULL));
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__output_processing__DOT__temp_status 
        = (0x1fU & (lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_status 
                    & (- (IData)((1U & (IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_masks))))));
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__output_processing__DOT__temp_status 
        = (0x1fU & ((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__output_processing__DOT__temp_status) 
                    | ((lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_status 
                        >> 5U) & (- (IData)((1U & ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_masks) 
                                                   >> 1U)))))));
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__output_processing__DOT__temp_status 
        = (0x1fU & ((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__output_processing__DOT__temp_status) 
                    | ((lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_status 
                        >> 0xaU) & (- (IData)((1U & 
                                               ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_masks) 
                                                >> 2U)))))));
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__output_processing__DOT__temp_status 
        = (0x1fU & ((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__output_processing__DOT__temp_status) 
                    | ((lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_status 
                        >> 0xfU) & (- (IData)((1U & 
                                               ((IData)(vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_masks) 
                                                >> 3U)))))));
    lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_merged_slice__DOT__i_multifmt_slice__status_o 
        = lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__output_processing__DOT__temp_status;
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[0U] 
        = (0x100U | (((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_merged_slice__DOT__i_multifmt_slice__result_o) 
                      << 0xeU) | (((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_merged_slice__DOT__i_multifmt_slice__status_o) 
                                   << 9U) | (0xffU 
                                             & vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_tag_q))));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[1U] 
        = (((IData)(lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_merged_slice__DOT__i_multifmt_slice__result_o) 
            >> 0x12U) | ((IData)((lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_merged_slice__DOT__i_multifmt_slice__result_o 
                                  >> 0x20U)) << 0xeU));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[2U] 
        = ((Vlane_e__ConstPool__CONST_h0f1381cf_0[0U] 
            << 0xeU) | ((IData)((lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_merged_slice__DOT__i_multifmt_slice__result_o 
                                 >> 0x20U)) >> 0x12U));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[3U] 
        = ((Vlane_e__ConstPool__CONST_h0f1381cf_0[0U] 
            >> 0x12U) | (Vlane_e__ConstPool__CONST_h0f1381cf_0[1U] 
                         << 0xeU));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[4U] 
        = ((Vlane_e__ConstPool__CONST_h0f1381cf_0[1U] 
            >> 0x12U) | (Vlane_e__ConstPool__CONST_h0f1381cf_0[2U] 
                         << 0xeU));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[5U] 
        = ((Vlane_e__ConstPool__CONST_h0f1381cf_0[2U] 
            >> 0x12U) | (Vlane_e__ConstPool__CONST_h0f1381cf_0[3U] 
                         << 0xeU));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[6U] 
        = ((Vlane_e__ConstPool__CONST_h0f1381cf_0[3U] 
            >> 0x12U) | (Vlane_e__ConstPool__CONST_h0f1381cf_0[4U] 
                         << 0xeU));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[7U] 
        = ((Vlane_e__ConstPool__CONST_h0f1381cf_0[4U] 
            >> 0x12U) | (Vlane_e__ConstPool__CONST_h0f1381cf_0[5U] 
                         << 0xeU));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[8U] 
        = ((Vlane_e__ConstPool__CONST_h0f1381cf_0[5U] 
            >> 0x12U) | (Vlane_e__ConstPool__CONST_h0f1381cf_0[6U] 
                         << 0xeU));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[9U] 
        = ((Vlane_e__ConstPool__CONST_h0f1381cf_0[6U] 
            >> 0x12U) | (Vlane_e__ConstPool__CONST_h0f1381cf_0[7U] 
                         << 0xeU));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[0xaU] 
        = ((Vlane_e__ConstPool__CONST_h0f1381cf_0[7U] 
            >> 0x12U) | (Vlane_e__ConstPool__CONST_h0f1381cf_0[8U] 
                         << 0xeU));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[0xbU] 
        = ((Vlane_e__ConstPool__CONST_h0f1381cf_0[8U] 
            >> 0x12U) | (Vlane_e__ConstPool__CONST_h0f1381cf_0[9U] 
                         << 0xeU));
    vlSelf->lane_e__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[0xcU] 
        = (Vlane_e__ConstPool__CONST_h0f1381cf_0[9U] 
           >> 0x12U);
}

void Vlane_e___024root___nba_sequent__TOP__0(Vlane_e___024root* vlSelf);
void Vlane_e___024root___nba_sequent__TOP__1(Vlane_e___024root* vlSelf);
void Vlane_e___024root___nba_sequent__TOP__2(Vlane_e___024root* vlSelf);
void Vlane_e___024root___nba_sequent__TOP__3(Vlane_e___024root* vlSelf);
void Vlane_e___024root___nba_sequent__TOP__4(Vlane_e___024root* vlSelf);
void Vlane_e___024root___nba_sequent__TOP__5(Vlane_e___024root* vlSelf);
void Vlane_e___024root___nba_sequent__TOP__6(Vlane_e___024root* vlSelf);
void Vlane_e___024root___nba_sequent__TOP__7(Vlane_e___024root* vlSelf);
void Vlane_e___024root___nba_sequent__TOP__8(Vlane_e___024root* vlSelf);
void Vlane_e___024root___nba_sequent__TOP__9(Vlane_e___024root* vlSelf);
void Vlane_e___024root___nba_sequent__TOP__10(Vlane_e___024root* vlSelf);
void Vlane_e___024root___nba_sequent__TOP__11(Vlane_e___024root* vlSelf);
void Vlane_e___024root___nba_sequent__TOP__12(Vlane_e___024root* vlSelf);
void Vlane_e___024root___nba_sequent__TOP__13(Vlane_e___024root* vlSelf);
void Vlane_e___024root___nba_sequent__TOP__14(Vlane_e___024root* vlSelf);
void Vlane_e___024root___nba_sequent__TOP__15(Vlane_e___024root* vlSelf);
void Vlane_e___024root___nba_sequent__TOP__16(Vlane_e___024root* vlSelf);
void Vlane_e___024root___nba_sequent__TOP__17(Vlane_e___024root* vlSelf);
void Vlane_e___024root___nba_sequent__TOP__18(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__36(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__35(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__34(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__33(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__11(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__10(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__8(Vlane_e___024root* vlSelf);
void Vlane_e___024root___nba_comb__TOP__7(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__30(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__39(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__40(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__13(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__12(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__50(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__49(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__52(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__51(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__48(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__47(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__46(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__45(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__44(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__29(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__27(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__25(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__23(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__21(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__19(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__17(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__15(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__28(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__26(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__24(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__22(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__20(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__18(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__16(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__14(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__58(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__57(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__56(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__55(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__38(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__39(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__40(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__41(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__42(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__43(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__44(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__45(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__46(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__47(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__48(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__49(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__50(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__51(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__37(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__67(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__68(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__69(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__70(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__71(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__72(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__73(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__74(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__75(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__76(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__77(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__78(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__79(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__80(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__81(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__82(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__83(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__84(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__85(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__86(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__87(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__88(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__89(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__90(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__91(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__92(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__93(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__94(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__95(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__96(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__97(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__98(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__99(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__100(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__101(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__102(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__103(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__104(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__107(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__108(Vlane_e___024root* vlSelf);
void Vlane_e___024root___nba_sequent__TOP__19(Vlane_e___024root* vlSelf);
void Vlane_e___024root___nba_comb__TOP__97(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__83(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__84(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__81(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__82(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__79(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__80(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__77(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__78(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__1(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__2(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__3(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__4(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__21(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__22(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__23(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__30(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__29(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__32(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__31(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__28(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__27(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__26(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__25(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__24(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__20(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__18(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__16(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__14(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__12(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__10(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__8(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__6(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__71(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__70(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__69(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__68(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__67(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__66(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__65(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__64(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__52(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__53(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__54(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__55(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__56(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__57(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__58(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__59(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__60(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__63(Vlane_e___024root* vlSelf);
void Vlane_e___024root___nba_comb__TOP__148(Vlane_e___024root* vlSelf);
void Vlane_e___024root___nba_comb__TOP__149(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_sequent__TOP__106(Vlane_e___024root* vlSelf);
void Vlane_e___024root___nba_comb__TOP__151(Vlane_e___024root* vlSelf);
void Vlane_e___024root___nba_comb__TOP__152(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__91(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__90(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__89(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__88(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__72(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__73(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__74(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__75(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__76(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__61(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__62(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__4(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__5(Vlane_e___024root* vlSelf);
void Vlane_e___024root___nba_comb__TOP__166(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__7(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__305(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__8(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__9(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__10(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__11(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__99(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__100(Vlane_e___024root* vlSelf);
void Vlane_e___024root___act_comb__TOP__101(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__13(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__14(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__15(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__16(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__17(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__18(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__19(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__20(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__21(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__22(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__23(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__24(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__25(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__26(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__29(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__30(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__31(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__32(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__33(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__34(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__35(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__36(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__37(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__38(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__39(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__40(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__41(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__42(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__43(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__44(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__45(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__46(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__47(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__48(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__49(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__50(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__51(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__52(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__53(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__54(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__55(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__56(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__57(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__58(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__59(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__60(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__61(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__62(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__63(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__64(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__65(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__66(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__67(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__68(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__69(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__70(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__71(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__72(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__73(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__74(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__75(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__76(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__77(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__78(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__79(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__80(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__81(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__82(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__83(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__84(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__85(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__86(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__87(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__88(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__89(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__90(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__91(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__92(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__93(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__94(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__95(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__96(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__97(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__98(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__99(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__100(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__101(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__102(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__103(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__104(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__105(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__106(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__107(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__108(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__109(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__110(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__111(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__112(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__113(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__114(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__115(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__116(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__117(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__118(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__119(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__120(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__121(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__122(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__123(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__124(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__125(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__126(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__127(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__128(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__129(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__130(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__131(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__132(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__133(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__134(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__135(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__136(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__137(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__138(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__139(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__140(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__141(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__142(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__143(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__144(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__145(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__146(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__147(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__148(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__149(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__150(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__151(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__152(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__153(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__154(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__155(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__156(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__157(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__158(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__159(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__160(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__161(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__162(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__163(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__164(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__165(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__166(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__167(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__168(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__173(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__174(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__175(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__176(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__177(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__178(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__179(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__180(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__181(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__182(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__183(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__184(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__185(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__186(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__187(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__188(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__189(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__190(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__191(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__192(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__193(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__194(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__195(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__196(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__197(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__198(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__199(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__200(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__201(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__202(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__203(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__204(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__205(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__206(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__207(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__208(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__209(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__210(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__211(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__212(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__213(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__214(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__215(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__216(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__217(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__218(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__219(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__220(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__221(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__222(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__223(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__225(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__226(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__227(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__228(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__229(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__230(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__231(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__232(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__233(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__234(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__235(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__236(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__237(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__238(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__239(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__240(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__241(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__242(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__243(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__244(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__245(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__246(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__247(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__248(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__249(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__250(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__251(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__252(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__253(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__254(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__255(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__256(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__257(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__258(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__259(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__260(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__261(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__262(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__263(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__264(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__265(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__266(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__267(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__268(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__269(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__270(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__271(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__272(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__273(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__274(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__275(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__276(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__277(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__278(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__279(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__280(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__281(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__282(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__283(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__284(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__285(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__286(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__287(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__288(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__289(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__290(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__291(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__292(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__293(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__294(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__295(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__296(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__297(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__298(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__300(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__301(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__302(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__299(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__303(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__304(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__305(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__306(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__307(Vlane_e___024root* vlSelf);
void Vlane_e___024root___ico_comb__TOP__308(Vlane_e___024root* vlSelf);

void Vlane_e___024root___eval_nba(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vlane_e___024root___nba_sequent__TOP__0(vlSelf);
        Vlane_e___024root___nba_sequent__TOP__1(vlSelf);
        Vlane_e___024root___nba_sequent__TOP__2(vlSelf);
        Vlane_e___024root___nba_sequent__TOP__3(vlSelf);
        Vlane_e___024root___nba_sequent__TOP__4(vlSelf);
        Vlane_e___024root___nba_sequent__TOP__5(vlSelf);
        Vlane_e___024root___nba_sequent__TOP__6(vlSelf);
        Vlane_e___024root___nba_sequent__TOP__7(vlSelf);
        Vlane_e___024root___nba_sequent__TOP__8(vlSelf);
        Vlane_e___024root___nba_sequent__TOP__9(vlSelf);
        Vlane_e___024root___nba_sequent__TOP__10(vlSelf);
        Vlane_e___024root___nba_sequent__TOP__11(vlSelf);
        Vlane_e___024root___nba_sequent__TOP__12(vlSelf);
        Vlane_e___024root___nba_sequent__TOP__13(vlSelf);
        Vlane_e___024root___nba_sequent__TOP__14(vlSelf);
        Vlane_e___024root___nba_sequent__TOP__15(vlSelf);
        Vlane_e___024root___nba_sequent__TOP__16(vlSelf);
    }
    if ((0x2000000000000ULL & vlSelf->__VnbaTriggered.word(5U))) {
        Vlane_e___024root___nba_sequent__TOP__17(vlSelf);
    }
    if ((0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U))) {
        Vlane_e___024root___nba_sequent__TOP__18(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x80ULL & vlSelf->__VnbaTriggered.word(1U)))) {
        Vlane_e___024root___act_comb__TOP__36(vlSelf);
    }
    if ((2ULL & (vlSelf->__VnbaTriggered.word(0U) | vlSelf->__VnbaTriggered.word(1U)))) {
        Vlane_e___024root___act_comb__TOP__35(vlSelf);
    }
    if ((0x800000000000002ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vlane_e___024root___act_comb__TOP__34(vlSelf);
    }
    if ((0x20000000000002ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vlane_e___024root___act_comb__TOP__33(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x800ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___act_sequent__TOP__11(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x800000000000ULL & vlSelf->__VnbaTriggered.word(4U)))) {
        Vlane_e___024root___act_sequent__TOP__10(vlSelf);
    }
    if ((0x8000002ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vlane_e___024root___act_sequent__TOP__8(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x40000000ULL & vlSelf->__VnbaTriggered.word(4U)))) {
        Vlane_e___024root___nba_comb__TOP__7(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(4U)))) {
        Vlane_e___024root___act_sequent__TOP__30(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x20000000ULL & vlSelf->__VnbaTriggered.word(4U)))) {
        Vlane_e___024root___act_sequent__TOP__39(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x40ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___act_sequent__TOP__40(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x20ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___act_sequent__TOP__13(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x10000000ULL & vlSelf->__VnbaTriggered.word(4U)))) {
        Vlane_e___024root___act_sequent__TOP__12(vlSelf);
    }
    if ((0x80002ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vlane_e___024root___act_sequent__TOP__50(vlSelf);
    }
    if ((0x40002ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vlane_e___024root___act_sequent__TOP__49(vlSelf);
    }
    if ((0x200002ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vlane_e___024root___act_sequent__TOP__52(vlSelf);
    }
    if ((0x100002ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vlane_e___024root___act_sequent__TOP__51(vlSelf);
    }
    if ((0x20002ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vlane_e___024root___act_sequent__TOP__48(vlSelf);
    }
    if ((0x10002ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vlane_e___024root___act_sequent__TOP__47(vlSelf);
    }
    if ((0x8002ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vlane_e___024root___act_sequent__TOP__46(vlSelf);
    }
    if ((0x4002ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vlane_e___024root___act_sequent__TOP__45(vlSelf);
    }
    if ((0x2002ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vlane_e___024root___act_sequent__TOP__44(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x10ULL & vlSelf->__VnbaTriggered.word(2U)))) {
        Vlane_e___024root___act_sequent__TOP__29(vlSelf);
    }
    if ((2ULL & (vlSelf->__VnbaTriggered.word(0U) | vlSelf->__VnbaTriggered.word(2U)))) {
        Vlane_e___024root___act_sequent__TOP__27(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x4000000000000000ULL & vlSelf->__VnbaTriggered.word(1U)))) {
        Vlane_e___024root___act_sequent__TOP__25(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x800000000000000ULL & vlSelf->__VnbaTriggered.word(1U)))) {
        Vlane_e___024root___act_sequent__TOP__23(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x100000000000000ULL & vlSelf->__VnbaTriggered.word(1U)))) {
        Vlane_e___024root___act_sequent__TOP__21(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x20000000000000ULL & vlSelf->__VnbaTriggered.word(1U)))) {
        Vlane_e___024root___act_sequent__TOP__19(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x4000000000000ULL & vlSelf->__VnbaTriggered.word(1U)))) {
        Vlane_e___024root___act_sequent__TOP__17(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x800000000000ULL & vlSelf->__VnbaTriggered.word(1U)))) {
        Vlane_e___024root___act_sequent__TOP__15(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (4ULL & vlSelf->__VnbaTriggered.word(2U)))) {
        Vlane_e___024root___act_sequent__TOP__28(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x8000000000000000ULL & vlSelf->__VnbaTriggered.word(1U)))) {
        Vlane_e___024root___act_sequent__TOP__26(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000000000000000ULL & vlSelf->__VnbaTriggered.word(1U)))) {
        Vlane_e___024root___act_sequent__TOP__24(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x200000000000000ULL & vlSelf->__VnbaTriggered.word(1U)))) {
        Vlane_e___024root___act_sequent__TOP__22(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x40000000000000ULL & vlSelf->__VnbaTriggered.word(1U)))) {
        Vlane_e___024root___act_sequent__TOP__20(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x8000000000000ULL & vlSelf->__VnbaTriggered.word(1U)))) {
        Vlane_e___024root___act_sequent__TOP__18(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(1U)))) {
        Vlane_e___024root___act_sequent__TOP__16(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x200000000000ULL & vlSelf->__VnbaTriggered.word(1U)))) {
        Vlane_e___024root___act_sequent__TOP__14(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x100ULL & vlSelf->__VnbaTriggered.word(1U)))) {
        Vlane_e___024root___act_sequent__TOP__58(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (4ULL & vlSelf->__VnbaTriggered.word(1U)))) {
        Vlane_e___024root___act_sequent__TOP__57(vlSelf);
    }
    if ((0x1000000000000002ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vlane_e___024root___act_sequent__TOP__56(vlSelf);
    }
    if ((0x40000000000002ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vlane_e___024root___act_sequent__TOP__55(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x200000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___act_comb__TOP__38(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x400000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___act_comb__TOP__39(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___act_comb__TOP__40(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x2000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___act_comb__TOP__41(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x4000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___act_comb__TOP__42(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x8000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___act_comb__TOP__43(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x10000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___act_comb__TOP__44(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x20000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___act_comb__TOP__45(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x40000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___act_comb__TOP__46(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x80000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___act_comb__TOP__47(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x200000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___act_comb__TOP__48(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x400000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___act_comb__TOP__49(vlSelf);
    }
    if ((0x1000002ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vlane_e___024root___act_comb__TOP__50(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x800000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___act_comb__TOP__51(vlSelf);
    }
    if ((0x400002ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vlane_e___024root___act_comb__TOP__37(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x2000000000000ULL & vlSelf->__VnbaTriggered.word(3U)))) {
        Vlane_e___024root___act_sequent__TOP__67(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x4000000000000ULL & vlSelf->__VnbaTriggered.word(3U)))) {
        Vlane_e___024root___act_sequent__TOP__68(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x10000000ULL & vlSelf->__VnbaTriggered.word(3U)))) {
        Vlane_e___024root___act_sequent__TOP__69(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x8000000ULL & vlSelf->__VnbaTriggered.word(3U)))) {
        Vlane_e___024root___act_sequent__TOP__70(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x2000000ULL & vlSelf->__VnbaTriggered.word(3U)))) {
        Vlane_e___024root___act_sequent__TOP__71(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x4000000ULL & vlSelf->__VnbaTriggered.word(3U)))) {
        Vlane_e___024root___act_sequent__TOP__72(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x100000000ULL & vlSelf->__VnbaTriggered.word(3U)))) {
        Vlane_e___024root___act_sequent__TOP__73(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x80000000ULL & vlSelf->__VnbaTriggered.word(3U)))) {
        Vlane_e___024root___act_sequent__TOP__74(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x20000000ULL & vlSelf->__VnbaTriggered.word(3U)))) {
        Vlane_e___024root___act_sequent__TOP__75(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x40000000ULL & vlSelf->__VnbaTriggered.word(3U)))) {
        Vlane_e___024root___act_sequent__TOP__76(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000000000ULL & vlSelf->__VnbaTriggered.word(3U)))) {
        Vlane_e___024root___act_sequent__TOP__77(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x800000000ULL & vlSelf->__VnbaTriggered.word(3U)))) {
        Vlane_e___024root___act_sequent__TOP__78(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x200000000ULL & vlSelf->__VnbaTriggered.word(3U)))) {
        Vlane_e___024root___act_sequent__TOP__79(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x400000000ULL & vlSelf->__VnbaTriggered.word(3U)))) {
        Vlane_e___024root___act_sequent__TOP__80(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x10000000000ULL & vlSelf->__VnbaTriggered.word(3U)))) {
        Vlane_e___024root___act_sequent__TOP__81(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x8000000000ULL & vlSelf->__VnbaTriggered.word(3U)))) {
        Vlane_e___024root___act_sequent__TOP__82(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x2000000000ULL & vlSelf->__VnbaTriggered.word(3U)))) {
        Vlane_e___024root___act_sequent__TOP__83(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x4000000000ULL & vlSelf->__VnbaTriggered.word(3U)))) {
        Vlane_e___024root___act_sequent__TOP__84(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x100ULL & vlSelf->__VnbaTriggered.word(3U)))) {
        Vlane_e___024root___act_sequent__TOP__85(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x80ULL & vlSelf->__VnbaTriggered.word(3U)))) {
        Vlane_e___024root___act_sequent__TOP__86(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x20ULL & vlSelf->__VnbaTriggered.word(3U)))) {
        Vlane_e___024root___act_sequent__TOP__87(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x40ULL & vlSelf->__VnbaTriggered.word(3U)))) {
        Vlane_e___024root___act_sequent__TOP__88(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000ULL & vlSelf->__VnbaTriggered.word(3U)))) {
        Vlane_e___024root___act_sequent__TOP__89(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x800ULL & vlSelf->__VnbaTriggered.word(3U)))) {
        Vlane_e___024root___act_sequent__TOP__90(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x200ULL & vlSelf->__VnbaTriggered.word(3U)))) {
        Vlane_e___024root___act_sequent__TOP__91(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x400ULL & vlSelf->__VnbaTriggered.word(3U)))) {
        Vlane_e___024root___act_sequent__TOP__92(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x10000ULL & vlSelf->__VnbaTriggered.word(3U)))) {
        Vlane_e___024root___act_sequent__TOP__93(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x8000ULL & vlSelf->__VnbaTriggered.word(3U)))) {
        Vlane_e___024root___act_sequent__TOP__94(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x2000ULL & vlSelf->__VnbaTriggered.word(3U)))) {
        Vlane_e___024root___act_sequent__TOP__95(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x4000ULL & vlSelf->__VnbaTriggered.word(3U)))) {
        Vlane_e___024root___act_sequent__TOP__96(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x100000ULL & vlSelf->__VnbaTriggered.word(3U)))) {
        Vlane_e___024root___act_sequent__TOP__97(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x80000ULL & vlSelf->__VnbaTriggered.word(3U)))) {
        Vlane_e___024root___act_sequent__TOP__98(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x20000ULL & vlSelf->__VnbaTriggered.word(3U)))) {
        Vlane_e___024root___act_sequent__TOP__99(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x40000ULL & vlSelf->__VnbaTriggered.word(3U)))) {
        Vlane_e___024root___act_sequent__TOP__100(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000000ULL & vlSelf->__VnbaTriggered.word(3U)))) {
        Vlane_e___024root___act_sequent__TOP__101(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x800000ULL & vlSelf->__VnbaTriggered.word(3U)))) {
        Vlane_e___024root___act_sequent__TOP__102(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x200000ULL & vlSelf->__VnbaTriggered.word(3U)))) {
        Vlane_e___024root___act_sequent__TOP__103(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x400000ULL & vlSelf->__VnbaTriggered.word(3U)))) {
        Vlane_e___024root___act_sequent__TOP__104(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x8000000000000ULL & vlSelf->__VnbaTriggered.word(3U)))) {
        Vlane_e___024root___act_sequent__TOP__107(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x10000000000000ULL & vlSelf->__VnbaTriggered.word(3U)))) {
        Vlane_e___024root___act_sequent__TOP__108(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vlane_e___024root___nba_sequent__TOP__19(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___nba_comb__TOP__97(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x280ULL & vlSelf->__VnbaTriggered.word(1U)))) {
        Vlane_e___024root___act_comb__TOP__83(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x480ULL & vlSelf->__VnbaTriggered.word(1U)))) {
        Vlane_e___024root___act_comb__TOP__84(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0xaULL & vlSelf->__VnbaTriggered.word(1U)))) {
        Vlane_e___024root___act_comb__TOP__81(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x12ULL & vlSelf->__VnbaTriggered.word(1U)))) {
        Vlane_e___024root___act_comb__TOP__82(vlSelf);
    }
    if ((0x2800000000000002ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vlane_e___024root___act_comb__TOP__79(vlSelf);
    }
    if ((0x4800000000000002ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vlane_e___024root___act_comb__TOP__80(vlSelf);
    }
    if ((0xa0000000000002ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vlane_e___024root___act_comb__TOP__77(vlSelf);
    }
    if ((0x120000000000002ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vlane_e___024root___act_comb__TOP__78(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x48000000ULL & vlSelf->__VnbaTriggered.word(4U)))) {
        Vlane_e___024root___act_comb__TOP__1(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x44000000ULL & vlSelf->__VnbaTriggered.word(4U)))) {
        Vlane_e___024root___act_comb__TOP__2(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000001000000ULL & vlSelf->__VnbaTriggered.word(4U)))) {
        Vlane_e___024root___act_comb__TOP__3(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000002000000ULL & vlSelf->__VnbaTriggered.word(4U)))) {
        Vlane_e___024root___act_comb__TOP__4(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x20800000ULL & vlSelf->__VnbaTriggered.word(4U)))) {
        Vlane_e___024root___act_comb__TOP__21(vlSelf);
    }
    if ((((0x8800002ULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x20000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x40ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___act_comb__TOP__22(vlSelf);
    }
    if ((((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x800000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x40ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___act_comb__TOP__23(vlSelf);
    }
    if ((0x81002ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vlane_e___024root___act_comb__TOP__30(vlSelf);
    }
    if ((0x40802ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vlane_e___024root___act_comb__TOP__29(vlSelf);
    }
    if ((0x200402ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vlane_e___024root___act_comb__TOP__32(vlSelf);
    }
    if ((0x100202ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vlane_e___024root___act_comb__TOP__31(vlSelf);
    }
    if ((0x20102ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vlane_e___024root___act_comb__TOP__28(vlSelf);
    }
    if ((0x10082ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vlane_e___024root___act_comb__TOP__27(vlSelf);
    }
    if ((0x8042ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vlane_e___024root___act_comb__TOP__26(vlSelf);
    }
    if ((0x4022ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vlane_e___024root___act_comb__TOP__25(vlSelf);
    }
    if ((0x2012ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vlane_e___024root___act_comb__TOP__24(vlSelf);
    }
    if ((((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x1000ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x10ULL & vlSelf->__VnbaTriggered.word(2U)))) {
        Vlane_e___024root___act_comb__TOP__20(vlSelf);
    }
    if ((((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x8000ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (2ULL & vlSelf->__VnbaTriggered.word(2U)))) {
        Vlane_e___024root___act_comb__TOP__18(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x4000000000020000ULL & vlSelf->__VnbaTriggered.word(1U)))) {
        Vlane_e___024root___act_comb__TOP__16(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x800000000080000ULL & vlSelf->__VnbaTriggered.word(1U)))) {
        Vlane_e___024root___act_comb__TOP__14(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x100000000200000ULL & vlSelf->__VnbaTriggered.word(1U)))) {
        Vlane_e___024root___act_comb__TOP__12(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x20000000800000ULL & vlSelf->__VnbaTriggered.word(1U)))) {
        Vlane_e___024root___act_comb__TOP__10(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x4000002000000ULL & vlSelf->__VnbaTriggered.word(1U)))) {
        Vlane_e___024root___act_comb__TOP__8(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x800008000000ULL & vlSelf->__VnbaTriggered.word(1U)))) {
        Vlane_e___024root___act_comb__TOP__6(vlSelf);
    }
    if ((((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x4000ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (4ULL & vlSelf->__VnbaTriggered.word(2U)))) {
        Vlane_e___024root___act_comb__TOP__71(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x8000000000010000ULL & vlSelf->__VnbaTriggered.word(1U)))) {
        Vlane_e___024root___act_comb__TOP__70(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000000000040000ULL & vlSelf->__VnbaTriggered.word(1U)))) {
        Vlane_e___024root___act_comb__TOP__69(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x200000000100000ULL & vlSelf->__VnbaTriggered.word(1U)))) {
        Vlane_e___024root___act_comb__TOP__68(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x40000000400000ULL & vlSelf->__VnbaTriggered.word(1U)))) {
        Vlane_e___024root___act_comb__TOP__67(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x8000001000000ULL & vlSelf->__VnbaTriggered.word(1U)))) {
        Vlane_e___024root___act_comb__TOP__66(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000004000000ULL & vlSelf->__VnbaTriggered.word(1U)))) {
        Vlane_e___024root___act_comb__TOP__65(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x200010000000ULL & vlSelf->__VnbaTriggered.word(1U)))) {
        Vlane_e___024root___act_comb__TOP__64(vlSelf);
    }
    if (((0x100002ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0xe000000ULL & vlSelf->__VnbaTriggered.word(3U)))) {
        Vlane_e___024root___act_comb__TOP__52(vlSelf);
    }
    if (((0x200002ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0xe0000000ULL & vlSelf->__VnbaTriggered.word(3U)))) {
        Vlane_e___024root___act_comb__TOP__53(vlSelf);
    }
    if (((0x40002ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0xe00000000ULL & vlSelf->__VnbaTriggered.word(3U)))) {
        Vlane_e___024root___act_comb__TOP__54(vlSelf);
    }
    if (((0x80002ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0xe000000000ULL & vlSelf->__VnbaTriggered.word(3U)))) {
        Vlane_e___024root___act_comb__TOP__55(vlSelf);
    }
    if (((0x2002ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0xe0ULL & vlSelf->__VnbaTriggered.word(3U)))) {
        Vlane_e___024root___act_comb__TOP__56(vlSelf);
    }
    if (((0x4002ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0xe00ULL & vlSelf->__VnbaTriggered.word(3U)))) {
        Vlane_e___024root___act_comb__TOP__57(vlSelf);
    }
    if (((0x8002ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0xe000ULL & vlSelf->__VnbaTriggered.word(3U)))) {
        Vlane_e___024root___act_comb__TOP__58(vlSelf);
    }
    if (((0x10002ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0xe0000ULL & vlSelf->__VnbaTriggered.word(3U)))) {
        Vlane_e___024root___act_comb__TOP__59(vlSelf);
    }
    if (((0x20002ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0xe00000ULL & vlSelf->__VnbaTriggered.word(3U)))) {
        Vlane_e___024root___act_comb__TOP__60(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0xe000000000000ULL & vlSelf->__VnbaTriggered.word(3U)))) {
        Vlane_e___024root___act_comb__TOP__63(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x2000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___nba_comb__TOP__148(vlSelf);
    }
    if ((6ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vlane_e___024root___nba_comb__TOP__149(vlSelf);
        Vlane_e___024root___act_sequent__TOP__106(vlSelf);
    }
    if (((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___nba_comb__TOP__151(vlSelf);
        Vlane_e___024root___nba_comb__TOP__152(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x780ULL & vlSelf->__VnbaTriggered.word(1U)))) {
        Vlane_e___024root___act_comb__TOP__91(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1eULL & vlSelf->__VnbaTriggered.word(1U)))) {
        Vlane_e___024root___act_comb__TOP__90(vlSelf);
    }
    if ((0x7800000000000002ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vlane_e___024root___act_comb__TOP__89(vlSelf);
    }
    if ((0x1e0000000000002ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vlane_e___024root___act_comb__TOP__88(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x30820000ULL & vlSelf->__VnbaTriggered.word(4U)))) {
        Vlane_e___024root___act_comb__TOP__72(vlSelf);
    }
    if (((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x800020800008ULL & vlSelf->__VnbaTriggered.word(4U)))) {
        Vlane_e___024root___act_comb__TOP__73(vlSelf);
    }
    if ((((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x800002ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x60ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___act_comb__TOP__74(vlSelf);
    }
    if (((((2ULL & vlSelf->__VnbaTriggered.word(0U)) 
           | (0x2000000000000000ULL & vlSelf->__VnbaTriggered.word(3U))) 
          | (0x800000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x840ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___act_comb__TOP__75(vlSelf);
    }
    if ((0x3ffff2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vlane_e___024root___act_comb__TOP__76(vlSelf);
    }
    if ((0x2006ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vlane_e___024root___act_comb__TOP__61(vlSelf);
    }
    if ((0x4006ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vlane_e___024root___act_comb__TOP__62(vlSelf);
    }
    if (((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__4(vlSelf);
    }
    if ((((0x840000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x800000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__5(vlSelf);
    }
    if (((0x240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___nba_comb__TOP__166(vlSelf);
        Vlane_e___024root___ico_comb__TOP__7(vlSelf);
    }
    if ((((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x1000047000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___act_comb__TOP__305(vlSelf);
    }
    if ((((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x20000000000ULL & vlSelf->__VnbaTriggered.word(3U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__8(vlSelf);
    }
    if ((((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x80000000000ULL & vlSelf->__VnbaTriggered.word(3U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__9(vlSelf);
    }
    if ((((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x100000000000ULL & vlSelf->__VnbaTriggered.word(3U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__10(vlSelf);
    }
    if ((((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x40000000000ULL & vlSelf->__VnbaTriggered.word(3U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__11(vlSelf);
    }
    if (((0x40800aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___act_comb__TOP__99(vlSelf);
    }
    if (((0x41000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___act_comb__TOP__100(vlSelf);
    }
    if (((0x42000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___act_comb__TOP__101(vlSelf);
    }
    if (((0x1040000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___nba_comb__TOP__176(vlSelf);
    }
    if ((((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x800000000000000ULL & vlSelf->__VnbaTriggered.word(3U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__13(vlSelf);
    }
    if ((((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x200000000000000ULL & vlSelf->__VnbaTriggered.word(3U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__14(vlSelf);
    }
    if ((((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x80000000000000ULL & vlSelf->__VnbaTriggered.word(3U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__15(vlSelf);
    }
    if ((((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x20000000000000ULL & vlSelf->__VnbaTriggered.word(3U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__16(vlSelf);
    }
    if ((((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x1000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__17(vlSelf);
    }
    if ((((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x200ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__18(vlSelf);
    }
    if ((((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x40ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__19(vlSelf);
    }
    if ((((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x100000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__20(vlSelf);
    }
    if (((0x100040000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__21(vlSelf);
    }
    if (((0x40040000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__22(vlSelf);
    }
    if (((0x80040000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__23(vlSelf);
    }
    if ((((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (2ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__24(vlSelf);
    }
    if ((((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (1ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__25(vlSelf);
    }
    if ((((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x40ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__26(vlSelf);
    }
    if (((0x40000000040000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___nba_comb__TOP__191(vlSelf);
    }
    if (((0x1000000040000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___nba_comb__TOP__192(vlSelf);
    }
    if (((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000000000800ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__29(vlSelf);
    }
    if ((((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x2000000000000000ULL & vlSelf->__VnbaTriggered.word(3U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__30(vlSelf);
    }
    if ((((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x2000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__31(vlSelf);
    }
    if ((((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x400ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__32(vlSelf);
    }
    if ((((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x80ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__33(vlSelf);
    }
    if ((((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x200000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__34(vlSelf);
    }
    if ((((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x40000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__35(vlSelf);
    }
    if ((((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x10ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__36(vlSelf);
    }
    if ((((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x8000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__37(vlSelf);
    }
    if (((0x8040000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__38(vlSelf);
    }
    if (((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000000000020ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__39(vlSelf);
    }
    if (((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000000008000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__40(vlSelf);
    }
    if (((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000000004000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__41(vlSelf);
    }
    if ((((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x20000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__42(vlSelf);
    }
    if (((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000000000400ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__43(vlSelf);
    }
    if (((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000000000200ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__44(vlSelf);
    }
    if (((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000000000080ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__45(vlSelf);
    }
    if (((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000000000100ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__46(vlSelf);
    }
    if ((((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x10000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__47(vlSelf);
    }
    if ((((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x10000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__48(vlSelf);
    }
    if ((((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x400000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__49(vlSelf);
    }
    if ((((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x200000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__50(vlSelf);
    }
    if ((((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x80000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__51(vlSelf);
    }
    if ((((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x100000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__52(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x1000ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__53(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x4000ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__54(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x8000ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__55(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x10000ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__56(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x20000ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__57(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x40000ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__58(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x80000ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__59(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x100000ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__60(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x200000ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__61(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x400000ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__62(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x800000ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__63(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x1000000ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__64(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x2000000ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__65(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x4000000ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__66(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x8000000ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__67(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x10000000ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__68(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x800000000000ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__69(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x4000000000000ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__70(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x20000000000000ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__71(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x100000000000000ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__72(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x800000000000000ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__73(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x4000000000000000ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__74(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (2ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__75(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x10ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__76(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x200000000000ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__77(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__78(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x8000000000000ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__79(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x40000000000000ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__80(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x200000000000000ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__81(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x1000000000000000ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__82(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x8000000000000000ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__83(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (4ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__84(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x201000000000ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__85(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x900000000000ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__86(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x1000800000000ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__87(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x4080000000000ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__88(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x8000400000000ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__89(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x20040000000000ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__90(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x40000200000000ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__91(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x100020000000000ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__92(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x200000100000000ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__93(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x800010000000000ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__94(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x1000000080000000ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__95(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x4000008000000000ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__96(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x8000000040000000ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__97(vlSelf);
    }
    if (((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
           | (0x4000000000ULL & vlSelf->__VnbaTriggered.word(1U))) 
          | (2ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__98(vlSelf);
    }
    if (((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
           | (0x20000000ULL & vlSelf->__VnbaTriggered.word(1U))) 
          | (4ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__99(vlSelf);
    }
    if (((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
           | (0x2000000000ULL & vlSelf->__VnbaTriggered.word(1U))) 
          | (0x10ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__100(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x100ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__101(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x80ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__102(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x1000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__103(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x800ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__104(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x10000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__105(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x8000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__106(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x100000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__107(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x80000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__108(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x1000000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__109(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x800000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__110(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x10000000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__111(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x8000000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__112(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x100000000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__113(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x80000000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__114(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x1000000000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__115(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x800000000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__116(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x10000000000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__117(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x8000000000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__118(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x100000000000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__119(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x80000000000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__120(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__121(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x800000000000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__122(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x10000000000000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__123(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x8000000000000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__124(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x100000000000000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__125(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x80000000000000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__126(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x1000000000000000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__127(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x800000000000000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__128(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (1ULL & vlSelf->__VnbaTriggered.word(3U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__129(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x8000000000000000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__130(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x10ULL & vlSelf->__VnbaTriggered.word(3U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__131(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (8ULL & vlSelf->__VnbaTriggered.word(3U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__132(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x20ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__133(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x40ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__134(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x200ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__135(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x400ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__136(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x2000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__137(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x4000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__138(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x20000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__139(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x40000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__140(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x200000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__141(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x400000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__142(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x2000000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__143(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x4000000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__144(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x20000000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__145(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x40000000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__146(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x200000000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__147(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x400000000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__148(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x2000000000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__149(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x4000000000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__150(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x20000000000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__151(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x40000000000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__152(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x200000000000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__153(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x400000000000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__154(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x2000000000000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__155(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x4000000000000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__156(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x20000000000000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__157(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x40000000000000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__158(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x200000000000000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__159(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x400000000000000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__160(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x2000000000000000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__161(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x4000000000000000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__162(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (2ULL & vlSelf->__VnbaTriggered.word(3U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__163(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (4ULL & vlSelf->__VnbaTriggered.word(3U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__164(vlSelf);
    }
    if ((((0x240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x40000000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__165(vlSelf);
    }
    if ((((0x240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x20000000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__166(vlSelf);
    }
    if ((((0x240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x100000000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__167(vlSelf);
    }
    if ((((0x240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x80000000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__168(vlSelf);
    }
    if (((0x240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000010000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___nba_comb__TOP__333(vlSelf);
    }
    if (((0x240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000100000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___nba_comb__TOP__334(vlSelf);
    }
    if (((0x240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000001000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___nba_comb__TOP__335(vlSelf);
    }
    if (((0x240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000000100000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___nba_comb__TOP__336(vlSelf);
    }
    if ((((0x240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x400000000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__173(vlSelf);
    }
    if ((((0x240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x200000000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__174(vlSelf);
    }
    if ((((0x240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x1000000000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__175(vlSelf);
    }
    if ((((0x240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x800000000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__176(vlSelf);
    }
    if ((((0x240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x4000000000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__177(vlSelf);
    }
    if ((((0x240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x2000000000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__178(vlSelf);
    }
    if (((0x240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000000000001ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__179(vlSelf);
    }
    if ((((0x240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x8000000000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__180(vlSelf);
    }
    if (((0x240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000000000004ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__181(vlSelf);
    }
    if (((0x240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000000000002ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__182(vlSelf);
    }
    if (((0x240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000000000010ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__183(vlSelf);
    }
    if (((0x240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000000000008ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__184(vlSelf);
    }
    if ((((0x240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(3U))) 
         | (0x1000000000020ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__185(vlSelf);
    }
    if (((0x240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000004000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__186(vlSelf);
    }
    if (((0x240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000008000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__187(vlSelf);
    }
    if (((0x240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000040000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__188(vlSelf);
    }
    if (((0x240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000080000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__189(vlSelf);
    }
    if ((((0x240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x2000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__190(vlSelf);
    }
    if (((0x4000240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__191(vlSelf);
    }
    if ((((0x240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x800000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__192(vlSelf);
    }
    if (((0x400240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__193(vlSelf);
    }
    if ((((0x240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x1000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__194(vlSelf);
    }
    if (((0x1000240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__195(vlSelf);
    }
    if ((((0x240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x4000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__196(vlSelf);
    }
    if (((0x10000240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__197(vlSelf);
    }
    if ((((0x240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x8000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__198(vlSelf);
    }
    if (((0x40000240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__199(vlSelf);
    }
    if ((((0x240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x10000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__200(vlSelf);
    }
    if (((0x100000240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__201(vlSelf);
    }
    if ((((0x240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x20000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__202(vlSelf);
    }
    if (((0x400000240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__203(vlSelf);
    }
    if (((0x240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000000400000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__204(vlSelf);
    }
    if (((0x240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000000800000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__205(vlSelf);
    }
    if (((0x240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000000040000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__206(vlSelf);
    }
    if (((0x240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000000080000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__207(vlSelf);
    }
    if (((0x8000240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__208(vlSelf);
    }
    if (((0x800240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__209(vlSelf);
    }
    if (((0x2000240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__210(vlSelf);
    }
    if (((0x20000240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__211(vlSelf);
    }
    if (((0x80000240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__212(vlSelf);
    }
    if (((0x200000240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__213(vlSelf);
    }
    if (((0x800000240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__214(vlSelf);
    }
    if ((((0x4040000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (2ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__215(vlSelf);
    }
    if ((((0x10040000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (2ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__216(vlSelf);
    }
    if ((((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (6ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__217(vlSelf);
    }
    if (((((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
           | (0x4000000000000000ULL & vlSelf->__VnbaTriggered.word(3U))) 
          | (2ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__218(vlSelf);
    }
    if (((((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
           | (0x8000000000000000ULL & vlSelf->__VnbaTriggered.word(3U))) 
          | (2ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__219(vlSelf);
    }
    if ((((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (3ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__220(vlSelf);
    }
    if ((((0x240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (1ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__221(vlSelf);
    }
    if ((((0x240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x40ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__222(vlSelf);
    }
    if (((0x40000000240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__223(vlSelf);
    }
    if (((0x40000000040000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x3000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___nba_comb__TOP__388(vlSelf);
    }
    if ((((0x41000000040000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x41ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___nba_comb__TOP__389(vlSelf);
    }
    if ((((0x1000000040000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x800000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__225(vlSelf);
    }
    if (((0x1000000040000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x3000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___nba_comb__TOP__391(vlSelf);
    }
    if ((((0x1000000040000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (8ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__226(vlSelf);
    }
    if ((((0x41000000040000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x41ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x3000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___nba_comb__TOP__393(vlSelf);
    }
    if (((0x1000000240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__227(vlSelf);
    }
    if ((((0x1000000040000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x10000000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__228(vlSelf);
    }
    if ((((0x1000000040000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x8000000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__229(vlSelf);
    }
    if ((((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x2040000000000000ULL & vlSelf->__VnbaTriggered.word(3U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__230(vlSelf);
    }
    if ((((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x2100000000000000ULL & vlSelf->__VnbaTriggered.word(3U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__231(vlSelf);
    }
    if ((((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x2400000000000000ULL & vlSelf->__VnbaTriggered.word(3U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__232(vlSelf);
    }
    if ((((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x3000000000000000ULL & vlSelf->__VnbaTriggered.word(3U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__233(vlSelf);
    }
    if ((((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x800000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000004840ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__234(vlSelf);
    }
    if ((((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x20020ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__235(vlSelf);
    }
    if ((((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0xa0000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__236(vlSelf);
    }
    if ((((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x420000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__237(vlSelf);
    }
    if ((((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x20100ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__238(vlSelf);
    }
    if ((((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x20800ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__239(vlSelf);
    }
    if ((((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x24000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__240(vlSelf);
    }
    if ((((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x800000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x10000000003e0ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__241(vlSelf);
    }
    if ((((0x40000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x3b0800000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__242(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0xaaa9000ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__243(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x15554000ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__244(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x1ffff000ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__245(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0xb01000000000ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__246(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x5080800000000ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__247(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x28040400000000ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__248(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x140020200000000ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__249(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0xa00010100000000ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__250(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x5000008080000000ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__251(vlSelf);
    }
    if (((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
           | (0x8000004040000000ULL & vlSelf->__VnbaTriggered.word(1U))) 
          | (2ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__252(vlSelf);
    }
    if (((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
           | (0x2020000000ULL & vlSelf->__VnbaTriggered.word(1U))) 
          | (0x14ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__253(vlSelf);
    }
    if (((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
           | (0x200000000000ULL & vlSelf->__VnbaTriggered.word(1U))) 
          | (0xe0ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__254(vlSelf);
    }
    if (((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
           | (0x800000000000ULL & vlSelf->__VnbaTriggered.word(1U))) 
          | (0xe00ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__255(vlSelf);
    }
    if (((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
           | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(1U))) 
          | (0xe000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__256(vlSelf);
    }
    if (((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
           | (0x4000000000000ULL & vlSelf->__VnbaTriggered.word(1U))) 
          | (0xe0000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__257(vlSelf);
    }
    if (((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
           | (0x8000000000000ULL & vlSelf->__VnbaTriggered.word(1U))) 
          | (0xe00000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__258(vlSelf);
    }
    if (((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
           | (0x20000000000000ULL & vlSelf->__VnbaTriggered.word(1U))) 
          | (0xe000000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__259(vlSelf);
    }
    if (((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
           | (0x40000000000000ULL & vlSelf->__VnbaTriggered.word(1U))) 
          | (0xe0000000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__260(vlSelf);
    }
    if (((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
           | (0x100000000000000ULL & vlSelf->__VnbaTriggered.word(1U))) 
          | (0xe00000000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__261(vlSelf);
    }
    if (((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
           | (0x200000000000000ULL & vlSelf->__VnbaTriggered.word(1U))) 
          | (0xe000000000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__262(vlSelf);
    }
    if (((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
           | (0x800000000000000ULL & vlSelf->__VnbaTriggered.word(1U))) 
          | (0xe0000000000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__263(vlSelf);
    }
    if (((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
           | (0x1000000000000000ULL & vlSelf->__VnbaTriggered.word(1U))) 
          | (0xe00000000000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__264(vlSelf);
    }
    if (((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
           | (0x4000000000000000ULL & vlSelf->__VnbaTriggered.word(1U))) 
          | (0xe000000000000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__265(vlSelf);
    }
    if (((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
           | (0x8000000000000000ULL & vlSelf->__VnbaTriggered.word(1U))) 
          | (0xe0000000000000ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__266(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0xe00000000000002ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__267(vlSelf);
    }
    if ((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0xe000000000000004ULL & vlSelf->__VnbaTriggered.word(2U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__268(vlSelf);
    }
    if (((((0x40000eULL & vlSelf->__VnbaTriggered.word(0U)) 
           | (0x10ULL & vlSelf->__VnbaTriggered.word(2U))) 
          | (0xeULL & vlSelf->__VnbaTriggered.word(3U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__269(vlSelf);
    }
    if ((((0x1000000240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x20000000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__270(vlSelf);
    }
    if ((((0x1000000240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x80000000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__271(vlSelf);
    }
    if (((0x240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000012000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__272(vlSelf);
    }
    if (((0x240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000120000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__273(vlSelf);
    }
    if (((0x240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000001200000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__274(vlSelf);
    }
    if (((0x240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000000110000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__275(vlSelf);
    }
    if (((0x240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000111120000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__276(vlSelf);
    }
    if (((0x240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000001100000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__277(vlSelf);
    }
    if (((0x240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000100100000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__278(vlSelf);
    }
    if (((0x240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000010100000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__279(vlSelf);
    }
    if ((((0x40000000240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x200000000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__280(vlSelf);
    }
    if ((((0x40000000240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x800000000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__281(vlSelf);
    }
    if (((((0x240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
           | (1ULL & vlSelf->__VnbaTriggered.word(1U))) 
          | (0x2000000000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__282(vlSelf);
    }
    if (((((0x240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
           | (1ULL & vlSelf->__VnbaTriggered.word(1U))) 
          | (0x8000000000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__283(vlSelf);
    }
    if ((((0x240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x40ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000002ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__284(vlSelf);
    }
    if ((((0x240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x40ULL & vlSelf->__VnbaTriggered.word(1U))) 
         | (0x1000000000008ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__285(vlSelf);
    }
    if ((((0x4000240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x2000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__286(vlSelf);
    }
    if ((((0x400240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x800000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__287(vlSelf);
    }
    if ((((0x240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x1800000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__288(vlSelf);
    }
    if ((((0x1000240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x1000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__289(vlSelf);
    }
    if ((((0x10000240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x4000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__290(vlSelf);
    }
    if ((((0x40000240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x8000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__291(vlSelf);
    }
    if ((((0x100000240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x10000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__292(vlSelf);
    }
    if ((((0x240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x3c000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__293(vlSelf);
    }
    if ((((0x400000240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x20000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__294(vlSelf);
    }
    if (((((0x41000000040000aULL & vlSelf->__VnbaTriggered.word(0U)) 
           | (0x41ULL & vlSelf->__VnbaTriggered.word(1U))) 
          | (0x40000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__295(vlSelf);
    }
    if (((((0x41000000040000aULL & vlSelf->__VnbaTriggered.word(0U)) 
           | (0x41ULL & vlSelf->__VnbaTriggered.word(1U))) 
          | (0x80000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__296(vlSelf);
    }
    if (((((0x41000000040000aULL & vlSelf->__VnbaTriggered.word(0U)) 
           | (0x41ULL & vlSelf->__VnbaTriggered.word(1U))) 
          | (0x100000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__297(vlSelf);
    }
    if (((((0x41000000040000aULL & vlSelf->__VnbaTriggered.word(0U)) 
           | (0x41ULL & vlSelf->__VnbaTriggered.word(1U))) 
          | (0x200000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__298(vlSelf);
    }
    if ((((0x41000000040000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (8ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__300(vlSelf);
    }
    if (((((0x1000000040000aULL & vlSelf->__VnbaTriggered.word(0U)) 
           | (1ULL & vlSelf->__VnbaTriggered.word(1U))) 
          | (8ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__301(vlSelf);
    }
    if (((((0x1000000040000aULL & vlSelf->__VnbaTriggered.word(0U)) 
           | (0x40ULL & vlSelf->__VnbaTriggered.word(1U))) 
          | (8ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__302(vlSelf);
    }
    if (((((0x41000000040000aULL & vlSelf->__VnbaTriggered.word(0U)) 
           | (0x41ULL & vlSelf->__VnbaTriggered.word(1U))) 
          | (0xc00000000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x3000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__299(vlSelf);
    }
    if ((((0x1000000040000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x8800020800000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__303(vlSelf);
    }
    if (((0x240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000111100000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__304(vlSelf);
    }
    if ((((0x555400240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x3f800000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__305(vlSelf);
    }
    if (((0x240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
         | (0x1000111120000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__306(vlSelf);
    }
    if (((((0x555400240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
           | (0x200000000000ULL & vlSelf->__VnbaTriggered.word(3U))) 
          | (0x3f810000000ULL & vlSelf->__VnbaTriggered.word(4U))) 
         | (0x1000000000000ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__307(vlSelf);
    }
    if ((((0x240000aULL & vlSelf->__VnbaTriggered.word(0U)) 
          | (0x800000000000ULL & vlSelf->__VnbaTriggered.word(3U))) 
         | (0x1000111120800ULL & vlSelf->__VnbaTriggered.word(5U)))) {
        Vlane_e___024root___ico_comb__TOP__308(vlSelf);
    }
}

void Vlane_e___024root___eval_triggers__ico(Vlane_e___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vlane_e___024root___dump_triggers__ico(Vlane_e___024root* vlSelf);
#endif  // VL_DEBUG
void Vlane_e___024root___eval_ico(Vlane_e___024root* vlSelf);
void Vlane_e___024root___eval_triggers__act(Vlane_e___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vlane_e___024root___dump_triggers__act(Vlane_e___024root* vlSelf);
#endif  // VL_DEBUG
void Vlane_e___024root___eval_act(Vlane_e___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vlane_e___024root___dump_triggers__nba(Vlane_e___024root* vlSelf);
#endif  // VL_DEBUG

void Vlane_e___024root___eval(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vlane_e___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vlane_e___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/yongfu/proj/score/tools/araxl/hardware/src/lane/lane.sv", 12, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vlane_e___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vlane_e___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vlane_e___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/yongfu/proj/score/tools/araxl/hardware/src/lane/lane.sv", 12, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                vlSelf->__VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vlane_e___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vlane_e___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/yongfu/proj/score/tools/araxl/hardware/src/lane/lane.sv", 12, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vlane_e___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vlane_e___024root___eval_debug_assertions(Vlane_e___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlane_e__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlane_e___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->rst_ni & 0xfeU))) {
        Verilated::overWidthError("rst_ni");}
    if (VL_UNLIKELY((vlSelf->scan_enable_i & 0xfeU))) {
        Verilated::overWidthError("scan_enable_i");}
    if (VL_UNLIKELY((vlSelf->scan_data_i & 0xfeU))) {
        Verilated::overWidthError("scan_data_i");}
    if (VL_UNLIKELY((vlSelf->lane_id_i & 0xfcU))) {
        Verilated::overWidthError("lane_id_i");}
    if (VL_UNLIKELY((vlSelf->cluster_id_i & 0xe0U))) {
        Verilated::overWidthError("cluster_id_i");}
    if (VL_UNLIKELY((vlSelf->num_clusters_i & 0xf8U))) {
        Verilated::overWidthError("num_clusters_i");}
    if (VL_UNLIKELY((vlSelf->alu_vxrm_i & 0xfcU))) {
        Verilated::overWidthError("alu_vxrm_i");}
    if (VL_UNLIKELY((vlSelf->pe_req_i[8U] & 0xfe000000U))) {
        Verilated::overWidthError("pe_req_i");}
    if (VL_UNLIKELY((vlSelf->pe_req_valid_i & 0xfeU))) {
        Verilated::overWidthError("pe_req_valid_i");}
    if (VL_UNLIKELY((vlSelf->stu_operand_ready_i & 0xfeU))) {
        Verilated::overWidthError("stu_operand_ready_i");}
    if (VL_UNLIKELY((vlSelf->sldu_operand_ready_i & 0xfeU))) {
        Verilated::overWidthError("sldu_operand_ready_i");}
    if (VL_UNLIKELY((vlSelf->sldu_issue_mux_sel_i & 0xfcU))) {
        Verilated::overWidthError("sldu_issue_mux_sel_i");}
    if (VL_UNLIKELY((vlSelf->sldu_commit_mux_sel_i 
                     & 0xfcU))) {
        Verilated::overWidthError("sldu_commit_mux_sel_i");}
    if (VL_UNLIKELY((vlSelf->addrgen_operand_ready_i 
                     & 0xfeU))) {
        Verilated::overWidthError("addrgen_operand_ready_i");}
    if (VL_UNLIKELY((vlSelf->sldu_result_req_i & 0xfeU))) {
        Verilated::overWidthError("sldu_result_req_i");}
    if (VL_UNLIKELY((vlSelf->sldu_result_id_i & 0xf8U))) {
        Verilated::overWidthError("sldu_result_id_i");}
    if (VL_UNLIKELY((vlSelf->sldu_result_addr_i & 0xf000U))) {
        Verilated::overWidthError("sldu_result_addr_i");}
    if (VL_UNLIKELY((vlSelf->sldu_red_valid_i & 0xfeU))) {
        Verilated::overWidthError("sldu_red_valid_i");}
    if (VL_UNLIKELY((vlSelf->sldu_red_pending_i & 0xfeU))) {
        Verilated::overWidthError("sldu_red_pending_i");}
    if (VL_UNLIKELY((vlSelf->sldu_red_completed_i & 0xfeU))) {
        Verilated::overWidthError("sldu_red_completed_i");}
    if (VL_UNLIKELY((vlSelf->ldu_result_req_i & 0xfeU))) {
        Verilated::overWidthError("ldu_result_req_i");}
    if (VL_UNLIKELY((vlSelf->ldu_result_id_i & 0xf8U))) {
        Verilated::overWidthError("ldu_result_id_i");}
    if (VL_UNLIKELY((vlSelf->ldu_result_addr_i & 0xf000U))) {
        Verilated::overWidthError("ldu_result_addr_i");}
    if (VL_UNLIKELY((vlSelf->mask_operand_ready_i & 0xf0U))) {
        Verilated::overWidthError("mask_operand_ready_i");}
    if (VL_UNLIKELY((vlSelf->masku_result_req_i & 0xfeU))) {
        Verilated::overWidthError("masku_result_req_i");}
    if (VL_UNLIKELY((vlSelf->masku_result_id_i & 0xf8U))) {
        Verilated::overWidthError("masku_result_id_i");}
    if (VL_UNLIKELY((vlSelf->masku_result_addr_i & 0xf000U))) {
        Verilated::overWidthError("masku_result_addr_i");}
    if (VL_UNLIKELY((vlSelf->mask_valid_i & 0xfeU))) {
        Verilated::overWidthError("mask_valid_i");}
}
#endif  // VL_DEBUG
