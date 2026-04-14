// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vara_tb_verilator.h for the primary calling header

#include "Vara_tb_verilator__pch.h"
#include "Vara_tb_verilator___024root.h"

VL_INLINE_OPT void Vara_tb_verilator___024root___nba_comb__TOP__580(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___nba_comb__TOP__580\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<8>/*255:0*/ __Vtemp_9;
    // Body
    if ((0x2aU != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__op_q))) {
        if ((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__op_q))) {
            if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_p_mul_ew64__DOT__p_mul__DOT__unnamedblk3__DOT__b = 1U;
                }
                if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_p_mul_ew64__DOT__p_mul__DOT__unnamedblk2__DOT__b = 1U;
                }
            }
            if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_p_mul_ew64__DOT__p_mul__DOT__unnamedblk4__DOT__b = 1U;
                }
            }
        }
    }
    if ((0x2aU != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__op_q))) {
        if ((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__op_q))) {
            if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_p_mul_ew32__DOT__p_mul__DOT__unnamedblk10__DOT__b = 2U;
                }
                if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_p_mul_ew32__DOT__p_mul__DOT__unnamedblk11__DOT__b = 2U;
                }
            }
            if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_p_mul_ew32__DOT__p_mul__DOT__unnamedblk12__DOT__b = 2U;
                }
            }
        }
    }
    if ((0x2aU != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q))) {
        if ((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q))) {
            if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_p_mul_ew16__DOT__p_mul__DOT__unnamedblk18__DOT__b = 4U;
                }
                if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_p_mul_ew16__DOT__p_mul__DOT__unnamedblk19__DOT__b = 4U;
                }
            }
            if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_p_mul_ew16__DOT__p_mul__DOT__unnamedblk20__DOT__b = 4U;
                }
            }
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vmul_mask 
        = (0xffU & ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__mask_q) 
                      << 0x18U) | (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__mask_q) 
                                    << 0x10U) | (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__mask_q) 
                                                  << 8U) 
                                                 | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__mask_i)))) 
                    >> (0x1fU & VL_SHIFTL_III(5,32,32, 
                                              (7U & 
                                               (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[0U] 
                                                >> 3U)), 3U))));
    if ((0x2aU != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i))) {
        if ((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i))) {
            if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__gen_p_mul_ew8__DOT__p_mul__DOT__unnamedblk28__DOT__b = 8U;
                }
            }
            if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__gen_p_mul_ew8__DOT__p_mul__DOT__unnamedblk26__DOT__b = 8U;
                }
                if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__gen_p_mul_ew8__DOT__p_mul__DOT__unnamedblk27__DOT__b = 8U;
                }
            }
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew64__result_o = 0ULL;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__r = 0U;
    if ((0x2aU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__op_q))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew64__result_o 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[0U])));
    } else if ((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__op_q))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__r 
            = ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))
                ? ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))
                    ? ((0xfeU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__r)) 
                       | ((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[1U] 
                              >> 0x1fU)) & (0ULL != 
                                            (0x7fffffffffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[0U])))))))
                    : 0U) : ((0xfeU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__r)) 
                             | (1U & ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))
                                       ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[1U] 
                                           >> 0x1eU) 
                                          & ((0ULL 
                                              != (0x3fffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[0U]))))) 
                                             | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[1U] 
                                                >> 0x1fU)))
                                       : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[1U] 
                                          >> 0x1eU)))));
        VL_SHIFTR_WWI(128,128,32, __Vtemp_1, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res, 0x3fU);
        __Vtemp_2[0U] = (1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__r));
        __Vtemp_2[1U] = 0U;
        __Vtemp_2[2U] = 0U;
        __Vtemp_2[3U] = 0U;
        VL_ADD_W(4, __Vtemp_3, __Vtemp_1, __Vtemp_2);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew64__result_o 
            = (((QData)((IData)(((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__op_q))
                                  ? __Vtemp_3[1U] : (IData)(
                                                            ((((QData)((IData)(
                                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[0U]))) 
                                                             >> 0x20U))))) 
                << 0x20U) | (QData)((IData)(((0x32U 
                                              == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__op_q))
                                              ? __Vtemp_3[0U]
                                              : (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[0U]))))))));
    } else if ((((0x2bU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__op_q)) 
                 || (0x2cU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__op_q))) 
                || (0x2dU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__op_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew64__result_o 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[3U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[2U])));
    } else if (((0x2eU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__op_q)) 
                || (0x30U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__op_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew64__result_o 
            = ((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[1U])) 
                 << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[0U]))) 
               + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__opc_q);
    } else if (((0x2fU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__op_q)) 
                || (0x31U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__op_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew64__result_o 
            = ((- (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[0U])))) 
               + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__opc_q);
    } else {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew64__result_o = 0ULL;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__r = 0U;
    if ((0x2aU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__op_q))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew32__result_o 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[2U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[0U])));
    } else if ((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__op_q))) {
        if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
            if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__r 
                    = ((0xfeU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__r)) 
                       | ((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[0U] 
                              >> 0x1fU)) & (0U != (0x7fffffffU 
                                                   & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[0U]))));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__r 
                    = ((0xfdU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__r)) 
                       | (((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[2U] 
                               >> 0x1fU)) & (0U != 
                                             (0x7fffffffU 
                                              & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[2U]))) 
                          << 1U));
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__r = 0U;
            }
        } else if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__r 
                = ((0xfeU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__r)) 
                   | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[0U] 
                       >> 0x1eU) & (0U != (0xbfffffffU 
                                           & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[0U]))));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__r 
                = ((0xfdU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__r)) 
                   | (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[2U] 
                        >> 0x1eU) & (0U != (0xbfffffffU 
                                            & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[2U]))) 
                      << 1U));
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__r 
                = ((0xfcU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__r)) 
                   | ((2U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[2U] 
                             >> 0x1dU)) | (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[0U] 
                                                 >> 0x1eU))));
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew32__result_o 
            = ((0xffffffff00000000ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew32__result_o) 
               | (IData)((IData)(((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__op_q))
                                   ? (VL_SHIFTR_QQI(64,64,32, 
                                                    (((QData)((IData)(
                                                                      vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[0U]))), 0x1fU) 
                                      + (QData)((IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__r)))))
                                   : (QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[0U]))))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew32__result_o 
            = ((0xffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew32__result_o) 
               | ((QData)((IData)((IData)(((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__op_q))
                                            ? (VL_SHIFTR_QQI(64,64,32, 
                                                             (((QData)((IData)(
                                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[2U]))), 0x1fU) 
                                               + (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__r) 
                                                                     >> 1U)))))
                                            : (QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[2U])))))) 
                  << 0x20U));
    } else if ((((0x2bU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__op_q)) 
                 || (0x2cU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__op_q))) 
                || (0x2dU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__op_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew32__result_o 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[3U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[1U])));
    } else if (((0x2eU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__op_q)) 
                || (0x30U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__op_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew32__result_o 
            = (((QData)((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[2U] 
                                 + (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__opc_q 
                                            >> 0x20U))))) 
                << 0x20U) | (QData)((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[0U] 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__opc_q)))));
    } else if (((0x2fU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__op_q)) 
                || (0x31U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__op_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew32__result_o 
            = ((0xffffffff00000000ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew32__result_o) 
               | (IData)((IData)(((- vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[0U]) 
                                  + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__opc_q)))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew32__result_o 
            = ((0xffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew32__result_o) 
               | ((QData)((IData)(((- vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[2U]) 
                                   + (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__opc_q 
                                              >> 0x20U))))) 
                  << 0x20U));
    } else {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew32__result_o = 0ULL;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r = 0U;
    if ((0x2aU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
            = ((0xffff000000000000ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o) 
               | (((QData)((IData)(((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[2U] 
                                     << 0x10U) | (0xffffU 
                                                  & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[1U])))) 
                   << 0x10U) | (QData)((IData)((0xffffU 
                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[0U])))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
            = ((0xffffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o) 
               | ((QData)((IData)((0xffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[3U]))) 
                  << 0x30U));
    } else if ((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q))) {
        if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
            if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r 
                    = ((0xfeU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r)) 
                       | ((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[0U] 
                              >> 0xfU)) & (0U != (0x7fffU 
                                                  & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[0U]))));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r 
                    = ((0xfdU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r)) 
                       | (((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[1U] 
                               >> 0xfU)) & (0U != (0x7fffU 
                                                   & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[1U]))) 
                          << 1U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r 
                    = ((0xfbU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r)) 
                       | (((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[2U] 
                               >> 0xfU)) & (0U != (0x7fffU 
                                                   & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[2U]))) 
                          << 2U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r 
                    = ((0xf7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r)) 
                       | (((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[3U] 
                               >> 0xfU)) & (0U != (0x7fffU 
                                                   & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[3U]))) 
                          << 3U));
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r = 0U;
            }
        } else if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r 
                = ((0xfeU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r)) 
                   | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[0U] 
                       >> 0xeU) & (0U != (0xbfffU & 
                                          vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[0U]))));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r 
                = ((0xfdU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r)) 
                   | (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[1U] 
                        >> 0xeU) & (0U != (0xbfffU 
                                           & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[1U]))) 
                      << 1U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r 
                = ((0xfbU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r)) 
                   | (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[2U] 
                        >> 0xeU) & (0U != (0xbfffU 
                                           & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[2U]))) 
                      << 2U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r 
                = ((0xf7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r)) 
                   | (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[3U] 
                        >> 0xeU) & (0U != (0xbfffU 
                                           & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[3U]))) 
                      << 3U));
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r 
                = ((0xf8U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r)) 
                   | ((4U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[2U] 
                             >> 0xcU)) | ((2U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[1U] 
                                                 >> 0xdU)) 
                                          | (1U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[0U] 
                                                   >> 0xeU)))));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r 
                = ((0xf7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r)) 
                   | (8U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[3U] 
                            >> 0xbU)));
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
            = ((0xffffffffffff0000ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o) 
               | (IData)((IData)((0xffffU & ((0x32U 
                                              == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q))
                                              ? (VL_SHIFTR_III(32,32,32, 
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[0U], 0x10U) 
                                                 + 
                                                 (1U 
                                                  & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r)))
                                              : (0xffffU 
                                                 & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[0U]))))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
            = ((0xffffffff0000ffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o) 
               | ((QData)((IData)((0xffffU & ((0x32U 
                                               == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q))
                                               ? (VL_SHIFTR_III(32,32,32, 
                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[1U], 0x10U) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r) 
                                                      >> 1U)))
                                               : (0xffffU 
                                                  & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[1U]))))) 
                  << 0x10U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
            = ((0xffff0000ffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o) 
               | ((QData)((IData)((0xffffU & ((0x32U 
                                               == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q))
                                               ? (VL_SHIFTR_III(32,32,32, 
                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[2U], 0x10U) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r) 
                                                      >> 2U)))
                                               : (0xffffU 
                                                  & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[2U]))))) 
                  << 0x20U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
            = ((0xffffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o) 
               | ((QData)((IData)((0xffffU & ((0x32U 
                                               == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q))
                                               ? (VL_SHIFTR_III(32,32,32, 
                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[3U], 0x10U) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r) 
                                                      >> 3U)))
                                               : (0xffffU 
                                                  & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[3U]))))) 
                  << 0x30U));
    } else if ((((0x2bU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q)) 
                 || (0x2cU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q))) 
                || (0x2dU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
            = ((0xffff000000000000ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o) 
               | (((QData)((IData)(((0xffff0000U & 
                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[2U]) 
                                    | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[1U] 
                                       >> 0x10U)))) 
                   << 0x10U) | (QData)((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[0U] 
                                                >> 0x10U)))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
            = ((0xffffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o) 
               | ((QData)((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[3U] 
                                   >> 0x10U))) << 0x30U));
    } else if (((0x2eU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q)) 
                || (0x30U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
            = ((0xffffffff00000000ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o) 
               | (IData)((IData)((((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[1U] 
                                    + (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__opc_q 
                                               >> 0x10U))) 
                                   << 0x10U) | (0xffffU 
                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[0U] 
                                                   + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__opc_q)))))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
            = ((0xffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o) 
               | ((QData)((IData)((((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[3U] 
                                     + (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__opc_q 
                                                >> 0x30U))) 
                                    << 0x10U) | (0xffffU 
                                                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[2U] 
                                                    + (IData)(
                                                              (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__opc_q 
                                                               >> 0x20U))))))) 
                  << 0x20U));
    } else if (((0x2fU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q)) 
                || (0x31U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
            = ((0xffffffffffff0000ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o) 
               | (IData)((IData)((0xffffU & ((- vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[0U]) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__opc_q))))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
            = ((0xffffffff0000ffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o) 
               | ((QData)((IData)((0xffffU & ((- vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[1U]) 
                                              + (IData)(
                                                        (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__opc_q 
                                                         >> 0x10U)))))) 
                  << 0x10U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
            = ((0xffff0000ffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o) 
               | ((QData)((IData)((0xffffU & ((- vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[2U]) 
                                              + (IData)(
                                                        (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__opc_q 
                                                         >> 0x20U)))))) 
                  << 0x20U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
            = ((0xffffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o) 
               | ((QData)((IData)((0xffffU & ((- vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[3U]) 
                                              + (IData)(
                                                        (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__opc_q 
                                                         >> 0x30U)))))) 
                  << 0x30U));
    } else {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o = 0ULL;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r = 0U;
    if ((0x2aU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffffff000000ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | (IData)((IData)(((0xff0000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                                                << 0x10U)) 
                                  | ((0xff00U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                                                 >> 8U)) 
                                     | (0xffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U]))))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffff000000ffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)(((0xff0000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U]) 
                                   | ((0xff00U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                                                  << 8U)) 
                                      | (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                                                  >> 0x10U)))))) 
                  << 0x18U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)(((0xff00U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                                               >> 8U)) 
                                   | (0xffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U])))) 
                  << 0x30U));
    } else if ((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i))) {
        if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
            if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                    = ((0xfeU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                       | ((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                              >> 7U)) & (0U != (0x7fU 
                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U]))));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                    = ((0xfdU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                       | (((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                               >> 0x17U)) & (0U != 
                                             (0x7fU 
                                              & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                                                 >> 0x10U)))) 
                          << 1U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                    = ((0xfbU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                       | (((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                               >> 7U)) & (0U != (0x7fU 
                                                 & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U]))) 
                          << 2U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                    = ((0xf7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                       | (((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                               >> 0x17U)) & (0U != 
                                             (0x7fU 
                                              & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                                                 >> 0x10U)))) 
                          << 3U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                    = ((0xefU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                       | (((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                               >> 7U)) & (0U != (0x7fU 
                                                 & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U]))) 
                          << 4U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                    = ((0xdfU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                       | (((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                               >> 0x17U)) & (0U != 
                                             (0x7fU 
                                              & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                                                 >> 0x10U)))) 
                          << 5U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                    = ((0xbfU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                       | (((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                               >> 7U)) & (0U != (0x7fU 
                                                 & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U]))) 
                          << 6U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                    = ((0x7fU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                       | (((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                               >> 0x17U)) & (0U != 
                                             (0x7fU 
                                              & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                                                 >> 0x10U)))) 
                          << 7U));
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r = 0U;
            }
        } else if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                = ((0xfeU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                   | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                       >> 6U) & (0U != (0xbfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U]))));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                = ((0xfdU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                   | (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                        >> 0x16U) & (0U != (0xbf0000U 
                                            & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U]))) 
                      << 1U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                = ((0xfbU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                   | (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                        >> 6U) & (0U != (0xbfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U]))) 
                      << 2U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                = ((0xf7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                   | (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                        >> 0x16U) & (0U != (0xbf0000U 
                                            & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U]))) 
                      << 3U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                = ((0xefU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                   | (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                        >> 6U) & (0U != (0xbfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U]))) 
                      << 4U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                = ((0xdfU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                   | (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                        >> 0x16U) & (0U != (0xbf0000U 
                                            & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U]))) 
                      << 5U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                = ((0xbfU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                   | (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                        >> 6U) & (0U != (0xbfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U]))) 
                      << 6U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                = ((0x7fU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                   | (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                        >> 0x16U) & (0U != (0xbf0000U 
                                            & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U]))) 
                      << 7U));
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                = ((0xf8U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                   | ((4U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                             >> 4U)) | ((2U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                                               >> 0x15U)) 
                                        | (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                                                 >> 6U)))));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                = ((0xc7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                   | ((0x20U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                                >> 0x11U)) | ((0x10U 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                                                  >> 2U)) 
                                              | (8U 
                                                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                                                    >> 0x13U)))));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                = ((0x3fU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                   | ((0x80U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                                >> 0xfU)) | (0x40U 
                                             & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U])));
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffffffffff00ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | (IData)((IData)((0xffU & ((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i))
                                            ? (VL_SHIFTR_III(16,16,32, 
                                                             (0xffffU 
                                                              & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U]), 7U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)))
                                            : (0xffU 
                                               & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U]))))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffffffff00ffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)((0xffU & ((0x32U 
                                             == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i))
                                             ? (VL_SHIFTR_III(16,16,32, 
                                                              (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                                                               >> 0x10U), 7U) 
                                                + (1U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r) 
                                                      >> 1U)))
                                             : (0xffU 
                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                                                   >> 0x10U)))))) 
                  << 8U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffffff00ffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)((0xffU & ((0x32U 
                                             == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i))
                                             ? (VL_SHIFTR_III(16,16,32, 
                                                              (0xffffU 
                                                               & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U]), 7U) 
                                                + (1U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r) 
                                                      >> 2U)))
                                             : (0xffU 
                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U]))))) 
                  << 0x10U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffff00ffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)((0xffU & ((0x32U 
                                             == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i))
                                             ? (VL_SHIFTR_III(16,16,32, 
                                                              (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                                                               >> 0x10U), 7U) 
                                                + (1U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r) 
                                                      >> 3U)))
                                             : (0xffU 
                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                                                   >> 0x10U)))))) 
                  << 0x18U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffff00ffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)((0xffU & ((0x32U 
                                             == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i))
                                             ? (VL_SHIFTR_III(16,16,32, 
                                                              (0xffffU 
                                                               & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U]), 7U) 
                                                + (1U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r) 
                                                      >> 4U)))
                                             : (0xffU 
                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U]))))) 
                  << 0x20U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffff00ffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)((0xffU & ((0x32U 
                                             == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i))
                                             ? (VL_SHIFTR_III(16,16,32, 
                                                              (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                                                               >> 0x10U), 7U) 
                                                + (1U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r) 
                                                      >> 5U)))
                                             : (0xffU 
                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                                                   >> 0x10U)))))) 
                  << 0x28U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xff00ffffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)((0xffU & ((0x32U 
                                             == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i))
                                             ? (VL_SHIFTR_III(16,16,32, 
                                                              (0xffffU 
                                                               & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U]), 7U) 
                                                + (1U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r) 
                                                      >> 6U)))
                                             : (0xffU 
                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U]))))) 
                  << 0x30U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)((0xffU & ((0x32U 
                                             == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i))
                                             ? (VL_SHIFTR_III(16,16,32, 
                                                              (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                                                               >> 0x10U), 7U) 
                                                + (1U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r) 
                                                      >> 7U)))
                                             : (0xffU 
                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                                                   >> 0x10U)))))) 
                  << 0x38U));
    } else if ((((0x2bU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i)) 
                 || (0x2cU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i))) 
                || (0x2dU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffffff000000ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | (IData)((IData)(((0xff0000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                                                << 8U)) 
                                  | ((0xff00U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                                                 >> 0x10U)) 
                                     | (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                                                 >> 8U)))))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffff000000ffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)(((0xff0000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                                                 >> 8U)) 
                                   | ((0xff00U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U]) 
                                      | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                                         >> 0x18U))))) 
                  << 0x18U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)(((0xff00U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                                               >> 0x10U)) 
                                   | (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                                               >> 8U))))) 
                  << 0x30U));
    } else if (((0x2eU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i)) 
                || (0x30U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffffffff0000ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | (IData)((IData)(((0xff00U & ((((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                                                 << 0x10U) 
                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                                                   >> 0x10U)) 
                                               + (IData)(
                                                         (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i 
                                                          >> 8U))) 
                                              << 8U)) 
                                  | (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                                              + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i)))))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffff0000ffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)(((0xff00U & ((((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                                                  << 0x10U) 
                                                 | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                                                    >> 0x10U)) 
                                                + (IData)(
                                                          (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i 
                                                           >> 0x18U))) 
                                               << 8U)) 
                                   | (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                                               + (IData)(
                                                         (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i 
                                                          >> 0x10U))))))) 
                  << 0x10U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffff0000ffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)(((0xff00U & ((((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                                                  << 0x10U) 
                                                 | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                                                    >> 0x10U)) 
                                                + (IData)(
                                                          (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i 
                                                           >> 0x28U))) 
                                               << 8U)) 
                                   | (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                                               + (IData)(
                                                         (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i 
                                                          >> 0x20U))))))) 
                  << 0x20U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)(((0xff00U & ((((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                                                  << 0x10U) 
                                                 | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                                                    >> 0x10U)) 
                                                + (IData)(
                                                          (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i 
                                                           >> 0x38U))) 
                                               << 8U)) 
                                   | (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                                               + (IData)(
                                                         (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i 
                                                          >> 0x30U))))))) 
                  << 0x30U));
    } else if (((0x2fU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i)) 
                || (0x31U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffffffffff00ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | (IData)((IData)((0xffU & ((- vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U]) 
                                           + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i))))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffffffff00ffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)((0xffU & ((- ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                                                 << 0x10U) 
                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                                                   >> 0x10U))) 
                                            + (IData)(
                                                      (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i 
                                                       >> 8U)))))) 
                  << 8U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffffff00ffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)((0xffU & ((- vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U]) 
                                            + (IData)(
                                                      (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i 
                                                       >> 0x10U)))))) 
                  << 0x10U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffff00ffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)((0xffU & ((- ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                                                 << 0x10U) 
                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                                                   >> 0x10U))) 
                                            + (IData)(
                                                      (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i 
                                                       >> 0x18U)))))) 
                  << 0x18U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffff00ffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)((0xffU & ((- vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U]) 
                                            + (IData)(
                                                      (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i 
                                                       >> 0x20U)))))) 
                  << 0x20U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffff00ffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)((0xffU & ((- ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                                                 << 0x10U) 
                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                                                   >> 0x10U))) 
                                            + (IData)(
                                                      (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i 
                                                       >> 0x28U)))))) 
                  << 0x28U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xff00ffffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)((0xffU & ((- vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U]) 
                                            + (IData)(
                                                      (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i 
                                                       >> 0x30U)))))) 
                  << 0x30U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)((0xffU & ((- ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                                                 << 0x10U) 
                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                                                   >> 0x10U))) 
                                            + (IData)(
                                                      (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i 
                                                       >> 0x38U)))))) 
                  << 0x38U));
    } else {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o = 0ULL;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__vxsat_o 
        = ((((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i)) 
             << 7U) & (((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
                                 >> 0x3fU)) << 7U) 
                       ^ (0xffff80U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT____VdfgTmp_h356aaa47__0) 
                                       >> 8U)))) | 
           ((((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i)) 
              << 6U) & (((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
                                  >> 0x37U)) << 6U) 
                        ^ (0x7fffc0U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT____VdfgTmp_h41bc6aa6__0) 
                                        >> 9U)))) | 
            ((((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i)) 
               << 5U) & (((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
                                   >> 0x2fU)) << 5U) 
                         ^ (0x3fffe0U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT____VdfgTmp_h794d12a4__0) 
                                         >> 0xaU)))) 
             | ((((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i)) 
                  << 4U) & (((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
                                      >> 0x27U)) << 4U) 
                            ^ (0x1ffff0U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT____VdfgTmp_h8bfb1247__0) 
                                            >> 0xbU)))) 
                | ((((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i)) 
                     << 3U) & (((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
                                         >> 0x1fU)) 
                                << 3U) ^ (0xffff8U 
                                          & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT____VdfgTmp_h3ebd511b__0) 
                                             >> 0xcU)))) 
                   | ((((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i)) 
                        << 2U) & (((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
                                            >> 0x17U)) 
                                   << 2U) ^ (0x7fffcU 
                                             & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT____VdfgTmp_h292fcbac__0) 
                                                >> 0xdU)))) 
                      | ((((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i)) 
                           << 1U) & (((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
                                               >> 0xfU)) 
                                      << 1U) ^ (0x3fffeU 
                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT____VdfgTmp_h9bc07f5c__0) 
                                                   >> 0xeU)))) 
                         | ((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i)) 
                            & ((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
                                        >> 7U)) ^ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT____VdfgTmp_h3bc13685__0) 
                                                   >> 0xfU))))))))));
    __Vtemp_9[0U] = (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o);
    __Vtemp_9[1U] = (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
                             >> 0x20U));
    __Vtemp_9[2U] = (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o);
    __Vtemp_9[3U] = (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
                             >> 0x20U));
    __Vtemp_9[4U] = (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew32__result_o);
    __Vtemp_9[5U] = (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew32__result_o 
                             >> 0x20U));
    __Vtemp_9[6U] = (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew64__result_o);
    __Vtemp_9[7U] = (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew64__result_o 
                             >> 0x20U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vmul_result 
        = (((QData)((IData)(__Vtemp_9[(((IData)(0x3fU) 
                                        + (0xffU & 
                                           VL_SHIFTL_III(8,32,32, 
                                                         (7U 
                                                          & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[0U] 
                                                             >> 3U)), 6U))) 
                                       >> 5U)])) << 
            ((0U == (0x1fU & VL_SHIFTL_III(8,32,32, 
                                           (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[0U] 
                                                  >> 3U)), 6U)))
              ? 0x20U : ((IData)(0x40U) - (0x1fU & 
                                           VL_SHIFTL_III(8,32,32, 
                                                         (7U 
                                                          & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[0U] 
                                                             >> 3U)), 6U))))) 
           | (((0U == (0x1fU & VL_SHIFTL_III(8,32,32, 
                                             (7U & 
                                              (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[0U] 
                                               >> 3U)), 6U)))
                ? 0ULL : ((QData)((IData)(__Vtemp_9[
                                          (((IData)(0x1fU) 
                                            + (0xffU 
                                               & VL_SHIFTL_III(8,32,32, 
                                                               (7U 
                                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[0U] 
                                                                   >> 3U)), 6U))) 
                                           >> 5U)])) 
                          << ((IData)(0x20U) - (0x1fU 
                                                & VL_SHIFTL_III(8,32,32, 
                                                                (7U 
                                                                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[0U] 
                                                                    >> 3U)), 6U))))) 
              | ((QData)((IData)(__Vtemp_9[(7U & (VL_SHIFTL_III(8,32,32, 
                                                                (7U 
                                                                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[0U] 
                                                                    >> 3U)), 6U) 
                                                  >> 5U))])) 
                 >> (0x1fU & VL_SHIFTL_III(8,32,32, 
                                           (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[0U] 
                                                  >> 3U)), 6U)))));
}

VL_INLINE_OPT void Vara_tb_verilator___024root___nba_comb__TOP__581(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___nba_comb__TOP__581\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<8>/*255:0*/ __Vtemp_9;
    // Body
    if ((0x2aU != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__op_q))) {
        if ((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__op_q))) {
            if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_p_mul_ew64__DOT__p_mul__DOT__unnamedblk3__DOT__b = 1U;
                }
                if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_p_mul_ew64__DOT__p_mul__DOT__unnamedblk2__DOT__b = 1U;
                }
            }
            if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_p_mul_ew64__DOT__p_mul__DOT__unnamedblk4__DOT__b = 1U;
                }
            }
        }
    }
    if ((0x2aU != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__op_q))) {
        if ((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__op_q))) {
            if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_p_mul_ew32__DOT__p_mul__DOT__unnamedblk10__DOT__b = 2U;
                }
                if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_p_mul_ew32__DOT__p_mul__DOT__unnamedblk11__DOT__b = 2U;
                }
            }
            if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_p_mul_ew32__DOT__p_mul__DOT__unnamedblk12__DOT__b = 2U;
                }
            }
        }
    }
    if ((0x2aU != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q))) {
        if ((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q))) {
            if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_p_mul_ew16__DOT__p_mul__DOT__unnamedblk18__DOT__b = 4U;
                }
                if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_p_mul_ew16__DOT__p_mul__DOT__unnamedblk19__DOT__b = 4U;
                }
            }
            if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_p_mul_ew16__DOT__p_mul__DOT__unnamedblk20__DOT__b = 4U;
                }
            }
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vmul_mask 
        = (0xffU & ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__mask_q) 
                      << 0x18U) | (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__mask_q) 
                                    << 0x10U) | (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__mask_q) 
                                                  << 8U) 
                                                 | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__mask_i)))) 
                    >> (0x1fU & VL_SHIFTL_III(5,32,32, 
                                              (7U & 
                                               (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[0U] 
                                                >> 3U)), 3U))));
    if ((0x2aU != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i))) {
        if ((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i))) {
            if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__gen_p_mul_ew8__DOT__p_mul__DOT__unnamedblk28__DOT__b = 8U;
                }
            }
            if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__gen_p_mul_ew8__DOT__p_mul__DOT__unnamedblk26__DOT__b = 8U;
                }
                if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__gen_p_mul_ew8__DOT__p_mul__DOT__unnamedblk27__DOT__b = 8U;
                }
            }
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew64__result_o = 0ULL;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__r = 0U;
    if ((0x2aU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__op_q))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew64__result_o 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[0U])));
    } else if ((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__op_q))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__r 
            = ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))
                ? ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))
                    ? ((0xfeU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__r)) 
                       | ((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[1U] 
                              >> 0x1fU)) & (0ULL != 
                                            (0x7fffffffffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[0U])))))))
                    : 0U) : ((0xfeU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__r)) 
                             | (1U & ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))
                                       ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[1U] 
                                           >> 0x1eU) 
                                          & ((0ULL 
                                              != (0x3fffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[0U]))))) 
                                             | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[1U] 
                                                >> 0x1fU)))
                                       : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[1U] 
                                          >> 0x1eU)))));
        VL_SHIFTR_WWI(128,128,32, __Vtemp_1, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res, 0x3fU);
        __Vtemp_2[0U] = (1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__r));
        __Vtemp_2[1U] = 0U;
        __Vtemp_2[2U] = 0U;
        __Vtemp_2[3U] = 0U;
        VL_ADD_W(4, __Vtemp_3, __Vtemp_1, __Vtemp_2);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew64__result_o 
            = (((QData)((IData)(((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__op_q))
                                  ? __Vtemp_3[1U] : (IData)(
                                                            ((((QData)((IData)(
                                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[0U]))) 
                                                             >> 0x20U))))) 
                << 0x20U) | (QData)((IData)(((0x32U 
                                              == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__op_q))
                                              ? __Vtemp_3[0U]
                                              : (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[0U]))))))));
    } else if ((((0x2bU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__op_q)) 
                 || (0x2cU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__op_q))) 
                || (0x2dU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__op_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew64__result_o 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[3U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[2U])));
    } else if (((0x2eU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__op_q)) 
                || (0x30U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__op_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew64__result_o 
            = ((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[1U])) 
                 << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[0U]))) 
               + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__opc_q);
    } else if (((0x2fU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__op_q)) 
                || (0x31U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__op_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew64__result_o 
            = ((- (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[0U])))) 
               + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__opc_q);
    } else {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew64__result_o = 0ULL;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__r = 0U;
    if ((0x2aU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__op_q))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew32__result_o 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[2U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[0U])));
    } else if ((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__op_q))) {
        if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
            if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__r 
                    = ((0xfeU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__r)) 
                       | ((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[0U] 
                              >> 0x1fU)) & (0U != (0x7fffffffU 
                                                   & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[0U]))));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__r 
                    = ((0xfdU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__r)) 
                       | (((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[2U] 
                               >> 0x1fU)) & (0U != 
                                             (0x7fffffffU 
                                              & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[2U]))) 
                          << 1U));
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__r = 0U;
            }
        } else if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__r 
                = ((0xfeU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__r)) 
                   | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[0U] 
                       >> 0x1eU) & (0U != (0xbfffffffU 
                                           & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[0U]))));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__r 
                = ((0xfdU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__r)) 
                   | (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[2U] 
                        >> 0x1eU) & (0U != (0xbfffffffU 
                                            & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[2U]))) 
                      << 1U));
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__r 
                = ((0xfcU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__r)) 
                   | ((2U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[2U] 
                             >> 0x1dU)) | (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[0U] 
                                                 >> 0x1eU))));
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew32__result_o 
            = ((0xffffffff00000000ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew32__result_o) 
               | (IData)((IData)(((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__op_q))
                                   ? (VL_SHIFTR_QQI(64,64,32, 
                                                    (((QData)((IData)(
                                                                      vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[0U]))), 0x1fU) 
                                      + (QData)((IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__r)))))
                                   : (QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[0U]))))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew32__result_o 
            = ((0xffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew32__result_o) 
               | ((QData)((IData)((IData)(((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__op_q))
                                            ? (VL_SHIFTR_QQI(64,64,32, 
                                                             (((QData)((IData)(
                                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[2U]))), 0x1fU) 
                                               + (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__r) 
                                                                     >> 1U)))))
                                            : (QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[2U])))))) 
                  << 0x20U));
    } else if ((((0x2bU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__op_q)) 
                 || (0x2cU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__op_q))) 
                || (0x2dU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__op_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew32__result_o 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[3U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[1U])));
    } else if (((0x2eU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__op_q)) 
                || (0x30U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__op_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew32__result_o 
            = (((QData)((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[2U] 
                                 + (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__opc_q 
                                            >> 0x20U))))) 
                << 0x20U) | (QData)((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[0U] 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__opc_q)))));
    } else if (((0x2fU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__op_q)) 
                || (0x31U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__op_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew32__result_o 
            = ((0xffffffff00000000ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew32__result_o) 
               | (IData)((IData)(((- vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[0U]) 
                                  + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__opc_q)))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew32__result_o 
            = ((0xffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew32__result_o) 
               | ((QData)((IData)(((- vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[2U]) 
                                   + (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__opc_q 
                                              >> 0x20U))))) 
                  << 0x20U));
    } else {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew32__result_o = 0ULL;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r = 0U;
    if ((0x2aU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
            = ((0xffff000000000000ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o) 
               | (((QData)((IData)(((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[2U] 
                                     << 0x10U) | (0xffffU 
                                                  & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[1U])))) 
                   << 0x10U) | (QData)((IData)((0xffffU 
                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[0U])))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
            = ((0xffffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o) 
               | ((QData)((IData)((0xffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[3U]))) 
                  << 0x30U));
    } else if ((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q))) {
        if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
            if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r 
                    = ((0xfeU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r)) 
                       | ((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[0U] 
                              >> 0xfU)) & (0U != (0x7fffU 
                                                  & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[0U]))));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r 
                    = ((0xfdU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r)) 
                       | (((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[1U] 
                               >> 0xfU)) & (0U != (0x7fffU 
                                                   & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[1U]))) 
                          << 1U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r 
                    = ((0xfbU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r)) 
                       | (((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[2U] 
                               >> 0xfU)) & (0U != (0x7fffU 
                                                   & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[2U]))) 
                          << 2U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r 
                    = ((0xf7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r)) 
                       | (((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[3U] 
                               >> 0xfU)) & (0U != (0x7fffU 
                                                   & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[3U]))) 
                          << 3U));
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r = 0U;
            }
        } else if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r 
                = ((0xfeU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r)) 
                   | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[0U] 
                       >> 0xeU) & (0U != (0xbfffU & 
                                          vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[0U]))));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r 
                = ((0xfdU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r)) 
                   | (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[1U] 
                        >> 0xeU) & (0U != (0xbfffU 
                                           & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[1U]))) 
                      << 1U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r 
                = ((0xfbU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r)) 
                   | (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[2U] 
                        >> 0xeU) & (0U != (0xbfffU 
                                           & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[2U]))) 
                      << 2U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r 
                = ((0xf7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r)) 
                   | (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[3U] 
                        >> 0xeU) & (0U != (0xbfffU 
                                           & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[3U]))) 
                      << 3U));
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r 
                = ((0xf8U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r)) 
                   | ((4U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[2U] 
                             >> 0xcU)) | ((2U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[1U] 
                                                 >> 0xdU)) 
                                          | (1U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[0U] 
                                                   >> 0xeU)))));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r 
                = ((0xf7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r)) 
                   | (8U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[3U] 
                            >> 0xbU)));
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
            = ((0xffffffffffff0000ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o) 
               | (IData)((IData)((0xffffU & ((0x32U 
                                              == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q))
                                              ? (VL_SHIFTR_III(32,32,32, 
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[0U], 0x10U) 
                                                 + 
                                                 (1U 
                                                  & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r)))
                                              : (0xffffU 
                                                 & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[0U]))))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
            = ((0xffffffff0000ffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o) 
               | ((QData)((IData)((0xffffU & ((0x32U 
                                               == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q))
                                               ? (VL_SHIFTR_III(32,32,32, 
                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[1U], 0x10U) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r) 
                                                      >> 1U)))
                                               : (0xffffU 
                                                  & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[1U]))))) 
                  << 0x10U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
            = ((0xffff0000ffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o) 
               | ((QData)((IData)((0xffffU & ((0x32U 
                                               == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q))
                                               ? (VL_SHIFTR_III(32,32,32, 
                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[2U], 0x10U) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r) 
                                                      >> 2U)))
                                               : (0xffffU 
                                                  & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[2U]))))) 
                  << 0x20U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
            = ((0xffffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o) 
               | ((QData)((IData)((0xffffU & ((0x32U 
                                               == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q))
                                               ? (VL_SHIFTR_III(32,32,32, 
                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[3U], 0x10U) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r) 
                                                      >> 3U)))
                                               : (0xffffU 
                                                  & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[3U]))))) 
                  << 0x30U));
    } else if ((((0x2bU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q)) 
                 || (0x2cU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q))) 
                || (0x2dU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
            = ((0xffff000000000000ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o) 
               | (((QData)((IData)(((0xffff0000U & 
                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[2U]) 
                                    | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[1U] 
                                       >> 0x10U)))) 
                   << 0x10U) | (QData)((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[0U] 
                                                >> 0x10U)))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
            = ((0xffffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o) 
               | ((QData)((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[3U] 
                                   >> 0x10U))) << 0x30U));
    } else if (((0x2eU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q)) 
                || (0x30U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
            = ((0xffffffff00000000ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o) 
               | (IData)((IData)((((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[1U] 
                                    + (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__opc_q 
                                               >> 0x10U))) 
                                   << 0x10U) | (0xffffU 
                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[0U] 
                                                   + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__opc_q)))))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
            = ((0xffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o) 
               | ((QData)((IData)((((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[3U] 
                                     + (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__opc_q 
                                                >> 0x30U))) 
                                    << 0x10U) | (0xffffU 
                                                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[2U] 
                                                    + (IData)(
                                                              (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__opc_q 
                                                               >> 0x20U))))))) 
                  << 0x20U));
    } else if (((0x2fU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q)) 
                || (0x31U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
            = ((0xffffffffffff0000ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o) 
               | (IData)((IData)((0xffffU & ((- vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[0U]) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__opc_q))))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
            = ((0xffffffff0000ffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o) 
               | ((QData)((IData)((0xffffU & ((- vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[1U]) 
                                              + (IData)(
                                                        (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__opc_q 
                                                         >> 0x10U)))))) 
                  << 0x10U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
            = ((0xffff0000ffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o) 
               | ((QData)((IData)((0xffffU & ((- vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[2U]) 
                                              + (IData)(
                                                        (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__opc_q 
                                                         >> 0x20U)))))) 
                  << 0x20U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
            = ((0xffffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o) 
               | ((QData)((IData)((0xffffU & ((- vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[3U]) 
                                              + (IData)(
                                                        (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__opc_q 
                                                         >> 0x30U)))))) 
                  << 0x30U));
    } else {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o = 0ULL;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r = 0U;
    if ((0x2aU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffffff000000ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | (IData)((IData)(((0xff0000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                                                << 0x10U)) 
                                  | ((0xff00U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                                                 >> 8U)) 
                                     | (0xffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U]))))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffff000000ffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)(((0xff0000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U]) 
                                   | ((0xff00U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                                                  << 8U)) 
                                      | (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                                                  >> 0x10U)))))) 
                  << 0x18U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)(((0xff00U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                                               >> 8U)) 
                                   | (0xffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U])))) 
                  << 0x30U));
    } else if ((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i))) {
        if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
            if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                    = ((0xfeU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                       | ((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                              >> 7U)) & (0U != (0x7fU 
                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U]))));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                    = ((0xfdU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                       | (((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                               >> 0x17U)) & (0U != 
                                             (0x7fU 
                                              & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                                                 >> 0x10U)))) 
                          << 1U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                    = ((0xfbU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                       | (((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                               >> 7U)) & (0U != (0x7fU 
                                                 & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U]))) 
                          << 2U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                    = ((0xf7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                       | (((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                               >> 0x17U)) & (0U != 
                                             (0x7fU 
                                              & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                                                 >> 0x10U)))) 
                          << 3U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                    = ((0xefU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                       | (((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                               >> 7U)) & (0U != (0x7fU 
                                                 & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U]))) 
                          << 4U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                    = ((0xdfU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                       | (((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                               >> 0x17U)) & (0U != 
                                             (0x7fU 
                                              & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                                                 >> 0x10U)))) 
                          << 5U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                    = ((0xbfU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                       | (((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                               >> 7U)) & (0U != (0x7fU 
                                                 & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U]))) 
                          << 6U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                    = ((0x7fU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                       | (((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                               >> 0x17U)) & (0U != 
                                             (0x7fU 
                                              & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                                                 >> 0x10U)))) 
                          << 7U));
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r = 0U;
            }
        } else if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                = ((0xfeU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                   | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                       >> 6U) & (0U != (0xbfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U]))));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                = ((0xfdU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                   | (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                        >> 0x16U) & (0U != (0xbf0000U 
                                            & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U]))) 
                      << 1U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                = ((0xfbU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                   | (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                        >> 6U) & (0U != (0xbfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U]))) 
                      << 2U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                = ((0xf7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                   | (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                        >> 0x16U) & (0U != (0xbf0000U 
                                            & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U]))) 
                      << 3U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                = ((0xefU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                   | (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                        >> 6U) & (0U != (0xbfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U]))) 
                      << 4U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                = ((0xdfU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                   | (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                        >> 0x16U) & (0U != (0xbf0000U 
                                            & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U]))) 
                      << 5U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                = ((0xbfU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                   | (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                        >> 6U) & (0U != (0xbfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U]))) 
                      << 6U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                = ((0x7fU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                   | (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                        >> 0x16U) & (0U != (0xbf0000U 
                                            & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U]))) 
                      << 7U));
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                = ((0xf8U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                   | ((4U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                             >> 4U)) | ((2U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                                               >> 0x15U)) 
                                        | (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                                                 >> 6U)))));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                = ((0xc7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                   | ((0x20U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                                >> 0x11U)) | ((0x10U 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                                                  >> 2U)) 
                                              | (8U 
                                                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                                                    >> 0x13U)))));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                = ((0x3fU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                   | ((0x80U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                                >> 0xfU)) | (0x40U 
                                             & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U])));
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffffffffff00ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | (IData)((IData)((0xffU & ((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i))
                                            ? (VL_SHIFTR_III(16,16,32, 
                                                             (0xffffU 
                                                              & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U]), 7U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)))
                                            : (0xffU 
                                               & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U]))))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffffffff00ffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)((0xffU & ((0x32U 
                                             == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i))
                                             ? (VL_SHIFTR_III(16,16,32, 
                                                              (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                                                               >> 0x10U), 7U) 
                                                + (1U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r) 
                                                      >> 1U)))
                                             : (0xffU 
                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                                                   >> 0x10U)))))) 
                  << 8U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffffff00ffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)((0xffU & ((0x32U 
                                             == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i))
                                             ? (VL_SHIFTR_III(16,16,32, 
                                                              (0xffffU 
                                                               & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U]), 7U) 
                                                + (1U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r) 
                                                      >> 2U)))
                                             : (0xffU 
                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U]))))) 
                  << 0x10U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffff00ffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)((0xffU & ((0x32U 
                                             == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i))
                                             ? (VL_SHIFTR_III(16,16,32, 
                                                              (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                                                               >> 0x10U), 7U) 
                                                + (1U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r) 
                                                      >> 3U)))
                                             : (0xffU 
                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                                                   >> 0x10U)))))) 
                  << 0x18U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffff00ffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)((0xffU & ((0x32U 
                                             == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i))
                                             ? (VL_SHIFTR_III(16,16,32, 
                                                              (0xffffU 
                                                               & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U]), 7U) 
                                                + (1U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r) 
                                                      >> 4U)))
                                             : (0xffU 
                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U]))))) 
                  << 0x20U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffff00ffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)((0xffU & ((0x32U 
                                             == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i))
                                             ? (VL_SHIFTR_III(16,16,32, 
                                                              (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                                                               >> 0x10U), 7U) 
                                                + (1U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r) 
                                                      >> 5U)))
                                             : (0xffU 
                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                                                   >> 0x10U)))))) 
                  << 0x28U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xff00ffffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)((0xffU & ((0x32U 
                                             == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i))
                                             ? (VL_SHIFTR_III(16,16,32, 
                                                              (0xffffU 
                                                               & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U]), 7U) 
                                                + (1U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r) 
                                                      >> 6U)))
                                             : (0xffU 
                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U]))))) 
                  << 0x30U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)((0xffU & ((0x32U 
                                             == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i))
                                             ? (VL_SHIFTR_III(16,16,32, 
                                                              (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                                                               >> 0x10U), 7U) 
                                                + (1U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r) 
                                                      >> 7U)))
                                             : (0xffU 
                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                                                   >> 0x10U)))))) 
                  << 0x38U));
    } else if ((((0x2bU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i)) 
                 || (0x2cU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i))) 
                || (0x2dU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffffff000000ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | (IData)((IData)(((0xff0000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                                                << 8U)) 
                                  | ((0xff00U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                                                 >> 0x10U)) 
                                     | (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                                                 >> 8U)))))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffff000000ffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)(((0xff0000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                                                 >> 8U)) 
                                   | ((0xff00U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U]) 
                                      | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                                         >> 0x18U))))) 
                  << 0x18U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)(((0xff00U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                                               >> 0x10U)) 
                                   | (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                                               >> 8U))))) 
                  << 0x30U));
    } else if (((0x2eU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i)) 
                || (0x30U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffffffff0000ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | (IData)((IData)(((0xff00U & ((((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                                                 << 0x10U) 
                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                                                   >> 0x10U)) 
                                               + (IData)(
                                                         (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i 
                                                          >> 8U))) 
                                              << 8U)) 
                                  | (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                                              + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i)))))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffff0000ffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)(((0xff00U & ((((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                                                  << 0x10U) 
                                                 | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                                                    >> 0x10U)) 
                                                + (IData)(
                                                          (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i 
                                                           >> 0x18U))) 
                                               << 8U)) 
                                   | (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                                               + (IData)(
                                                         (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i 
                                                          >> 0x10U))))))) 
                  << 0x10U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffff0000ffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)(((0xff00U & ((((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                                                  << 0x10U) 
                                                 | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                                                    >> 0x10U)) 
                                                + (IData)(
                                                          (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i 
                                                           >> 0x28U))) 
                                               << 8U)) 
                                   | (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                                               + (IData)(
                                                         (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i 
                                                          >> 0x20U))))))) 
                  << 0x20U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)(((0xff00U & ((((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                                                  << 0x10U) 
                                                 | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                                                    >> 0x10U)) 
                                                + (IData)(
                                                          (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i 
                                                           >> 0x38U))) 
                                               << 8U)) 
                                   | (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                                               + (IData)(
                                                         (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i 
                                                          >> 0x30U))))))) 
                  << 0x30U));
    } else if (((0x2fU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i)) 
                || (0x31U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffffffffff00ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | (IData)((IData)((0xffU & ((- vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U]) 
                                           + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i))))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffffffff00ffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)((0xffU & ((- ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                                                 << 0x10U) 
                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                                                   >> 0x10U))) 
                                            + (IData)(
                                                      (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i 
                                                       >> 8U)))))) 
                  << 8U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffffff00ffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)((0xffU & ((- vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U]) 
                                            + (IData)(
                                                      (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i 
                                                       >> 0x10U)))))) 
                  << 0x10U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffff00ffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)((0xffU & ((- ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                                                 << 0x10U) 
                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                                                   >> 0x10U))) 
                                            + (IData)(
                                                      (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i 
                                                       >> 0x18U)))))) 
                  << 0x18U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffff00ffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)((0xffU & ((- vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U]) 
                                            + (IData)(
                                                      (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i 
                                                       >> 0x20U)))))) 
                  << 0x20U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffff00ffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)((0xffU & ((- ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                                                 << 0x10U) 
                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                                                   >> 0x10U))) 
                                            + (IData)(
                                                      (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i 
                                                       >> 0x28U)))))) 
                  << 0x28U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xff00ffffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)((0xffU & ((- vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U]) 
                                            + (IData)(
                                                      (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i 
                                                       >> 0x30U)))))) 
                  << 0x30U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)((0xffU & ((- ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                                                 << 0x10U) 
                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                                                   >> 0x10U))) 
                                            + (IData)(
                                                      (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i 
                                                       >> 0x38U)))))) 
                  << 0x38U));
    } else {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o = 0ULL;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__vxsat_o 
        = ((((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i)) 
             << 7U) & (((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
                                 >> 0x3fU)) << 7U) 
                       ^ (0xffff80U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT____VdfgTmp_h356aaa47__0) 
                                       >> 8U)))) | 
           ((((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i)) 
              << 6U) & (((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
                                  >> 0x37U)) << 6U) 
                        ^ (0x7fffc0U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT____VdfgTmp_h41bc6aa6__0) 
                                        >> 9U)))) | 
            ((((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i)) 
               << 5U) & (((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
                                   >> 0x2fU)) << 5U) 
                         ^ (0x3fffe0U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT____VdfgTmp_h794d12a4__0) 
                                         >> 0xaU)))) 
             | ((((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i)) 
                  << 4U) & (((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
                                      >> 0x27U)) << 4U) 
                            ^ (0x1ffff0U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT____VdfgTmp_h8bfb1247__0) 
                                            >> 0xbU)))) 
                | ((((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i)) 
                     << 3U) & (((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
                                         >> 0x1fU)) 
                                << 3U) ^ (0xffff8U 
                                          & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT____VdfgTmp_h3ebd511b__0) 
                                             >> 0xcU)))) 
                   | ((((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i)) 
                        << 2U) & (((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
                                            >> 0x17U)) 
                                   << 2U) ^ (0x7fffcU 
                                             & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT____VdfgTmp_h292fcbac__0) 
                                                >> 0xdU)))) 
                      | ((((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i)) 
                           << 1U) & (((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
                                               >> 0xfU)) 
                                      << 1U) ^ (0x3fffeU 
                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT____VdfgTmp_h9bc07f5c__0) 
                                                   >> 0xeU)))) 
                         | ((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i)) 
                            & ((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
                                        >> 7U)) ^ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT____VdfgTmp_h3bc13685__0) 
                                                   >> 0xfU))))))))));
    __Vtemp_9[0U] = (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o);
    __Vtemp_9[1U] = (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
                             >> 0x20U));
    __Vtemp_9[2U] = (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o);
    __Vtemp_9[3U] = (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
                             >> 0x20U));
    __Vtemp_9[4U] = (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew32__result_o);
    __Vtemp_9[5U] = (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew32__result_o 
                             >> 0x20U));
    __Vtemp_9[6U] = (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew64__result_o);
    __Vtemp_9[7U] = (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew64__result_o 
                             >> 0x20U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vmul_result 
        = (((QData)((IData)(__Vtemp_9[(((IData)(0x3fU) 
                                        + (0xffU & 
                                           VL_SHIFTL_III(8,32,32, 
                                                         (7U 
                                                          & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[0U] 
                                                             >> 3U)), 6U))) 
                                       >> 5U)])) << 
            ((0U == (0x1fU & VL_SHIFTL_III(8,32,32, 
                                           (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[0U] 
                                                  >> 3U)), 6U)))
              ? 0x20U : ((IData)(0x40U) - (0x1fU & 
                                           VL_SHIFTL_III(8,32,32, 
                                                         (7U 
                                                          & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[0U] 
                                                             >> 3U)), 6U))))) 
           | (((0U == (0x1fU & VL_SHIFTL_III(8,32,32, 
                                             (7U & 
                                              (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[0U] 
                                               >> 3U)), 6U)))
                ? 0ULL : ((QData)((IData)(__Vtemp_9[
                                          (((IData)(0x1fU) 
                                            + (0xffU 
                                               & VL_SHIFTL_III(8,32,32, 
                                                               (7U 
                                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[0U] 
                                                                   >> 3U)), 6U))) 
                                           >> 5U)])) 
                          << ((IData)(0x20U) - (0x1fU 
                                                & VL_SHIFTL_III(8,32,32, 
                                                                (7U 
                                                                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[0U] 
                                                                    >> 3U)), 6U))))) 
              | ((QData)((IData)(__Vtemp_9[(7U & (VL_SHIFTL_III(8,32,32, 
                                                                (7U 
                                                                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[0U] 
                                                                    >> 3U)), 6U) 
                                                  >> 5U))])) 
                 >> (0x1fU & VL_SHIFTL_III(8,32,32, 
                                           (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[0U] 
                                                  >> 3U)), 6U)))));
}

VL_INLINE_OPT void Vara_tb_verilator___024root___nba_comb__TOP__582(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___nba_comb__TOP__582\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<8>/*255:0*/ __Vtemp_9;
    // Body
    if ((0x2aU != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__op_q))) {
        if ((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__op_q))) {
            if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_p_mul_ew64__DOT__p_mul__DOT__unnamedblk3__DOT__b = 1U;
                }
                if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_p_mul_ew64__DOT__p_mul__DOT__unnamedblk2__DOT__b = 1U;
                }
            }
            if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_p_mul_ew64__DOT__p_mul__DOT__unnamedblk4__DOT__b = 1U;
                }
            }
        }
    }
    if ((0x2aU != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__op_q))) {
        if ((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__op_q))) {
            if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_p_mul_ew32__DOT__p_mul__DOT__unnamedblk10__DOT__b = 2U;
                }
                if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_p_mul_ew32__DOT__p_mul__DOT__unnamedblk11__DOT__b = 2U;
                }
            }
            if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_p_mul_ew32__DOT__p_mul__DOT__unnamedblk12__DOT__b = 2U;
                }
            }
        }
    }
    if ((0x2aU != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q))) {
        if ((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q))) {
            if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_p_mul_ew16__DOT__p_mul__DOT__unnamedblk18__DOT__b = 4U;
                }
                if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_p_mul_ew16__DOT__p_mul__DOT__unnamedblk19__DOT__b = 4U;
                }
            }
            if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_p_mul_ew16__DOT__p_mul__DOT__unnamedblk20__DOT__b = 4U;
                }
            }
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vmul_mask 
        = (0xffU & ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__mask_q) 
                      << 0x18U) | (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__mask_q) 
                                    << 0x10U) | (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__mask_q) 
                                                  << 8U) 
                                                 | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__mask_i)))) 
                    >> (0x1fU & VL_SHIFTL_III(5,32,32, 
                                              (7U & 
                                               (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[0U] 
                                                >> 3U)), 3U))));
    if ((0x2aU != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i))) {
        if ((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i))) {
            if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__gen_p_mul_ew8__DOT__p_mul__DOT__unnamedblk28__DOT__b = 8U;
                }
            }
            if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__gen_p_mul_ew8__DOT__p_mul__DOT__unnamedblk26__DOT__b = 8U;
                }
                if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__gen_p_mul_ew8__DOT__p_mul__DOT__unnamedblk27__DOT__b = 8U;
                }
            }
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew64__result_o = 0ULL;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__r = 0U;
    if ((0x2aU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__op_q))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew64__result_o 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[0U])));
    } else if ((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__op_q))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__r 
            = ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))
                ? ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))
                    ? ((0xfeU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__r)) 
                       | ((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[1U] 
                              >> 0x1fU)) & (0ULL != 
                                            (0x7fffffffffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[0U])))))))
                    : 0U) : ((0xfeU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__r)) 
                             | (1U & ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))
                                       ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[1U] 
                                           >> 0x1eU) 
                                          & ((0ULL 
                                              != (0x3fffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[0U]))))) 
                                             | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[1U] 
                                                >> 0x1fU)))
                                       : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[1U] 
                                          >> 0x1eU)))));
        VL_SHIFTR_WWI(128,128,32, __Vtemp_1, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res, 0x3fU);
        __Vtemp_2[0U] = (1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__r));
        __Vtemp_2[1U] = 0U;
        __Vtemp_2[2U] = 0U;
        __Vtemp_2[3U] = 0U;
        VL_ADD_W(4, __Vtemp_3, __Vtemp_1, __Vtemp_2);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew64__result_o 
            = (((QData)((IData)(((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__op_q))
                                  ? __Vtemp_3[1U] : (IData)(
                                                            ((((QData)((IData)(
                                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[0U]))) 
                                                             >> 0x20U))))) 
                << 0x20U) | (QData)((IData)(((0x32U 
                                              == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__op_q))
                                              ? __Vtemp_3[0U]
                                              : (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[0U]))))))));
    } else if ((((0x2bU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__op_q)) 
                 || (0x2cU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__op_q))) 
                || (0x2dU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__op_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew64__result_o 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[3U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[2U])));
    } else if (((0x2eU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__op_q)) 
                || (0x30U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__op_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew64__result_o 
            = ((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[1U])) 
                 << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[0U]))) 
               + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__opc_q);
    } else if (((0x2fU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__op_q)) 
                || (0x31U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__op_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew64__result_o 
            = ((- (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[0U])))) 
               + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__opc_q);
    } else {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew64__result_o = 0ULL;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__r = 0U;
    if ((0x2aU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__op_q))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew32__result_o 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[2U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[0U])));
    } else if ((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__op_q))) {
        if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
            if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__r 
                    = ((0xfeU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__r)) 
                       | ((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[0U] 
                              >> 0x1fU)) & (0U != (0x7fffffffU 
                                                   & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[0U]))));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__r 
                    = ((0xfdU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__r)) 
                       | (((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[2U] 
                               >> 0x1fU)) & (0U != 
                                             (0x7fffffffU 
                                              & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[2U]))) 
                          << 1U));
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__r = 0U;
            }
        } else if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__r 
                = ((0xfeU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__r)) 
                   | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[0U] 
                       >> 0x1eU) & (0U != (0xbfffffffU 
                                           & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[0U]))));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__r 
                = ((0xfdU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__r)) 
                   | (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[2U] 
                        >> 0x1eU) & (0U != (0xbfffffffU 
                                            & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[2U]))) 
                      << 1U));
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__r 
                = ((0xfcU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__r)) 
                   | ((2U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[2U] 
                             >> 0x1dU)) | (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[0U] 
                                                 >> 0x1eU))));
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew32__result_o 
            = ((0xffffffff00000000ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew32__result_o) 
               | (IData)((IData)(((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__op_q))
                                   ? (VL_SHIFTR_QQI(64,64,32, 
                                                    (((QData)((IData)(
                                                                      vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[0U]))), 0x1fU) 
                                      + (QData)((IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__r)))))
                                   : (QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[0U]))))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew32__result_o 
            = ((0xffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew32__result_o) 
               | ((QData)((IData)((IData)(((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__op_q))
                                            ? (VL_SHIFTR_QQI(64,64,32, 
                                                             (((QData)((IData)(
                                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[2U]))), 0x1fU) 
                                               + (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__r) 
                                                                     >> 1U)))))
                                            : (QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[2U])))))) 
                  << 0x20U));
    } else if ((((0x2bU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__op_q)) 
                 || (0x2cU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__op_q))) 
                || (0x2dU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__op_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew32__result_o 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[3U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[1U])));
    } else if (((0x2eU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__op_q)) 
                || (0x30U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__op_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew32__result_o 
            = (((QData)((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[2U] 
                                 + (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__opc_q 
                                            >> 0x20U))))) 
                << 0x20U) | (QData)((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[0U] 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__opc_q)))));
    } else if (((0x2fU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__op_q)) 
                || (0x31U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__op_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew32__result_o 
            = ((0xffffffff00000000ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew32__result_o) 
               | (IData)((IData)(((- vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[0U]) 
                                  + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__opc_q)))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew32__result_o 
            = ((0xffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew32__result_o) 
               | ((QData)((IData)(((- vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[2U]) 
                                   + (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__opc_q 
                                              >> 0x20U))))) 
                  << 0x20U));
    } else {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew32__result_o = 0ULL;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r = 0U;
    if ((0x2aU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
            = ((0xffff000000000000ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o) 
               | (((QData)((IData)(((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[2U] 
                                     << 0x10U) | (0xffffU 
                                                  & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[1U])))) 
                   << 0x10U) | (QData)((IData)((0xffffU 
                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[0U])))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
            = ((0xffffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o) 
               | ((QData)((IData)((0xffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[3U]))) 
                  << 0x30U));
    } else if ((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q))) {
        if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
            if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r 
                    = ((0xfeU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r)) 
                       | ((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[0U] 
                              >> 0xfU)) & (0U != (0x7fffU 
                                                  & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[0U]))));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r 
                    = ((0xfdU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r)) 
                       | (((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[1U] 
                               >> 0xfU)) & (0U != (0x7fffU 
                                                   & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[1U]))) 
                          << 1U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r 
                    = ((0xfbU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r)) 
                       | (((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[2U] 
                               >> 0xfU)) & (0U != (0x7fffU 
                                                   & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[2U]))) 
                          << 2U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r 
                    = ((0xf7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r)) 
                       | (((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[3U] 
                               >> 0xfU)) & (0U != (0x7fffU 
                                                   & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[3U]))) 
                          << 3U));
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r = 0U;
            }
        } else if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r 
                = ((0xfeU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r)) 
                   | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[0U] 
                       >> 0xeU) & (0U != (0xbfffU & 
                                          vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[0U]))));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r 
                = ((0xfdU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r)) 
                   | (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[1U] 
                        >> 0xeU) & (0U != (0xbfffU 
                                           & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[1U]))) 
                      << 1U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r 
                = ((0xfbU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r)) 
                   | (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[2U] 
                        >> 0xeU) & (0U != (0xbfffU 
                                           & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[2U]))) 
                      << 2U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r 
                = ((0xf7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r)) 
                   | (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[3U] 
                        >> 0xeU) & (0U != (0xbfffU 
                                           & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[3U]))) 
                      << 3U));
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r 
                = ((0xf8U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r)) 
                   | ((4U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[2U] 
                             >> 0xcU)) | ((2U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[1U] 
                                                 >> 0xdU)) 
                                          | (1U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[0U] 
                                                   >> 0xeU)))));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r 
                = ((0xf7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r)) 
                   | (8U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[3U] 
                            >> 0xbU)));
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
            = ((0xffffffffffff0000ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o) 
               | (IData)((IData)((0xffffU & ((0x32U 
                                              == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q))
                                              ? (VL_SHIFTR_III(32,32,32, 
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[0U], 0x10U) 
                                                 + 
                                                 (1U 
                                                  & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r)))
                                              : (0xffffU 
                                                 & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[0U]))))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
            = ((0xffffffff0000ffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o) 
               | ((QData)((IData)((0xffffU & ((0x32U 
                                               == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q))
                                               ? (VL_SHIFTR_III(32,32,32, 
                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[1U], 0x10U) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r) 
                                                      >> 1U)))
                                               : (0xffffU 
                                                  & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[1U]))))) 
                  << 0x10U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
            = ((0xffff0000ffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o) 
               | ((QData)((IData)((0xffffU & ((0x32U 
                                               == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q))
                                               ? (VL_SHIFTR_III(32,32,32, 
                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[2U], 0x10U) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r) 
                                                      >> 2U)))
                                               : (0xffffU 
                                                  & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[2U]))))) 
                  << 0x20U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
            = ((0xffffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o) 
               | ((QData)((IData)((0xffffU & ((0x32U 
                                               == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q))
                                               ? (VL_SHIFTR_III(32,32,32, 
                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[3U], 0x10U) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r) 
                                                      >> 3U)))
                                               : (0xffffU 
                                                  & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[3U]))))) 
                  << 0x30U));
    } else if ((((0x2bU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q)) 
                 || (0x2cU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q))) 
                || (0x2dU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
            = ((0xffff000000000000ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o) 
               | (((QData)((IData)(((0xffff0000U & 
                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[2U]) 
                                    | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[1U] 
                                       >> 0x10U)))) 
                   << 0x10U) | (QData)((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[0U] 
                                                >> 0x10U)))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
            = ((0xffffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o) 
               | ((QData)((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[3U] 
                                   >> 0x10U))) << 0x30U));
    } else if (((0x2eU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q)) 
                || (0x30U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
            = ((0xffffffff00000000ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o) 
               | (IData)((IData)((((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[1U] 
                                    + (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__opc_q 
                                               >> 0x10U))) 
                                   << 0x10U) | (0xffffU 
                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[0U] 
                                                   + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__opc_q)))))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
            = ((0xffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o) 
               | ((QData)((IData)((((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[3U] 
                                     + (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__opc_q 
                                                >> 0x30U))) 
                                    << 0x10U) | (0xffffU 
                                                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[2U] 
                                                    + (IData)(
                                                              (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__opc_q 
                                                               >> 0x20U))))))) 
                  << 0x20U));
    } else if (((0x2fU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q)) 
                || (0x31U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
            = ((0xffffffffffff0000ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o) 
               | (IData)((IData)((0xffffU & ((- vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[0U]) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__opc_q))))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
            = ((0xffffffff0000ffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o) 
               | ((QData)((IData)((0xffffU & ((- vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[1U]) 
                                              + (IData)(
                                                        (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__opc_q 
                                                         >> 0x10U)))))) 
                  << 0x10U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
            = ((0xffff0000ffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o) 
               | ((QData)((IData)((0xffffU & ((- vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[2U]) 
                                              + (IData)(
                                                        (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__opc_q 
                                                         >> 0x20U)))))) 
                  << 0x20U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
            = ((0xffffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o) 
               | ((QData)((IData)((0xffffU & ((- vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[3U]) 
                                              + (IData)(
                                                        (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__opc_q 
                                                         >> 0x30U)))))) 
                  << 0x30U));
    } else {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o = 0ULL;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r = 0U;
    if ((0x2aU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffffff000000ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | (IData)((IData)(((0xff0000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                                                << 0x10U)) 
                                  | ((0xff00U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                                                 >> 8U)) 
                                     | (0xffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U]))))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffff000000ffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)(((0xff0000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U]) 
                                   | ((0xff00U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                                                  << 8U)) 
                                      | (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                                                  >> 0x10U)))))) 
                  << 0x18U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)(((0xff00U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                                               >> 8U)) 
                                   | (0xffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U])))) 
                  << 0x30U));
    } else if ((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i))) {
        if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
            if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                    = ((0xfeU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                       | ((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                              >> 7U)) & (0U != (0x7fU 
                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U]))));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                    = ((0xfdU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                       | (((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                               >> 0x17U)) & (0U != 
                                             (0x7fU 
                                              & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                                                 >> 0x10U)))) 
                          << 1U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                    = ((0xfbU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                       | (((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                               >> 7U)) & (0U != (0x7fU 
                                                 & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U]))) 
                          << 2U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                    = ((0xf7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                       | (((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                               >> 0x17U)) & (0U != 
                                             (0x7fU 
                                              & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                                                 >> 0x10U)))) 
                          << 3U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                    = ((0xefU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                       | (((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                               >> 7U)) & (0U != (0x7fU 
                                                 & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U]))) 
                          << 4U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                    = ((0xdfU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                       | (((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                               >> 0x17U)) & (0U != 
                                             (0x7fU 
                                              & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                                                 >> 0x10U)))) 
                          << 5U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                    = ((0xbfU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                       | (((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                               >> 7U)) & (0U != (0x7fU 
                                                 & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U]))) 
                          << 6U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                    = ((0x7fU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                       | (((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                               >> 0x17U)) & (0U != 
                                             (0x7fU 
                                              & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                                                 >> 0x10U)))) 
                          << 7U));
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r = 0U;
            }
        } else if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                = ((0xfeU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                   | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                       >> 6U) & (0U != (0xbfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U]))));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                = ((0xfdU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                   | (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                        >> 0x16U) & (0U != (0xbf0000U 
                                            & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U]))) 
                      << 1U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                = ((0xfbU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                   | (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                        >> 6U) & (0U != (0xbfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U]))) 
                      << 2U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                = ((0xf7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                   | (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                        >> 0x16U) & (0U != (0xbf0000U 
                                            & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U]))) 
                      << 3U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                = ((0xefU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                   | (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                        >> 6U) & (0U != (0xbfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U]))) 
                      << 4U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                = ((0xdfU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                   | (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                        >> 0x16U) & (0U != (0xbf0000U 
                                            & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U]))) 
                      << 5U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                = ((0xbfU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                   | (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                        >> 6U) & (0U != (0xbfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U]))) 
                      << 6U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                = ((0x7fU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                   | (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                        >> 0x16U) & (0U != (0xbf0000U 
                                            & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U]))) 
                      << 7U));
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                = ((0xf8U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                   | ((4U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                             >> 4U)) | ((2U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                                               >> 0x15U)) 
                                        | (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                                                 >> 6U)))));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                = ((0xc7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                   | ((0x20U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                                >> 0x11U)) | ((0x10U 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                                                  >> 2U)) 
                                              | (8U 
                                                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                                                    >> 0x13U)))));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                = ((0x3fU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                   | ((0x80U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                                >> 0xfU)) | (0x40U 
                                             & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U])));
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffffffffff00ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | (IData)((IData)((0xffU & ((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i))
                                            ? (VL_SHIFTR_III(16,16,32, 
                                                             (0xffffU 
                                                              & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U]), 7U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)))
                                            : (0xffU 
                                               & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U]))))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffffffff00ffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)((0xffU & ((0x32U 
                                             == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i))
                                             ? (VL_SHIFTR_III(16,16,32, 
                                                              (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                                                               >> 0x10U), 7U) 
                                                + (1U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r) 
                                                      >> 1U)))
                                             : (0xffU 
                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                                                   >> 0x10U)))))) 
                  << 8U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffffff00ffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)((0xffU & ((0x32U 
                                             == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i))
                                             ? (VL_SHIFTR_III(16,16,32, 
                                                              (0xffffU 
                                                               & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U]), 7U) 
                                                + (1U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r) 
                                                      >> 2U)))
                                             : (0xffU 
                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U]))))) 
                  << 0x10U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffff00ffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)((0xffU & ((0x32U 
                                             == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i))
                                             ? (VL_SHIFTR_III(16,16,32, 
                                                              (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                                                               >> 0x10U), 7U) 
                                                + (1U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r) 
                                                      >> 3U)))
                                             : (0xffU 
                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                                                   >> 0x10U)))))) 
                  << 0x18U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffff00ffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)((0xffU & ((0x32U 
                                             == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i))
                                             ? (VL_SHIFTR_III(16,16,32, 
                                                              (0xffffU 
                                                               & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U]), 7U) 
                                                + (1U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r) 
                                                      >> 4U)))
                                             : (0xffU 
                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U]))))) 
                  << 0x20U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffff00ffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)((0xffU & ((0x32U 
                                             == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i))
                                             ? (VL_SHIFTR_III(16,16,32, 
                                                              (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                                                               >> 0x10U), 7U) 
                                                + (1U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r) 
                                                      >> 5U)))
                                             : (0xffU 
                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                                                   >> 0x10U)))))) 
                  << 0x28U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xff00ffffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)((0xffU & ((0x32U 
                                             == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i))
                                             ? (VL_SHIFTR_III(16,16,32, 
                                                              (0xffffU 
                                                               & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U]), 7U) 
                                                + (1U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r) 
                                                      >> 6U)))
                                             : (0xffU 
                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U]))))) 
                  << 0x30U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)((0xffU & ((0x32U 
                                             == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i))
                                             ? (VL_SHIFTR_III(16,16,32, 
                                                              (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                                                               >> 0x10U), 7U) 
                                                + (1U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r) 
                                                      >> 7U)))
                                             : (0xffU 
                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                                                   >> 0x10U)))))) 
                  << 0x38U));
    } else if ((((0x2bU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i)) 
                 || (0x2cU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i))) 
                || (0x2dU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffffff000000ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | (IData)((IData)(((0xff0000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                                                << 8U)) 
                                  | ((0xff00U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                                                 >> 0x10U)) 
                                     | (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                                                 >> 8U)))))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffff000000ffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)(((0xff0000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                                                 >> 8U)) 
                                   | ((0xff00U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U]) 
                                      | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                                         >> 0x18U))))) 
                  << 0x18U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)(((0xff00U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                                               >> 0x10U)) 
                                   | (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                                               >> 8U))))) 
                  << 0x30U));
    } else if (((0x2eU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i)) 
                || (0x30U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffffffff0000ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | (IData)((IData)(((0xff00U & ((((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                                                 << 0x10U) 
                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                                                   >> 0x10U)) 
                                               + (IData)(
                                                         (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i 
                                                          >> 8U))) 
                                              << 8U)) 
                                  | (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                                              + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i)))))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffff0000ffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)(((0xff00U & ((((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                                                  << 0x10U) 
                                                 | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                                                    >> 0x10U)) 
                                                + (IData)(
                                                          (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i 
                                                           >> 0x18U))) 
                                               << 8U)) 
                                   | (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                                               + (IData)(
                                                         (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i 
                                                          >> 0x10U))))))) 
                  << 0x10U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffff0000ffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)(((0xff00U & ((((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                                                  << 0x10U) 
                                                 | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                                                    >> 0x10U)) 
                                                + (IData)(
                                                          (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i 
                                                           >> 0x28U))) 
                                               << 8U)) 
                                   | (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                                               + (IData)(
                                                         (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i 
                                                          >> 0x20U))))))) 
                  << 0x20U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)(((0xff00U & ((((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                                                  << 0x10U) 
                                                 | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                                                    >> 0x10U)) 
                                                + (IData)(
                                                          (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i 
                                                           >> 0x38U))) 
                                               << 8U)) 
                                   | (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                                               + (IData)(
                                                         (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i 
                                                          >> 0x30U))))))) 
                  << 0x30U));
    } else if (((0x2fU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i)) 
                || (0x31U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffffffffff00ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | (IData)((IData)((0xffU & ((- vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U]) 
                                           + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i))))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffffffff00ffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)((0xffU & ((- ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                                                 << 0x10U) 
                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                                                   >> 0x10U))) 
                                            + (IData)(
                                                      (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i 
                                                       >> 8U)))))) 
                  << 8U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffffff00ffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)((0xffU & ((- vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U]) 
                                            + (IData)(
                                                      (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i 
                                                       >> 0x10U)))))) 
                  << 0x10U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffff00ffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)((0xffU & ((- ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                                                 << 0x10U) 
                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                                                   >> 0x10U))) 
                                            + (IData)(
                                                      (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i 
                                                       >> 0x18U)))))) 
                  << 0x18U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffff00ffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)((0xffU & ((- vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U]) 
                                            + (IData)(
                                                      (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i 
                                                       >> 0x20U)))))) 
                  << 0x20U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffff00ffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)((0xffU & ((- ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                                                 << 0x10U) 
                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                                                   >> 0x10U))) 
                                            + (IData)(
                                                      (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i 
                                                       >> 0x28U)))))) 
                  << 0x28U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xff00ffffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)((0xffU & ((- vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U]) 
                                            + (IData)(
                                                      (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i 
                                                       >> 0x30U)))))) 
                  << 0x30U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)((0xffU & ((- ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                                                 << 0x10U) 
                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                                                   >> 0x10U))) 
                                            + (IData)(
                                                      (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i 
                                                       >> 0x38U)))))) 
                  << 0x38U));
    } else {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o = 0ULL;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__vxsat_o 
        = ((((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i)) 
             << 7U) & (((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
                                 >> 0x3fU)) << 7U) 
                       ^ (0xffff80U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT____VdfgTmp_h356aaa47__0) 
                                       >> 8U)))) | 
           ((((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i)) 
              << 6U) & (((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
                                  >> 0x37U)) << 6U) 
                        ^ (0x7fffc0U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT____VdfgTmp_h41bc6aa6__0) 
                                        >> 9U)))) | 
            ((((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i)) 
               << 5U) & (((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
                                   >> 0x2fU)) << 5U) 
                         ^ (0x3fffe0U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT____VdfgTmp_h794d12a4__0) 
                                         >> 0xaU)))) 
             | ((((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i)) 
                  << 4U) & (((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
                                      >> 0x27U)) << 4U) 
                            ^ (0x1ffff0U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT____VdfgTmp_h8bfb1247__0) 
                                            >> 0xbU)))) 
                | ((((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i)) 
                     << 3U) & (((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
                                         >> 0x1fU)) 
                                << 3U) ^ (0xffff8U 
                                          & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT____VdfgTmp_h3ebd511b__0) 
                                             >> 0xcU)))) 
                   | ((((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i)) 
                        << 2U) & (((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
                                            >> 0x17U)) 
                                   << 2U) ^ (0x7fffcU 
                                             & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT____VdfgTmp_h292fcbac__0) 
                                                >> 0xdU)))) 
                      | ((((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i)) 
                           << 1U) & (((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
                                               >> 0xfU)) 
                                      << 1U) ^ (0x3fffeU 
                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT____VdfgTmp_h9bc07f5c__0) 
                                                   >> 0xeU)))) 
                         | ((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i)) 
                            & ((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
                                        >> 7U)) ^ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT____VdfgTmp_h3bc13685__0) 
                                                   >> 0xfU))))))))));
    __Vtemp_9[0U] = (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o);
    __Vtemp_9[1U] = (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
                             >> 0x20U));
    __Vtemp_9[2U] = (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o);
    __Vtemp_9[3U] = (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
                             >> 0x20U));
    __Vtemp_9[4U] = (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew32__result_o);
    __Vtemp_9[5U] = (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew32__result_o 
                             >> 0x20U));
    __Vtemp_9[6U] = (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew64__result_o);
    __Vtemp_9[7U] = (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew64__result_o 
                             >> 0x20U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vmul_result 
        = (((QData)((IData)(__Vtemp_9[(((IData)(0x3fU) 
                                        + (0xffU & 
                                           VL_SHIFTL_III(8,32,32, 
                                                         (7U 
                                                          & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[0U] 
                                                             >> 3U)), 6U))) 
                                       >> 5U)])) << 
            ((0U == (0x1fU & VL_SHIFTL_III(8,32,32, 
                                           (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[0U] 
                                                  >> 3U)), 6U)))
              ? 0x20U : ((IData)(0x40U) - (0x1fU & 
                                           VL_SHIFTL_III(8,32,32, 
                                                         (7U 
                                                          & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[0U] 
                                                             >> 3U)), 6U))))) 
           | (((0U == (0x1fU & VL_SHIFTL_III(8,32,32, 
                                             (7U & 
                                              (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[0U] 
                                               >> 3U)), 6U)))
                ? 0ULL : ((QData)((IData)(__Vtemp_9[
                                          (((IData)(0x1fU) 
                                            + (0xffU 
                                               & VL_SHIFTL_III(8,32,32, 
                                                               (7U 
                                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[0U] 
                                                                   >> 3U)), 6U))) 
                                           >> 5U)])) 
                          << ((IData)(0x20U) - (0x1fU 
                                                & VL_SHIFTL_III(8,32,32, 
                                                                (7U 
                                                                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[0U] 
                                                                    >> 3U)), 6U))))) 
              | ((QData)((IData)(__Vtemp_9[(7U & (VL_SHIFTL_III(8,32,32, 
                                                                (7U 
                                                                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[0U] 
                                                                    >> 3U)), 6U) 
                                                  >> 5U))])) 
                 >> (0x1fU & VL_SHIFTL_III(8,32,32, 
                                           (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[0U] 
                                                  >> 3U)), 6U)))));
}

VL_INLINE_OPT void Vara_tb_verilator___024root___nba_comb__TOP__956(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___nba_comb__TOP__956\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_23;
    VlWide<4>/*127:0*/ __Vtemp_24;
    VlWide<4>/*127:0*/ __Vtemp_25;
    VlWide<4>/*127:0*/ __Vtemp_26;
    VlWide<4>/*127:0*/ __Vtemp_27;
    VlWide<4>/*127:0*/ __Vtemp_51;
    VlWide<4>/*127:0*/ __Vtemp_52;
    VlWide<4>/*127:0*/ __Vtemp_53;
    VlWide<4>/*127:0*/ __Vtemp_54;
    VlWide<4>/*127:0*/ __Vtemp_55;
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_state_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_state_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[3U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[3U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[4U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[4U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[5U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[6U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[6U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[7U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[7U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_ar_tran[0U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[5U] 
            << 7U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[4U] 
                      >> 0x19U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_ar_tran[1U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[6U] 
            << 7U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[5U] 
                      >> 0x19U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_ar_tran[2U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[7U] 
            << 7U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[6U] 
                      >> 0x19U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_ar_tran[3U] 
        = ((0xfffffff8U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_ar_tran[3U]) 
           | (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[7U] 
                    >> 0x19U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_ar_id 
        = ((0x3e0U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_ar_id)) 
           | (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[7U] 
                       >> 0x17U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_ar_valid_tran 
        = ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_ar_valid_tran)) 
           | (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[4U] 
                    >> 0x18U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_req_ar_err 
        = ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_req_ar_err)) 
           | (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[4U] 
                    >> 0x17U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__slv_r_tran[0U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[1U] 
            << 0x12U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[0U] 
                         >> 0xeU));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__slv_r_tran[1U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[2U] 
            << 0x12U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[1U] 
                         >> 0xeU));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__slv_r_tran[2U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[3U] 
            << 0x12U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[2U] 
                         >> 0xeU));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__slv_r_tran[3U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[4U] 
            << 0x12U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[3U] 
                         >> 0xeU));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__slv_r_tran[4U] 
        = ((0xfffffe00U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__slv_r_tran[4U]) 
           | (0x1ffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[4U] 
                        >> 0xeU)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__slv_r_valid_tran 
        = ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__slv_r_valid_tran)) 
           | (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[0U] 
                    >> 0xdU)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__idqueue_push 
        = (2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__idqueue_push));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__idqueue_pop 
        = (2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__idqueue_pop));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__arb_slv_ar_gnt_tran 
        = (2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__arb_slv_ar_gnt_tran));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_r_ready_tran 
        = (2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_r_ready_tran));
    if ((1U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_ar_valid_tran) 
               & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_ar_ready_tran)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[4U] 
            = (0xfe7fffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[4U]);
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_data[0U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[1U] 
            << 0xeU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[0U] 
                        >> 0x12U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_data[1U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[2U] 
            << 0xeU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[1U] 
                        >> 0x12U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_data[2U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[3U] 
            << 0xeU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[2U] 
                        >> 0x12U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_data[3U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[4U] 
            << 0xeU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[3U] 
                        >> 0x12U));
    if ((0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_state_q))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[4U] 
            = (0x1ffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[4U]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U] = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[6U] = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[7U] = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[0U] 
            = (0x3fffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[0U]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[1U] = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[2U] = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[3U] = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[4U] 
            = (0xff800000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[4U]);
        if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_slv_ar_arb__DOT__gen_arbiter__DOT__req_nodes) 
             & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__idx_ar_downsizer)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__arb_slv_ar_gnt_tran 
                = (1U | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__arb_slv_ar_gnt_tran));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__idqueue_push 
                = (1U | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__idqueue_push));
            if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_slv_ar_arb__DOT__gen_arbiter__DOT__index_nodes) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_state_d = 1U;
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_state_d = 2U;
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[4U] 
                    = (0x1000000U | ((0xffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[4U]) 
                                     | (0xfe000000U 
                                        & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_soc_xbar__DOT____Vcellout__gen_mst_port_mux__BRA__2__KET____DOT__i_axi_mux__mst_req_o[0U] 
                                           << 0x17U))));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U] 
                    = (((0x800000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_soc_xbar__DOT____Vcellout__gen_mst_port_mux__BRA__2__KET____DOT__i_axi_mux__mst_req_o[1U] 
                                      << 0x17U)) | 
                        (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_soc_xbar__DOT____Vcellout__gen_mst_port_mux__BRA__2__KET____DOT__i_axi_mux__mst_req_o[0U] 
                         >> 9U)) | ((0x1000000U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_soc_xbar__DOT____Vcellout__gen_mst_port_mux__BRA__2__KET____DOT__i_axi_mux__mst_req_o[1U] 
                                                   << 0x17U)) 
                                    | (0xfe000000U 
                                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_soc_xbar__DOT____Vcellout__gen_mst_port_mux__BRA__2__KET____DOT__i_axi_mux__mst_req_o[1U] 
                                          << 0x17U))));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[6U] 
                    = (((0x800000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_soc_xbar__DOT____Vcellout__gen_mst_port_mux__BRA__2__KET____DOT__i_axi_mux__mst_req_o[2U] 
                                      << 0x17U)) | 
                        (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_soc_xbar__DOT____Vcellout__gen_mst_port_mux__BRA__2__KET____DOT__i_axi_mux__mst_req_o[1U] 
                         >> 9U)) | ((0x1000000U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_soc_xbar__DOT____Vcellout__gen_mst_port_mux__BRA__2__KET____DOT__i_axi_mux__mst_req_o[2U] 
                                                   << 0x17U)) 
                                    | (0xfe000000U 
                                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_soc_xbar__DOT____Vcellout__gen_mst_port_mux__BRA__2__KET____DOT__i_axi_mux__mst_req_o[2U] 
                                          << 0x17U))));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[7U] 
                    = (0xfffffffU & (((0x800000U & 
                                       (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_soc_xbar__DOT____Vcellout__gen_mst_port_mux__BRA__2__KET____DOT__i_axi_mux__mst_req_o[3U] 
                                        << 0x17U)) 
                                      | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_soc_xbar__DOT____Vcellout__gen_mst_port_mux__BRA__2__KET____DOT__i_axi_mux__mst_req_o[2U] 
                                         >> 9U)) | 
                                     ((0x1000000U & 
                                       (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_soc_xbar__DOT____Vcellout__gen_mst_port_mux__BRA__2__KET____DOT__i_axi_mux__mst_req_o[3U] 
                                        << 0x17U)) 
                                      | (0xe000000U 
                                         & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_soc_xbar__DOT____Vcellout__gen_mst_port_mux__BRA__2__KET____DOT__i_axi_mux__mst_req_o[3U] 
                                            << 0x17U)))));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[0U] 
                    = ((0xffffe001U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[0U]) 
                       | (0xfffffffeU & ((0xff0U & 
                                          (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_soc_xbar__DOT____Vcellout__gen_mst_port_mux__BRA__2__KET____DOT__i_axi_mux__mst_req_o[0U] 
                                           >> 0x14U)) 
                                         | (0xeU & 
                                            (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_soc_xbar__DOT____Vcellout__gen_mst_port_mux__BRA__2__KET____DOT__i_axi_mux__mst_req_o[0U] 
                                             >> 0x14U)))));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[0U] 
                    = (0xfffffffeU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[0U]);
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[0U] 
                    = (0x10000U | (0xfffcffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[0U]));
                if ((1U == (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U] 
                                  >> 0xaU)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk1__DOT__size_mask 
                        = ((1ULL << (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U] 
                                           >> 0xcU))) 
                           - 1ULL);
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk1__DOT__conv_ratio 
                        = VL_SHIFTR_QQI(64,64,32, (7ULL 
                                                   + 
                                                   (1ULL 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U] 
                                                        >> 0xcU)))), 3U);
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk1__DOT__align_adj 
                        = (0x1fffffffffffffffULL & 
                           VL_SHIFTR_QQI(64,64,32, 
                                         ((((QData)((IData)(
                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[7U])) 
                                            << 0x29U) 
                                           | (((QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[6U])) 
                                               << 9U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U])) 
                                                 >> 0x17U))) 
                                          & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk1__DOT__size_mask), 3U));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[0U] 
                        = ((0xffffe00fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[0U]) 
                           | (0x1ff0U & ((((IData)(
                                                   ((1ULL 
                                                     + (QData)((IData)(
                                                                       (0xffU 
                                                                        & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U] 
                                                                           >> 0xfU))))) 
                                                    * vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk1__DOT__conv_ratio)) 
                                           - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk1__DOT__align_adj)) 
                                          - (IData)(1U)) 
                                         << 4U)));
                    if ((1ULL != vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk1__DOT__conv_ratio)) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U] 
                            = (0x3000U | (0xffff8fffU 
                                          & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U]));
                        if ((0xffU >= (0x1ffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[0U] 
                                                 >> 4U)))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U] 
                                = ((0xff807fffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U]) 
                                   | (0x7f8000U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[0U] 
                                                   << 0xbU)));
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_state_d = 3U;
                        } else {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_state_d = 4U;
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U] 
                                = ((0xff807fffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U]) 
                                   | (0x7f8000U & (
                                                   ((IData)(0xffU) 
                                                    - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk1__DOT__align_adj)) 
                                                   << 0xfU)));
                        }
                    }
                } else if ((0U == (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U] 
                                         >> 0xaU)))) {
                    if ((0U == (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U] 
                                         >> 0xfU)))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk2__DOT__size_mask 
                            = ((1ULL << (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U] 
                                               >> 0xcU))) 
                               - 1ULL);
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk2__DOT__conv_ratio 
                            = VL_SHIFTR_QQI(64,64,32, 
                                            (7ULL + 
                                             (1ULL 
                                              << (7U 
                                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U] 
                                                     >> 0xcU)))), 3U);
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk2__DOT__align_adj 
                            = (0x1fffffffffffffffULL 
                               & VL_SHIFTR_QQI(64,64,32, 
                                               ((((QData)((IData)(
                                                                  vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[7U])) 
                                                  << 0x29U) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[6U])) 
                                                     << 9U) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U])) 
                                                       >> 0x17U))) 
                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk2__DOT__size_mask), 3U));
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[0U] 
                            = ((0xffffe00fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[0U]) 
                               | (0x1ff0U & ((IData)(
                                                     ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk2__DOT__conv_ratio 
                                                       >= 
                                                       (1ULL 
                                                        + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk2__DOT__align_adj))
                                                       ? 
                                                      ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk2__DOT__conv_ratio 
                                                        - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk2__DOT__align_adj) 
                                                       - 1ULL)
                                                       : 0ULL)) 
                                             << 4U)));
                        if ((1ULL != vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk2__DOT__conv_ratio)) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U] 
                                = ((0xff807fffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U]) 
                                   | (0x7f8000U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[0U] 
                                                   << 0xbU)));
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_state_d = 3U;
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U] 
                                = (0x3400U | (0xffff83ffU 
                                              & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U]));
                        }
                    } else {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[4U] 
                            = (0x800000U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[4U]);
                    }
                } else if ((2U == (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U] 
                                         >> 0xaU)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_state_d = 2U;
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[4U] 
                        = (0x800000U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[4U]);
                }
            }
        }
    } else if ((1U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_state_q))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U] 
            = ((0x7fffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U]) 
               | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__w_req_q[2U] 
                   << 0x19U) | (0x1800000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__w_req_q[1U] 
                                              >> 7U))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[6U] 
            = ((0x7fffffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__w_req_q[2U] 
                             >> 7U)) | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__w_req_q[3U] 
                                         << 0x19U) 
                                        | (0x1800000U 
                                           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__w_req_q[2U] 
                                              >> 7U))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[7U] 
            = (0xfffffffU & ((0x7fffffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__w_req_q[3U] 
                                           >> 7U)) 
                             | (0xf800000U & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__w_req_q[4U] 
                                               << 0x19U) 
                                              | (0x1800000U 
                                                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__w_req_q[3U] 
                                                    >> 7U))))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U] 
            = ((0xff8003ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U]) 
               | (0xfffffc00U & ((0x7f8000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__w_req_q[0U] 
                                               << 8U)) 
                                 | ((0x7000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__w_req_q[0U] 
                                                << 0xcU)) 
                                    | (0xc00U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__w_req_q[0U] 
                                                 << 5U))))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[4U] 
            = ((0xffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[4U]) 
               | (0xff000000U & ((0xfc000000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__w_req_q[1U] 
                                                 << 0x19U)) 
                                 | (0x2000000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__w_req_q[0U] 
                                                  >> 1U)))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U] 
            = ((0xfffffc00U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U]) 
               | (0x3ffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__w_req_q[1U] 
                            >> 7U)));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[0U] 
            = ((0xffffe001U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[0U]) 
               | (0xfffffffeU & ((0xff0U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__w_req_q[0U] 
                                            >> 3U)) 
                                 | (0xeU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__w_req_q[0U] 
                                            << 1U)))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[0U] 
            = (1U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[0U]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[0U] 
            = (0x10000U | (0xfffcffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[0U]));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_state_d = 2U;
        if ((1U == (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U] 
                          >> 0xaU)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk3__DOT__size_mask 
                = ((1ULL << (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U] 
                                   >> 0xcU))) - 1ULL);
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk3__DOT__conv_ratio 
                = VL_SHIFTR_QQI(64,64,32, (7ULL + (1ULL 
                                                   << 
                                                   (7U 
                                                    & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U] 
                                                       >> 0xcU)))), 3U);
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk3__DOT__align_adj 
                = (0x1fffffffffffffffULL & VL_SHIFTR_QQI(64,64,32, 
                                                         ((((QData)((IData)(
                                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[7U])) 
                                                            << 0x29U) 
                                                           | (((QData)((IData)(
                                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[6U])) 
                                                               << 9U) 
                                                              | ((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U])) 
                                                                 >> 0x17U))) 
                                                          & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk3__DOT__size_mask), 3U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[0U] 
                = ((0xffffe00fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[0U]) 
                   | (0x1ff0U & ((((IData)(((1ULL + (QData)((IData)(
                                                                    (0xffU 
                                                                     & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U] 
                                                                        >> 0xfU))))) 
                                            * vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk3__DOT__conv_ratio)) 
                                   - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk3__DOT__align_adj)) 
                                  - (IData)(1U)) << 4U)));
            if ((1ULL != vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk3__DOT__conv_ratio)) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U] 
                    = (0x3000U | (0xffff8fffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U]));
                if ((0xffU >= (0x1ffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[0U] 
                                         >> 4U)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U] 
                        = ((0xff807fffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U]) 
                           | (0x7f8000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[0U] 
                                           << 0xbU)));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_state_d = 3U;
                } else {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_state_d = 4U;
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U] 
                        = ((0xff807fffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U]) 
                           | (0x7f8000U & (((IData)(0xffU) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk3__DOT__align_adj)) 
                                           << 0xfU)));
                }
            }
        } else if ((0U == (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U] 
                                 >> 0xaU)))) {
            if ((0U == (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U] 
                                 >> 0xfU)))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk4__DOT__size_mask 
                    = ((1ULL << (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U] 
                                       >> 0xcU))) - 1ULL);
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk4__DOT__conv_ratio 
                    = VL_SHIFTR_QQI(64,64,32, (7ULL 
                                               + (1ULL 
                                                  << 
                                                  (7U 
                                                   & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U] 
                                                      >> 0xcU)))), 3U);
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk4__DOT__align_adj 
                    = (0x1fffffffffffffffULL & VL_SHIFTR_QQI(64,64,32, 
                                                             ((((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[7U])) 
                                                                << 0x29U) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[6U])) 
                                                                   << 9U) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U])) 
                                                                     >> 0x17U))) 
                                                              & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk4__DOT__size_mask), 3U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[0U] 
                    = ((0xffffe00fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[0U]) 
                       | (0x1ff0U & ((IData)(((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk4__DOT__conv_ratio 
                                               >= (1ULL 
                                                   + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk4__DOT__align_adj))
                                               ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk4__DOT__conv_ratio 
                                                   - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk4__DOT__align_adj) 
                                                  - 1ULL)
                                               : 0ULL)) 
                                     << 4U)));
                if ((1ULL != vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk4__DOT__conv_ratio)) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U] 
                        = ((0xff807fffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U]) 
                           | (0x7f8000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[0U] 
                                           << 0xbU)));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_state_d = 3U;
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U] 
                        = (0x3400U | (0xffff83ffU & 
                                      vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U]));
                }
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[4U] 
                    = (0x800000U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[4U]);
            }
        } else if ((2U == (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U] 
                                 >> 0xaU)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_state_d = 2U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[4U] 
                = (0x800000U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[4U]);
        }
    } else if ((((2U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_state_q)) 
                 || (3U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_state_q))) 
                || (4U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_state_q)))) {
        if ((1U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__slv_r_valid_tran) 
                   & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__slv_r_ready_tran)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[0U] 
                = (0x1fffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[0U]);
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[1U] = 0U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[2U] = 0U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[3U] = 0U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[4U] 
                = (0xff800000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[4U]);
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_data[0U] = 0U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_data[1U] = 0U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_data[2U] = 0U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_data[3U] = 0U;
        }
        if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[4U] 
                      >> 0x18U)))) {
            if (((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__idqueue_id)) 
                 & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__idqueue_valid))) {
                if ((1U & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__slv_r_valid_tran)) 
                           | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__slv_r_valid_tran) 
                              & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__slv_r_ready_tran))))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_r_ready_tran 
                        = (1U | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_r_ready_tran));
                    if ((0x200U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[2U])) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset 
                            = (QData)((IData)((7U & 
                                               (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[5U] 
                                                >> 0x17U))));
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset 
                            = (QData)((IData)((0xfU 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[5U] 
                                                  >> 0x17U))));
                        if ((((0ULL >= vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                              & ((- vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                                 < (1ULL << (7U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[0U] 
                                                   >> 1U))))) 
                             & (8ULL > (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset 
                                        - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset)))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_data[0U] 
                                = ((0xffffff00U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_data[0U]) 
                                   | ((0x55U >= ((IData)(4U) 
                                                 + 
                                                 (0x3fU 
                                                  & (IData)(
                                                            VL_SHIFTL_QQI(64,64,32, 
                                                                          (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset 
                                                                           - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))
                                       ? (0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(4U) 
                                                         + 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    VL_SHIFTL_QQI(64,64,32, 
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))
                                                     ? 0U
                                                     : 
                                                    (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                                     (((IData)(0xbU) 
                                                       + 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  VL_SHIFTL_QQI(64,64,32, 
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(4U) 
                                                          + 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     VL_SHIFTL_QQI(64,64,32, 
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))))) 
                                                   | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                                      (((IData)(4U) 
                                                        + 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   VL_SHIFTL_QQI(64,64,32, 
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                                       >> 5U)] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(4U) 
                                                          + 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     VL_SHIFTL_QQI(64,64,32, 
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))))
                                       : 0U));
                        }
                        if ((((1ULL >= vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                              & ((1ULL - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                                 < (1ULL << (7U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[0U] 
                                                   >> 1U))))) 
                             & (8ULL > ((1ULL + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                        - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset)))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_data[0U] 
                                = ((0xffff00ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_data[0U]) 
                                   | (((0x55U >= ((IData)(4U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((1ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))
                                        ? (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & ((IData)(4U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((1ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))
                                              ? 0U : 
                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                              (((IData)(0xbU) 
                                                + (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((1ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((1ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))))) 
                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                               (((IData)(4U) 
                                                 + 
                                                 (0x3fU 
                                                  & (IData)(
                                                            VL_SHIFTL_QQI(64,64,32, 
                                                                          ((1ULL 
                                                                            + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                           - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((1ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))))
                                        : 0U) << 8U));
                        }
                        if ((((2ULL >= vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                              & ((2ULL - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                                 < (1ULL << (7U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[0U] 
                                                   >> 1U))))) 
                             & (8ULL > ((2ULL + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                        - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset)))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_data[0U] 
                                = ((0xff00ffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_data[0U]) 
                                   | (((0x55U >= ((IData)(4U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((2ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))
                                        ? (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & ((IData)(4U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((2ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))
                                              ? 0U : 
                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                              (((IData)(0xbU) 
                                                + (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((2ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((2ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))))) 
                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                               (((IData)(4U) 
                                                 + 
                                                 (0x3fU 
                                                  & (IData)(
                                                            VL_SHIFTL_QQI(64,64,32, 
                                                                          ((2ULL 
                                                                            + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                           - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((2ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))))
                                        : 0U) << 0x10U));
                        }
                        if ((((3ULL >= vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                              & ((3ULL - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                                 < (1ULL << (7U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[0U] 
                                                   >> 1U))))) 
                             & (8ULL > ((3ULL + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                        - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset)))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_data[0U] 
                                = ((0xffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_data[0U]) 
                                   | (((0x55U >= ((IData)(4U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((3ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))
                                        ? (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & ((IData)(4U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((3ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))
                                              ? 0U : 
                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                              (((IData)(0xbU) 
                                                + (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((3ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((3ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))))) 
                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                               (((IData)(4U) 
                                                 + 
                                                 (0x3fU 
                                                  & (IData)(
                                                            VL_SHIFTL_QQI(64,64,32, 
                                                                          ((3ULL 
                                                                            + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                           - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((3ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))))
                                        : 0U) << 0x18U));
                        }
                        if ((((4ULL >= vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                              & ((4ULL - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                                 < (1ULL << (7U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[0U] 
                                                   >> 1U))))) 
                             & (8ULL > ((4ULL + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                        - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset)))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_data[1U] 
                                = ((0xffffff00U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_data[1U]) 
                                   | ((0x55U >= ((IData)(4U) 
                                                 + 
                                                 (0x3fU 
                                                  & (IData)(
                                                            VL_SHIFTL_QQI(64,64,32, 
                                                                          ((4ULL 
                                                                            + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                           - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))
                                       ? (0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(4U) 
                                                         + 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    VL_SHIFTL_QQI(64,64,32, 
                                                                                ((4ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))
                                                     ? 0U
                                                     : 
                                                    (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                                     (((IData)(0xbU) 
                                                       + 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  VL_SHIFTL_QQI(64,64,32, 
                                                                                ((4ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(4U) 
                                                          + 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     VL_SHIFTL_QQI(64,64,32, 
                                                                                ((4ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))))) 
                                                   | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                                      (((IData)(4U) 
                                                        + 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   VL_SHIFTL_QQI(64,64,32, 
                                                                                ((4ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                                       >> 5U)] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(4U) 
                                                          + 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     VL_SHIFTL_QQI(64,64,32, 
                                                                                ((4ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))))
                                       : 0U));
                        }
                        if ((((5ULL >= vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                              & ((5ULL - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                                 < (1ULL << (7U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[0U] 
                                                   >> 1U))))) 
                             & (8ULL > ((5ULL + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                        - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset)))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_data[1U] 
                                = ((0xffff00ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_data[1U]) 
                                   | (((0x55U >= ((IData)(4U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((5ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))
                                        ? (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & ((IData)(4U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((5ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))
                                              ? 0U : 
                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                              (((IData)(0xbU) 
                                                + (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((5ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((5ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))))) 
                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                               (((IData)(4U) 
                                                 + 
                                                 (0x3fU 
                                                  & (IData)(
                                                            VL_SHIFTL_QQI(64,64,32, 
                                                                          ((5ULL 
                                                                            + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                           - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((5ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))))
                                        : 0U) << 8U));
                        }
                        if ((((6ULL >= vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                              & ((6ULL - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                                 < (1ULL << (7U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[0U] 
                                                   >> 1U))))) 
                             & (8ULL > ((6ULL + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                        - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset)))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_data[1U] 
                                = ((0xff00ffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_data[1U]) 
                                   | (((0x55U >= ((IData)(4U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((6ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))
                                        ? (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & ((IData)(4U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((6ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))
                                              ? 0U : 
                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                              (((IData)(0xbU) 
                                                + (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((6ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((6ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))))) 
                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                               (((IData)(4U) 
                                                 + 
                                                 (0x3fU 
                                                  & (IData)(
                                                            VL_SHIFTL_QQI(64,64,32, 
                                                                          ((6ULL 
                                                                            + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                           - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((6ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))))
                                        : 0U) << 0x10U));
                        }
                        if ((((7ULL >= vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                              & ((7ULL - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                                 < (1ULL << (7U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[0U] 
                                                   >> 1U))))) 
                             & (8ULL > ((7ULL + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                        - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset)))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_data[1U] 
                                = ((0xffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_data[1U]) 
                                   | (((0x55U >= ((IData)(4U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((7ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))
                                        ? (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & ((IData)(4U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((7ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))
                                              ? 0U : 
                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                              (((IData)(0xbU) 
                                                + (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((7ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((7ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))))) 
                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                               (((IData)(4U) 
                                                 + 
                                                 (0x3fU 
                                                  & (IData)(
                                                            VL_SHIFTL_QQI(64,64,32, 
                                                                          ((7ULL 
                                                                            + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                           - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((7ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))))
                                        : 0U) << 0x18U));
                        }
                        if ((((8ULL >= vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                              & ((8ULL - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                                 < (1ULL << (7U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[0U] 
                                                   >> 1U))))) 
                             & (8ULL > ((8ULL + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                        - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset)))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_data[2U] 
                                = ((0xffffff00U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_data[2U]) 
                                   | ((0x55U >= ((IData)(4U) 
                                                 + 
                                                 (0x3fU 
                                                  & (IData)(
                                                            VL_SHIFTL_QQI(64,64,32, 
                                                                          ((8ULL 
                                                                            + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                           - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))
                                       ? (0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(4U) 
                                                         + 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    VL_SHIFTL_QQI(64,64,32, 
                                                                                ((8ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))
                                                     ? 0U
                                                     : 
                                                    (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                                     (((IData)(0xbU) 
                                                       + 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  VL_SHIFTL_QQI(64,64,32, 
                                                                                ((8ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(4U) 
                                                          + 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     VL_SHIFTL_QQI(64,64,32, 
                                                                                ((8ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))))) 
                                                   | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                                      (((IData)(4U) 
                                                        + 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   VL_SHIFTL_QQI(64,64,32, 
                                                                                ((8ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                                       >> 5U)] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(4U) 
                                                          + 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     VL_SHIFTL_QQI(64,64,32, 
                                                                                ((8ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))))
                                       : 0U));
                        }
                        if ((((9ULL >= vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                              & ((9ULL - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                                 < (1ULL << (7U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[0U] 
                                                   >> 1U))))) 
                             & (8ULL > ((9ULL + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                        - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset)))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_data[2U] 
                                = ((0xffff00ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_data[2U]) 
                                   | (((0x55U >= ((IData)(4U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((9ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))
                                        ? (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & ((IData)(4U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((9ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))
                                              ? 0U : 
                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                              (((IData)(0xbU) 
                                                + (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((9ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((9ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))))) 
                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                               (((IData)(4U) 
                                                 + 
                                                 (0x3fU 
                                                  & (IData)(
                                                            VL_SHIFTL_QQI(64,64,32, 
                                                                          ((9ULL 
                                                                            + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                           - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((9ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))))
                                        : 0U) << 8U));
                        }
                        if ((((0xaULL >= vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                              & ((0xaULL - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                                 < (1ULL << (7U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[0U] 
                                                   >> 1U))))) 
                             & (8ULL > ((0xaULL + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                        - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset)))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_data[2U] 
                                = ((0xff00ffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_data[2U]) 
                                   | (((0x55U >= ((IData)(4U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((0xaULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))
                                        ? (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & ((IData)(4U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((0xaULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))
                                              ? 0U : 
                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                              (((IData)(0xbU) 
                                                + (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((0xaULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((0xaULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))))) 
                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                               (((IData)(4U) 
                                                 + 
                                                 (0x3fU 
                                                  & (IData)(
                                                            VL_SHIFTL_QQI(64,64,32, 
                                                                          ((0xaULL 
                                                                            + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                           - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((0xaULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))))
                                        : 0U) << 0x10U));
                        }
                        if ((((0xbULL >= vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                              & ((0xbULL - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                                 < (1ULL << (7U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[0U] 
                                                   >> 1U))))) 
                             & (8ULL > ((0xbULL + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                        - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset)))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_data[2U] 
                                = ((0xffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_data[2U]) 
                                   | (((0x55U >= ((IData)(4U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((0xbULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))
                                        ? (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & ((IData)(4U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((0xbULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))
                                              ? 0U : 
                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                              (((IData)(0xbU) 
                                                + (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((0xbULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((0xbULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))))) 
                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                               (((IData)(4U) 
                                                 + 
                                                 (0x3fU 
                                                  & (IData)(
                                                            VL_SHIFTL_QQI(64,64,32, 
                                                                          ((0xbULL 
                                                                            + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                           - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((0xbULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))))
                                        : 0U) << 0x18U));
                        }
                        if ((((0xcULL >= vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                              & ((0xcULL - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                                 < (1ULL << (7U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[0U] 
                                                   >> 1U))))) 
                             & (8ULL > ((0xcULL + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                        - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset)))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_data[3U] 
                                = ((0xffffff00U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_data[3U]) 
                                   | ((0x55U >= ((IData)(4U) 
                                                 + 
                                                 (0x3fU 
                                                  & (IData)(
                                                            VL_SHIFTL_QQI(64,64,32, 
                                                                          ((0xcULL 
                                                                            + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                           - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))
                                       ? (0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(4U) 
                                                         + 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    VL_SHIFTL_QQI(64,64,32, 
                                                                                ((0xcULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))
                                                     ? 0U
                                                     : 
                                                    (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                                     (((IData)(0xbU) 
                                                       + 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  VL_SHIFTL_QQI(64,64,32, 
                                                                                ((0xcULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(4U) 
                                                          + 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     VL_SHIFTL_QQI(64,64,32, 
                                                                                ((0xcULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))))) 
                                                   | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                                      (((IData)(4U) 
                                                        + 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   VL_SHIFTL_QQI(64,64,32, 
                                                                                ((0xcULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                                       >> 5U)] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(4U) 
                                                          + 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     VL_SHIFTL_QQI(64,64,32, 
                                                                                ((0xcULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))))
                                       : 0U));
                        }
                        if ((((0xdULL >= vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                              & ((0xdULL - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                                 < (1ULL << (7U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[0U] 
                                                   >> 1U))))) 
                             & (8ULL > ((0xdULL + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                        - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset)))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_data[3U] 
                                = ((0xffff00ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_data[3U]) 
                                   | (((0x55U >= ((IData)(4U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((0xdULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))
                                        ? (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & ((IData)(4U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((0xdULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))
                                              ? 0U : 
                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                              (((IData)(0xbU) 
                                                + (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((0xdULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((0xdULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))))) 
                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                               (((IData)(4U) 
                                                 + 
                                                 (0x3fU 
                                                  & (IData)(
                                                            VL_SHIFTL_QQI(64,64,32, 
                                                                          ((0xdULL 
                                                                            + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                           - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((0xdULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))))
                                        : 0U) << 8U));
                        }
                        if ((((0xeULL >= vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                              & ((0xeULL - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                                 < (1ULL << (7U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[0U] 
                                                   >> 1U))))) 
                             & (8ULL > ((0xeULL + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                        - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset)))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_data[3U] 
                                = ((0xff00ffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_data[3U]) 
                                   | (((0x55U >= ((IData)(4U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((0xeULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))
                                        ? (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & ((IData)(4U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((0xeULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))
                                              ? 0U : 
                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                              (((IData)(0xbU) 
                                                + (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((0xeULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((0xeULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))))) 
                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                               (((IData)(4U) 
                                                 + 
                                                 (0x3fU 
                                                  & (IData)(
                                                            VL_SHIFTL_QQI(64,64,32, 
                                                                          ((0xeULL 
                                                                            + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                           - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((0xeULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))))
                                        : 0U) << 0x10U));
                        }
                        if ((((0xfULL >= vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                              & ((0xfULL - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                                 < (1ULL << (7U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[0U] 
                                                   >> 1U))))) 
                             & (8ULL > ((0xfULL + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                        - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset)))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_data[3U] 
                                = ((0xffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_data[3U]) 
                                   | (((0x55U >= ((IData)(4U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((0xfULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))
                                        ? (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & ((IData)(4U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((0xfULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))
                                              ? 0U : 
                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                              (((IData)(0xbU) 
                                                + (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((0xfULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((0xfULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))))) 
                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                               (((IData)(4U) 
                                                 + 
                                                 (0x3fU 
                                                  & (IData)(
                                                            VL_SHIFTL_QQI(64,64,32, 
                                                                          ((0xfULL 
                                                                            + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                           - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((0xfULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))))
                                        : 0U) << 0x18U));
                        }
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__b = 0x10U;
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[0U] 
                            = ((0xffffe00fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[0U]) 
                               | (0x1ff0U & ((((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[0U] 
                                                << 0x1cU) 
                                               | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[0U] 
                                                  >> 4U)) 
                                              - (IData)(1U)) 
                                             << 4U)));
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U] 
                            = ((0xff807fffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U]) 
                               | (0x7f8000U & ((((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[5U] 
                                                  << 0x11U) 
                                                 | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[5U] 
                                                    >> 0xfU)) 
                                                - (IData)(1U)) 
                                               << 0xfU)));
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[0U] 
                            = ((0x3ffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[0U]) 
                               | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_data[0U] 
                                  << 0x12U));
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[1U] 
                            = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_data[0U] 
                                >> 0xeU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_data[1U] 
                                            << 0x12U));
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[2U] 
                            = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_data[1U] 
                                >> 0xeU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_data[2U] 
                                            << 0x12U));
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[3U] 
                            = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_data[2U] 
                                >> 0xeU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_data[3U] 
                                            << 0x12U));
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[4U] 
                            = ((0xfffc0000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[4U]) 
                               | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_data[3U] 
                                  >> 0xeU));
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[0U] 
                            = ((0xffff7fffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[0U]) 
                               | ((0U == (0x1ffU & 
                                          (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[0U] 
                                           >> 4U))) 
                                  << 0xfU));
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[4U] 
                            = ((0xff83ffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[4U]) 
                               | (0x7c0000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[2U] 
                                               << 0xeU)));
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[0U] 
                            = ((0xffffbfffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[0U]) 
                               | (0x4000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[0U] 
                                             << 0xeU)));
                        vlSelf->__Vfunc_resp_precedence__21__resp_b 
                            = (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[0U] 
                                     >> 2U));
                        vlSelf->__Vfunc_resp_precedence__21__resp_a 
                            = (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[0U] 
                                     >> 0x10U));
                        {
                            if ((2U & (IData)(vlSelf->__Vfunc_resp_precedence__21__resp_a))) {
                                if ((1U & (IData)(vlSelf->__Vfunc_resp_precedence__21__resp_a))) {
                                    vlSelf->__Vfunc_resp_precedence__21__Vfuncout 
                                        = vlSelf->__Vfunc_resp_precedence__21__resp_a;
                                    goto __Vlabel1575;
                                } else if ((3U == (IData)(vlSelf->__Vfunc_resp_precedence__21__resp_b))) {
                                    vlSelf->__Vfunc_resp_precedence__21__Vfuncout 
                                        = vlSelf->__Vfunc_resp_precedence__21__resp_b;
                                    goto __Vlabel1575;
                                } else {
                                    vlSelf->__Vfunc_resp_precedence__21__Vfuncout 
                                        = vlSelf->__Vfunc_resp_precedence__21__resp_a;
                                    goto __Vlabel1575;
                                }
                            } else if ((1U & (IData)(vlSelf->__Vfunc_resp_precedence__21__resp_a))) {
                                vlSelf->__Vfunc_resp_precedence__21__Vfuncout 
                                    = vlSelf->__Vfunc_resp_precedence__21__resp_b;
                                goto __Vlabel1575;
                            } else if ((1U == (IData)(vlSelf->__Vfunc_resp_precedence__21__resp_b))) {
                                vlSelf->__Vfunc_resp_precedence__21__Vfuncout 
                                    = vlSelf->__Vfunc_resp_precedence__21__resp_a;
                                goto __Vlabel1575;
                            } else {
                                vlSelf->__Vfunc_resp_precedence__21__Vfuncout 
                                    = vlSelf->__Vfunc_resp_precedence__21__resp_b;
                                goto __Vlabel1575;
                            }
                            __Vlabel1575: ;
                        }
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[0U] 
                            = ((0xfffcffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[0U]) 
                               | ((IData)(vlSelf->__Vfunc_resp_precedence__21__Vfuncout) 
                                  << 0x10U));
                        if ((1U == (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U] 
                                          >> 0xaU)))) {
                            __Vtemp_24[0U] = 1U;
                            __Vtemp_24[1U] = 0U;
                            __Vtemp_24[2U] = 0U;
                            __Vtemp_24[3U] = 0U;
                            VL_SHIFTL_WWI(128,128,3, __Vtemp_25, __Vtemp_24, 
                                          (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[5U] 
                                                 >> 0xcU)));
                            VL_ASSIGNSEL_WQ(252,64,0xb7U, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d, 
                                            (VL_SEL_QWII(128, 
                                                         ([&]() {
                                                vlSelf->__Vfunc_aligned_addr__22__size 
                                                    = 
                                                    (7U 
                                                     & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[5U] 
                                                        >> 0xcU));
                                                vlSelf->__Vfunc_aligned_addr__22__addr[0U] 
                                                    = (IData)(
                                                              (((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[7U])) 
                                                                << 0x29U) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[6U])) 
                                                                   << 9U) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[5U])) 
                                                                     >> 0x17U))));
                                                vlSelf->__Vfunc_aligned_addr__22__addr[1U] 
                                                    = (IData)(
                                                              ((((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[7U])) 
                                                                 << 0x29U) 
                                                                | (((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[6U])) 
                                                                    << 9U) 
                                                                   | ((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[5U])) 
                                                                      >> 0x17U))) 
                                                               >> 0x20U));
                                                vlSelf->__Vfunc_aligned_addr__22__addr[2U] = 0U;
                                                vlSelf->__Vfunc_aligned_addr__22__addr[3U] = 0U;
                                                VL_SHIFTR_WWI(128,128,3, __Vtemp_23, vlSelf->__Vfunc_aligned_addr__22__addr, (IData)(vlSelf->__Vfunc_aligned_addr__22__size));
                                                VL_SHIFTL_WWI(128,128,3, vlSelf->__Vfunc_aligned_addr__22__Vfuncout, __Vtemp_23, (IData)(vlSelf->__Vfunc_aligned_addr__22__size));
                                            }(), vlSelf->__Vfunc_aligned_addr__22__Vfuncout), 0U, 0x40U) 
                                             + (((QData)((IData)(
                                                                 __Vtemp_25[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  __Vtemp_25[0U])))));
                        } else if ((0U == (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U] 
                                                 >> 0xaU)))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U] 
                                = ((0x7fffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U]) 
                                   | ((IData)((((QData)((IData)(
                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[7U])) 
                                                << 0x29U) 
                                               | (((QData)((IData)(
                                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[6U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[5U])) 
                                                     >> 0x17U)))) 
                                      << 0x17U));
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[6U] 
                                = (((IData)((((QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[7U])) 
                                              << 0x29U) 
                                             | (((QData)((IData)(
                                                                 vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[6U])) 
                                                 << 9U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[5U])) 
                                                   >> 0x17U)))) 
                                    >> 9U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[7U])) 
                                                         << 0x29U) 
                                                        | (((QData)((IData)(
                                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[6U])) 
                                                            << 9U) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[5U])) 
                                                              >> 0x17U))) 
                                                       >> 0x20U)) 
                                              << 0x17U));
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[7U] 
                                = ((0xf800000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[7U]) 
                                   | (0xfffffffU & 
                                      ((IData)(((((QData)((IData)(
                                                                  vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[7U])) 
                                                  << 0x29U) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[6U])) 
                                                     << 9U) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[5U])) 
                                                       >> 0x17U))) 
                                                >> 0x20U)) 
                                       >> 9U)));
                        }
                        if ((0U == (0x1ffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[0U] 
                                              >> 4U)))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__idqueue_pop 
                                = (1U | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__idqueue_pop));
                        }
                        if ((2U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_state_q))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[0U] 
                                = (0x2000U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[0U]);
                        } else if (((3U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_state_q)) 
                                    || (4U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_state_q)))) {
                            if (((0U == (0x1ffU & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[0U] 
                                                   >> 4U))) 
                                 | VL_NEQ_W(4, ([&]() {
                                                vlSelf->__Vfunc_aligned_addr__23__size 
                                                    = 
                                                    (7U 
                                                     & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[0U] 
                                                        >> 1U));
                                                vlSelf->__Vfunc_aligned_addr__23__addr[0U] 
                                                    = (IData)(
                                                              (((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[7U])) 
                                                                << 0x29U) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[6U])) 
                                                                   << 9U) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U])) 
                                                                     >> 0x17U))));
                                                vlSelf->__Vfunc_aligned_addr__23__addr[1U] 
                                                    = (IData)(
                                                              ((((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[7U])) 
                                                                 << 0x29U) 
                                                                | (((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[6U])) 
                                                                    << 9U) 
                                                                   | ((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U])) 
                                                                      >> 0x17U))) 
                                                               >> 0x20U));
                                                vlSelf->__Vfunc_aligned_addr__23__addr[2U] = 0U;
                                                vlSelf->__Vfunc_aligned_addr__23__addr[3U] = 0U;
                                                VL_SHIFTR_WWI(128,128,3, __Vtemp_26, vlSelf->__Vfunc_aligned_addr__23__addr, (IData)(vlSelf->__Vfunc_aligned_addr__23__size));
                                                VL_SHIFTL_WWI(128,128,3, vlSelf->__Vfunc_aligned_addr__23__Vfuncout, __Vtemp_26, (IData)(vlSelf->__Vfunc_aligned_addr__23__size));
                                            }(), vlSelf->__Vfunc_aligned_addr__23__Vfuncout), 
                                            ([&]() {
                                                vlSelf->__Vfunc_aligned_addr__24__size 
                                                    = 
                                                    (7U 
                                                     & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[0U] 
                                                        >> 1U));
                                                vlSelf->__Vfunc_aligned_addr__24__addr[0U] 
                                                    = (IData)(
                                                              (((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[7U])) 
                                                                << 0x29U) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[6U])) 
                                                                   << 9U) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[5U])) 
                                                                     >> 0x17U))));
                                                vlSelf->__Vfunc_aligned_addr__24__addr[1U] 
                                                    = (IData)(
                                                              ((((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[7U])) 
                                                                 << 0x29U) 
                                                                | (((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[6U])) 
                                                                    << 9U) 
                                                                   | ((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[5U])) 
                                                                      >> 0x17U))) 
                                                               >> 0x20U));
                                                vlSelf->__Vfunc_aligned_addr__24__addr[2U] = 0U;
                                                vlSelf->__Vfunc_aligned_addr__24__addr[3U] = 0U;
                                                VL_SHIFTR_WWI(128,128,3, __Vtemp_27, vlSelf->__Vfunc_aligned_addr__24__addr, (IData)(vlSelf->__Vfunc_aligned_addr__24__size));
                                                VL_SHIFTL_WWI(128,128,3, vlSelf->__Vfunc_aligned_addr__24__Vfuncout, __Vtemp_27, (IData)(vlSelf->__Vfunc_aligned_addr__24__size));
                                            }(), vlSelf->__Vfunc_aligned_addr__24__Vfuncout)))) {
                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[0U] 
                                    = (0x2000U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[0U]);
                            }
                        }
                        if ((4U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_state_q))) {
                            if ((IData)(((0U == (0x7f8000U 
                                                 & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[5U])) 
                                         & (0U != (0x1ffU 
                                                   & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[0U] 
                                                      >> 4U)))))) {
                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[4U] 
                                    = ((0xfeffffffU 
                                        & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[4U]) 
                                       | (0x1000000U 
                                          & ((~ vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[0U]) 
                                             << 0x18U)));
                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U] 
                                    = ((0xff807fffU 
                                        & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[5U]) 
                                       | (((0xffU >= 
                                            (0x1ffU 
                                             & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[0U] 
                                                >> 4U)))
                                            ? (0xffU 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_d[0U] 
                                                  >> 4U))
                                            : 0xffU) 
                                          << 0xfU));
                            }
                        }
                    }
                }
            }
        }
        if ((1U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__slv_r_valid_tran) 
                   & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__slv_r_ready_tran)))) {
            if ((0x1ffU == (0x1ffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_req_q[0U] 
                                      >> 4U)))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__0__KET____DOT__r_state_d = 0U;
            }
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_state_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_state_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[3U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[3U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[4U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[4U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[5U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[6U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[6U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[7U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[7U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_ar_tran[3U] 
        = ((7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_ar_tran[3U]) 
           | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[5U] 
               << 0xaU) | (0x3f8U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[4U] 
                                     >> 0x16U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_ar_tran[4U] 
        = ((7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[5U] 
                  >> 0x16U)) | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[6U] 
                                 << 0xaU) | (0x3f8U 
                                             & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[5U] 
                                                >> 0x16U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_ar_tran[5U] 
        = ((7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[6U] 
                  >> 0x16U)) | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[7U] 
                                 << 0xaU) | (0x3f8U 
                                             & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[6U] 
                                                >> 0x16U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_ar_tran[6U] 
        = (0x3fU & ((7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[7U] 
                           >> 0x16U)) | (0x38U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[7U] 
                                                  >> 0x16U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_ar_id 
        = ((0x1fU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_ar_id)) 
           | (0x3e0U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[7U] 
                        >> 0x12U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_ar_valid_tran 
        = ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_ar_valid_tran)) 
           | (2U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[4U] 
                    >> 0x17U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_req_ar_err 
        = ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_req_ar_err)) 
           | (2U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[4U] 
                    >> 0x16U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__slv_r_tran[4U] 
        = ((0x1ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__slv_r_tran[4U]) 
           | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[1U] 
               << 0x1bU) | (0x7fffe00U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[0U] 
                                          >> 5U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__slv_r_tran[5U] 
        = ((0x1ffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[1U] 
                      >> 5U)) | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[2U] 
                                  << 0x1bU) | (0x7fffe00U 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[1U] 
                                                  >> 5U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__slv_r_tran[6U] 
        = ((0x1ffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[2U] 
                      >> 5U)) | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[3U] 
                                  << 0x1bU) | (0x7fffe00U 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[2U] 
                                                  >> 5U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__slv_r_tran[7U] 
        = ((0x1ffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[3U] 
                      >> 5U)) | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[4U] 
                                  << 0x1bU) | (0x7fffe00U 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[3U] 
                                                  >> 5U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__slv_r_tran[8U] 
        = (0x3ffffU & ((0x1ffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[4U] 
                                  >> 5U)) | (0x3fe00U 
                                             & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[4U] 
                                                >> 5U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__slv_r_valid_tran 
        = ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__slv_r_valid_tran)) 
           | (2U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[0U] 
                    >> 0xcU)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__idqueue_push 
        = (1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__idqueue_push));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__idqueue_pop 
        = (1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__idqueue_pop));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__arb_slv_ar_gnt_tran 
        = (1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__arb_slv_ar_gnt_tran));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_r_ready_tran 
        = (1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_r_ready_tran));
    if ((2U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_ar_valid_tran) 
               & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_ar_ready_tran)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[4U] 
            = (0xfe7fffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[4U]);
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_data[0U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[1U] 
            << 0xeU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[0U] 
                        >> 0x12U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_data[1U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[2U] 
            << 0xeU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[1U] 
                        >> 0x12U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_data[2U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[3U] 
            << 0xeU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[2U] 
                        >> 0x12U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_data[3U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[4U] 
            << 0xeU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[3U] 
                        >> 0x12U));
    if ((0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_state_q))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[4U] 
            = (0x1ffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[4U]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U] = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[6U] = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[7U] = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[0U] 
            = (0x3fffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[0U]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[1U] = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[2U] = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[3U] = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[4U] 
            = (0xff800000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[4U]);
        if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_slv_ar_arb__DOT__gen_arbiter__DOT__req_nodes) 
             & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__idx_ar_downsizer))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__arb_slv_ar_gnt_tran 
                = (2U | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__arb_slv_ar_gnt_tran));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__idqueue_push 
                = (2U | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__idqueue_push));
            if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_slv_ar_arb__DOT__gen_arbiter__DOT__index_nodes) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_state_d = 1U;
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_state_d = 2U;
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[4U] 
                    = (0x1000000U | ((0xffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[4U]) 
                                     | (0xfe000000U 
                                        & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_soc_xbar__DOT____Vcellout__gen_mst_port_mux__BRA__2__KET____DOT__i_axi_mux__mst_req_o[0U] 
                                           << 0x17U))));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U] 
                    = (((0x800000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_soc_xbar__DOT____Vcellout__gen_mst_port_mux__BRA__2__KET____DOT__i_axi_mux__mst_req_o[1U] 
                                      << 0x17U)) | 
                        (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_soc_xbar__DOT____Vcellout__gen_mst_port_mux__BRA__2__KET____DOT__i_axi_mux__mst_req_o[0U] 
                         >> 9U)) | ((0x1000000U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_soc_xbar__DOT____Vcellout__gen_mst_port_mux__BRA__2__KET____DOT__i_axi_mux__mst_req_o[1U] 
                                                   << 0x17U)) 
                                    | (0xfe000000U 
                                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_soc_xbar__DOT____Vcellout__gen_mst_port_mux__BRA__2__KET____DOT__i_axi_mux__mst_req_o[1U] 
                                          << 0x17U))));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[6U] 
                    = (((0x800000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_soc_xbar__DOT____Vcellout__gen_mst_port_mux__BRA__2__KET____DOT__i_axi_mux__mst_req_o[2U] 
                                      << 0x17U)) | 
                        (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_soc_xbar__DOT____Vcellout__gen_mst_port_mux__BRA__2__KET____DOT__i_axi_mux__mst_req_o[1U] 
                         >> 9U)) | ((0x1000000U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_soc_xbar__DOT____Vcellout__gen_mst_port_mux__BRA__2__KET____DOT__i_axi_mux__mst_req_o[2U] 
                                                   << 0x17U)) 
                                    | (0xfe000000U 
                                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_soc_xbar__DOT____Vcellout__gen_mst_port_mux__BRA__2__KET____DOT__i_axi_mux__mst_req_o[2U] 
                                          << 0x17U))));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[7U] 
                    = (0xfffffffU & (((0x800000U & 
                                       (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_soc_xbar__DOT____Vcellout__gen_mst_port_mux__BRA__2__KET____DOT__i_axi_mux__mst_req_o[3U] 
                                        << 0x17U)) 
                                      | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_soc_xbar__DOT____Vcellout__gen_mst_port_mux__BRA__2__KET____DOT__i_axi_mux__mst_req_o[2U] 
                                         >> 9U)) | 
                                     ((0x1000000U & 
                                       (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_soc_xbar__DOT____Vcellout__gen_mst_port_mux__BRA__2__KET____DOT__i_axi_mux__mst_req_o[3U] 
                                        << 0x17U)) 
                                      | (0xe000000U 
                                         & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_soc_xbar__DOT____Vcellout__gen_mst_port_mux__BRA__2__KET____DOT__i_axi_mux__mst_req_o[3U] 
                                            << 0x17U)))));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[0U] 
                    = ((0xffffe001U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[0U]) 
                       | (0xfffffffeU & ((0xff0U & 
                                          (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_soc_xbar__DOT____Vcellout__gen_mst_port_mux__BRA__2__KET____DOT__i_axi_mux__mst_req_o[0U] 
                                           >> 0x14U)) 
                                         | (0xeU & 
                                            (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_soc_xbar__DOT____Vcellout__gen_mst_port_mux__BRA__2__KET____DOT__i_axi_mux__mst_req_o[0U] 
                                             >> 0x14U)))));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[0U] 
                    = (0xfffffffeU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[0U]);
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[0U] 
                    = (0x10000U | (0xfffcffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[0U]));
                if ((1U == (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U] 
                                  >> 0xaU)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk1__DOT__size_mask 
                        = ((1ULL << (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U] 
                                           >> 0xcU))) 
                           - 1ULL);
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk1__DOT__conv_ratio 
                        = VL_SHIFTR_QQI(64,64,32, (7ULL 
                                                   + 
                                                   (1ULL 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U] 
                                                        >> 0xcU)))), 3U);
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk1__DOT__align_adj 
                        = (0x1fffffffffffffffULL & 
                           VL_SHIFTR_QQI(64,64,32, 
                                         ((((QData)((IData)(
                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[7U])) 
                                            << 0x29U) 
                                           | (((QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[6U])) 
                                               << 9U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U])) 
                                                 >> 0x17U))) 
                                          & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk1__DOT__size_mask), 3U));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[0U] 
                        = ((0xffffe00fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[0U]) 
                           | (0x1ff0U & ((((IData)(
                                                   ((1ULL 
                                                     + (QData)((IData)(
                                                                       (0xffU 
                                                                        & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U] 
                                                                           >> 0xfU))))) 
                                                    * vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk1__DOT__conv_ratio)) 
                                           - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk1__DOT__align_adj)) 
                                          - (IData)(1U)) 
                                         << 4U)));
                    if ((1ULL != vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk1__DOT__conv_ratio)) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U] 
                            = (0x3000U | (0xffff8fffU 
                                          & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U]));
                        if ((0xffU >= (0x1ffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[0U] 
                                                 >> 4U)))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U] 
                                = ((0xff807fffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U]) 
                                   | (0x7f8000U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[0U] 
                                                   << 0xbU)));
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_state_d = 3U;
                        } else {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_state_d = 4U;
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U] 
                                = ((0xff807fffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U]) 
                                   | (0x7f8000U & (
                                                   ((IData)(0xffU) 
                                                    - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk1__DOT__align_adj)) 
                                                   << 0xfU)));
                        }
                    }
                } else if ((0U == (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U] 
                                         >> 0xaU)))) {
                    if ((0U == (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U] 
                                         >> 0xfU)))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk2__DOT__size_mask 
                            = ((1ULL << (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U] 
                                               >> 0xcU))) 
                               - 1ULL);
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk2__DOT__conv_ratio 
                            = VL_SHIFTR_QQI(64,64,32, 
                                            (7ULL + 
                                             (1ULL 
                                              << (7U 
                                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U] 
                                                     >> 0xcU)))), 3U);
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk2__DOT__align_adj 
                            = (0x1fffffffffffffffULL 
                               & VL_SHIFTR_QQI(64,64,32, 
                                               ((((QData)((IData)(
                                                                  vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[7U])) 
                                                  << 0x29U) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[6U])) 
                                                     << 9U) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U])) 
                                                       >> 0x17U))) 
                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk2__DOT__size_mask), 3U));
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[0U] 
                            = ((0xffffe00fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[0U]) 
                               | (0x1ff0U & ((IData)(
                                                     ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk2__DOT__conv_ratio 
                                                       >= 
                                                       (1ULL 
                                                        + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk2__DOT__align_adj))
                                                       ? 
                                                      ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk2__DOT__conv_ratio 
                                                        - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk2__DOT__align_adj) 
                                                       - 1ULL)
                                                       : 0ULL)) 
                                             << 4U)));
                        if ((1ULL != vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk2__DOT__conv_ratio)) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U] 
                                = ((0xff807fffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U]) 
                                   | (0x7f8000U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[0U] 
                                                   << 0xbU)));
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_state_d = 3U;
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U] 
                                = (0x3400U | (0xffff83ffU 
                                              & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U]));
                        }
                    } else {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[4U] 
                            = (0x800000U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[4U]);
                    }
                } else if ((2U == (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U] 
                                         >> 0xaU)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_state_d = 2U;
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[4U] 
                        = (0x800000U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[4U]);
                }
            }
        }
    } else if ((1U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_state_q))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U] 
            = ((0x7fffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U]) 
               | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__w_req_q[2U] 
                   << 0x19U) | (0x1800000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__w_req_q[1U] 
                                              >> 7U))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[6U] 
            = ((0x7fffffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__w_req_q[2U] 
                             >> 7U)) | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__w_req_q[3U] 
                                         << 0x19U) 
                                        | (0x1800000U 
                                           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__w_req_q[2U] 
                                              >> 7U))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[7U] 
            = (0xfffffffU & ((0x7fffffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__w_req_q[3U] 
                                           >> 7U)) 
                             | (0xf800000U & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__w_req_q[4U] 
                                               << 0x19U) 
                                              | (0x1800000U 
                                                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__w_req_q[3U] 
                                                    >> 7U))))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U] 
            = ((0xff8003ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U]) 
               | (0xfffffc00U & ((0x7f8000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__w_req_q[0U] 
                                               << 8U)) 
                                 | ((0x7000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__w_req_q[0U] 
                                                << 0xcU)) 
                                    | (0xc00U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__w_req_q[0U] 
                                                 << 5U))))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[4U] 
            = ((0xffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[4U]) 
               | (0xff000000U & ((0xfc000000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__w_req_q[1U] 
                                                 << 0x19U)) 
                                 | (0x2000000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__w_req_q[0U] 
                                                  >> 1U)))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U] 
            = ((0xfffffc00U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U]) 
               | (0x3ffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__w_req_q[1U] 
                            >> 7U)));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[0U] 
            = ((0xffffe001U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[0U]) 
               | (0xfffffffeU & ((0xff0U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__w_req_q[0U] 
                                            >> 3U)) 
                                 | (0xeU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__w_req_q[0U] 
                                            << 1U)))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[0U] 
            = (1U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[0U]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[0U] 
            = (0x10000U | (0xfffcffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[0U]));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_state_d = 2U;
        if ((1U == (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U] 
                          >> 0xaU)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk3__DOT__size_mask 
                = ((1ULL << (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U] 
                                   >> 0xcU))) - 1ULL);
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk3__DOT__conv_ratio 
                = VL_SHIFTR_QQI(64,64,32, (7ULL + (1ULL 
                                                   << 
                                                   (7U 
                                                    & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U] 
                                                       >> 0xcU)))), 3U);
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk3__DOT__align_adj 
                = (0x1fffffffffffffffULL & VL_SHIFTR_QQI(64,64,32, 
                                                         ((((QData)((IData)(
                                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[7U])) 
                                                            << 0x29U) 
                                                           | (((QData)((IData)(
                                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[6U])) 
                                                               << 9U) 
                                                              | ((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U])) 
                                                                 >> 0x17U))) 
                                                          & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk3__DOT__size_mask), 3U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[0U] 
                = ((0xffffe00fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[0U]) 
                   | (0x1ff0U & ((((IData)(((1ULL + (QData)((IData)(
                                                                    (0xffU 
                                                                     & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U] 
                                                                        >> 0xfU))))) 
                                            * vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk3__DOT__conv_ratio)) 
                                   - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk3__DOT__align_adj)) 
                                  - (IData)(1U)) << 4U)));
            if ((1ULL != vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk3__DOT__conv_ratio)) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U] 
                    = (0x3000U | (0xffff8fffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U]));
                if ((0xffU >= (0x1ffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[0U] 
                                         >> 4U)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U] 
                        = ((0xff807fffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U]) 
                           | (0x7f8000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[0U] 
                                           << 0xbU)));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_state_d = 3U;
                } else {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_state_d = 4U;
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U] 
                        = ((0xff807fffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U]) 
                           | (0x7f8000U & (((IData)(0xffU) 
                                            - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk3__DOT__align_adj)) 
                                           << 0xfU)));
                }
            }
        } else if ((0U == (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U] 
                                 >> 0xaU)))) {
            if ((0U == (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U] 
                                 >> 0xfU)))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk4__DOT__size_mask 
                    = ((1ULL << (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U] 
                                       >> 0xcU))) - 1ULL);
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk4__DOT__conv_ratio 
                    = VL_SHIFTR_QQI(64,64,32, (7ULL 
                                               + (1ULL 
                                                  << 
                                                  (7U 
                                                   & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U] 
                                                      >> 0xcU)))), 3U);
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk4__DOT__align_adj 
                    = (0x1fffffffffffffffULL & VL_SHIFTR_QQI(64,64,32, 
                                                             ((((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[7U])) 
                                                                << 0x29U) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[6U])) 
                                                                   << 9U) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U])) 
                                                                     >> 0x17U))) 
                                                              & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk4__DOT__size_mask), 3U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[0U] 
                    = ((0xffffe00fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[0U]) 
                       | (0x1ff0U & ((IData)(((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk4__DOT__conv_ratio 
                                               >= (1ULL 
                                                   + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk4__DOT__align_adj))
                                               ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk4__DOT__conv_ratio 
                                                   - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk4__DOT__align_adj) 
                                                  - 1ULL)
                                               : 0ULL)) 
                                     << 4U)));
                if ((1ULL != vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk4__DOT__conv_ratio)) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U] 
                        = ((0xff807fffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U]) 
                           | (0x7f8000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[0U] 
                                           << 0xbU)));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_state_d = 3U;
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U] 
                        = (0x3400U | (0xffff83ffU & 
                                      vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U]));
                }
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[4U] 
                    = (0x800000U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[4U]);
            }
        } else if ((2U == (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U] 
                                 >> 0xaU)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_state_d = 2U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[4U] 
                = (0x800000U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[4U]);
        }
    } else if ((((2U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_state_q)) 
                 || (3U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_state_q))) 
                || (4U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_state_q)))) {
        if ((2U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__slv_r_valid_tran) 
                   & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__slv_r_ready_tran)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[0U] 
                = (0x1fffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[0U]);
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[1U] = 0U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[2U] = 0U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[3U] = 0U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[4U] 
                = (0xff800000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[4U]);
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_data[0U] = 0U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_data[1U] = 0U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_data[2U] = 0U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_data[3U] = 0U;
        }
        if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[4U] 
                      >> 0x18U)))) {
            if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__idqueue_id) 
                 & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__idqueue_valid))) {
                if ((1U & ((~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__slv_r_valid_tran) 
                               >> 1U)) | (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__slv_r_valid_tran) 
                                           & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__slv_r_ready_tran)) 
                                          >> 1U)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_r_ready_tran 
                        = (2U | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_r_ready_tran));
                    if ((0x200U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[2U])) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset 
                            = (QData)((IData)((7U & 
                                               (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[5U] 
                                                >> 0x17U))));
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset 
                            = (QData)((IData)((0xfU 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[5U] 
                                                  >> 0x17U))));
                        if ((((0ULL >= vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                              & ((- vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                                 < (1ULL << (7U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[0U] 
                                                   >> 1U))))) 
                             & (8ULL > (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset 
                                        - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset)))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_data[0U] 
                                = ((0xffffff00U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_data[0U]) 
                                   | ((0x55U >= ((IData)(4U) 
                                                 + 
                                                 (0x3fU 
                                                  & (IData)(
                                                            VL_SHIFTL_QQI(64,64,32, 
                                                                          (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset 
                                                                           - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))
                                       ? (0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(4U) 
                                                         + 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    VL_SHIFTL_QQI(64,64,32, 
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))
                                                     ? 0U
                                                     : 
                                                    (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                                     (((IData)(0xbU) 
                                                       + 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  VL_SHIFTL_QQI(64,64,32, 
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(4U) 
                                                          + 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     VL_SHIFTL_QQI(64,64,32, 
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))))) 
                                                   | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                                      (((IData)(4U) 
                                                        + 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   VL_SHIFTL_QQI(64,64,32, 
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                                       >> 5U)] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(4U) 
                                                          + 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     VL_SHIFTL_QQI(64,64,32, 
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))))
                                       : 0U));
                        }
                        if ((((1ULL >= vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                              & ((1ULL - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                                 < (1ULL << (7U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[0U] 
                                                   >> 1U))))) 
                             & (8ULL > ((1ULL + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                        - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset)))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_data[0U] 
                                = ((0xffff00ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_data[0U]) 
                                   | (((0x55U >= ((IData)(4U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((1ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))
                                        ? (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & ((IData)(4U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((1ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))
                                              ? 0U : 
                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                              (((IData)(0xbU) 
                                                + (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((1ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((1ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))))) 
                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                               (((IData)(4U) 
                                                 + 
                                                 (0x3fU 
                                                  & (IData)(
                                                            VL_SHIFTL_QQI(64,64,32, 
                                                                          ((1ULL 
                                                                            + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                           - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((1ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))))
                                        : 0U) << 8U));
                        }
                        if ((((2ULL >= vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                              & ((2ULL - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                                 < (1ULL << (7U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[0U] 
                                                   >> 1U))))) 
                             & (8ULL > ((2ULL + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                        - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset)))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_data[0U] 
                                = ((0xff00ffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_data[0U]) 
                                   | (((0x55U >= ((IData)(4U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((2ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))
                                        ? (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & ((IData)(4U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((2ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))
                                              ? 0U : 
                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                              (((IData)(0xbU) 
                                                + (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((2ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((2ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))))) 
                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                               (((IData)(4U) 
                                                 + 
                                                 (0x3fU 
                                                  & (IData)(
                                                            VL_SHIFTL_QQI(64,64,32, 
                                                                          ((2ULL 
                                                                            + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                           - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((2ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))))
                                        : 0U) << 0x10U));
                        }
                        if ((((3ULL >= vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                              & ((3ULL - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                                 < (1ULL << (7U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[0U] 
                                                   >> 1U))))) 
                             & (8ULL > ((3ULL + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                        - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset)))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_data[0U] 
                                = ((0xffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_data[0U]) 
                                   | (((0x55U >= ((IData)(4U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((3ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))
                                        ? (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & ((IData)(4U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((3ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))
                                              ? 0U : 
                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                              (((IData)(0xbU) 
                                                + (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((3ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((3ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))))) 
                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                               (((IData)(4U) 
                                                 + 
                                                 (0x3fU 
                                                  & (IData)(
                                                            VL_SHIFTL_QQI(64,64,32, 
                                                                          ((3ULL 
                                                                            + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                           - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((3ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))))
                                        : 0U) << 0x18U));
                        }
                        if ((((4ULL >= vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                              & ((4ULL - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                                 < (1ULL << (7U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[0U] 
                                                   >> 1U))))) 
                             & (8ULL > ((4ULL + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                        - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset)))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_data[1U] 
                                = ((0xffffff00U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_data[1U]) 
                                   | ((0x55U >= ((IData)(4U) 
                                                 + 
                                                 (0x3fU 
                                                  & (IData)(
                                                            VL_SHIFTL_QQI(64,64,32, 
                                                                          ((4ULL 
                                                                            + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                           - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))
                                       ? (0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(4U) 
                                                         + 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    VL_SHIFTL_QQI(64,64,32, 
                                                                                ((4ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))
                                                     ? 0U
                                                     : 
                                                    (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                                     (((IData)(0xbU) 
                                                       + 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  VL_SHIFTL_QQI(64,64,32, 
                                                                                ((4ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(4U) 
                                                          + 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     VL_SHIFTL_QQI(64,64,32, 
                                                                                ((4ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))))) 
                                                   | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                                      (((IData)(4U) 
                                                        + 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   VL_SHIFTL_QQI(64,64,32, 
                                                                                ((4ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                                       >> 5U)] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(4U) 
                                                          + 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     VL_SHIFTL_QQI(64,64,32, 
                                                                                ((4ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))))
                                       : 0U));
                        }
                        if ((((5ULL >= vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                              & ((5ULL - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                                 < (1ULL << (7U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[0U] 
                                                   >> 1U))))) 
                             & (8ULL > ((5ULL + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                        - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset)))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_data[1U] 
                                = ((0xffff00ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_data[1U]) 
                                   | (((0x55U >= ((IData)(4U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((5ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))
                                        ? (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & ((IData)(4U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((5ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))
                                              ? 0U : 
                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                              (((IData)(0xbU) 
                                                + (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((5ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((5ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))))) 
                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                               (((IData)(4U) 
                                                 + 
                                                 (0x3fU 
                                                  & (IData)(
                                                            VL_SHIFTL_QQI(64,64,32, 
                                                                          ((5ULL 
                                                                            + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                           - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((5ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))))
                                        : 0U) << 8U));
                        }
                        if ((((6ULL >= vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                              & ((6ULL - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                                 < (1ULL << (7U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[0U] 
                                                   >> 1U))))) 
                             & (8ULL > ((6ULL + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                        - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset)))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_data[1U] 
                                = ((0xff00ffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_data[1U]) 
                                   | (((0x55U >= ((IData)(4U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((6ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))
                                        ? (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & ((IData)(4U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((6ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))
                                              ? 0U : 
                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                              (((IData)(0xbU) 
                                                + (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((6ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((6ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))))) 
                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                               (((IData)(4U) 
                                                 + 
                                                 (0x3fU 
                                                  & (IData)(
                                                            VL_SHIFTL_QQI(64,64,32, 
                                                                          ((6ULL 
                                                                            + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                           - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((6ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))))
                                        : 0U) << 0x10U));
                        }
                        if ((((7ULL >= vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                              & ((7ULL - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                                 < (1ULL << (7U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[0U] 
                                                   >> 1U))))) 
                             & (8ULL > ((7ULL + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                        - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset)))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_data[1U] 
                                = ((0xffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_data[1U]) 
                                   | (((0x55U >= ((IData)(4U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((7ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))
                                        ? (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & ((IData)(4U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((7ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))
                                              ? 0U : 
                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                              (((IData)(0xbU) 
                                                + (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((7ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((7ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))))) 
                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                               (((IData)(4U) 
                                                 + 
                                                 (0x3fU 
                                                  & (IData)(
                                                            VL_SHIFTL_QQI(64,64,32, 
                                                                          ((7ULL 
                                                                            + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                           - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((7ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))))
                                        : 0U) << 0x18U));
                        }
                        if ((((8ULL >= vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                              & ((8ULL - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                                 < (1ULL << (7U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[0U] 
                                                   >> 1U))))) 
                             & (8ULL > ((8ULL + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                        - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset)))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_data[2U] 
                                = ((0xffffff00U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_data[2U]) 
                                   | ((0x55U >= ((IData)(4U) 
                                                 + 
                                                 (0x3fU 
                                                  & (IData)(
                                                            VL_SHIFTL_QQI(64,64,32, 
                                                                          ((8ULL 
                                                                            + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                           - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))
                                       ? (0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(4U) 
                                                         + 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    VL_SHIFTL_QQI(64,64,32, 
                                                                                ((8ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))
                                                     ? 0U
                                                     : 
                                                    (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                                     (((IData)(0xbU) 
                                                       + 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  VL_SHIFTL_QQI(64,64,32, 
                                                                                ((8ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(4U) 
                                                          + 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     VL_SHIFTL_QQI(64,64,32, 
                                                                                ((8ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))))) 
                                                   | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                                      (((IData)(4U) 
                                                        + 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   VL_SHIFTL_QQI(64,64,32, 
                                                                                ((8ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                                       >> 5U)] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(4U) 
                                                          + 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     VL_SHIFTL_QQI(64,64,32, 
                                                                                ((8ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))))
                                       : 0U));
                        }
                        if ((((9ULL >= vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                              & ((9ULL - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                                 < (1ULL << (7U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[0U] 
                                                   >> 1U))))) 
                             & (8ULL > ((9ULL + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                        - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset)))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_data[2U] 
                                = ((0xffff00ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_data[2U]) 
                                   | (((0x55U >= ((IData)(4U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((9ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))
                                        ? (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & ((IData)(4U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((9ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))
                                              ? 0U : 
                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                              (((IData)(0xbU) 
                                                + (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((9ULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((9ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))))) 
                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                               (((IData)(4U) 
                                                 + 
                                                 (0x3fU 
                                                  & (IData)(
                                                            VL_SHIFTL_QQI(64,64,32, 
                                                                          ((9ULL 
                                                                            + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                           - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((9ULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))))
                                        : 0U) << 8U));
                        }
                        if ((((0xaULL >= vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                              & ((0xaULL - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                                 < (1ULL << (7U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[0U] 
                                                   >> 1U))))) 
                             & (8ULL > ((0xaULL + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                        - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset)))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_data[2U] 
                                = ((0xff00ffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_data[2U]) 
                                   | (((0x55U >= ((IData)(4U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((0xaULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))
                                        ? (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & ((IData)(4U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((0xaULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))
                                              ? 0U : 
                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                              (((IData)(0xbU) 
                                                + (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((0xaULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((0xaULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))))) 
                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                               (((IData)(4U) 
                                                 + 
                                                 (0x3fU 
                                                  & (IData)(
                                                            VL_SHIFTL_QQI(64,64,32, 
                                                                          ((0xaULL 
                                                                            + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                           - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((0xaULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))))
                                        : 0U) << 0x10U));
                        }
                        if ((((0xbULL >= vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                              & ((0xbULL - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                                 < (1ULL << (7U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[0U] 
                                                   >> 1U))))) 
                             & (8ULL > ((0xbULL + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                        - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset)))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_data[2U] 
                                = ((0xffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_data[2U]) 
                                   | (((0x55U >= ((IData)(4U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((0xbULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))
                                        ? (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & ((IData)(4U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((0xbULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))
                                              ? 0U : 
                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                              (((IData)(0xbU) 
                                                + (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((0xbULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((0xbULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))))) 
                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                               (((IData)(4U) 
                                                 + 
                                                 (0x3fU 
                                                  & (IData)(
                                                            VL_SHIFTL_QQI(64,64,32, 
                                                                          ((0xbULL 
                                                                            + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                           - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((0xbULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))))
                                        : 0U) << 0x18U));
                        }
                        if ((((0xcULL >= vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                              & ((0xcULL - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                                 < (1ULL << (7U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[0U] 
                                                   >> 1U))))) 
                             & (8ULL > ((0xcULL + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                        - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset)))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_data[3U] 
                                = ((0xffffff00U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_data[3U]) 
                                   | ((0x55U >= ((IData)(4U) 
                                                 + 
                                                 (0x3fU 
                                                  & (IData)(
                                                            VL_SHIFTL_QQI(64,64,32, 
                                                                          ((0xcULL 
                                                                            + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                           - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))
                                       ? (0xffU & (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(4U) 
                                                         + 
                                                         (0x3fU 
                                                          & (IData)(
                                                                    VL_SHIFTL_QQI(64,64,32, 
                                                                                ((0xcULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))
                                                     ? 0U
                                                     : 
                                                    (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                                     (((IData)(0xbU) 
                                                       + 
                                                       (0x3fU 
                                                        & (IData)(
                                                                  VL_SHIFTL_QQI(64,64,32, 
                                                                                ((0xcULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(4U) 
                                                          + 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     VL_SHIFTL_QQI(64,64,32, 
                                                                                ((0xcULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))))) 
                                                   | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                                      (((IData)(4U) 
                                                        + 
                                                        (0x3fU 
                                                         & (IData)(
                                                                   VL_SHIFTL_QQI(64,64,32, 
                                                                                ((0xcULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                                       >> 5U)] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(4U) 
                                                          + 
                                                          (0x3fU 
                                                           & (IData)(
                                                                     VL_SHIFTL_QQI(64,64,32, 
                                                                                ((0xcULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))))
                                       : 0U));
                        }
                        if ((((0xdULL >= vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                              & ((0xdULL - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                                 < (1ULL << (7U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[0U] 
                                                   >> 1U))))) 
                             & (8ULL > ((0xdULL + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                        - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset)))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_data[3U] 
                                = ((0xffff00ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_data[3U]) 
                                   | (((0x55U >= ((IData)(4U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((0xdULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))
                                        ? (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & ((IData)(4U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((0xdULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))
                                              ? 0U : 
                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                              (((IData)(0xbU) 
                                                + (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((0xdULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((0xdULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))))) 
                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                               (((IData)(4U) 
                                                 + 
                                                 (0x3fU 
                                                  & (IData)(
                                                            VL_SHIFTL_QQI(64,64,32, 
                                                                          ((0xdULL 
                                                                            + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                           - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((0xdULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))))
                                        : 0U) << 8U));
                        }
                        if ((((0xeULL >= vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                              & ((0xeULL - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                                 < (1ULL << (7U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[0U] 
                                                   >> 1U))))) 
                             & (8ULL > ((0xeULL + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                        - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset)))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_data[3U] 
                                = ((0xff00ffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_data[3U]) 
                                   | (((0x55U >= ((IData)(4U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((0xeULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))
                                        ? (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & ((IData)(4U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((0xeULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))
                                              ? 0U : 
                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                              (((IData)(0xbU) 
                                                + (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((0xeULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((0xeULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))))) 
                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                               (((IData)(4U) 
                                                 + 
                                                 (0x3fU 
                                                  & (IData)(
                                                            VL_SHIFTL_QQI(64,64,32, 
                                                                          ((0xeULL 
                                                                            + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                           - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((0xeULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))))
                                        : 0U) << 0x10U));
                        }
                        if ((((0xfULL >= vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                              & ((0xfULL - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset) 
                                 < (1ULL << (7U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[0U] 
                                                   >> 1U))))) 
                             & (8ULL > ((0xfULL + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                        - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset)))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_data[3U] 
                                = ((0xffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_data[3U]) 
                                   | (((0x55U >= ((IData)(4U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((0xfULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))
                                        ? (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & ((IData)(4U) 
                                                  + 
                                                  (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((0xfULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))
                                              ? 0U : 
                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                              (((IData)(0xbU) 
                                                + (0x3fU 
                                                   & (IData)(
                                                             VL_SHIFTL_QQI(64,64,32, 
                                                                           ((0xfULL 
                                                                             + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                            - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((0xfULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))))))) 
                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[
                                               (((IData)(4U) 
                                                 + 
                                                 (0x3fU 
                                                  & (IData)(
                                                            VL_SHIFTL_QQI(64,64,32, 
                                                                          ((0xfULL 
                                                                            + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                           - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U)))) 
                                                >> 5U)] 
                                               >> (0x1fU 
                                                   & ((IData)(4U) 
                                                      + 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 VL_SHIFTL_QQI(64,64,32, 
                                                                               ((0xfULL 
                                                                                + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__mst_port_offset) 
                                                                                - vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__slv_port_offset), 3U))))))))
                                        : 0U) << 0x18U));
                        }
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__unnamedblk5__DOT__unnamedblk6__DOT__b = 0x10U;
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[0U] 
                            = ((0xffffe00fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[0U]) 
                               | (0x1ff0U & ((((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[0U] 
                                                << 0x1cU) 
                                               | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[0U] 
                                                  >> 4U)) 
                                              - (IData)(1U)) 
                                             << 4U)));
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U] 
                            = ((0xff807fffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U]) 
                               | (0x7f8000U & ((((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[5U] 
                                                  << 0x11U) 
                                                 | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[5U] 
                                                    >> 0xfU)) 
                                                - (IData)(1U)) 
                                               << 0xfU)));
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[0U] 
                            = ((0x3ffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[0U]) 
                               | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_data[0U] 
                                  << 0x12U));
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[1U] 
                            = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_data[0U] 
                                >> 0xeU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_data[1U] 
                                            << 0x12U));
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[2U] 
                            = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_data[1U] 
                                >> 0xeU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_data[2U] 
                                            << 0x12U));
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[3U] 
                            = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_data[2U] 
                                >> 0xeU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_data[3U] 
                                            << 0x12U));
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[4U] 
                            = ((0xfffc0000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[4U]) 
                               | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_data[3U] 
                                  >> 0xeU));
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[0U] 
                            = ((0xffff7fffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[0U]) 
                               | ((0U == (0x1ffU & 
                                          (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[0U] 
                                           >> 4U))) 
                                  << 0xfU));
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[4U] 
                            = ((0xff83ffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[4U]) 
                               | (0x7c0000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[2U] 
                                               << 0xeU)));
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[0U] 
                            = ((0xffffbfffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[0U]) 
                               | (0x4000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[0U] 
                                             << 0xeU)));
                        vlSelf->__Vfunc_resp_precedence__25__resp_b 
                            = (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_resp[0U] 
                                     >> 2U));
                        vlSelf->__Vfunc_resp_precedence__25__resp_a 
                            = (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[0U] 
                                     >> 0x10U));
                        {
                            if ((2U & (IData)(vlSelf->__Vfunc_resp_precedence__25__resp_a))) {
                                if ((1U & (IData)(vlSelf->__Vfunc_resp_precedence__25__resp_a))) {
                                    vlSelf->__Vfunc_resp_precedence__25__Vfuncout 
                                        = vlSelf->__Vfunc_resp_precedence__25__resp_a;
                                    goto __Vlabel1576;
                                } else if ((3U == (IData)(vlSelf->__Vfunc_resp_precedence__25__resp_b))) {
                                    vlSelf->__Vfunc_resp_precedence__25__Vfuncout 
                                        = vlSelf->__Vfunc_resp_precedence__25__resp_b;
                                    goto __Vlabel1576;
                                } else {
                                    vlSelf->__Vfunc_resp_precedence__25__Vfuncout 
                                        = vlSelf->__Vfunc_resp_precedence__25__resp_a;
                                    goto __Vlabel1576;
                                }
                            } else if ((1U & (IData)(vlSelf->__Vfunc_resp_precedence__25__resp_a))) {
                                vlSelf->__Vfunc_resp_precedence__25__Vfuncout 
                                    = vlSelf->__Vfunc_resp_precedence__25__resp_b;
                                goto __Vlabel1576;
                            } else if ((1U == (IData)(vlSelf->__Vfunc_resp_precedence__25__resp_b))) {
                                vlSelf->__Vfunc_resp_precedence__25__Vfuncout 
                                    = vlSelf->__Vfunc_resp_precedence__25__resp_a;
                                goto __Vlabel1576;
                            } else {
                                vlSelf->__Vfunc_resp_precedence__25__Vfuncout 
                                    = vlSelf->__Vfunc_resp_precedence__25__resp_b;
                                goto __Vlabel1576;
                            }
                            __Vlabel1576: ;
                        }
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[0U] 
                            = ((0xfffcffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[0U]) 
                               | ((IData)(vlSelf->__Vfunc_resp_precedence__25__Vfuncout) 
                                  << 0x10U));
                        if ((1U == (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U] 
                                          >> 0xaU)))) {
                            __Vtemp_52[0U] = 1U;
                            __Vtemp_52[1U] = 0U;
                            __Vtemp_52[2U] = 0U;
                            __Vtemp_52[3U] = 0U;
                            VL_SHIFTL_WWI(128,128,3, __Vtemp_53, __Vtemp_52, 
                                          (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[5U] 
                                                 >> 0xcU)));
                            VL_ASSIGNSEL_WQ(252,64,0xb7U, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d, 
                                            (VL_SEL_QWII(128, 
                                                         ([&]() {
                                                vlSelf->__Vfunc_aligned_addr__26__size 
                                                    = 
                                                    (7U 
                                                     & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[5U] 
                                                        >> 0xcU));
                                                vlSelf->__Vfunc_aligned_addr__26__addr[0U] 
                                                    = (IData)(
                                                              (((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[7U])) 
                                                                << 0x29U) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[6U])) 
                                                                   << 9U) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[5U])) 
                                                                     >> 0x17U))));
                                                vlSelf->__Vfunc_aligned_addr__26__addr[1U] 
                                                    = (IData)(
                                                              ((((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[7U])) 
                                                                 << 0x29U) 
                                                                | (((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[6U])) 
                                                                    << 9U) 
                                                                   | ((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[5U])) 
                                                                      >> 0x17U))) 
                                                               >> 0x20U));
                                                vlSelf->__Vfunc_aligned_addr__26__addr[2U] = 0U;
                                                vlSelf->__Vfunc_aligned_addr__26__addr[3U] = 0U;
                                                VL_SHIFTR_WWI(128,128,3, __Vtemp_51, vlSelf->__Vfunc_aligned_addr__26__addr, (IData)(vlSelf->__Vfunc_aligned_addr__26__size));
                                                VL_SHIFTL_WWI(128,128,3, vlSelf->__Vfunc_aligned_addr__26__Vfuncout, __Vtemp_51, (IData)(vlSelf->__Vfunc_aligned_addr__26__size));
                                            }(), vlSelf->__Vfunc_aligned_addr__26__Vfuncout), 0U, 0x40U) 
                                             + (((QData)((IData)(
                                                                 __Vtemp_53[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  __Vtemp_53[0U])))));
                        } else if ((0U == (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U] 
                                                 >> 0xaU)))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U] 
                                = ((0x7fffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U]) 
                                   | ((IData)((((QData)((IData)(
                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[7U])) 
                                                << 0x29U) 
                                               | (((QData)((IData)(
                                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[6U])) 
                                                   << 9U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[5U])) 
                                                     >> 0x17U)))) 
                                      << 0x17U));
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[6U] 
                                = (((IData)((((QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[7U])) 
                                              << 0x29U) 
                                             | (((QData)((IData)(
                                                                 vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[6U])) 
                                                 << 9U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[5U])) 
                                                   >> 0x17U)))) 
                                    >> 9U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[7U])) 
                                                         << 0x29U) 
                                                        | (((QData)((IData)(
                                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[6U])) 
                                                            << 9U) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[5U])) 
                                                              >> 0x17U))) 
                                                       >> 0x20U)) 
                                              << 0x17U));
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[7U] 
                                = ((0xf800000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[7U]) 
                                   | (0xfffffffU & 
                                      ((IData)(((((QData)((IData)(
                                                                  vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[7U])) 
                                                  << 0x29U) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[6U])) 
                                                     << 9U) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[5U])) 
                                                       >> 0x17U))) 
                                                >> 0x20U)) 
                                       >> 9U)));
                        }
                        if ((0U == (0x1ffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[0U] 
                                              >> 4U)))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__idqueue_pop 
                                = (2U | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__idqueue_pop));
                        }
                        if ((2U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_state_q))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[0U] 
                                = (0x2000U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[0U]);
                        } else if (((3U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_state_q)) 
                                    || (4U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_state_q)))) {
                            if (((0U == (0x1ffU & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[0U] 
                                                   >> 4U))) 
                                 | VL_NEQ_W(4, ([&]() {
                                                vlSelf->__Vfunc_aligned_addr__27__size 
                                                    = 
                                                    (7U 
                                                     & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[0U] 
                                                        >> 1U));
                                                vlSelf->__Vfunc_aligned_addr__27__addr[0U] 
                                                    = (IData)(
                                                              (((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[7U])) 
                                                                << 0x29U) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[6U])) 
                                                                   << 9U) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U])) 
                                                                     >> 0x17U))));
                                                vlSelf->__Vfunc_aligned_addr__27__addr[1U] 
                                                    = (IData)(
                                                              ((((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[7U])) 
                                                                 << 0x29U) 
                                                                | (((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[6U])) 
                                                                    << 9U) 
                                                                   | ((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U])) 
                                                                      >> 0x17U))) 
                                                               >> 0x20U));
                                                vlSelf->__Vfunc_aligned_addr__27__addr[2U] = 0U;
                                                vlSelf->__Vfunc_aligned_addr__27__addr[3U] = 0U;
                                                VL_SHIFTR_WWI(128,128,3, __Vtemp_54, vlSelf->__Vfunc_aligned_addr__27__addr, (IData)(vlSelf->__Vfunc_aligned_addr__27__size));
                                                VL_SHIFTL_WWI(128,128,3, vlSelf->__Vfunc_aligned_addr__27__Vfuncout, __Vtemp_54, (IData)(vlSelf->__Vfunc_aligned_addr__27__size));
                                            }(), vlSelf->__Vfunc_aligned_addr__27__Vfuncout), 
                                            ([&]() {
                                                vlSelf->__Vfunc_aligned_addr__28__size 
                                                    = 
                                                    (7U 
                                                     & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[0U] 
                                                        >> 1U));
                                                vlSelf->__Vfunc_aligned_addr__28__addr[0U] 
                                                    = (IData)(
                                                              (((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[7U])) 
                                                                << 0x29U) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[6U])) 
                                                                   << 9U) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[5U])) 
                                                                     >> 0x17U))));
                                                vlSelf->__Vfunc_aligned_addr__28__addr[1U] 
                                                    = (IData)(
                                                              ((((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[7U])) 
                                                                 << 0x29U) 
                                                                | (((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[6U])) 
                                                                    << 9U) 
                                                                   | ((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[5U])) 
                                                                      >> 0x17U))) 
                                                               >> 0x20U));
                                                vlSelf->__Vfunc_aligned_addr__28__addr[2U] = 0U;
                                                vlSelf->__Vfunc_aligned_addr__28__addr[3U] = 0U;
                                                VL_SHIFTR_WWI(128,128,3, __Vtemp_55, vlSelf->__Vfunc_aligned_addr__28__addr, (IData)(vlSelf->__Vfunc_aligned_addr__28__size));
                                                VL_SHIFTL_WWI(128,128,3, vlSelf->__Vfunc_aligned_addr__28__Vfuncout, __Vtemp_55, (IData)(vlSelf->__Vfunc_aligned_addr__28__size));
                                            }(), vlSelf->__Vfunc_aligned_addr__28__Vfuncout)))) {
                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[0U] 
                                    = (0x2000U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[0U]);
                            }
                        }
                        if ((4U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_state_q))) {
                            if ((IData)(((0U == (0x7f8000U 
                                                 & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[5U])) 
                                         & (0U != (0x1ffU 
                                                   & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[0U] 
                                                      >> 4U)))))) {
                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[4U] 
                                    = ((0xfeffffffU 
                                        & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[4U]) 
                                       | (0x1000000U 
                                          & ((~ vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[0U]) 
                                             << 0x18U)));
                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U] 
                                    = ((0xff807fffU 
                                        & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[5U]) 
                                       | (((0xffU >= 
                                            (0x1ffU 
                                             & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[0U] 
                                                >> 4U)))
                                            ? (0xffU 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_d[0U] 
                                                  >> 4U))
                                            : 0xffU) 
                                          << 0xfU));
                            }
                        }
                    }
                }
            }
        }
        if ((2U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__slv_r_valid_tran) 
                   & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__slv_r_ready_tran)))) {
            if ((0x1ffU == (0x1ffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_req_q[0U] 
                                      >> 4U)))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__gen_read_downsizer__BRA__1__KET____DOT__r_state_d = 0U;
            }
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__inject_aw_into_ar_gnt 
        = ((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__arb_slv_ar_gnt_tran)) 
           & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_slv_ar_arb__DOT__gen_arbiter__DOT__index_nodes));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_slv_ar_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (1U & (((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__arb_slv_ar_gnt_tran)) 
                  & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_slv_ar_arb__DOT__gen_arbiter__DOT__req_nodes))
                  ? ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_slv_ar_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_slv_ar_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                      : (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_slv_ar_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                  : (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_slv_ar_arb__DOT__gen_arbiter__DOT__rr_q)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT____Vcellout__i_axi_slave_ctrl_dwc__slv_resp_o[4U] 
        = ((0x2fffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT____Vcellout__i_axi_slave_ctrl_dwc__slv_resp_o[4U]) 
           | (0x3fffffU & (((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_slv_ar_arb__DOT__gen_arbiter__DOT__index_nodes)) 
                            & (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__arb_slv_ar_gnt_tran))) 
                           << 0x14U)));
    vlSelf->__VdfgTmp_h9729ee36__0 = ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT____VdfgTmp_h6eb731c2__0)) 
                                      & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_slv_ar_arb__DOT__gen_arbiter__DOT__data_nodes) 
                                         == (0x1fU 
                                             & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_ar_id) 
                                                >> 5U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_read_id_queue__DOT__oup_gnt_o = 0U;
    if ((1U & (~ ((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__idqueue_push)) 
                  & (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_read_id_queue__DOT__linked_data_free)))))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_read_id_queue__DOT__oup_gnt_o = 1U;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_mst_ar_arb__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_mst_ar_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_mst_ar_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_ar_valid_tran));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__idx_ar_downsizer 
        = (1U & (((IData)(vlSelf->__VdfgTmp_h9729ee36__0) 
                  | ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT____VdfgTmp_h35a657bf__0)) 
                     & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_slv_ar_arb__DOT__gen_arbiter__DOT__data_nodes) 
                        == (0x1fU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_ar_id)))))
                  ? (IData)(vlSelf->__VdfgTmp_h9729ee36__0)
                  : (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_idle_lzc__DOT__gen_lzc__DOT__index_nodes)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_mst_ar_arb__DOT__gen_arbiter__DOT__index_nodes 
        = (1U & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_mst_ar_arb__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_mst_ar_arb__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_mst_ar_arb__DOT__gen_arbiter__DOT__rr_q))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_mst_ar_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffffffeU & (((1U <= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_mst_ar_arb__DOT__gen_arbiter__DOT__rr_q)) 
                            << 1U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_mst_ar_arb__DOT__gen_arbiter__DOT__req_d))) 
           | (1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_mst_ar_arb__DOT__gen_arbiter__DOT__req_d)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_mst_ar_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = (0xfffffffeU & (((1U > (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_mst_ar_arb__DOT__gen_arbiter__DOT__rr_q)) 
                           << 1U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_mst_ar_arb__DOT__gen_arbiter__DOT__req_d)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT____Vcellout__i_mst_ar_arb__req_o 
        = (IData)((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_mst_ar_arb__DOT__gen_arbiter__DOT__req_d)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_mst_ar_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_mst_ar_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | (IData)((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_mst_ar_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_mst_ar_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_mst_ar_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_mst_ar_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_mst_ar_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_mst_ar_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_mst_ar_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_mst_ar_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_mst_ar_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | (IData)((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_mst_ar_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_req[0U] 
        = ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_mst_ar_arb__DOT__gen_arbiter__DOT__index_nodes)
              ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_ar_tran[4U] 
                  << 0x1dU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_ar_tran[3U] 
                               >> 3U)) : vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_ar_tran[0U]) 
            << 2U) | (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT____Vcellout__i_mst_ar_arb__req_o) 
                       << 1U) | (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_r_ready_tran))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_req[1U] 
        = ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_mst_ar_arb__DOT__gen_arbiter__DOT__index_nodes)
              ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_ar_tran[4U] 
                  << 0x1dU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_ar_tran[3U] 
                               >> 3U)) : vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_ar_tran[0U]) 
            >> 0x1eU) | (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_mst_ar_arb__DOT__gen_arbiter__DOT__index_nodes)
                           ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_ar_tran[5U] 
                               << 0x1dU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_ar_tran[4U] 
                                            >> 3U))
                           : vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_ar_tran[1U]) 
                         << 2U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_req[2U] 
        = ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_mst_ar_arb__DOT__gen_arbiter__DOT__index_nodes)
              ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_ar_tran[5U] 
                  << 0x1dU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_ar_tran[4U] 
                               >> 3U)) : vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_ar_tran[1U]) 
            >> 0x1eU) | (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_mst_ar_arb__DOT__gen_arbiter__DOT__index_nodes)
                           ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_ar_tran[6U] 
                               << 0x1dU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_ar_tran[5U] 
                                            >> 3U))
                           : vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_ar_tran[2U]) 
                         << 2U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_req[3U] 
        = ((0xffffffe0U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_req[3U]) 
           | ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_mst_ar_arb__DOT__gen_arbiter__DOT__index_nodes)
                 ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_ar_tran[6U] 
                     << 0x1dU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_ar_tran[5U] 
                                  >> 3U)) : vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_ar_tran[2U]) 
               >> 0x1eU) | (0x1cU & (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_mst_ar_arb__DOT__gen_arbiter__DOT__index_nodes)
                                       ? (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_ar_tran[6U] 
                                          >> 3U) : 
                                      vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_ar_tran[3U]) 
                                     << 2U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_mst_ar_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (1U & (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT____Vcellinp__i_mst_ar_arb__gnt_i) 
                  & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT____Vcellout__i_mst_ar_arb__req_o))
                  ? ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_mst_ar_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_mst_ar_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                      : (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_mst_ar_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                  : (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_mst_ar_arb__DOT__gen_arbiter__DOT__rr_q)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_req[5U] 
            >> 0x11U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_aw_ready_chan));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_req[5U] 
            >> 0x11U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_aw_ready_sel));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_req[0U] 
            >> 1U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_ar_ready_chan));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_req[0U] 
            >> 1U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_ar_ready_sel));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[0U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_ar_spill_reg__data_o[0U] 
            << 2U) | (((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                         | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_ar_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                        & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                           | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_ar_sel_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))) 
                       << 1U) | (1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_req[0U])));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[1U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_ar_spill_reg__data_o[0U] 
            >> 0x1eU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_ar_spill_reg__data_o[1U] 
                         << 2U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[2U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_ar_spill_reg__data_o[1U] 
            >> 0x1eU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_ar_spill_reg__data_o[2U] 
                         << 2U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[3U] 
        = ((0xffffffe0U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_req[3U]) 
           | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_ar_spill_reg__data_o[2U] 
               >> 0x1eU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_ar_spill_reg__data_o[3U] 
                            << 2U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[4U] 
        = ((0x1fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_req[4U]) 
           | (0xffffffe0U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_req[4U]));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[5U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_aw_spill_reg__data_o[0U] 
            << 0x12U) | (((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                            | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_aw_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                           & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                              | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_aw_select_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q))) 
                          << 0x11U) | ((0x1fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_req[5U]) 
                                       | (0x1ffe0U 
                                          & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__mst_req[5U]))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[6U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_aw_spill_reg__data_o[0U] 
            >> 0xeU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_aw_spill_reg__data_o[1U] 
                        << 0x12U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[7U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_aw_spill_reg__data_o[1U] 
            >> 0xeU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_aw_spill_reg__data_o[2U] 
                        << 0x12U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[8U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_aw_spill_reg__data_o[2U] 
            >> 0xeU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_aw_spill_reg__data_o[3U] 
                        << 0x12U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__w_cnt_up = 0U;
    if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_q)))) {
        if ((1U & (((~ (IData)((0U != vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__cnt_full))) 
                    & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q))) 
                   & (~ ((0U != vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__cnt_full) 
                         & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[5U] 
                            >> 0x18U)))))) {
            if ((1U & (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[5U] 
                         >> 0x11U) & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q)) 
                                      | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__w_select) 
                                         == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_aw_select)))) 
                       & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__aw_select_occupied)) 
                          | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_aw_select) 
                             == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__lookup_aw_select)))))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__w_cnt_up = 1U;
            }
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__ar_valid = 0U;
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__lock_ar_valid_q) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__ar_valid = 1U;
    } else if ((1U & (~ (IData)((0U != vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__cnt_full))))) {
        if ((1U & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[0U] 
                    >> 1U) & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__ar_select_occupied)) 
                              | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_ar_select) 
                                 == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__lookup_ar_select)))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__ar_valid = 1U;
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__aw_valid = 0U;
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_q) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__aw_valid = 1U;
    } else if ((1U & (((~ (IData)((0U != vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__cnt_full))) 
                       & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q))) 
                      & (~ ((0U != vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__cnt_full) 
                            & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[5U] 
                               >> 0x18U)))))) {
        if ((1U & (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_req_cut[5U] 
                     >> 0x11U) & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q)) 
                                  | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__w_select) 
                                     == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_aw_select)))) 
                   & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__aw_select_occupied)) 
                      | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__slv_aw_select) 
                         == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__lookup_aw_select)))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__aw_valid = 1U;
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__gen_aw_id_counter__DOT__i_aw_id_counter__DOT__push_en 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__w_cnt_up)
            ? ((IData)(1U) << (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT____Vcellout__i_aw_spill_reg__data_o[3U] 
                                        >> 4U))) : 0U);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__w_select_valid 
        = (1U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__w_cnt_up) 
                 | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_slave_ctrl_dwc__DOT__gen_dw_downsize__DOT__i_axi_dw_downsizer__DOT__i_axi_demux__DOT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q)));
}
