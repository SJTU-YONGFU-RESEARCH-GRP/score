// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vara_tb_verilator.h for the primary calling header

#include "Vara_tb_verilator__pch.h"
#include "Vara_tb_verilator___024root.h"

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__2181(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__2181\n"); );
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_ptw__DOT__state_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_ptw__DOT__state_q;
    if ((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_ptw__DOT__state_q))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_ptw__DOT__state_d 
            = ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_ptw__DOT__state_q))
                ? 0U : 6U);
    } else if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_ptw__DOT__state_q))) {
        if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_ptw__DOT__state_q))) {
            if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_ptw__DOT__data_rvalid_q) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_ptw__DOT__state_d = 0U;
            }
        } else if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_ptw__DOT__data_rvalid_q) {
            if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_ptw__DOT____VdfgExtracted_had37059a__0) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_ptw__DOT__state_d = 4U;
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_ptw__DOT__state_d = 6U;
                if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_ptw__DOT____VdfgExtracted_h8519605b__0) {
                    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_ptw__DOT__is_instr_ptw_q) {
                        if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_ptw__DOT____VdfgExtracted_h5f9f4826__0) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_ptw__DOT__state_d = 4U;
                        }
                    } else {
                        if ((1U & (~ ((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_ptw__DOT__data_rdata_q 
                                               >> 6U)) 
                                      & ((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_ptw__DOT__data_rdata_q 
                                                  >> 1U)) 
                                         | ((IData)(
                                                    (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_ptw__DOT__data_rdata_q 
                                                     >> 3U)) 
                                            & (IData)(
                                                      (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__mstatus_q 
                                                       >> 0x13U)))))))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_ptw__DOT__state_d = 4U;
                        }
                        if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__st_translation_req) 
                             & (IData)((0x84ULL != 
                                        (0x84ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_ptw__DOT__data_rdata_q))))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_ptw__DOT__state_d = 4U;
                        }
                    }
                    if ((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_ptw__DOT__misaligned_page))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_ptw__DOT__state_d = 4U;
                    }
                } else {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_ptw__DOT__state_d 
                        = ((2U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_ptw__DOT__ptw_lvl_q))
                            ? 4U : 1U);
                }
            }
        }
    } else if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_ptw__DOT__state_q))) {
        if ((8U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_cache_ex[2U])) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_ptw__DOT__state_d = 2U;
        }
    } else if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_shared_tlb__DOT__shared_tlb_access_q) 
                & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_shared_tlb__DOT__shared_tlb_hit_d)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_ptw__DOT__state_d = 1U;
    }
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__flush_ctrl_ex) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_ptw__DOT__state_d 
            = (((((2U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_ptw__DOT__state_q)) 
                  | (3U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_ptw__DOT__state_q))) 
                 & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_ptw__DOT__data_rvalid_q))) 
                | ((1U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_ptw__DOT__state_q)) 
                   & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_cache_ex[2U] 
                      >> 3U))) ? 3U : 6U);
    }
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__2182(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__2182\n"); );
    // Init
    QData/*63:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = (((QData)((IData)(((0x4000U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__vcpop_slice))
                                    ? 0xeU : 0xfU))) 
                  << 0x38U) | (((QData)((IData)(((0x1000U 
                                                  & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__vcpop_slice))
                                                  ? 0xcU
                                                  : 0xdU))) 
                                << 0x34U) | (((QData)((IData)(
                                                              ((0x400U 
                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__vcpop_slice))
                                                                ? 0xaU
                                                                : 0xbU))) 
                                              << 0x30U) 
                                             | (((QData)((IData)(
                                                                 ((0x100U 
                                                                   & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__vcpop_slice))
                                                                   ? 8U
                                                                   : 9U))) 
                                                 << 0x2cU) 
                                                | (((QData)((IData)(
                                                                    ((0x40U 
                                                                      & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__vcpop_slice))
                                                                      ? 6U
                                                                      : 7U))) 
                                                    << 0x28U) 
                                                   | (((QData)((IData)(
                                                                       ((0x10U 
                                                                         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__vcpop_slice))
                                                                         ? 4U
                                                                         : 5U))) 
                                                       << 0x24U) 
                                                      | (((QData)((IData)(
                                                                          ((4U 
                                                                            & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__vcpop_slice))
                                                                            ? 2U
                                                                            : 3U))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           ((((1U 
                                                                               & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__vcpop_slice))
                                                                               ? 0U
                                                                               : 1U) 
                                                                             << 0x1cU) 
                                                                            | ((0xf000000U 
                                                                                & (((0x2000U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_clz__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_clz__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x34U))
                                                                                 : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_clz__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x38U))) 
                                                                                << 0x18U)) 
                                                                               | ((0xf00000U 
                                                                                & (((0x800U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_clz__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_clz__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x2cU))
                                                                                 : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_clz__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x30U))) 
                                                                                << 0x14U)) 
                                                                                | ((0xf0000U 
                                                                                & (((0x200U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_clz__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_clz__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x24U))
                                                                                 : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_clz__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x28U))) 
                                                                                << 0x10U)) 
                                                                                | ((0xf000U 
                                                                                & (((0x80U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_clz__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_clz__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x1cU))
                                                                                 : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_clz__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x20U))) 
                                                                                << 0xcU)) 
                                                                                | ((0xf00U 
                                                                                & (((0x20U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_clz__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_clz__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x14U))
                                                                                 : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_clz__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x18U))) 
                                                                                << 8U)) 
                                                                                | ((0xf0U 
                                                                                & (((8U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_clz__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_clz__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0xcU))
                                                                                 : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_clz__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 0x10U))) 
                                                                                << 4U)) 
                                                                                | (0xfU 
                                                                                & ((2U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_clz__DOT__gen_lzc__DOT__sel_nodes))
                                                                                 ? (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_clz__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 4U))
                                                                                 : (IData)(
                                                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_clz__DOT__gen_lzc__DOT__index_nodes 
                                                                                >> 8U))))))))))))))))))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_clz__DOT__gen_lzc__DOT__index_nodes 
        = ((0xf000000000000000ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_clz__DOT__gen_lzc__DOT__index_nodes) 
           | __Vtemp_1);
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__2183(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__2183\n"); );
    // Init
    SData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = (((IData)((0U != (0xc000U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__vcpop_slice)))) 
                  << 0xeU) | (((IData)((0U != (0x3000U 
                                               & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__vcpop_slice)))) 
                               << 0xdU) | (((IData)(
                                                    (0U 
                                                     != 
                                                     (0xc00U 
                                                      & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__vcpop_slice)))) 
                                            << 0xcU) 
                                           | (((IData)(
                                                       (0U 
                                                        != 
                                                        (0x300U 
                                                         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__vcpop_slice)))) 
                                               << 0xbU) 
                                              | (((IData)(
                                                          (0U 
                                                           != 
                                                           (0xc0U 
                                                            & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__vcpop_slice)))) 
                                                  << 0xaU) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (0x30U 
                                                               & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__vcpop_slice)))) 
                                                     << 9U) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != 
                                                                 (0xcU 
                                                                  & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__vcpop_slice)))) 
                                                        << 8U) 
                                                       | (((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (3U 
                                                                     & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__vcpop_slice)))) 
                                                           << 7U) 
                                                          | (((IData)(
                                                                      (0U 
                                                                       != 
                                                                       (0x6000U 
                                                                        & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_clz__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                              << 6U) 
                                                             | (((IData)(
                                                                         (0U 
                                                                          != 
                                                                          (0x1800U 
                                                                           & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_clz__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                                 << 5U) 
                                                                | (((IData)(
                                                                            (0U 
                                                                             != 
                                                                             (0x600U 
                                                                              & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_clz__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                                    << 4U) 
                                                                   | (((IData)(
                                                                               (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_clz__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                                       << 3U) 
                                                                      | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_clz__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                                          << 2U) 
                                                                         | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_clz__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                                             << 1U) 
                                                                            | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_clz__DOT__gen_lzc__DOT__sel_nodes))))))))))))))))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_clz__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x8000U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_clz__DOT__gen_lzc__DOT__sel_nodes)) 
           | __Vtemp_1);
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__2184(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__2184\n"); );
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__masku_operand_ready_lane 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__masku_operand_ready_masku;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__masku_operand_ready_lane 
        = ((0xfffdU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__masku_operand_ready_lane)) 
           | (2U & ((0xfffffffeU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__masku_operand_ready_masku)) 
                    | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__pe_scalar_resp_ready) 
                       << 1U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_valu__DOT__i_mask_operand_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__masku_operand_ready_lane) 
               >> 2U)) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_valu__DOT__i_mask_operand_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_valu__DOT__i_mask_operand_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_valu__DOT__i_mask_operand_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__masku_operand_ready_lane) 
              >> 2U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_mask_operand_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__masku_operand_ready_lane) 
               >> 3U)) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_mask_operand_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_mask_operand_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_mask_operand_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__masku_operand_ready_lane) 
              >> 3U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_valu__DOT__i_mask_operand_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__masku_operand_ready_lane) 
               >> 6U)) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_valu__DOT__i_mask_operand_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_valu__DOT__i_mask_operand_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_valu__DOT__i_mask_operand_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__masku_operand_ready_lane) 
              >> 6U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_mask_operand_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__masku_operand_ready_lane) 
               >> 7U)) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_mask_operand_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_mask_operand_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_mask_operand_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__masku_operand_ready_lane) 
              >> 7U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_valu__DOT__i_mask_operand_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__masku_operand_ready_lane) 
               >> 0xaU)) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_valu__DOT__i_mask_operand_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_valu__DOT__i_mask_operand_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_valu__DOT__i_mask_operand_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__masku_operand_ready_lane) 
              >> 0xaU));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_mask_operand_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__masku_operand_ready_lane) 
               >> 0xbU)) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_mask_operand_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_mask_operand_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_mask_operand_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__masku_operand_ready_lane) 
              >> 0xbU));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_valu__DOT__i_mask_operand_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__masku_operand_ready_lane) 
               >> 0xeU)) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_valu__DOT__i_mask_operand_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_valu__DOT__i_mask_operand_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_valu__DOT__i_mask_operand_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__masku_operand_ready_lane) 
              >> 0xeU));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_mask_operand_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__masku_operand_ready_lane) 
               >> 0xfU)) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_mask_operand_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_mask_operand_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_mask_operand_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__masku_operand_ready_lane) 
              >> 0xfU));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__ibuf_pop = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd_pop = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT____Vcellout__i_operand_queue_mask_b__operand_valid_o 
        = (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_input_buffer__DOT__status_cnt_q));
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT____Vcellout__i_operand_queue_mask_b__operand_valid_o) 
         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__masku_operand_ready_lane) 
            >> 5U))) {
        if ((0x80U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd)) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_d 
                = (0x1fffU & ((0x40U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd)
                               ? ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_q) 
                                  + ((IData)(1U) << 
                                     (7U & ((IData)(3U) 
                                            - (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                                               >> 0x15U)))))
                               : ((0x20U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd)
                                   ? ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_q) 
                                      + ((IData)(1U) 
                                         << (7U & ((IData)(3U) 
                                                   - 
                                                   (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                                                    >> 0x15U)))))
                                   : ((0x10U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd)
                                       ? ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_q) 
                                          + (((IData)(1U) 
                                              << (7U 
                                                  & ((IData)(3U) 
                                                     - 
                                                     (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                                                      >> 0x15U)))) 
                                             >> 1U))
                                       : ((IData)(1U) 
                                          + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_q))))));
            if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                          >> 6U)))) {
                if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                              >> 5U)))) {
                    if ((0x10U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd)) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_d 
                            = (7U & ((IData)(4U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_q)));
                    }
                }
            }
        } else if ((0x40U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd)) {
            if ((0x20U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd)) {
                if ((0x10U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd)) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_d 
                        = (0x1fffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_q) 
                                      + (((IData)(1U) 
                                          << (7U & 
                                              ((IData)(3U) 
                                               - (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                                                  >> 0x15U)))) 
                                         >> 1U)));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_d 
                        = (7U & ((IData)(4U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_q)));
                } else {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_d 
                        = (0x1fffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_q) 
                                      + (((IData)(1U) 
                                          << (7U & 
                                              ((IData)(3U) 
                                               - (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                                                  >> 0x15U)))) 
                                         >> 3U)));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_d 
                        = (7U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_q)));
                }
            } else if ((0x10U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd)) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_d 
                    = (0x1fffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_q) 
                                  + (((IData)(1U) << 
                                      (7U & ((IData)(3U) 
                                             - (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                                                >> 0x15U)))) 
                                     >> 3U)));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_d 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_q)));
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_d 
                    = (0x1fffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_q) 
                                  + (((IData)(1U) << 
                                      (7U & ((IData)(3U) 
                                             - (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                                                >> 0x15U)))) 
                                     >> 2U)));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_d 
                    = (7U & ((IData)(2U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_q)));
            }
        } else if ((0x20U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd)) {
            if ((0x10U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd)) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_d 
                    = (0x1fffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_q) 
                                  + (((IData)(1U) << 
                                      (7U & ((IData)(3U) 
                                             - (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                                                >> 0x15U)))) 
                                     >> 2U)));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_d 
                    = (7U & ((IData)(2U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_q)));
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_d 
                    = (0x1fffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_q) 
                                  + (((IData)(1U) << 
                                      (7U & ((IData)(3U) 
                                             - (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                                                >> 0x15U)))) 
                                     >> 1U)));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_d 
                    = (7U & ((IData)(4U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_q)));
            }
        } else if ((0x10U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd)) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_d 
                = (0x1fffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_q) 
                              + (((IData)(1U) << (7U 
                                                  & ((IData)(3U) 
                                                     - 
                                                     (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                                                      >> 0x15U)))) 
                                 >> 1U)));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_d 
                = (7U & ((IData)(4U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_q)));
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_d 
                = (0x1fffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_q) 
                              + ((IData)(1U) << (7U 
                                                 & ((IData)(3U) 
                                                    - 
                                                    (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                                                     >> 0x15U))))));
        }
        if ((((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_q)) 
              & (0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_d))) 
             | (0U == (0xfU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                               >> 4U))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__ibuf_pop = 1U;
        }
        if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_d) 
             >= (0x1fffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                            >> 8U)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__ibuf_pop = 1U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd_pop = 1U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_d = 0U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_d = 0U;
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__ibuf_pop = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd_pop = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT____Vcellout__i_operand_queue_mask_b__operand_valid_o 
        = (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_input_buffer__DOT__status_cnt_q));
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT____Vcellout__i_operand_queue_mask_b__operand_valid_o) 
         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__masku_operand_ready_lane) 
            >> 9U))) {
        if ((0x80U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd)) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_d 
                = (0x1fffU & ((0x40U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd)
                               ? ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_q) 
                                  + ((IData)(1U) << 
                                     (7U & ((IData)(3U) 
                                            - (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                                               >> 0x15U)))))
                               : ((0x20U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd)
                                   ? ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_q) 
                                      + ((IData)(1U) 
                                         << (7U & ((IData)(3U) 
                                                   - 
                                                   (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                                                    >> 0x15U)))))
                                   : ((0x10U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd)
                                       ? ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_q) 
                                          + (((IData)(1U) 
                                              << (7U 
                                                  & ((IData)(3U) 
                                                     - 
                                                     (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                                                      >> 0x15U)))) 
                                             >> 1U))
                                       : ((IData)(1U) 
                                          + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_q))))));
            if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                          >> 6U)))) {
                if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                              >> 5U)))) {
                    if ((0x10U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd)) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_d 
                            = (7U & ((IData)(4U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_q)));
                    }
                }
            }
        } else if ((0x40U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd)) {
            if ((0x20U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd)) {
                if ((0x10U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd)) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_d 
                        = (0x1fffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_q) 
                                      + (((IData)(1U) 
                                          << (7U & 
                                              ((IData)(3U) 
                                               - (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                                                  >> 0x15U)))) 
                                         >> 1U)));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_d 
                        = (7U & ((IData)(4U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_q)));
                } else {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_d 
                        = (0x1fffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_q) 
                                      + (((IData)(1U) 
                                          << (7U & 
                                              ((IData)(3U) 
                                               - (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                                                  >> 0x15U)))) 
                                         >> 3U)));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_d 
                        = (7U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_q)));
                }
            } else if ((0x10U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd)) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_d 
                    = (0x1fffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_q) 
                                  + (((IData)(1U) << 
                                      (7U & ((IData)(3U) 
                                             - (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                                                >> 0x15U)))) 
                                     >> 3U)));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_d 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_q)));
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_d 
                    = (0x1fffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_q) 
                                  + (((IData)(1U) << 
                                      (7U & ((IData)(3U) 
                                             - (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                                                >> 0x15U)))) 
                                     >> 2U)));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_d 
                    = (7U & ((IData)(2U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_q)));
            }
        } else if ((0x20U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd)) {
            if ((0x10U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd)) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_d 
                    = (0x1fffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_q) 
                                  + (((IData)(1U) << 
                                      (7U & ((IData)(3U) 
                                             - (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                                                >> 0x15U)))) 
                                     >> 2U)));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_d 
                    = (7U & ((IData)(2U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_q)));
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_d 
                    = (0x1fffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_q) 
                                  + (((IData)(1U) << 
                                      (7U & ((IData)(3U) 
                                             - (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                                                >> 0x15U)))) 
                                     >> 1U)));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_d 
                    = (7U & ((IData)(4U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_q)));
            }
        } else if ((0x10U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd)) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_d 
                = (0x1fffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_q) 
                              + (((IData)(1U) << (7U 
                                                  & ((IData)(3U) 
                                                     - 
                                                     (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                                                      >> 0x15U)))) 
                                 >> 1U)));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_d 
                = (7U & ((IData)(4U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_q)));
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_d 
                = (0x1fffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_q) 
                              + ((IData)(1U) << (7U 
                                                 & ((IData)(3U) 
                                                    - 
                                                    (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                                                     >> 0x15U))))));
        }
        if ((((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_q)) 
              & (0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_d))) 
             | (0U == (0xfU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                               >> 4U))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__ibuf_pop = 1U;
        }
        if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_d) 
             >= (0x1fffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                            >> 8U)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__ibuf_pop = 1U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd_pop = 1U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_d = 0U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_d = 0U;
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__ibuf_pop = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd_pop = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT____Vcellout__i_operand_queue_mask_b__operand_valid_o 
        = (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_input_buffer__DOT__status_cnt_q));
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT____Vcellout__i_operand_queue_mask_b__operand_valid_o) 
         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__masku_operand_ready_lane) 
            >> 0xdU))) {
        if ((0x80U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd)) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_d 
                = (0x1fffU & ((0x40U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd)
                               ? ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_q) 
                                  + ((IData)(1U) << 
                                     (7U & ((IData)(3U) 
                                            - (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                                               >> 0x15U)))))
                               : ((0x20U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd)
                                   ? ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_q) 
                                      + ((IData)(1U) 
                                         << (7U & ((IData)(3U) 
                                                   - 
                                                   (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                                                    >> 0x15U)))))
                                   : ((0x10U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd)
                                       ? ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_q) 
                                          + (((IData)(1U) 
                                              << (7U 
                                                  & ((IData)(3U) 
                                                     - 
                                                     (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                                                      >> 0x15U)))) 
                                             >> 1U))
                                       : ((IData)(1U) 
                                          + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_q))))));
            if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                          >> 6U)))) {
                if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                              >> 5U)))) {
                    if ((0x10U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd)) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_d 
                            = (7U & ((IData)(4U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_q)));
                    }
                }
            }
        } else if ((0x40U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd)) {
            if ((0x20U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd)) {
                if ((0x10U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd)) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_d 
                        = (0x1fffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_q) 
                                      + (((IData)(1U) 
                                          << (7U & 
                                              ((IData)(3U) 
                                               - (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                                                  >> 0x15U)))) 
                                         >> 1U)));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_d 
                        = (7U & ((IData)(4U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_q)));
                } else {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_d 
                        = (0x1fffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_q) 
                                      + (((IData)(1U) 
                                          << (7U & 
                                              ((IData)(3U) 
                                               - (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                                                  >> 0x15U)))) 
                                         >> 3U)));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_d 
                        = (7U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_q)));
                }
            } else if ((0x10U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd)) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_d 
                    = (0x1fffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_q) 
                                  + (((IData)(1U) << 
                                      (7U & ((IData)(3U) 
                                             - (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                                                >> 0x15U)))) 
                                     >> 3U)));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_d 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_q)));
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_d 
                    = (0x1fffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_q) 
                                  + (((IData)(1U) << 
                                      (7U & ((IData)(3U) 
                                             - (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                                                >> 0x15U)))) 
                                     >> 2U)));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_d 
                    = (7U & ((IData)(2U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_q)));
            }
        } else if ((0x20U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd)) {
            if ((0x10U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd)) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_d 
                    = (0x1fffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_q) 
                                  + (((IData)(1U) << 
                                      (7U & ((IData)(3U) 
                                             - (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                                                >> 0x15U)))) 
                                     >> 2U)));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_d 
                    = (7U & ((IData)(2U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_q)));
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_d 
                    = (0x1fffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_q) 
                                  + (((IData)(1U) << 
                                      (7U & ((IData)(3U) 
                                             - (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                                                >> 0x15U)))) 
                                     >> 1U)));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_d 
                    = (7U & ((IData)(4U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_q)));
            }
        } else if ((0x10U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd)) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_d 
                = (0x1fffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_q) 
                              + (((IData)(1U) << (7U 
                                                  & ((IData)(3U) 
                                                     - 
                                                     (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                                                      >> 0x15U)))) 
                                 >> 1U)));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_d 
                = (7U & ((IData)(4U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_q)));
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_d 
                = (0x1fffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_q) 
                              + ((IData)(1U) << (7U 
                                                 & ((IData)(3U) 
                                                    - 
                                                    (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                                                     >> 0x15U))))));
        }
        if ((((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_q)) 
              & (0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_d))) 
             | (0U == (0xfU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                               >> 4U))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__ibuf_pop = 1U;
        }
        if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_d) 
             >= (0x1fffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                            >> 8U)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__ibuf_pop = 1U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd_pop = 1U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_d = 0U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_d = 0U;
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__ibuf_pop = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd_pop = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__select_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__select_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__elem_count_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__elem_count_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT____Vcellout__i_operand_queue_mask_m__operand_valid_o 
        = (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_input_buffer__DOT__status_cnt_q));
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT____Vcellout__i_operand_queue_mask_m__operand_valid_o) 
         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__masku_operand_ready_lane))) {
        if ((0x80U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd)) {
            if ((0x40U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd)) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__elem_count_d 
                    = (0x1fffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__elem_count_q) 
                                  + ((IData)(1U) << 
                                     (7U & ((IData)(3U) 
                                            - (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd 
                                               >> 0x15U))))));
            } else if ((0x20U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd)) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__elem_count_d 
                    = (0x1fffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__elem_count_q) 
                                  + ((IData)(1U) << 
                                     (7U & ((IData)(3U) 
                                            - (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd 
                                               >> 0x15U))))));
            } else if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd 
                                 >> 4U)))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__elem_count_d 
                    = (0x1fffU & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__elem_count_q)));
            }
        } else if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd 
                             >> 6U)))) {
            if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd 
                          >> 5U)))) {
                if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd 
                              >> 4U)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__elem_count_d 
                        = (0x1fffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__elem_count_q) 
                                      + ((IData)(1U) 
                                         << (7U & ((IData)(3U) 
                                                   - 
                                                   (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd 
                                                    >> 0x15U))))));
                }
            }
        }
        if ((((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__select_q)) 
              & (0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__select_d))) 
             | (0U == (0xfU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd 
                               >> 4U))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__ibuf_pop = 1U;
        }
        if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__elem_count_d) 
             >= (0x1fffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd 
                            >> 8U)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__ibuf_pop = 1U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd_pop = 1U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__select_d = 0U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__elem_count_d = 0U;
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__ibuf_pop = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd_pop = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__select_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__select_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__elem_count_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__elem_count_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT____Vcellout__i_operand_queue_mask_m__operand_valid_o 
        = (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_input_buffer__DOT__status_cnt_q));
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT____Vcellout__i_operand_queue_mask_m__operand_valid_o) 
         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__masku_operand_ready_lane) 
            >> 4U))) {
        if ((0x80U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd)) {
            if ((0x40U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd)) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__elem_count_d 
                    = (0x1fffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__elem_count_q) 
                                  + ((IData)(1U) << 
                                     (7U & ((IData)(3U) 
                                            - (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd 
                                               >> 0x15U))))));
            } else if ((0x20U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd)) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__elem_count_d 
                    = (0x1fffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__elem_count_q) 
                                  + ((IData)(1U) << 
                                     (7U & ((IData)(3U) 
                                            - (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd 
                                               >> 0x15U))))));
            } else if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd 
                                 >> 4U)))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__elem_count_d 
                    = (0x1fffU & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__elem_count_q)));
            }
        } else if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd 
                             >> 6U)))) {
            if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd 
                          >> 5U)))) {
                if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd 
                              >> 4U)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__elem_count_d 
                        = (0x1fffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__elem_count_q) 
                                      + ((IData)(1U) 
                                         << (7U & ((IData)(3U) 
                                                   - 
                                                   (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd 
                                                    >> 0x15U))))));
                }
            }
        }
        if ((((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__select_q)) 
              & (0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__select_d))) 
             | (0U == (0xfU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd 
                               >> 4U))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__ibuf_pop = 1U;
        }
        if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__elem_count_d) 
             >= (0x1fffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd 
                            >> 8U)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__ibuf_pop = 1U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd_pop = 1U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__select_d = 0U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__elem_count_d = 0U;
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__ibuf_pop = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd_pop = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__select_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__select_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__elem_count_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__elem_count_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT____Vcellout__i_operand_queue_mask_m__operand_valid_o 
        = (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_input_buffer__DOT__status_cnt_q));
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT____Vcellout__i_operand_queue_mask_m__operand_valid_o) 
         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__masku_operand_ready_lane) 
            >> 8U))) {
        if ((0x80U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd)) {
            if ((0x40U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd)) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__elem_count_d 
                    = (0x1fffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__elem_count_q) 
                                  + ((IData)(1U) << 
                                     (7U & ((IData)(3U) 
                                            - (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd 
                                               >> 0x15U))))));
            } else if ((0x20U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd)) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__elem_count_d 
                    = (0x1fffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__elem_count_q) 
                                  + ((IData)(1U) << 
                                     (7U & ((IData)(3U) 
                                            - (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd 
                                               >> 0x15U))))));
            } else if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd 
                                 >> 4U)))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__elem_count_d 
                    = (0x1fffU & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__elem_count_q)));
            }
        } else if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd 
                             >> 6U)))) {
            if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd 
                          >> 5U)))) {
                if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd 
                              >> 4U)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__elem_count_d 
                        = (0x1fffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__elem_count_q) 
                                      + ((IData)(1U) 
                                         << (7U & ((IData)(3U) 
                                                   - 
                                                   (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd 
                                                    >> 0x15U))))));
                }
            }
        }
        if ((((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__select_q)) 
              & (0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__select_d))) 
             | (0U == (0xfU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd 
                               >> 4U))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__ibuf_pop = 1U;
        }
        if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__elem_count_d) 
             >= (0x1fffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd 
                            >> 8U)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__ibuf_pop = 1U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd_pop = 1U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__select_d = 0U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__elem_count_d = 0U;
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__ibuf_pop = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd_pop = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__select_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__select_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__elem_count_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__elem_count_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT____Vcellout__i_operand_queue_mask_m__operand_valid_o 
        = (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_input_buffer__DOT__status_cnt_q));
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT____Vcellout__i_operand_queue_mask_m__operand_valid_o) 
         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__masku_operand_ready_lane) 
            >> 0xcU))) {
        if ((0x80U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd)) {
            if ((0x40U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd)) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__elem_count_d 
                    = (0x1fffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__elem_count_q) 
                                  + ((IData)(1U) << 
                                     (7U & ((IData)(3U) 
                                            - (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd 
                                               >> 0x15U))))));
            } else if ((0x20U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd)) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__elem_count_d 
                    = (0x1fffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__elem_count_q) 
                                  + ((IData)(1U) << 
                                     (7U & ((IData)(3U) 
                                            - (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd 
                                               >> 0x15U))))));
            } else if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd 
                                 >> 4U)))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__elem_count_d 
                    = (0x1fffU & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__elem_count_q)));
            }
        } else if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd 
                             >> 6U)))) {
            if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd 
                          >> 5U)))) {
                if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd 
                              >> 4U)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__elem_count_d 
                        = (0x1fffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__elem_count_q) 
                                      + ((IData)(1U) 
                                         << (7U & ((IData)(3U) 
                                                   - 
                                                   (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd 
                                                    >> 0x15U))))));
                }
            }
        }
        if ((((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__select_q)) 
              & (0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__select_d))) 
             | (0U == (0xfU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd 
                               >> 4U))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__ibuf_pop = 1U;
        }
        if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__elem_count_d) 
             >= (0x1fffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd 
                            >> 8U)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__ibuf_pop = 1U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd_pop = 1U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__select_d = 0U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__elem_count_d = 0U;
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__ibuf_pop = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd_pop = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT____Vcellout__i_operand_queue_mask_b__operand_valid_o 
        = (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_input_buffer__DOT__status_cnt_q));
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT____Vcellout__i_operand_queue_mask_b__operand_valid_o) 
         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__masku_operand_ready_lane) 
            >> 1U))) {
        if ((0x80U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd)) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_d 
                = (0x1fffU & ((0x40U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd)
                               ? ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_q) 
                                  + ((IData)(1U) << 
                                     (7U & ((IData)(3U) 
                                            - (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                                               >> 0x15U)))))
                               : ((0x20U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd)
                                   ? ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_q) 
                                      + ((IData)(1U) 
                                         << (7U & ((IData)(3U) 
                                                   - 
                                                   (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                                                    >> 0x15U)))))
                                   : ((0x10U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd)
                                       ? ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_q) 
                                          + (((IData)(1U) 
                                              << (7U 
                                                  & ((IData)(3U) 
                                                     - 
                                                     (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                                                      >> 0x15U)))) 
                                             >> 1U))
                                       : ((IData)(1U) 
                                          + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_q))))));
            if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                          >> 6U)))) {
                if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                              >> 5U)))) {
                    if ((0x10U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd)) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_d 
                            = (7U & ((IData)(4U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_q)));
                    }
                }
            }
        } else if ((0x40U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd)) {
            if ((0x20U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd)) {
                if ((0x10U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd)) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_d 
                        = (0x1fffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_q) 
                                      + (((IData)(1U) 
                                          << (7U & 
                                              ((IData)(3U) 
                                               - (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                                                  >> 0x15U)))) 
                                         >> 1U)));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_d 
                        = (7U & ((IData)(4U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_q)));
                } else {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_d 
                        = (0x1fffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_q) 
                                      + (((IData)(1U) 
                                          << (7U & 
                                              ((IData)(3U) 
                                               - (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                                                  >> 0x15U)))) 
                                         >> 3U)));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_d 
                        = (7U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_q)));
                }
            } else if ((0x10U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd)) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_d 
                    = (0x1fffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_q) 
                                  + (((IData)(1U) << 
                                      (7U & ((IData)(3U) 
                                             - (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                                                >> 0x15U)))) 
                                     >> 3U)));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_d 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_q)));
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_d 
                    = (0x1fffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_q) 
                                  + (((IData)(1U) << 
                                      (7U & ((IData)(3U) 
                                             - (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                                                >> 0x15U)))) 
                                     >> 2U)));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_d 
                    = (7U & ((IData)(2U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_q)));
            }
        } else if ((0x20U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd)) {
            if ((0x10U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd)) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_d 
                    = (0x1fffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_q) 
                                  + (((IData)(1U) << 
                                      (7U & ((IData)(3U) 
                                             - (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                                                >> 0x15U)))) 
                                     >> 2U)));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_d 
                    = (7U & ((IData)(2U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_q)));
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_d 
                    = (0x1fffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_q) 
                                  + (((IData)(1U) << 
                                      (7U & ((IData)(3U) 
                                             - (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                                                >> 0x15U)))) 
                                     >> 1U)));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_d 
                    = (7U & ((IData)(4U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_q)));
            }
        } else if ((0x10U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd)) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_d 
                = (0x1fffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_q) 
                              + (((IData)(1U) << (7U 
                                                  & ((IData)(3U) 
                                                     - 
                                                     (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                                                      >> 0x15U)))) 
                                 >> 1U)));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_d 
                = (7U & ((IData)(4U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_q)));
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_d 
                = (0x1fffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_q) 
                              + ((IData)(1U) << (7U 
                                                 & ((IData)(3U) 
                                                    - 
                                                    (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                                                     >> 0x15U))))));
        }
        if ((((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_q)) 
              & (0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_d))) 
             | (0U == (0xfU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                               >> 4U))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__ibuf_pop = 1U;
        }
        if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_d) 
             >= (0x1fffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd 
                            >> 8U)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__ibuf_pop = 1U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd_pop = 1U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__select_d = 0U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__elem_count_d = 0U;
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__read_pointer_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__read_pointer_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_q;
    if ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__operand_queue_cmd_valid) 
          >> 5U) & (3U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd_pop) 
         & (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__read_pointer_n 
            = ((2U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__read_pointer_n))
                ? 0U : (3U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__read_pointer_q))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if ((((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__operand_queue_cmd_valid) 
            >> 5U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd_pop)) 
          & (3U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_n 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_q;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__ibuf_usage_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__ibuf_usage_q;
    if ((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__operand_requester_gnt))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__ibuf_usage_d 
            = (7U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__ibuf_usage_d)));
    }
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__ibuf_pop) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__ibuf_usage_d 
            = (7U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__ibuf_usage_d) 
                     - (IData)(1U)));
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_input_buffer__DOT__read_pointer_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_input_buffer__DOT__read_pointer_q;
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__ibuf_pop) 
         & (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_input_buffer__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_input_buffer__DOT__read_pointer_n 
            = ((2U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_input_buffer__DOT__read_pointer_n))
                ? 0U : (3U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_input_buffer__DOT__read_pointer_q))));
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__read_pointer_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__read_pointer_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_q;
    if ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__operand_queue_cmd_valid) 
          >> 5U) & (3U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd_pop) 
         & (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__read_pointer_n 
            = ((2U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__read_pointer_n))
                ? 0U : (3U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__read_pointer_q))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if ((((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__operand_queue_cmd_valid) 
            >> 5U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd_pop)) 
          & (3U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_n 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_q;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__ibuf_usage_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__ibuf_usage_q;
    if ((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__operand_requester_gnt))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__ibuf_usage_d 
            = (7U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__ibuf_usage_d)));
    }
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__ibuf_pop) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__ibuf_usage_d 
            = (7U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__ibuf_usage_d) 
                     - (IData)(1U)));
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_input_buffer__DOT__read_pointer_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_input_buffer__DOT__read_pointer_q;
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__ibuf_pop) 
         & (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_input_buffer__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_input_buffer__DOT__read_pointer_n 
            = ((2U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_input_buffer__DOT__read_pointer_n))
                ? 0U : (3U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_input_buffer__DOT__read_pointer_q))));
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__read_pointer_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__read_pointer_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_q;
    if ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__operand_queue_cmd_valid) 
          >> 5U) & (3U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd_pop) 
         & (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__read_pointer_n 
            = ((2U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__read_pointer_n))
                ? 0U : (3U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__read_pointer_q))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if ((((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__operand_queue_cmd_valid) 
            >> 5U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd_pop)) 
          & (3U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_n 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_q;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__ibuf_usage_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__ibuf_usage_q;
    if ((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__operand_requester_gnt))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__ibuf_usage_d 
            = (7U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__ibuf_usage_d)));
    }
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__ibuf_pop) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__ibuf_usage_d 
            = (7U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__ibuf_usage_d) 
                     - (IData)(1U)));
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_input_buffer__DOT__read_pointer_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_input_buffer__DOT__read_pointer_q;
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__ibuf_pop) 
         & (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_input_buffer__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_input_buffer__DOT__read_pointer_n 
            = ((2U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_input_buffer__DOT__read_pointer_n))
                ? 0U : (3U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_input_buffer__DOT__read_pointer_q))));
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__read_pointer_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__read_pointer_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_q;
    if ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__operand_queue_cmd_valid) 
          >> 6U) & (1U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd_pop) 
         & (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__read_pointer_n 
            = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__read_pointer_n) 
               & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__read_pointer_q)));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if ((((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__operand_queue_cmd_valid) 
            >> 6U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd_pop)) 
          & (1U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_n 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_q;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_input_buffer__DOT__read_pointer_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_input_buffer__DOT__read_pointer_q;
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__ibuf_pop) 
         & (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_input_buffer__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_input_buffer__DOT__read_pointer_n 
            = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_input_buffer__DOT__read_pointer_n) 
               & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_input_buffer__DOT__read_pointer_q)));
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__ibuf_usage_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__ibuf_usage_q;
    if ((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__operand_requester_gnt))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__ibuf_usage_d 
            = (3U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__ibuf_usage_d)));
    }
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__ibuf_pop) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__ibuf_usage_d 
            = (3U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__ibuf_usage_d) 
                     - (IData)(1U)));
    }
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__i_lane__lsu_ex_flush_o) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__select_d = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__elem_count_d = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__ibuf_usage_d = 0U;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__read_pointer_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__read_pointer_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_q;
    if ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__operand_queue_cmd_valid) 
          >> 6U) & (1U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd_pop) 
         & (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__read_pointer_n 
            = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__read_pointer_n) 
               & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__read_pointer_q)));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if ((((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__operand_queue_cmd_valid) 
            >> 6U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd_pop)) 
          & (1U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_n 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_q;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_input_buffer__DOT__read_pointer_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_input_buffer__DOT__read_pointer_q;
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__ibuf_pop) 
         & (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_input_buffer__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_input_buffer__DOT__read_pointer_n 
            = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_input_buffer__DOT__read_pointer_n) 
               & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_input_buffer__DOT__read_pointer_q)));
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__ibuf_usage_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__ibuf_usage_q;
    if ((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__operand_requester_gnt))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__ibuf_usage_d 
            = (3U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__ibuf_usage_d)));
    }
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__ibuf_pop) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__ibuf_usage_d 
            = (3U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__ibuf_usage_d) 
                     - (IData)(1U)));
    }
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT____Vcellout__gen_lanes__BRA__1__KET____DOT__i_lane__lsu_ex_flush_o) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__select_d = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__elem_count_d = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__ibuf_usage_d = 0U;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__read_pointer_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__read_pointer_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_q;
    if ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__operand_queue_cmd_valid) 
          >> 6U) & (1U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd_pop) 
         & (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__read_pointer_n 
            = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__read_pointer_n) 
               & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__read_pointer_q)));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if ((((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__operand_queue_cmd_valid) 
            >> 6U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd_pop)) 
          & (1U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_n 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_q;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_input_buffer__DOT__read_pointer_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_input_buffer__DOT__read_pointer_q;
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__ibuf_pop) 
         & (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_input_buffer__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_input_buffer__DOT__read_pointer_n 
            = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_input_buffer__DOT__read_pointer_n) 
               & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_input_buffer__DOT__read_pointer_q)));
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__ibuf_usage_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__ibuf_usage_q;
    if ((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__operand_requester_gnt))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__ibuf_usage_d 
            = (3U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__ibuf_usage_d)));
    }
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__ibuf_pop) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__ibuf_usage_d 
            = (3U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__ibuf_usage_d) 
                     - (IData)(1U)));
    }
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT____Vcellout__gen_lanes__BRA__2__KET____DOT__i_lane__lsu_ex_flush_o) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__select_d = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__elem_count_d = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__ibuf_usage_d = 0U;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__read_pointer_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__read_pointer_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_q;
    if ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__operand_queue_cmd_valid) 
          >> 6U) & (1U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd_pop) 
         & (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__read_pointer_n 
            = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__read_pointer_n) 
               & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__read_pointer_q)));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if ((((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__operand_queue_cmd_valid) 
            >> 6U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__cmd_pop)) 
          & (1U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_n 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_cmd_buffer__DOT__status_cnt_q;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_input_buffer__DOT__read_pointer_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_input_buffer__DOT__read_pointer_q;
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__ibuf_pop) 
         & (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_input_buffer__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_input_buffer__DOT__read_pointer_n 
            = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_input_buffer__DOT__read_pointer_n) 
               & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__i_input_buffer__DOT__read_pointer_q)));
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__ibuf_usage_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__ibuf_usage_q;
    if ((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__6__KET____DOT__operand_requester_gnt))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__ibuf_usage_d 
            = (3U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__ibuf_usage_d)));
    }
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__ibuf_pop) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__ibuf_usage_d 
            = (3U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__ibuf_usage_d) 
                     - (IData)(1U)));
    }
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT____Vcellout__gen_lanes__BRA__3__KET____DOT__i_lane__lsu_ex_flush_o) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__select_d = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__elem_count_d = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_m__DOT__ibuf_usage_d = 0U;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__read_pointer_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__read_pointer_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_q;
    if ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__operand_queue_cmd_valid) 
          >> 5U) & (3U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_q)));
    }
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd_pop) 
         & (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__read_pointer_n 
            = ((2U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__read_pointer_n))
                ? 0U : (3U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__read_pointer_q))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if ((((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__operand_queue_cmd_valid) 
            >> 5U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__cmd_pop)) 
          & (3U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_n 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_cmd_buffer__DOT__status_cnt_q;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__ibuf_usage_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__ibuf_usage_q;
    if ((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_requester__DOT__gen_operand_requester__BRA__5__KET____DOT__operand_requester_gnt))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__ibuf_usage_d 
            = (7U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__ibuf_usage_d)));
    }
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__ibuf_pop) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__ibuf_usage_d 
            = (7U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__ibuf_usage_d) 
                     - (IData)(1U)));
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_input_buffer__DOT__read_pointer_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_input_buffer__DOT__read_pointer_q;
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__ibuf_pop) 
         & (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_input_buffer__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_input_buffer__DOT__read_pointer_n 
            = ((2U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_input_buffer__DOT__read_pointer_n))
                ? 0U : (3U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT__i_operand_queue_mask_b__DOT__i_input_buffer__DOT__read_pointer_q))));
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT____Vcellinp__i_sequencer__pe_scalar_resp_valid_i 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT____VdfgTmp_h1c8ceee9__0)
            ? (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__result_scalar_valid)
            : (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT____Vcellout__i_operand_queue_mask_b__operand_valid_o));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__masku_operand_valid 
        = ((((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_mask_operand_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
               | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_mask_operand_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
              << 0xfU) | (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_valu__DOT__i_mask_operand_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                           | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_vfus__DOT__i_valu__DOT__i_mask_operand_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                          << 0xeU)) | (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT____Vcellout__i_operand_queue_mask_b__operand_valid_o) 
                                        << 0xdU) | 
                                       ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__3__KET____DOT__i_lane__DOT__i_operand_queues__DOT____Vcellout__i_operand_queue_mask_m__operand_valid_o) 
                                        << 0xcU))) 
           | ((((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_mask_operand_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                  | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_mask_operand_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                 << 0xbU) | (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_valu__DOT__i_mask_operand_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                              | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_vfus__DOT__i_valu__DOT__i_mask_operand_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                             << 0xaU)) | (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT____Vcellout__i_operand_queue_mask_b__operand_valid_o) 
                                           << 9U) | 
                                          ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__2__KET____DOT__i_lane__DOT__i_operand_queues__DOT____Vcellout__i_operand_queue_mask_m__operand_valid_o) 
                                           << 8U))) 
              | ((((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_mask_operand_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                     | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_mask_operand_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                    << 7U) | (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_valu__DOT__i_mask_operand_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                               | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_valu__DOT__i_mask_operand_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                              << 6U)) | (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT____Vcellout__i_operand_queue_mask_b__operand_valid_o) 
                                          << 5U) | 
                                         ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_operand_queues__DOT____Vcellout__i_operand_queue_mask_m__operand_valid_o) 
                                          << 4U))) 
                 | (((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_mask_operand_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                       | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_mask_operand_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                      << 3U) | (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_valu__DOT__i_mask_operand_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_full_q) 
                                 | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_valu__DOT__i_mask_operand_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q)) 
                                << 2U)) | (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT____Vcellout__i_operand_queue_mask_b__operand_valid_o) 
                                            << 1U) 
                                           | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_operand_queues__DOT____Vcellout__i_operand_queue_mask_m__operand_valid_o))))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__masku_operand_alu_valid 
        = ((8U & (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__masku_operand_valid) 
                   >> (0xfU & ((IData)(0xcU) + (3U 
                                                & ((IData)(2U) 
                                                   + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__masku_operand_fu)))))) 
                  << 3U)) | ((4U & (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__masku_operand_valid) 
                                     >> (0xfU & ((IData)(8U) 
                                                 + 
                                                 (3U 
                                                  & ((IData)(2U) 
                                                     + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__masku_operand_fu)))))) 
                                    << 2U)) | ((2U 
                                                & (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__masku_operand_valid) 
                                                    >> 
                                                    (0xfU 
                                                     & ((IData)(4U) 
                                                        + 
                                                        (3U 
                                                         & ((IData)(2U) 
                                                            + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__masku_operand_fu)))))) 
                                                   << 1U)) 
                                               | (1U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__masku_operand_valid) 
                                                     >> 
                                                     (3U 
                                                      & ((IData)(2U) 
                                                         + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__masku_operand_fu))))))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_masku_operands__DOT__masku_operand_vd_lane_valid = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_masku_operands__DOT__masku_operand_vd_lane_valid 
        = ((8U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_masku_operands__DOT__masku_operand_vd_lane_valid)) 
           | ((4U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__masku_operand_valid) 
                     >> 7U)) | ((2U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__masku_operand_valid) 
                                       >> 4U)) | (1U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__masku_operand_valid) 
                                                     >> 1U)))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_masku_operands__DOT__masku_operand_vd_lane_valid 
        = ((7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_masku_operands__DOT__masku_operand_vd_lane_valid)) 
           | (8U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__masku_operand_valid) 
                    >> 0xaU)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_masku_operands__DOT__masku_operand_m_lane_valid = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_masku_operands__DOT__masku_operand_m_lane_valid 
        = ((8U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_masku_operands__DOT__masku_operand_m_lane_valid)) 
           | ((4U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__masku_operand_valid) 
                     >> 6U)) | ((2U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__masku_operand_valid) 
                                       >> 3U)) | (1U 
                                                  & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__masku_operand_valid)))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_masku_operands__DOT__masku_operand_m_lane_valid 
        = ((7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_masku_operands__DOT__masku_operand_m_lane_valid)) 
           | (8U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__masku_operand_valid) 
                    >> 9U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_masku_operands__DOT__gen_masku_operands_spill_regs__BRA__0__KET____DOT__i_spill_register_vd__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_masku_operands__DOT__masku_operand_vd_lane_valid) 
           & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_masku_operands__DOT____Vcellout__gen_masku_operands_spill_regs__BRA__0__KET____DOT__i_spill_register_vd__ready_o));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_masku_operands__DOT__gen_masku_operands_spill_regs__BRA__1__KET____DOT__i_spill_register_vd__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_masku_operands__DOT__masku_operand_vd_lane_valid) 
            >> 1U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_masku_operands__DOT____Vcellout__gen_masku_operands_spill_regs__BRA__1__KET____DOT__i_spill_register_vd__ready_o));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_masku_operands__DOT__gen_masku_operands_spill_regs__BRA__2__KET____DOT__i_spill_register_vd__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_masku_operands__DOT__masku_operand_vd_lane_valid) 
            >> 2U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_masku_operands__DOT____Vcellout__gen_masku_operands_spill_regs__BRA__2__KET____DOT__i_spill_register_vd__ready_o));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_masku_operands__DOT__gen_masku_operands_spill_regs__BRA__3__KET____DOT__i_spill_register_vd__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_masku_operands__DOT__masku_operand_vd_lane_valid) 
            >> 3U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_masku_operands__DOT____Vcellout__gen_masku_operands_spill_regs__BRA__3__KET____DOT__i_spill_register_vd__ready_o));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_masku_operands__DOT__gen_masku_operands_spill_regs__BRA__0__KET____DOT__i_spill_register_m__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_masku_operands__DOT__masku_operand_m_lane_valid) 
           & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_masku_operands__DOT____Vcellout__gen_masku_operands_spill_regs__BRA__0__KET____DOT__i_spill_register_m__ready_o));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_masku_operands__DOT__gen_masku_operands_spill_regs__BRA__1__KET____DOT__i_spill_register_m__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_masku_operands__DOT__masku_operand_m_lane_valid) 
            >> 1U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_masku_operands__DOT____Vcellout__gen_masku_operands_spill_regs__BRA__1__KET____DOT__i_spill_register_m__ready_o));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_masku_operands__DOT__gen_masku_operands_spill_regs__BRA__2__KET____DOT__i_spill_register_m__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_masku_operands__DOT__masku_operand_m_lane_valid) 
            >> 2U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_masku_operands__DOT____Vcellout__gen_masku_operands_spill_regs__BRA__2__KET____DOT__i_spill_register_m__ready_o));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_masku_operands__DOT__gen_masku_operands_spill_regs__BRA__3__KET____DOT__i_spill_register_m__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_masku_operands__DOT__masku_operand_m_lane_valid) 
            >> 3U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_masku__DOT__i_masku_operands__DOT____Vcellout__gen_masku_operands_spill_regs__BRA__3__KET____DOT__i_spill_register_m__ready_o));
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__2185(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__2185\n"); );
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_sldu__DOT__i_p2_stride_gen__DOT__i_sldu_stride_clz__DOT__gen_lzc__DOT__index_nodes 
        = ((0xe00000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_sldu__DOT__i_p2_stride_gen__DOT__i_sldu_stride_clz__DOT__gen_lzc__DOT__index_nodes) 
           | (0x20000U | ((((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_sldu__DOT__i_p2_stride_gen__DOT__i_sldu_stride_clz__DOT__gen_lzc__DOT__in_tmp))
                             ? 2U : 3U) << 0xcU) | 
                          ((((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_sldu__DOT__i_p2_stride_gen__DOT__i_sldu_stride_clz__DOT__gen_lzc__DOT__in_tmp))
                              ? 0U : 1U) << 9U) | (
                                                   (0x1c0U 
                                                    & (((0x20U 
                                                         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_sldu__DOT__i_p2_stride_gen__DOT__i_sldu_stride_clz__DOT__gen_lzc__DOT__sel_nodes))
                                                         ? 
                                                        (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_sldu__DOT__i_p2_stride_gen__DOT__i_sldu_stride_clz__DOT__gen_lzc__DOT__index_nodes 
                                                         >> 0xfU)
                                                         : 
                                                        (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_sldu__DOT__i_p2_stride_gen__DOT__i_sldu_stride_clz__DOT__gen_lzc__DOT__index_nodes 
                                                         >> 0x12U)) 
                                                       << 6U)) 
                                                   | ((0x38U 
                                                       & (((8U 
                                                            & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_sldu__DOT__i_p2_stride_gen__DOT__i_sldu_stride_clz__DOT__gen_lzc__DOT__sel_nodes))
                                                            ? 
                                                           (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_sldu__DOT__i_p2_stride_gen__DOT__i_sldu_stride_clz__DOT__gen_lzc__DOT__index_nodes 
                                                            >> 9U)
                                                            : 
                                                           (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_sldu__DOT__i_p2_stride_gen__DOT__i_sldu_stride_clz__DOT__gen_lzc__DOT__index_nodes 
                                                            >> 0xcU)) 
                                                          << 3U)) 
                                                      | (7U 
                                                         & ((2U 
                                                             & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_sldu__DOT__i_p2_stride_gen__DOT__i_sldu_stride_clz__DOT__gen_lzc__DOT__sel_nodes))
                                                             ? 
                                                            (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_sldu__DOT__i_p2_stride_gen__DOT__i_sldu_stride_clz__DOT__gen_lzc__DOT__index_nodes 
                                                             >> 3U)
                                                             : 
                                                            (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_sldu__DOT__i_p2_stride_gen__DOT__i_sldu_stride_clz__DOT__gen_lzc__DOT__index_nodes 
                                                             >> 6U)))))))));
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__2186(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__2186\n"); );
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_sldu__DOT__i_p2_stride_gen__DOT__i_sldu_stride_clz__DOT__gen_lzc__DOT__sel_nodes 
        = ((0x80U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_sldu__DOT__i_p2_stride_gen__DOT__i_sldu_stride_clz__DOT__gen_lzc__DOT__sel_nodes)) 
           | ((0x20U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_sldu__DOT__i_p2_stride_gen__DOT__i_sldu_stride_clz__DOT__gen_lzc__DOT__in_tmp) 
                        << 1U)) | (((IData)((0U != 
                                             (0xcU 
                                              & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_sldu__DOT__i_p2_stride_gen__DOT__i_sldu_stride_clz__DOT__gen_lzc__DOT__in_tmp)))) 
                                    << 4U) | (((IData)(
                                                       (0U 
                                                        != 
                                                        (3U 
                                                         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_sldu__DOT__i_p2_stride_gen__DOT__i_sldu_stride_clz__DOT__gen_lzc__DOT__in_tmp)))) 
                                               << 3U) 
                                              | (((IData)(
                                                          (0U 
                                                           != 
                                                           (0x60U 
                                                            & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_sldu__DOT__i_p2_stride_gen__DOT__i_sldu_stride_clz__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                  << 2U) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (0x18U 
                                                               & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_sldu__DOT__i_p2_stride_gen__DOT__i_sldu_stride_clz__DOT__gen_lzc__DOT__sel_nodes)))) 
                                                     << 1U) 
                                                    | (IData)(
                                                              (0U 
                                                               != 
                                                               (6U 
                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_sldu__DOT__i_p2_stride_gen__DOT__i_sldu_stride_clz__DOT__gen_lzc__DOT__sel_nodes))))))))));
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__2187(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__2187\n"); );
    // Init
    VlWide<18>/*575:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[1U] = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                      ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                          << 4U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                    >> 0x1cU)) : ((
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                                   << 0x12U) 
                                                  | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                                     >> 0xeU)));
    __Vtemp_1[2U] = ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                        ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                            << 8U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                      >> 0x18U)) : 
                       ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                         << 0x16U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                      >> 0xaU))) << 0xeU) 
                     | (0x3fffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                    ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                        << 4U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                                  >> 0x1cU))
                                    : ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                        << 0x12U) | 
                                       (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                        >> 0xeU)))));
    __Vtemp_1[3U] = ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                        ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                            << 8U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                      >> 0x18U)) : 
                       ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                         << 0x16U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
                                      >> 0xaU))) >> 0x12U) 
                     | (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                          ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                              << 8U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                        >> 0x18U)) : 
                         ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                           << 0x16U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                        >> 0xaU))) 
                        << 0xeU));
    __Vtemp_1[4U] = ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                        ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                            << 0xcU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                        >> 0x14U)) : 
                       ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                         << 0x1aU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                      >> 6U))) << 0x1cU) 
                     | ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                           ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                               << 8U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                         >> 0x18U))
                           : ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                               << 0x16U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
                                            >> 0xaU))) 
                         >> 0x12U) | (0xfffc000U & 
                                      (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
                                         ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                             << 8U) 
                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
                                               >> 0x18U))
                                         : ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
                                             << 0x16U) 
                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
                                               >> 0xaU))) 
                                       << 0xeU))));
    __Vtemp_1[5U] = ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                        ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                            << 0xcU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                        >> 0x14U)) : 
                       ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                         << 0x1aU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
                                      >> 6U))) >> 4U) 
                     | (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                          ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                              << 0xcU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                          >> 0x14U))
                          : ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                              << 0x1aU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                           >> 6U))) 
                        << 0x1cU));
    __Vtemp_1[6U] = ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                        ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                            << 0xcU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                        >> 0x14U)) : 
                       ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                         << 0x1aU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
                                      >> 6U))) >> 4U) 
                     | (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                          ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                              << 0xcU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                          >> 0x14U))
                          : ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                              << 0x1aU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                           >> 6U))) 
                        << 0x1cU));
    __Vtemp_1[7U] = ((((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_valid_q))
                        ? vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[0U]
                        : ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[3U] 
                            << 0x12U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[2U] 
                                         >> 0xeU))) 
                      << 0xaU) | (0x3ffU & (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel)
                                              ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] 
                                                  << 0xcU) 
                                                 | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] 
                                                    >> 0x14U))
                                              : ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] 
                                                  << 0x1aU) 
                                                 | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
                                                    >> 6U))) 
                                            >> 4U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0U] 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel)
            ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
                << 4U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
                          >> 0x1cU)) : ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                         << 0x12U) 
                                        | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                           >> 0xeU)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[1U] 
        = __Vtemp_1[1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[2U] 
        = __Vtemp_1[2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[3U] 
        = __Vtemp_1[3U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[4U] 
        = __Vtemp_1[4U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[5U] 
        = __Vtemp_1[5U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[6U] 
        = __Vtemp_1[6U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[7U] 
        = __Vtemp_1[7U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[8U] 
        = ((((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_valid_q))
              ? vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[0U]
              : ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[3U] 
                  << 0x12U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[2U] 
                               >> 0xeU))) >> 0x16U) 
           | (((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_valid_q))
                ? vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[1U]
                : ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[4U] 
                    << 0x12U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[3U] 
                                 >> 0xeU))) << 0xaU));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[9U] 
        = ((0xff000000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[7U] 
                           << 0xeU)) | ((((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_valid_q))
                                           ? vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[1U]
                                           : ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[4U] 
                                               << 0x12U) 
                                              | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[3U] 
                                                 >> 0xeU))) 
                                         >> 0x16U) 
                                        | (0xfffc00U 
                                           & (((1U 
                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_valid_q))
                                                ? vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[2U]
                                                : (
                                                   (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[5U] 
                                                    << 0x12U) 
                                                   | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[4U] 
                                                      >> 0xeU))) 
                                              << 0xaU))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xaU] 
        = (((0xffc000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[8U] 
                          << 0xeU)) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[7U] 
                                       >> 0x12U)) | 
           (0xff000000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[8U] 
                           << 0xeU)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xbU] 
        = (((0xffc000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[9U] 
                          << 0xeU)) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[8U] 
                                       >> 0x12U)) | 
           (0xff000000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[9U] 
                           << 0xeU)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xcU] 
        = ((0xffffffc0U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[0xcU]) 
           | (0x3fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[9U] 
                       >> 0x12U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xdU] 
        = ((0x3fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[0xdU]) 
           | (0xffffffc0U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[0xdU]));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xeU] 
        = ((0x3fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[0xeU]) 
           | (0xfffc0U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[0xeU]));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0xfU] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x10U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__0__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__data_nodes[0x11U] = 0U;
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__2188(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__2188\n"); );
    // Init
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT____VdfgTmp_h1bc011d8__0;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT____VdfgTmp_h1bc011d8__0 = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT____VdfgTmp_hd862d23d__0;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT____VdfgTmp_hd862d23d__0 = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT____VdfgTmp_hf23d9a7b__0;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT____VdfgTmp_hf23d9a7b__0 = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT____VdfgTmp_ha54d1606__0;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT____VdfgTmp_ha54d1606__0 = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT____VdfgTmp_hede4c271__0;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT____VdfgTmp_hede4c271__0 = 0;
    // Body
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT____VdfgTmp_hd862d23d__0 
        = ((1U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__status_cnt_q)) 
           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__splitted_req[4U] 
              >> 0xdU));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT____VdfgTmp_ha54d1606__0 
        = ((1U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__status_cnt_q)) 
           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__splitted_req[0U] 
              >> 1U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : ((2U & ((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__err_resp 
                               >> 0x32U)) << 1U)) | 
               (1U & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__act_resp 
                              >> 0x32U)))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : ((2U & ((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__err_resp 
                               >> 0x29U)) << 1U)) | 
               (1U & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__act_resp 
                              >> 0x29U)))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellinp__i_demux_simple__mst_resps_i[0U] 
        = (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__act_resp);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellinp__i_demux_simple__mst_resps_i[1U] 
        = (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__err_resp) 
            << 0x16U) | (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__act_resp 
                                 >> 0x20U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellinp__i_demux_simple__mst_resps_i[2U] 
        = (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__err_resp) 
            >> 0xaU) | ((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__err_resp 
                                 >> 0x20U)) << 0x16U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellinp__i_demux_simple__mst_resps_i[3U] 
        = ((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_err_slv__DOT__err_resp 
                    >> 0x20U)) >> 0xaU);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__aw_push 
        = ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT____VdfgTmp_hd862d23d__0) 
           & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT____VdfgTmp_hfdb6627e__0));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__ar_push 
        = ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT____VdfgTmp_ha54d1606__0) 
           & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT____VdfgTmp_h9e6c5782__0));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vcellout__genblk1__DOT__i_b_mux__req_o 
        = (IData)((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffffffeU & (((1U <= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)) 
                            << 1U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d))) 
           | (1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = (0xfffffffeU & (((1U > (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)) 
                           << 1U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vcellout__genblk1__DOT__i_r_mux__req_o 
        = (IData)((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffffffeU & (((1U <= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)) 
                            << 1U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d))) 
           | (1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = (0xfffffffeU & (((1U > (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)) 
                           << 1U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__w_cnt_down = 0U;
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__w_select)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__w_cnt_down 
            = (1U & (IData)(((0x140U == (0x140U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[3U])) 
                             & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellinp__i_demux_simple__mst_resps_i[1U] 
                                >> 0x13U))));
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__slv_resp_cut 
        = (0x37ffffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__slv_resp_cut);
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__w_select)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__slv_resp_cut 
            = ((0x37ffffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__slv_resp_cut) 
               | ((QData)((IData)((1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellinp__i_demux_simple__mst_resps_i[1U] 
                                         >> 0x13U)))) 
                  << 0x33U));
    }
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__w_select_valid) 
         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__w_select))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__w_cnt_down 
            = (1U & (IData)(((0x140U == (0x140U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[3U])) 
                             & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellinp__i_demux_simple__mst_resps_i[3U] 
                                >> 9U))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__slv_resp_cut 
            = ((0x37ffffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__slv_resp_cut) 
               | ((QData)((IData)((1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellinp__i_demux_simple__mst_resps_i[3U] 
                                         >> 9U)))) 
                  << 0x33U));
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__ar_ready 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__ar_valid) 
           & ((0x6bU >= ((IData)(0x34U) + (0x7fU & 
                                           ((IData)(0x36U) 
                                            * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__sel_ar_unsupported))))) 
              && (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellinp__i_demux_simple__mst_resps_i[
                        (((IData)(0x34U) + (0x7fU & 
                                            ((IData)(0x36U) 
                                             * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__sel_ar_unsupported)))) 
                         >> 5U)] >> (0x1fU & ((IData)(0x34U) 
                                              + (0x7fU 
                                                 & ((IData)(0x36U) 
                                                    * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__sel_ar_unsupported)))))))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__aw_ready 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__aw_valid) 
           & ((0x6bU >= ((IData)(0x35U) + (0x7fU & 
                                           ((IData)(0x36U) 
                                            * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__sel_aw_unsupported))))) 
              && (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT____Vcellinp__i_demux_simple__mst_resps_i[
                        (((IData)(0x35U) + (0x7fU & 
                                            ((IData)(0x36U) 
                                             * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__sel_aw_unsupported)))) 
                         >> 5U)] >> (0x1fU & ((IData)(0x35U) 
                                              + (0x7fU 
                                                 & ((IData)(0x36U) 
                                                    * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__sel_aw_unsupported)))))))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__gate_clock = 1U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__aw_reflect_id 
        = ((4U >= (7U & ((IData)(5U) * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__read_pointer_q))))
            ? (0x1fU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__mem_q) 
                        >> (7U & ((IData)(5U) * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__read_pointer_q)))))
            : 0U);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__mem_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__mem_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__aw_empty 
        = ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__aw_push)) 
           & (0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__status_cnt_q)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__gate_clock = 1U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__ar_reflect_id 
        = ((4U >= (7U & ((IData)(5U) * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__read_pointer_q))))
            ? (0x1fU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__mem_q) 
                        >> (7U & ((IData)(5U) * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__read_pointer_q)))))
            : 0U);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__mem_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__mem_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__ar_empty 
        = ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__ar_push)) 
           & (0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__status_cnt_q)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | (IData)((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | (IData)((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | (IData)((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | (IData)((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q;
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__w_cnt_down) 
         ^ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__w_cnt_up))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_d 
            = (3U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__w_cnt_down)
                      ? ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)) : ((IData)(1U) 
                                           + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q))));
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__lock_ar_valid_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__lock_ar_valid_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__load_ar_lock = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__ar_push = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__slv_resp_cut 
        = (0x2fffffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__slv_resp_cut);
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__lock_ar_valid_q) {
        if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__ar_ready) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__lock_ar_valid_d = 0U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__load_ar_lock = 1U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__ar_push = 1U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__slv_resp_cut 
                = (0x10000000000000ULL | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__slv_resp_cut);
        }
    } else if ((1U & (~ (IData)((0U != vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__cnt_full))))) {
        if ((1U & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[0U] 
                    >> 1U) & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__ar_select_occupied)) 
                              | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__sel_ar_unsupported) 
                                 == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__lookup_ar_select)))))) {
            if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__ar_ready)))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__lock_ar_valid_d = 1U;
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__load_ar_lock = 1U;
            }
            if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__ar_ready) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__ar_push = 1U;
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__slv_resp_cut 
                    = (0x10000000000000ULL | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__slv_resp_cut);
            }
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__load_aw_lock = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__atop_inject = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__slv_resp_cut 
        = (0x1fffffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__slv_resp_cut);
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_q) {
        if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__aw_ready) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_d = 0U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__load_aw_lock = 1U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__atop_inject 
                = (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[4U] 
                         >> 0x14U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__slv_resp_cut 
                = (0x20000000000000ULL | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__slv_resp_cut);
        }
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
            if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__aw_ready)))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__lock_aw_valid_d = 1U;
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__load_aw_lock = 1U;
            }
            if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__aw_ready) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__atop_inject 
                    = (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[4U] 
                             >> 0x14U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__slv_resp_cut 
                    = (0x20000000000000ULL | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__slv_resp_cut);
            }
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT____VdfgTmp_hdc8962e8__0 
        = (1U & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__aw_empty)) 
                 & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__uart_lite_resp 
                            >> 0x24U))));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT____VdfgTmp_hf23d9a7b__0 
        = (1U & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__aw_empty)) 
                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__splitted_req[3U] 
                    >> 5U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT____VdfgTmp_h876d485c__0 
        = (1U & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__ar_empty)) 
                 & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__uart_lite_resp)));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT____VdfgTmp_hede4c271__0 
        = (1U & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__ar_empty)) 
                 & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__splitted_req[0U]));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (1U & (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[3U] 
                   >> 5U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vcellout__genblk1__DOT__i_b_mux__req_o))
                  ? ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                      : (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                  : (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (1U & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[0U] 
                  & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT____Vcellout__genblk1__DOT__i_r_mux__req_o))
                  ? ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                      : (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                  : (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__push_en 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__ar_push)
            ? ((IData)(1U) << (0x1fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[3U]))
            : 0U);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_demux_supported_vs_unsupported__DOT__i_demux_simple__DOT__genblk1__DOT__atop_inject)
            ? ((IData)(1U) << (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__filtered_req[7U] 
                                        >> 0x12U)))
            : 0U);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__aw_pop 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT____VdfgTmp_hdc8962e8__0) 
           & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT____VdfgTmp_hf23d9a7b__0));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__ar_pop 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT____VdfgTmp_h876d485c__0) 
           & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT____VdfgTmp_hede4c271__0));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__uart_lite_req[0U] 
        = (((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__splitted_req[2U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__splitted_req[1U])))) 
            << 5U) | ((0x1cU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__splitted_req[0U] 
                                >> 9U)) | (((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT____VdfgTmp_ha54d1606__0) 
                                            << 1U) 
                                           | (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT____VdfgTmp_hede4c271__0))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__uart_lite_req[1U] 
        = (((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__splitted_req[2U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__splitted_req[1U])))) 
            >> 0x1bU) | ((IData)(((((QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__splitted_req[2U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__splitted_req[1U]))) 
                                  >> 0x20U)) << 5U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__uart_lite_req[2U] 
        = (((IData)((0xfffffffffULL & (((QData)((IData)(
                                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__splitted_req[4U])) 
                                        << 0x17U) | 
                                       ((QData)((IData)(
                                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__splitted_req[3U])) 
                                        >> 9U)))) << 7U) 
           | ((0x40U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__splitted_req[3U]) 
              | (((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT____VdfgTmp_hf23d9a7b__0) 
                  << 5U) | ((IData)(((((QData)((IData)(
                                                       vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__splitted_req[2U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__splitted_req[1U]))) 
                                     >> 0x20U)) >> 0x1bU))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__uart_lite_req[3U] 
        = (((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__splitted_req[7U])) 
                      << 0x2eU) | (((QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__splitted_req[6U])) 
                                    << 0xeU) | ((QData)((IData)(
                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__splitted_req[5U])) 
                                                >> 0x12U)))) 
            << 0xfU) | ((0x7000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__splitted_req[4U] 
                                    >> 0x11U)) | (((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT____VdfgTmp_hd862d23d__0) 
                                                   << 0xbU) 
                                                  | (((IData)(
                                                              (0xfffffffffULL 
                                                               & (((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__splitted_req[4U])) 
                                                                   << 0x17U) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__splitted_req[3U])) 
                                                                     >> 9U)))) 
                                                      >> 0x19U) 
                                                     | ((IData)(
                                                                ((0xfffffffffULL 
                                                                  & (((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__splitted_req[4U])) 
                                                                      << 0x17U) 
                                                                     | ((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__splitted_req[3U])) 
                                                                        >> 9U))) 
                                                                 >> 0x20U)) 
                                                        << 7U)))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__uart_lite_req[4U] 
        = (((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__splitted_req[7U])) 
                      << 0x2eU) | (((QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__splitted_req[6U])) 
                                    << 0xeU) | ((QData)((IData)(
                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__splitted_req[5U])) 
                                                >> 0x12U)))) 
            >> 0x11U) | ((IData)(((((QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__splitted_req[7U])) 
                                    << 0x2eU) | (((QData)((IData)(
                                                                  vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__splitted_req[6U])) 
                                                  << 0xeU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__splitted_req[5U])) 
                                                    >> 0x12U))) 
                                  >> 0x20U)) << 0xfU));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__uart_lite_req[5U] 
        = ((IData)(((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__splitted_req[7U])) 
                      << 0x2eU) | (((QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__splitted_req[6U])) 
                                    << 0xeU) | ((QData)((IData)(
                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__splitted_req[5U])) 
                                                >> 0x12U))) 
                    >> 0x20U)) >> 0x11U);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__write_pointer_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__write_pointer_q;
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__aw_push) 
         & (1U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__gate_clock = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT____Vlvbound_hbd47936f__0 
            = (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__splitted_req[7U] 
                        >> 0x12U));
        if ((4U >= (7U & ((IData)(5U) * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__write_pointer_q))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__mem_n 
                = (((~ ((IData)(0x1fU) << (7U & ((IData)(5U) 
                                                 * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__write_pointer_q))))) 
                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__mem_n)) 
                   | (0x1fU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT____Vlvbound_hbd47936f__0) 
                               << (7U & ((IData)(5U) 
                                         * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__write_pointer_q))))));
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__write_pointer_n 
            = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__write_pointer_q) 
               & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__write_pointer_q)));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__status_cnt_n 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__status_cnt_q;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__status_cnt_q)));
    } else {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__status_cnt_n 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__status_cnt_q;
    }
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__aw_pop) 
         & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__aw_empty)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__aw_push) 
           & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__aw_pop)) 
          & (1U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__status_cnt_q))) 
         & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__aw_empty)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__status_cnt_n 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__status_cnt_q;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__read_pointer_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__read_pointer_q;
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__aw_pop) 
         & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__aw_empty)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__read_pointer_n 
            = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__read_pointer_n) 
               & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__read_pointer_q)));
    }
    if (((0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__status_cnt_q)) 
         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__aw_push))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__aw_reflect_id 
            = (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__splitted_req[7U] 
                        >> 0x12U));
        if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__aw_pop) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__write_pointer_n 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__write_pointer_q;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__status_cnt_n 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__status_cnt_q;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__read_pointer_n 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__read_pointer_q;
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__write_pointer_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__write_pointer_q;
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__ar_push) 
         & (1U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__gate_clock = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT____Vlvbound_hbd47936f__0 
            = (0x1fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__splitted_req[3U]);
        if ((4U >= (7U & ((IData)(5U) * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__write_pointer_q))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__mem_n 
                = (((~ ((IData)(0x1fU) << (7U & ((IData)(5U) 
                                                 * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__write_pointer_q))))) 
                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__mem_n)) 
                   | (0x1fU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT____Vlvbound_hbd47936f__0) 
                               << (7U & ((IData)(5U) 
                                         * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__write_pointer_q))))));
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__write_pointer_n 
            = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__write_pointer_q) 
               & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__write_pointer_q)));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__status_cnt_n 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__status_cnt_q;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__status_cnt_q)));
    } else {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__status_cnt_n 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__status_cnt_q;
    }
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__ar_pop) 
         & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__ar_empty)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__ar_push) 
           & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__ar_pop)) 
          & (1U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__status_cnt_q))) 
         & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__ar_empty)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__status_cnt_n 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__status_cnt_q;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__read_pointer_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__read_pointer_q;
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__ar_pop) 
         & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__ar_empty)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__read_pointer_n 
            = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__read_pointer_n) 
               & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__read_pointer_q)));
    }
    if (((0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__status_cnt_q)) 
         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__ar_push))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__ar_reflect_id 
            = (0x1fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__splitted_req[3U]);
        if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__ar_pop) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__write_pointer_n 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__write_pointer_q;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__status_cnt_n 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__status_cnt_q;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__read_pointer_n 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__read_pointer_q;
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT____VdfgTmp_h1ca9460f__0 
        = (1U & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__uart_lite_req[3U] 
                  >> 0xbU) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__uart_lite_req[2U] 
                              >> 6U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_req_arb__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_req_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_req_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT____VdfgTmp_h1ca9460f__0) 
                << 1U) | (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__uart_lite_req[0U] 
                                >> 1U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_req_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffffffeU & (((1U <= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_req_arb__DOT__gen_arbiter__DOT__rr_q)) 
                            << 1U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_req_arb__DOT__gen_arbiter__DOT__req_d))) 
           | (1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_req_arb__DOT__gen_arbiter__DOT__req_d)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_req_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = (0xfffffffeU & (((1U > (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_req_arb__DOT__gen_arbiter__DOT__rr_q)) 
                           << 1U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_req_arb__DOT__gen_arbiter__DOT__req_d)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_req_arb__DOT__idx_o 
        = (1U & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_req_arb__DOT__gen_arbiter__DOT__req_d)) 
                 | (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_req_arb__DOT__gen_arbiter__DOT__req_d) 
                     >> 1U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_req_arb__DOT__gen_arbiter__DOT__rr_q))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_req_arb__DOT__gen_arbiter__DOT__req_nodes 
        = (IData)((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_req_arb__DOT__gen_arbiter__DOT__req_d)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_req_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes 
        = ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_req_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)) 
           | (IData)((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_req_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_req_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_req_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_req_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_req_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_req_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_req_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_req_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_req_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | (IData)((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_req_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__axi_req_ready 
        = ((((1U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__status_cnt_q)) 
             & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_req_arb__DOT__idx_o)) 
            << 1U) | ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_req_arb__DOT__idx_o)) 
                      & (1U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__status_cnt_q))));
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_req_arb__DOT__idx_o) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_req_arb__DOT__gen_arbiter__DOT__data_nodes[0U] 
            = (IData)((1ULL | (0x1ffffffffeULL & (((QData)((IData)(
                                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__uart_lite_req[3U])) 
                                                   << 0x1aU) 
                                                  | (0x3fffffffffffffeULL 
                                                     & ((QData)((IData)(
                                                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__uart_lite_req[2U])) 
                                                        >> 6U))))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_req_arb__DOT__gen_arbiter__DOT__data_nodes[1U] 
            = (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__uart_lite_req[4U] 
                 << 0x19U) | (0x1ffffe0U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__uart_lite_req[3U] 
                                            >> 7U))) 
               | (IData)(((1ULL | (0x1ffffffffeULL 
                                   & (((QData)((IData)(
                                                       vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__uart_lite_req[3U])) 
                                       << 0x1aU) | 
                                      (0x3fffffffffffffeULL 
                                       & ((QData)((IData)(
                                                          vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__uart_lite_req[2U])) 
                                          >> 6U))))) 
                          >> 0x20U)));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_req_arb__DOT__gen_arbiter__DOT__data_nodes[2U] 
            = ((0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__uart_lite_req[4U] 
                         >> 7U)) | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__uart_lite_req[5U] 
                                     << 0x19U) | (0x1ffffe0U 
                                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__uart_lite_req[4U] 
                                                     >> 7U))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_req_arb__DOT__gen_arbiter__DOT__data_nodes[3U] 
            = ((0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__uart_lite_req[5U] 
                         >> 7U)) | (0xe0U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__uart_lite_req[5U] 
                                             >> 7U)));
    } else {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_req_arb__DOT__gen_arbiter__DOT__data_nodes[0U] = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_req_arb__DOT__gen_arbiter__DOT__data_nodes[1U] 
            = (0xffffffe0U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__uart_lite_req[0U] 
                              << 3U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_req_arb__DOT__gen_arbiter__DOT__data_nodes[2U] 
            = (((0x18U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__uart_lite_req[1U] 
                          << 3U)) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__uart_lite_req[0U] 
                                     >> 0x1dU)) | (0xffffffe0U 
                                                   & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__uart_lite_req[1U] 
                                                      << 3U)));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_req_arb__DOT__gen_arbiter__DOT__data_nodes[3U] 
            = (((0x18U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__uart_lite_req[2U] 
                          << 3U)) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__uart_lite_req[1U] 
                                     >> 0x1dU)) | (0xe0U 
                                                   & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__uart_lite_req[2U] 
                                                      << 3U)));
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT____Vcellinp__i_fifo__push_i 
        = ((1U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__status_cnt_q)) 
           & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_req_arb__DOT__gen_arbiter__DOT__req_nodes));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT____VdfgTmp_h1bc011d8__0 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT____VdfgTmp_h1ca9460f__0) 
           & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__axi_req_ready) 
              >> 1U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__gate_clock = 1U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_req_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (1U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT____Vcellinp__i_fifo__push_i)
                  ? ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_req_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_req_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                      : (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_req_arb__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                  : (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_req_arb__DOT__gen_arbiter__DOT__rr_q)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__mem_n[0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__mem_q[0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__mem_n[1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__mem_q[1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__mem_n[2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__mem_q[2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__mem_n[3U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__mem_q[3U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__fifo_empty 
        = ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT____Vcellinp__i_fifo__push_i)) 
           & (0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__status_cnt_q)));
    if ((0x67U >= (0x7fU & ((IData)(0x68U) * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__read_pointer_q))))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_req[0U] 
            = (((0U == (0x1fU & ((IData)(0x68U) * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__read_pointer_q))))
                 ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__mem_q[
                         ((IData)(1U) + (3U & (((IData)(0x68U) 
                                                * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__read_pointer_q)) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x68U) 
                                                  * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__read_pointer_q)))))) 
               | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__mem_q[
                  (3U & (((IData)(0x68U) * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__read_pointer_q)) 
                         >> 5U))] >> (0x1fU & ((IData)(0x68U) 
                                               * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__read_pointer_q)))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_req[1U] 
            = (((0U == (0x1fU & ((IData)(0x68U) * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__read_pointer_q))))
                 ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__mem_q[
                         ((IData)(2U) + (3U & (((IData)(0x68U) 
                                                * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__read_pointer_q)) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x68U) 
                                                  * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__read_pointer_q)))))) 
               | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__mem_q[
                  ((IData)(1U) + (3U & (((IData)(0x68U) 
                                         * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__read_pointer_q)) 
                                        >> 5U)))] >> 
                  (0x1fU & ((IData)(0x68U) * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__read_pointer_q)))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_req[2U] 
            = (((0U == (0x1fU & ((IData)(0x68U) * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__read_pointer_q))))
                 ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__mem_q[
                         ((IData)(3U) + (3U & (((IData)(0x68U) 
                                                * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__read_pointer_q)) 
                                               >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0x68U) 
                                                  * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__read_pointer_q)))))) 
               | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__mem_q[
                  ((IData)(2U) + (3U & (((IData)(0x68U) 
                                         * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__read_pointer_q)) 
                                        >> 5U)))] >> 
                  (0x1fU & ((IData)(0x68U) * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__read_pointer_q)))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_req[3U] 
            = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__mem_q[
                        ((IData)(3U) + (3U & (((IData)(0x68U) 
                                               * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__read_pointer_q)) 
                                              >> 5U)))] 
                        >> (0x1fU & ((IData)(0x68U) 
                                     * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__read_pointer_q)))));
    } else {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_req[0U] = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_req[1U] = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_req[2U] = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_req[3U] = 0U;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_apb_decode__DOT__i_addr_decode_dync__DOT__matched_rules = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_apb_decode__DOT__dec_error_o = 1U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_dec_valid = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_sel_idx = 0U;
    if (((0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__status_cnt_q)) 
         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT____Vcellinp__i_fifo__push_i))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_req[0U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_req_arb__DOT__gen_arbiter__DOT__data_nodes[0U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_req[1U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_req_arb__DOT__gen_arbiter__DOT__data_nodes[1U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_req[2U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_req_arb__DOT__gen_arbiter__DOT__data_nodes[2U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_req[3U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_req_arb__DOT__gen_arbiter__DOT__data_nodes[3U];
    }
    if ((0xffffffffffffffffULL > (((QData)((IData)(
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_req[3U])) 
                                   << 0x38U) | (((QData)((IData)(
                                                                 vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_req[2U])) 
                                                 << 0x18U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_req[1U])) 
                                                   >> 8U))))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_apb_decode__DOT__i_addr_decode_dync__DOT__matched_rules = 1U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_apb_decode__DOT__dec_error_o = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_dec_valid = 1U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_sel_idx = 0U;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT____Vcellout__i_axi_lite_to_apb_uart__apb_req_o[0U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT____Vcellout__i_axi_lite_to_apb_uart__apb_req_o[1U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT____Vcellout__i_axi_lite_to_apb_uart__apb_req_o[2U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT____Vcellout__i_axi_lite_to_apb_uart__apb_req_o[3U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__uart_prdata = 0U;
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_state_q) {
        if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_state_q) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT____Vlvbound_hafaf9c28__1[0U] 
                = (IData)((0x6000000000ULL | (((QData)((IData)(
                                                               (1U 
                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_req[0U]))) 
                                               << 0x24U) 
                                              | (0xfffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_req[1U])) 
                                                     << 0x1fU) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_req[0U])) 
                                                       >> 1U))))));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT____Vlvbound_hafaf9c28__1[1U] 
                = ((0xffffff80U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_req[1U] 
                                   << 2U)) | (IData)(
                                                     ((0x6000000000ULL 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_req[0U]))) 
                                                           << 0x24U) 
                                                          | (0xfffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_req[1U])) 
                                                                 << 0x1fU) 
                                                                | ((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_req[0U])) 
                                                                   >> 1U))))) 
                                                      >> 0x20U)));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT____Vlvbound_hafaf9c28__1[2U] 
                = (((0x7cU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_req[2U] 
                              << 2U)) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_req[1U] 
                                         >> 0x1eU)) 
                   | (0xffffff80U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_req[2U] 
                                     << 2U)));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT____Vlvbound_hafaf9c28__1[3U] 
                = (((0x7cU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_req[3U] 
                              << 2U)) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_req[2U] 
                                         >> 0x1eU)) 
                   | (0x380U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_req[3U] 
                                << 2U)));
            if ((0x69U >= (0x7fU & ((IData)(0x6aU) 
                                    * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_sel_idx))))) {
                VL_ASSIGNSEL_WW(106,106,(0x7fU & ((IData)(0x6aU) 
                                                  * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_sel_idx))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT____Vcellout__i_axi_lite_to_apb_uart__apb_req_o, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT____Vlvbound_hafaf9c28__1);
            }
        }
    } else if ((((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__fifo_empty)) 
                 & (1U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT__i_fifo__DOT__status_cnt_q))) 
                & (1U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT__i_fifo__DOT__status_cnt_q)))) {
        if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_dec_valid) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT____Vlvbound_hafaf9c28__0[0U] 
                = (IData)((0x4000000000ULL | (((QData)((IData)(
                                                               (1U 
                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_req[0U]))) 
                                               << 0x24U) 
                                              | (0xfffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_req[1U])) 
                                                     << 0x1fU) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_req[0U])) 
                                                       >> 1U))))));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT____Vlvbound_hafaf9c28__0[1U] 
                = ((0xffffff80U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_req[1U] 
                                   << 2U)) | (IData)(
                                                     ((0x4000000000ULL 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_req[0U]))) 
                                                           << 0x24U) 
                                                          | (0xfffffffffULL 
                                                             & (((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_req[1U])) 
                                                                 << 0x1fU) 
                                                                | ((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_req[0U])) 
                                                                   >> 1U))))) 
                                                      >> 0x20U)));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT____Vlvbound_hafaf9c28__0[2U] 
                = (((0x7cU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_req[2U] 
                              << 2U)) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_req[1U] 
                                         >> 0x1eU)) 
                   | (0xffffff80U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_req[2U] 
                                     << 2U)));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT____Vlvbound_hafaf9c28__0[3U] 
                = (((0x7cU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_req[3U] 
                              << 2U)) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_req[2U] 
                                         >> 0x1eU)) 
                   | (0x380U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_req[3U] 
                                << 2U)));
            if ((0x69U >= (0x7fU & ((IData)(0x6aU) 
                                    * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_sel_idx))))) {
                VL_ASSIGNSEL_WW(106,106,(0x7fU & ((IData)(0x6aU) 
                                                  * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_sel_idx))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT____Vcellout__i_axi_lite_to_apb_uart__apb_req_o, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT____Vlvbound_hafaf9c28__0);
            }
        }
    }
    if ((IData)((0x60U == (0x70U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT____Vcellout__i_axi_lite_to_apb_uart__apb_req_o[1U])))) {
        if (((((((((0U == (7U & VL_SHIFTR_III(32,32,32, 
                                              ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT____Vcellout__i_axi_lite_to_apb_uart__apb_req_o[2U] 
                                                << 0x16U) 
                                               | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT____Vcellout__i_axi_lite_to_apb_uart__apb_req_o[1U] 
                                                  >> 0xaU)), 2U))) 
                   | (1U == (7U & VL_SHIFTR_III(32,32,32, 
                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT____Vcellout__i_axi_lite_to_apb_uart__apb_req_o[2U] 
                                                  << 0x16U) 
                                                 | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT____Vcellout__i_axi_lite_to_apb_uart__apb_req_o[1U] 
                                                    >> 0xaU)), 2U)))) 
                  | (2U == (7U & VL_SHIFTR_III(32,32,32, 
                                               ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT____Vcellout__i_axi_lite_to_apb_uart__apb_req_o[2U] 
                                                 << 0x16U) 
                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT____Vcellout__i_axi_lite_to_apb_uart__apb_req_o[1U] 
                                                   >> 0xaU)), 2U)))) 
                 | (3U == (7U & VL_SHIFTR_III(32,32,32, 
                                              ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT____Vcellout__i_axi_lite_to_apb_uart__apb_req_o[2U] 
                                                << 0x16U) 
                                               | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT____Vcellout__i_axi_lite_to_apb_uart__apb_req_o[1U] 
                                                  >> 0xaU)), 2U)))) 
                | (4U == (7U & VL_SHIFTR_III(32,32,32, 
                                             ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT____Vcellout__i_axi_lite_to_apb_uart__apb_req_o[2U] 
                                               << 0x16U) 
                                              | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT____Vcellout__i_axi_lite_to_apb_uart__apb_req_o[1U] 
                                                 >> 0xaU)), 2U)))) 
               | (5U == (7U & VL_SHIFTR_III(32,32,32, 
                                            ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT____Vcellout__i_axi_lite_to_apb_uart__apb_req_o[2U] 
                                              << 0x16U) 
                                             | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT____Vcellout__i_axi_lite_to_apb_uart__apb_req_o[1U] 
                                                >> 0xaU)), 2U)))) 
              | (6U == (7U & VL_SHIFTR_III(32,32,32, 
                                           ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT____Vcellout__i_axi_lite_to_apb_uart__apb_req_o[2U] 
                                             << 0x16U) 
                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT____Vcellout__i_axi_lite_to_apb_uart__apb_req_o[1U] 
                                               >> 0xaU)), 2U)))) 
             | (7U == (7U & VL_SHIFTR_III(32,32,32, 
                                          ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT____Vcellout__i_axi_lite_to_apb_uart__apb_req_o[2U] 
                                            << 0x16U) 
                                           | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT____Vcellout__i_axi_lite_to_apb_uart__apb_req_o[1U] 
                                              >> 0xaU)), 2U))))) {
            if ((0U == (7U & VL_SHIFTR_III(32,32,32, 
                                           ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT____Vcellout__i_axi_lite_to_apb_uart__apb_req_o[2U] 
                                             << 0x16U) 
                                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT____Vcellout__i_axi_lite_to_apb_uart__apb_req_o[1U] 
                                               >> 0xaU)), 2U)))) {
                if ((0U != (0x80U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_mock_uart__DOT__lcr)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__uart_prdata 
                        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_mock_uart__DOT__dll;
                }
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__uart_prdata 
                    = ((1U == (7U & VL_SHIFTR_III(32,32,32, 
                                                  ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT____Vcellout__i_axi_lite_to_apb_uart__apb_req_o[2U] 
                                                    << 0x16U) 
                                                   | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT____Vcellout__i_axi_lite_to_apb_uart__apb_req_o[1U] 
                                                      >> 0xaU)), 2U)))
                        ? ((0U != (0x80U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_mock_uart__DOT__lcr)))
                            ? (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_mock_uart__DOT__dlm)
                            : (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_mock_uart__DOT__ier))
                        : ((2U == (7U & VL_SHIFTR_III(32,32,32, 
                                                      ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT____Vcellout__i_axi_lite_to_apb_uart__apb_req_o[2U] 
                                                        << 0x16U) 
                                                       | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT____Vcellout__i_axi_lite_to_apb_uart__apb_req_o[1U] 
                                                          >> 0xaU)), 2U)))
                            ? ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_mock_uart__DOT__fifo_enabled)
                                ? 0xc0U : 0U) : ((3U 
                                                  == 
                                                  (7U 
                                                   & VL_SHIFTR_III(32,32,32, 
                                                                   ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT____Vcellout__i_axi_lite_to_apb_uart__apb_req_o[2U] 
                                                                     << 0x16U) 
                                                                    | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT____Vcellout__i_axi_lite_to_apb_uart__apb_req_o[1U] 
                                                                       >> 0xaU)), 2U)))
                                                  ? (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_mock_uart__DOT__lcr)
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (7U 
                                                    & VL_SHIFTR_III(32,32,32, 
                                                                    ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT____Vcellout__i_axi_lite_to_apb_uart__apb_req_o[2U] 
                                                                      << 0x16U) 
                                                                     | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT____Vcellout__i_axi_lite_to_apb_uart__apb_req_o[1U] 
                                                                        >> 0xaU)), 2U)))
                                                   ? (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_mock_uart__DOT__mcr)
                                                   : 
                                                  ((5U 
                                                    == 
                                                    (7U 
                                                     & VL_SHIFTR_III(32,32,32, 
                                                                     ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT____Vcellout__i_axi_lite_to_apb_uart__apb_req_o[2U] 
                                                                       << 0x16U) 
                                                                      | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT____Vcellout__i_axi_lite_to_apb_uart__apb_req_o[1U] 
                                                                         >> 0xaU)), 2U)))
                                                    ? 
                                                   (0x60U 
                                                    | VL_EXTENDS_II(32,8, (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_mock_uart__DOT__lsr)))
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & VL_SHIFTR_III(32,32,32, 
                                                                      ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT____Vcellout__i_axi_lite_to_apb_uart__apb_req_o[2U] 
                                                                        << 0x16U) 
                                                                       | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT____Vcellout__i_axi_lite_to_apb_uart__apb_req_o[1U] 
                                                                          >> 0xaU)), 2U)))
                                                     ? (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_mock_uart__DOT__msr)
                                                     : (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_mock_uart__DOT__scr)))))));
            }
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_update = 0U;
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_state_q) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_state_d = 1U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_req_ready = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_wresp = 2U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_rresp = 0x37a844322ULL;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_wresp_valid = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_rresp_valid = 0U;
        if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_state_q) {
            if (((0x21U >= ((IData)(0x21U) + (0x3fU 
                                              & ((IData)(0x22U) 
                                                 * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_sel_idx))))) 
                 && (1U & (IData)(((0x200000000ULL 
                                    | ((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__uart_prdata)) 
                                       << 1U)) >> ((IData)(0x21U) 
                                                   + 
                                                   (0x3fU 
                                                    & ((IData)(0x22U) 
                                                       * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_sel_idx))))))))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_update = 1U;
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_state_d = 0U;
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_req_ready = 1U;
                if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_req[0U])) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_wresp 
                        = (((0x21U >= (0x3fU & ((IData)(0x22U) 
                                                * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_sel_idx)))) 
                            && (1U & (IData)(((0x200000000ULL 
                                               | ((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__uart_prdata)) 
                                                  << 1U)) 
                                              >> (0x3fU 
                                                  & ((IData)(0x22U) 
                                                     * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_sel_idx)))))))
                            ? 2U : 0U);
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_wresp_valid = 1U;
                }
                if ((1U & (~ vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_req[0U]))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_rresp 
                        = ((3ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_rresp) 
                           | ((QData)((IData)(((0x21U 
                                                >= 
                                                ((IData)(1U) 
                                                 + 
                                                 (0x3fU 
                                                  & ((IData)(0x22U) 
                                                     * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_sel_idx)))))
                                                ? (IData)(
                                                          ((0x200000000ULL 
                                                            | ((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__uart_prdata)) 
                                                               << 1U)) 
                                                           >> 
                                                           ((IData)(1U) 
                                                            + 
                                                            (0x3fU 
                                                             & ((IData)(0x22U) 
                                                                * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_sel_idx))))))
                                                : 0U))) 
                              << 2U));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_rresp 
                        = ((0x3fffffffcULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_rresp) 
                           | (IData)((IData)((((0x21U 
                                                >= 
                                                (0x3fU 
                                                 & ((IData)(0x22U) 
                                                    * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_sel_idx)))) 
                                               && (1U 
                                                   & (IData)(
                                                             ((0x200000000ULL 
                                                               | ((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__uart_prdata)) 
                                                                  << 1U)) 
                                                              >> 
                                                              (0x3fU 
                                                               & ((IData)(0x22U) 
                                                                  * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_sel_idx)))))))
                                               ? 2U
                                               : 0U))));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_rresp_valid = 1U;
                }
            }
        }
    } else {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_state_d = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_req_ready = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_wresp = 2U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_rresp = 0x37a844322ULL;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_wresp_valid = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_rresp_valid = 0U;
        if ((((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__fifo_empty)) 
              & (1U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT__i_fifo__DOT__status_cnt_q))) 
             & (1U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT__i_fifo__DOT__status_cnt_q)))) {
            if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_dec_valid) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_update = 1U;
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_state_d = 1U;
            }
            if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_dec_valid)))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_req_ready = 1U;
                if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_req[0U])) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_wresp = 3U;
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_wresp_valid = 1U;
                }
                if ((1U & (~ vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_req[0U]))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_rresp 
                        = (3ULL | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_rresp);
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_rresp_valid = 1U;
                }
            }
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT____Vcellinp__i_fifo__pop_i 
        = ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__fifo_empty)) 
           & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_req_ready));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT____Vcellinp__i_fifo__push_i 
        = ((1U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT__i_fifo__DOT__status_cnt_q)) 
           & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_wresp_valid));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT____Vcellinp__i_fifo__push_i 
        = ((1U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT__i_fifo__DOT__status_cnt_q)) 
           & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_rresp_valid));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__write_pointer_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__write_pointer_q;
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT____Vcellinp__i_fifo__push_i) 
         & (1U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__gate_clock = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT____Vlvbound_hf804d0bc__0[0U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_req_arb__DOT__gen_arbiter__DOT__data_nodes[0U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT____Vlvbound_hf804d0bc__0[1U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_req_arb__DOT__gen_arbiter__DOT__data_nodes[1U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT____Vlvbound_hf804d0bc__0[2U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_req_arb__DOT__gen_arbiter__DOT__data_nodes[2U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT____Vlvbound_hf804d0bc__0[3U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__i_req_arb__DOT__gen_arbiter__DOT__data_nodes[3U];
        if ((0x67U >= (0x7fU & ((IData)(0x68U) * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WW(104,104,(0x7fU & ((IData)(0x68U) 
                                              * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__write_pointer_q))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT____Vlvbound_hf804d0bc__0);
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__write_pointer_n 
            = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__write_pointer_q) 
               & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__write_pointer_q)));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__status_cnt_n 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__status_cnt_q;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__status_cnt_q)));
    } else {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__status_cnt_n 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__status_cnt_q;
    }
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT____Vcellinp__i_fifo__pop_i) 
         & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__fifo_empty)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT____Vcellinp__i_fifo__push_i) 
           & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT____Vcellinp__i_fifo__pop_i)) 
          & (1U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__status_cnt_q))) 
         & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__fifo_empty)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__status_cnt_n 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__status_cnt_q;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__read_pointer_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__read_pointer_q;
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT____Vcellinp__i_fifo__pop_i) 
         & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__fifo_empty)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__read_pointer_n 
            = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__read_pointer_n) 
               & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__read_pointer_q)));
    }
    if (((0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__status_cnt_q)) 
         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT____Vcellinp__i_fifo__push_i))) {
        if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT____Vcellinp__i_fifo__pop_i) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__write_pointer_n 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__write_pointer_q;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__status_cnt_n 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__status_cnt_q;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__read_pointer_n 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_req_ft_reg__DOT__i_req_ft_reg__DOT__i_fifo__DOT__read_pointer_q;
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT__i_fifo__DOT__gate_clock = 1U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT__i_fifo__DOT__mem_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT__i_fifo__DOT__mem_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__axi_bresp 
        = (3U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT__i_fifo__DOT__mem_q) 
                 >> (1U & VL_SHIFTL_III(1,32,32, (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT__i_fifo__DOT__read_pointer_q), 1U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT__fifo_empty 
        = ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT____Vcellinp__i_fifo__push_i)) 
           & (0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT__i_fifo__DOT__status_cnt_q)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT__i_fifo__DOT__gate_clock = 1U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT__i_fifo__DOT__mem_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT__i_fifo__DOT__mem_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__axi_rresp 
        = ((0x21U >= (0x3fU & ((IData)(0x22U) * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT__i_fifo__DOT__read_pointer_q))))
            ? (0x3ffffffffULL & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT__i_fifo__DOT__mem_q 
                                 >> (0x3fU & ((IData)(0x22U) 
                                              * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT__i_fifo__DOT__read_pointer_q)))))
            : 0ULL);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT__fifo_empty 
        = ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT____Vcellinp__i_fifo__push_i)) 
           & (0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT__i_fifo__DOT__status_cnt_q)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT____Vcellinp__i_fifo__pop_i 
        = (1U & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT__fifo_empty)) 
                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__uart_lite_req[2U] 
                    >> 5U)));
    if (((0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT__i_fifo__DOT__status_cnt_q)) 
         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT____Vcellinp__i_fifo__push_i))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__axi_bresp 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_wresp;
    }
    if (((0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT__i_fifo__DOT__status_cnt_q)) 
         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT____Vcellinp__i_fifo__push_i))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__axi_rresp 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_rresp;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__uart_lite_resp 
        = (((QData)((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT____VdfgTmp_h1bc011d8__0)) 
            << 0x28U) | (((QData)((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT____VdfgTmp_h1bc011d8__0)) 
                          << 0x27U) | (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__axi_bresp)) 
                                        << 0x25U) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT__fifo_empty))))) 
                                         << 0x24U) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__uart_lite_req[0U] 
                                                                 >> 1U) 
                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__axi_req_ready))))) 
                                            << 0x23U) 
                                           | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__axi_rresp 
                                               << 1U) 
                                              | (QData)((IData)(
                                                                (1U 
                                                                 & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT__fifo_empty)))))))))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT____Vcellinp__i_fifo__pop_i 
        = (1U & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT__fifo_empty)) 
                 & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__uart_lite_req[0U]));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT__i_fifo__DOT__write_pointer_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT__i_fifo__DOT__write_pointer_q;
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT____Vcellinp__i_fifo__push_i) 
         & (1U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT__i_fifo__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT__i_fifo__DOT__gate_clock = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT__i_fifo__DOT__mem_n 
            = (((~ ((IData)(3U) << (1U & VL_SHIFTL_III(1,32,32, (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT__i_fifo__DOT__write_pointer_q), 1U)))) 
                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT__i_fifo__DOT__mem_n)) 
               | (3U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_wresp) 
                        << (1U & VL_SHIFTL_III(1,32,32, (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT__i_fifo__DOT__write_pointer_q), 1U)))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT__i_fifo__DOT__write_pointer_n 
            = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT__i_fifo__DOT__write_pointer_q) 
               & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT__i_fifo__DOT__write_pointer_q)));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT__i_fifo__DOT__status_cnt_n 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT__i_fifo__DOT__status_cnt_q;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT__i_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT__i_fifo__DOT__status_cnt_q)));
    } else {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT__i_fifo__DOT__status_cnt_n 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT__i_fifo__DOT__status_cnt_q;
    }
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT____Vcellinp__i_fifo__pop_i) 
         & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT__fifo_empty)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT__i_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT__i_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT____Vcellinp__i_fifo__push_i) 
           & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT____Vcellinp__i_fifo__pop_i)) 
          & (1U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT__i_fifo__DOT__status_cnt_q))) 
         & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT__fifo_empty)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT__i_fifo__DOT__status_cnt_n 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT__i_fifo__DOT__status_cnt_q;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT__i_fifo__DOT__read_pointer_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT__i_fifo__DOT__read_pointer_q;
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT____Vcellinp__i_fifo__pop_i) 
         & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT__fifo_empty)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT__i_fifo__DOT__read_pointer_n 
            = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT__i_fifo__DOT__read_pointer_n) 
               & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT__i_fifo__DOT__read_pointer_q)));
    }
    if (((0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT__i_fifo__DOT__status_cnt_q)) 
         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT____Vcellinp__i_fifo__push_i))) {
        if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT____Vcellinp__i_fifo__pop_i) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT__i_fifo__DOT__write_pointer_n 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT__i_fifo__DOT__write_pointer_q;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT__i_fifo__DOT__status_cnt_n 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT__i_fifo__DOT__status_cnt_q;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT__i_fifo__DOT__read_pointer_n 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_write_resp_ft_reg__DOT__i_fifo__DOT__read_pointer_q;
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__i_axi_burst_splitter_counters__DOT__err_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__i_axi_burst_splitter_counters__DOT__err_q;
    if ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__w_cnt_req) 
          & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__w_cnt_gnt)) 
         & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__uart_lite_resp 
                    >> 0x26U)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__i_axi_burst_splitter_counters__DOT____Vlvbound_heaf74687__0 = 1U;
        if ((0U >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__i_axi_burst_splitter_counters__DOT__cnt_r_idx))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__i_axi_burst_splitter_counters__DOT__err_d 
                = (((~ ((IData)(1U) << (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__i_axi_burst_splitter_counters__DOT__cnt_r_idx))) 
                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__i_axi_burst_splitter_counters__DOT__err_d)) 
                   | (1U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__i_axi_burst_splitter_counters__DOT____Vlvbound_heaf74687__0) 
                            << (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__i_axi_burst_splitter_counters__DOT__cnt_r_idx))));
        }
    }
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__cnt_alloc_req) 
         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__cnt_alloc_gnt))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__i_axi_burst_splitter_counters__DOT____Vlvbound_hec73eb69__0 = 0U;
        if ((0U >= (0U != (0x1ffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__i_axi_burst_splitter_counters__DOT__gen_cnt__BRA__0__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__i_axi_burst_splitter_counters__DOT__err_d 
                = (((~ ((IData)(1U) << (0U != (0x1ffU 
                                               & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__i_axi_burst_splitter_counters__DOT__gen_cnt__BRA__0__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q))))) 
                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__i_axi_burst_splitter_counters__DOT__err_d)) 
                   | (1U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__i_axi_burst_splitter_counters__DOT____Vlvbound_hec73eb69__0) 
                            << (0U != (0x1ffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite_uart__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_aw_chan__DOT__i_axi_burst_splitter_counters__DOT__gen_cnt__BRA__0__KET____DOT__i_cnt__DOT__i_counter__DOT__counter_q))))));
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT__i_fifo__DOT__write_pointer_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT__i_fifo__DOT__write_pointer_q;
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT____Vcellinp__i_fifo__push_i) 
         & (1U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT__i_fifo__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT__i_fifo__DOT__gate_clock = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT__i_fifo__DOT____Vlvbound_he6cfac22__0 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__apb_rresp;
        if ((0x21U >= (0x3fU & ((IData)(0x22U) * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT__i_fifo__DOT__write_pointer_q))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT__i_fifo__DOT__mem_n 
                = (((~ (0x3ffffffffULL << (0x3fU & 
                                           ((IData)(0x22U) 
                                            * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT__i_fifo__DOT__write_pointer_q))))) 
                    & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT__i_fifo__DOT__mem_n) 
                   | (0x3ffffffffULL & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT__i_fifo__DOT____Vlvbound_he6cfac22__0 
                                        << (0x3fU & 
                                            ((IData)(0x22U) 
                                             * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT__i_fifo__DOT__write_pointer_q))))));
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT__i_fifo__DOT__write_pointer_n 
            = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT__i_fifo__DOT__write_pointer_q) 
               & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT__i_fifo__DOT__write_pointer_q)));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT__i_fifo__DOT__status_cnt_n 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT__i_fifo__DOT__status_cnt_q;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT__i_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT__i_fifo__DOT__status_cnt_q)));
    } else {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT__i_fifo__DOT__status_cnt_n 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT__i_fifo__DOT__status_cnt_q;
    }
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT____Vcellinp__i_fifo__pop_i) 
         & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT__fifo_empty)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT__i_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT__i_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT____Vcellinp__i_fifo__push_i) 
           & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT____Vcellinp__i_fifo__pop_i)) 
          & (1U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT__i_fifo__DOT__status_cnt_q))) 
         & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT__fifo_empty)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT__i_fifo__DOT__status_cnt_n 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT__i_fifo__DOT__status_cnt_q;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT__i_fifo__DOT__read_pointer_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT__i_fifo__DOT__read_pointer_q;
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT____Vcellinp__i_fifo__pop_i) 
         & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT__fifo_empty)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT__i_fifo__DOT__read_pointer_n 
            = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT__i_fifo__DOT__read_pointer_n) 
               & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT__i_fifo__DOT__read_pointer_q)));
    }
    if (((0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT__i_fifo__DOT__status_cnt_q)) 
         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT____Vcellinp__i_fifo__push_i))) {
        if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT____Vcellinp__i_fifo__pop_i) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT__i_fifo__DOT__write_pointer_n 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT__i_fifo__DOT__write_pointer_q;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT__i_fifo__DOT__status_cnt_n 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT__i_fifo__DOT__status_cnt_q;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT__i_fifo__DOT__read_pointer_n 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_lite_to_apb_uart__DOT__gen_resp_ft_reg__DOT__i_read_resp_ft_reg__DOT__i_fifo__DOT__read_pointer_q;
        }
    }
}

VL_INLINE_OPT void Vara_tb_verilator___024root___act_comb__TOP__2189(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___act_comb__TOP__2189\n"); );
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
                                goto __Vlabel1470;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__49__Vfuncout = 0U;
                                goto __Vlabel1470;
                            }
                            __Vlabel1470: ;
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
                                goto __Vlabel1471;
                            } else {
                                vlSelf->__Vfunc_is_imm_fpr__50__Vfuncout = 0U;
                                goto __Vlabel1471;
                            }
                            __Vlabel1471: ;
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
                                goto __Vlabel1472;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__55__Vfuncout = 0U;
                                goto __Vlabel1472;
                            }
                            __Vlabel1472: ;
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
                                goto __Vlabel1473;
                            } else {
                                vlSelf->__Vfunc_is_imm_fpr__56__Vfuncout = 0U;
                                goto __Vlabel1473;
                            }
                            __Vlabel1473: ;
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
                                goto __Vlabel1474;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__61__Vfuncout = 0U;
                                goto __Vlabel1474;
                            }
                            __Vlabel1474: ;
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
                                goto __Vlabel1475;
                            } else {
                                vlSelf->__Vfunc_is_imm_fpr__62__Vfuncout = 0U;
                                goto __Vlabel1475;
                            }
                            __Vlabel1475: ;
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
                                goto __Vlabel1476;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__67__Vfuncout = 0U;
                                goto __Vlabel1476;
                            }
                            __Vlabel1476: ;
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
                                goto __Vlabel1477;
                            } else {
                                vlSelf->__Vfunc_is_imm_fpr__68__Vfuncout = 0U;
                                goto __Vlabel1477;
                            }
                            __Vlabel1477: ;
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
                                goto __Vlabel1478;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__73__Vfuncout = 0U;
                                goto __Vlabel1478;
                            }
                            __Vlabel1478: ;
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
                                goto __Vlabel1479;
                            } else {
                                vlSelf->__Vfunc_is_imm_fpr__74__Vfuncout = 0U;
                                goto __Vlabel1479;
                            }
                            __Vlabel1479: ;
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
                                goto __Vlabel1480;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__79__Vfuncout = 0U;
                                goto __Vlabel1480;
                            }
                            __Vlabel1480: ;
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
                                goto __Vlabel1481;
                            } else {
                                vlSelf->__Vfunc_is_imm_fpr__80__Vfuncout = 0U;
                                goto __Vlabel1481;
                            }
                            __Vlabel1481: ;
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
                                goto __Vlabel1482;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__85__Vfuncout = 0U;
                                goto __Vlabel1482;
                            }
                            __Vlabel1482: ;
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
                                goto __Vlabel1483;
                            } else {
                                vlSelf->__Vfunc_is_imm_fpr__86__Vfuncout = 0U;
                                goto __Vlabel1483;
                            }
                            __Vlabel1483: ;
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
                                goto __Vlabel1484;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__91__Vfuncout = 0U;
                                goto __Vlabel1484;
                            }
                            __Vlabel1484: ;
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
                                goto __Vlabel1485;
                            } else {
                                vlSelf->__Vfunc_is_imm_fpr__92__Vfuncout = 0U;
                                goto __Vlabel1485;
                            }
                            __Vlabel1485: ;
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
                                goto __Vlabel1486;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__97__Vfuncout = 0U;
                                goto __Vlabel1486;
                            }
                            __Vlabel1486: ;
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
                                goto __Vlabel1487;
                            } else {
                                vlSelf->__Vfunc_is_imm_fpr__98__Vfuncout = 0U;
                                goto __Vlabel1487;
                            }
                            __Vlabel1487: ;
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
                                goto __Vlabel1488;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__103__Vfuncout = 0U;
                                goto __Vlabel1488;
                            }
                            __Vlabel1488: ;
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
                                goto __Vlabel1489;
                            } else {
                                vlSelf->__Vfunc_is_imm_fpr__104__Vfuncout = 0U;
                                goto __Vlabel1489;
                            }
                            __Vlabel1489: ;
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
                                goto __Vlabel1490;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__109__Vfuncout = 0U;
                                goto __Vlabel1490;
                            }
                            __Vlabel1490: ;
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
                                goto __Vlabel1491;
                            } else {
                                vlSelf->__Vfunc_is_imm_fpr__110__Vfuncout = 0U;
                                goto __Vlabel1491;
                            }
                            __Vlabel1491: ;
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
                                goto __Vlabel1492;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__115__Vfuncout = 0U;
                                goto __Vlabel1492;
                            }
                            __Vlabel1492: ;
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
                                goto __Vlabel1493;
                            } else {
                                vlSelf->__Vfunc_is_imm_fpr__116__Vfuncout = 0U;
                                goto __Vlabel1493;
                            }
                            __Vlabel1493: ;
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
                                goto __Vlabel1494;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__121__Vfuncout = 0U;
                                goto __Vlabel1494;
                            }
                            __Vlabel1494: ;
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
                                goto __Vlabel1495;
                            } else {
                                vlSelf->__Vfunc_is_imm_fpr__122__Vfuncout = 0U;
                                goto __Vlabel1495;
                            }
                            __Vlabel1495: ;
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
                                goto __Vlabel1496;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__45__Vfuncout = 0U;
                                goto __Vlabel1496;
                            }
                            __Vlabel1496: ;
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
                                goto __Vlabel1497;
                            } else {
                                vlSelf->__Vfunc_is_rs1_fpr__46__Vfuncout = 0U;
                                goto __Vlabel1497;
                            }
                            __Vlabel1497: ;
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
                                goto __Vlabel1498;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__47__Vfuncout = 0U;
                                goto __Vlabel1498;
                            }
                            __Vlabel1498: ;
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
                                goto __Vlabel1499;
                            } else {
                                vlSelf->__Vfunc_is_rs2_fpr__48__Vfuncout = 0U;
                                goto __Vlabel1499;
                            }
                            __Vlabel1499: ;
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
                                goto __Vlabel1500;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__51__Vfuncout = 0U;
                                goto __Vlabel1500;
                            }
                            __Vlabel1500: ;
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
                                goto __Vlabel1501;
                            } else {
                                vlSelf->__Vfunc_is_rs1_fpr__52__Vfuncout = 0U;
                                goto __Vlabel1501;
                            }
                            __Vlabel1501: ;
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
                                goto __Vlabel1502;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__53__Vfuncout = 0U;
                                goto __Vlabel1502;
                            }
                            __Vlabel1502: ;
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
                                goto __Vlabel1503;
                            } else {
                                vlSelf->__Vfunc_is_rs2_fpr__54__Vfuncout = 0U;
                                goto __Vlabel1503;
                            }
                            __Vlabel1503: ;
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
                                goto __Vlabel1504;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__57__Vfuncout = 0U;
                                goto __Vlabel1504;
                            }
                            __Vlabel1504: ;
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
                                goto __Vlabel1505;
                            } else {
                                vlSelf->__Vfunc_is_rs1_fpr__58__Vfuncout = 0U;
                                goto __Vlabel1505;
                            }
                            __Vlabel1505: ;
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
                                goto __Vlabel1506;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__59__Vfuncout = 0U;
                                goto __Vlabel1506;
                            }
                            __Vlabel1506: ;
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
                                goto __Vlabel1507;
                            } else {
                                vlSelf->__Vfunc_is_rs2_fpr__60__Vfuncout = 0U;
                                goto __Vlabel1507;
                            }
                            __Vlabel1507: ;
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
                                goto __Vlabel1508;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__63__Vfuncout = 0U;
                                goto __Vlabel1508;
                            }
                            __Vlabel1508: ;
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
                                goto __Vlabel1509;
                            } else {
                                vlSelf->__Vfunc_is_rs1_fpr__64__Vfuncout = 0U;
                                goto __Vlabel1509;
                            }
                            __Vlabel1509: ;
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
                                goto __Vlabel1510;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__65__Vfuncout = 0U;
                                goto __Vlabel1510;
                            }
                            __Vlabel1510: ;
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
                                goto __Vlabel1511;
                            } else {
                                vlSelf->__Vfunc_is_rs2_fpr__66__Vfuncout = 0U;
                                goto __Vlabel1511;
                            }
                            __Vlabel1511: ;
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
                                goto __Vlabel1512;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__69__Vfuncout = 0U;
                                goto __Vlabel1512;
                            }
                            __Vlabel1512: ;
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
                                goto __Vlabel1513;
                            } else {
                                vlSelf->__Vfunc_is_rs1_fpr__70__Vfuncout = 0U;
                                goto __Vlabel1513;
                            }
                            __Vlabel1513: ;
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
                                goto __Vlabel1514;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__71__Vfuncout = 0U;
                                goto __Vlabel1514;
                            }
                            __Vlabel1514: ;
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
                                goto __Vlabel1515;
                            } else {
                                vlSelf->__Vfunc_is_rs2_fpr__72__Vfuncout = 0U;
                                goto __Vlabel1515;
                            }
                            __Vlabel1515: ;
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
                                goto __Vlabel1516;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__75__Vfuncout = 0U;
                                goto __Vlabel1516;
                            }
                            __Vlabel1516: ;
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
                                goto __Vlabel1517;
                            } else {
                                vlSelf->__Vfunc_is_rs1_fpr__76__Vfuncout = 0U;
                                goto __Vlabel1517;
                            }
                            __Vlabel1517: ;
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
                                goto __Vlabel1518;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__77__Vfuncout = 0U;
                                goto __Vlabel1518;
                            }
                            __Vlabel1518: ;
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
                                goto __Vlabel1519;
                            } else {
                                vlSelf->__Vfunc_is_rs2_fpr__78__Vfuncout = 0U;
                                goto __Vlabel1519;
                            }
                            __Vlabel1519: ;
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
                                goto __Vlabel1520;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__81__Vfuncout = 0U;
                                goto __Vlabel1520;
                            }
                            __Vlabel1520: ;
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
                                goto __Vlabel1521;
                            } else {
                                vlSelf->__Vfunc_is_rs1_fpr__82__Vfuncout = 0U;
                                goto __Vlabel1521;
                            }
                            __Vlabel1521: ;
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
                                goto __Vlabel1522;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__83__Vfuncout = 0U;
                                goto __Vlabel1522;
                            }
                            __Vlabel1522: ;
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
                                goto __Vlabel1523;
                            } else {
                                vlSelf->__Vfunc_is_rs2_fpr__84__Vfuncout = 0U;
                                goto __Vlabel1523;
                            }
                            __Vlabel1523: ;
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
                                goto __Vlabel1524;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__87__Vfuncout = 0U;
                                goto __Vlabel1524;
                            }
                            __Vlabel1524: ;
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
                                goto __Vlabel1525;
                            } else {
                                vlSelf->__Vfunc_is_rs1_fpr__88__Vfuncout = 0U;
                                goto __Vlabel1525;
                            }
                            __Vlabel1525: ;
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
                                goto __Vlabel1526;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__89__Vfuncout = 0U;
                                goto __Vlabel1526;
                            }
                            __Vlabel1526: ;
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
                                goto __Vlabel1527;
                            } else {
                                vlSelf->__Vfunc_is_rs2_fpr__90__Vfuncout = 0U;
                                goto __Vlabel1527;
                            }
                            __Vlabel1527: ;
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
                                goto __Vlabel1528;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__93__Vfuncout = 0U;
                                goto __Vlabel1528;
                            }
                            __Vlabel1528: ;
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
                                goto __Vlabel1529;
                            } else {
                                vlSelf->__Vfunc_is_rs1_fpr__94__Vfuncout = 0U;
                                goto __Vlabel1529;
                            }
                            __Vlabel1529: ;
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
                                goto __Vlabel1530;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__95__Vfuncout = 0U;
                                goto __Vlabel1530;
                            }
                            __Vlabel1530: ;
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
                                goto __Vlabel1531;
                            } else {
                                vlSelf->__Vfunc_is_rs2_fpr__96__Vfuncout = 0U;
                                goto __Vlabel1531;
                            }
                            __Vlabel1531: ;
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
                                goto __Vlabel1532;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__99__Vfuncout = 0U;
                                goto __Vlabel1532;
                            }
                            __Vlabel1532: ;
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
                                goto __Vlabel1533;
                            } else {
                                vlSelf->__Vfunc_is_rs1_fpr__100__Vfuncout = 0U;
                                goto __Vlabel1533;
                            }
                            __Vlabel1533: ;
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
                                goto __Vlabel1534;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__101__Vfuncout = 0U;
                                goto __Vlabel1534;
                            }
                            __Vlabel1534: ;
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
                                goto __Vlabel1535;
                            } else {
                                vlSelf->__Vfunc_is_rs2_fpr__102__Vfuncout = 0U;
                                goto __Vlabel1535;
                            }
                            __Vlabel1535: ;
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
                                goto __Vlabel1536;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__105__Vfuncout = 0U;
                                goto __Vlabel1536;
                            }
                            __Vlabel1536: ;
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
                                goto __Vlabel1537;
                            } else {
                                vlSelf->__Vfunc_is_rs1_fpr__106__Vfuncout = 0U;
                                goto __Vlabel1537;
                            }
                            __Vlabel1537: ;
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
                                goto __Vlabel1538;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__107__Vfuncout = 0U;
                                goto __Vlabel1538;
                            }
                            __Vlabel1538: ;
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
                                goto __Vlabel1539;
                            } else {
                                vlSelf->__Vfunc_is_rs2_fpr__108__Vfuncout = 0U;
                                goto __Vlabel1539;
                            }
                            __Vlabel1539: ;
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
                                goto __Vlabel1540;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__111__Vfuncout = 0U;
                                goto __Vlabel1540;
                            }
                            __Vlabel1540: ;
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
                                goto __Vlabel1541;
                            } else {
                                vlSelf->__Vfunc_is_rs1_fpr__112__Vfuncout = 0U;
                                goto __Vlabel1541;
                            }
                            __Vlabel1541: ;
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
                                goto __Vlabel1542;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__113__Vfuncout = 0U;
                                goto __Vlabel1542;
                            }
                            __Vlabel1542: ;
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
                                goto __Vlabel1543;
                            } else {
                                vlSelf->__Vfunc_is_rs2_fpr__114__Vfuncout = 0U;
                                goto __Vlabel1543;
                            }
                            __Vlabel1543: ;
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
                                goto __Vlabel1544;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__117__Vfuncout = 0U;
                                goto __Vlabel1544;
                            }
                            __Vlabel1544: ;
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
                                goto __Vlabel1545;
                            } else {
                                vlSelf->__Vfunc_is_rs1_fpr__118__Vfuncout = 0U;
                                goto __Vlabel1545;
                            }
                            __Vlabel1545: ;
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
                                goto __Vlabel1546;
                            } else {
                                vlSelf->__Vfunc_is_rd_fpr__119__Vfuncout = 0U;
                                goto __Vlabel1546;
                            }
                            __Vlabel1546: ;
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
                                goto __Vlabel1547;
                            } else {
                                vlSelf->__Vfunc_is_rs2_fpr__120__Vfuncout = 0U;
                                goto __Vlabel1547;
                            }
                            __Vlabel1547: ;
                        }
                    }(), (IData)(vlSelf->__Vfunc_is_rs2_fpr__120__Vfuncout)))));
}
