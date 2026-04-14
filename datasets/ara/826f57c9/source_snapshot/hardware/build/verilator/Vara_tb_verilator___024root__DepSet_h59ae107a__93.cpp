// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vara_tb_verilator.h for the primary calling header

#include "Vara_tb_verilator__pch.h"
#include "Vara_tb_verilator___024root.h"

VL_INLINE_OPT void Vara_tb_verilator___024root___nba_comb__TOP__518(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___nba_comb__TOP__518\n"); );
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT____VdfgTmp_hd0266f11__0 
        = (0xfU & ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__2__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__vld_data_q) 
                     << 8U) | (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__1__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__vld_data_q) 
                                << 4U) | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__0__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__vld_data_q))) 
                   >> (0xfU & VL_SHIFTL_III(4,4,32, 
                                            (3U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__i_lzc_reqs__DOT__gen_lzc__DOT__index_nodes)), 2U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT____VdfgTmp_h239cea81__0 
        = (1U & (((8U & (((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__enable_q)) 
                          | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__is_nc_miss)) 
                         << 3U)) | (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT____Vcellout__gen_rd_ports__BRA__2__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__miss_nc_o) 
                                     << 2U) | (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT____Vcellout__gen_rd_ports__BRA__1__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__miss_nc_o) 
                                                << 1U) 
                                               | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT____Vcellout__gen_rd_ports__BRA__0__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__miss_nc_o)))) 
                 >> (3U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__i_lzc_reqs__DOT__gen_lzc__DOT__index_nodes))));
}

extern const VlWide<14>/*447:0*/ Vara_tb_verilator__ConstPool__CONST_h86ef0a92_0;

VL_INLINE_OPT void Vara_tb_verilator___024root___nba_comb__TOP__520(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___nba_comb__TOP__520\n"); );
    // Init
    CData/*2:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h61e28f9a__0;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h61e28f9a__0 = 0;
    CData/*7:0*/ __Vfunc_is_imm_fpr__128__op;
    __Vfunc_is_imm_fpr__128__op = 0;
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__issue_pointer 
        = ((0x38U & (((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__issue_pointer)) 
                     << 3U)) | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__issue_pointer_q));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0U] 
        = (Vara_tb_verilator__ConstPool__CONST_h86ef0a92_0[0U] 
           & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[2U] 
               << 0x1fU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[1U] 
                            >> 1U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[1U] 
        = (Vara_tb_verilator__ConstPool__CONST_h86ef0a92_0[1U] 
           & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[3U] 
               << 0x1fU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[2U] 
                            >> 1U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[2U] 
        = (Vara_tb_verilator__ConstPool__CONST_h86ef0a92_0[2U] 
           & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[4U] 
               << 0x1fU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[3U] 
                            >> 1U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[3U] 
        = (Vara_tb_verilator__ConstPool__CONST_h86ef0a92_0[3U] 
           & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[5U] 
               << 0x1fU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[4U] 
                            >> 1U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[4U] 
        = (Vara_tb_verilator__ConstPool__CONST_h86ef0a92_0[4U] 
           & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[6U] 
               << 0x1fU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[5U] 
                            >> 1U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[5U] 
        = (Vara_tb_verilator__ConstPool__CONST_h86ef0a92_0[5U] 
           & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[7U] 
               << 0x1fU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[6U] 
                            >> 1U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[6U] 
        = (Vara_tb_verilator__ConstPool__CONST_h86ef0a92_0[6U] 
           & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[8U] 
               << 0x1fU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[7U] 
                            >> 1U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[7U] 
        = (Vara_tb_verilator__ConstPool__CONST_h86ef0a92_0[7U] 
           & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[9U] 
               << 0x1fU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[8U] 
                            >> 1U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[8U] 
        = (Vara_tb_verilator__ConstPool__CONST_h86ef0a92_0[8U] 
           & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[0xaU] 
               << 0x1fU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[9U] 
                            >> 1U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[9U] 
        = (Vara_tb_verilator__ConstPool__CONST_h86ef0a92_0[9U] 
           & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[0xbU] 
               << 0x1fU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[0xaU] 
                            >> 1U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xaU] 
        = (Vara_tb_verilator__ConstPool__CONST_h86ef0a92_0[0xaU] 
           & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[0xcU] 
               << 0x1fU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[0xbU] 
                            >> 1U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
        = (Vara_tb_verilator__ConstPool__CONST_h86ef0a92_0[0xbU] 
           & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[0xdU] 
               << 0x1fU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[0xcU] 
                            >> 1U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xcU] 
        = (Vara_tb_verilator__ConstPool__CONST_h86ef0a92_0[0xcU] 
           & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[0xeU] 
               << 0x1fU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[0xdU] 
                            >> 1U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xdU] 
        = (Vara_tb_verilator__ConstPool__CONST_h86ef0a92_0[0xdU] 
           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[0xeU] 
              >> 1U));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h61e28f9a__0 
        = (7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__issue_pointer));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
        = ((0xffc7ffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU]) 
           | ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h61e28f9a__0) 
              << 0x13U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__pc_n = 0ULL;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__is_compressed_instr_n = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__branch_predict_n[0U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__branch_predict_n[1U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__branch_predict_n[2U] = 0U;
    if ((4U == (0xfU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                        >> 0xfU)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__pc_n 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xdU])) 
                << 0x2aU) | (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xcU])) 
                              << 0xaU) | ((QData)((IData)(
                                                          vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU])) 
                                          >> 0x16U)));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__is_compressed_instr_n 
            = (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0U] 
                     >> 5U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__branch_predict_n[0U] 
            = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[1U] 
                << 0x1aU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0U] 
                             >> 6U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__branch_predict_n[1U] 
            = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[2U] 
                << 0x1aU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[1U] 
                             >> 6U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__branch_predict_n[2U] 
            = (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[2U] 
                     >> 6U));
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__x_issue_req[0U] 
        = (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                 >> 0x13U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__x_issue_req[1U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__x_issue_req[2U] 
        = (0xfffffff8U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[0U] 
                          << 2U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__x_issue_req[3U] 
        = ((4U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[1U] 
                  << 2U)) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[0U] 
                             >> 0x1eU));
    __Vfunc_is_imm_fpr__128__op = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellout__i_scoreboard__issue_instr_o[0xbU] 
                                            >> 7U));
    {
        if (((((0x69U <= (IData)(__Vfunc_is_imm_fpr__128__op)) 
               & (0x6aU >= (IData)(__Vfunc_is_imm_fpr__128__op))) 
              || ((0x6fU <= (IData)(__Vfunc_is_imm_fpr__128__op)) 
                  & (0x72U >= (IData)(__Vfunc_is_imm_fpr__128__op)))) 
             || ((0x86U <= (IData)(__Vfunc_is_imm_fpr__128__op)) 
                 & (0x89U >= (IData)(__Vfunc_is_imm_fpr__128__op))))) {
            vlSelf->__Vfunc_is_imm_fpr__128__Vfuncout = 1U;
            goto __Vlabel1567;
        } else {
            vlSelf->__Vfunc_is_imm_fpr__128__Vfuncout = 0U;
            goto __Vlabel1567;
        }
        __Vlabel1567: ;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__rs3_fpr 
        = vlSelf->__Vfunc_is_imm_fpr__128__Vfuncout;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__x_register[4U] 
        = ((3U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__x_register[4U]) 
           | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__x_issue_req[0U] 
              << 2U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__x_register[5U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__x_issue_req[0U] 
            >> 0x1eU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__x_issue_req[1U] 
                         << 2U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__x_register[6U] 
        = (0x1fU & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__x_issue_req[1U] 
                     >> 0x1eU) | (0x1cU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__x_issue_req[2U] 
                                           << 2U))));
}

VL_INLINE_OPT void Vara_tb_verilator___024root___nba_comb__TOP__527(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___nba_comb__TOP__527\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_4;
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__1__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__save_tag = 0U;
    if ((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__1__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_q))) {
        if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__1__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_q))) {
            if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__1__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_q))) {
                if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[0U] 
                              >> 1U)))) {
                    if ((1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[0U] 
                               | (7U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__1__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_q))))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__1__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__save_tag 
                            = (7U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__1__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_q));
                    }
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__1__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_q) 
                         >> 1U)))) {
        if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__1__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_q))) {
            if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[0U] 
                          >> 1U)))) {
                if ((1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[0U] 
                           | (7U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__1__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_q))))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__1__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__save_tag 
                        = (7U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__1__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_q));
                }
            }
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_ex_cache[0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__gen_mmu__DOT__i_cva6_mmu__req_port_o[0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_ex_cache[1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__gen_mmu__DOT__i_cva6_mmu__req_port_o[1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_ex_cache[2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__gen_mmu__DOT__i_cva6_mmu__req_port_o[2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_ex_cache[3U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__gen_mmu__DOT__i_cva6_mmu__req_port_o[3U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_ex_cache[4U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[0U] 
            << 8U) | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__gen_mmu__DOT__i_cva6_mmu__req_port_o[4U]);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_ex_cache[5U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[0U] 
            >> 0x18U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[1U] 
                         << 8U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_ex_cache[6U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[1U] 
            >> 0x18U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[2U] 
                         << 8U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_ex_cache[7U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[2U] 
            >> 0x18U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[3U] 
                         << 8U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_ex_cache[8U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_store_unit__req_port_o[0U] 
            << 0x10U) | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[3U] 
                          >> 0x18U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[4U] 
                                       << 8U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_ex_cache[9U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_store_unit__req_port_o[0U] 
            >> 0x10U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_store_unit__req_port_o[1U] 
                         << 0x10U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_ex_cache[0xaU] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_store_unit__req_port_o[1U] 
            >> 0x10U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_store_unit__req_port_o[2U] 
                         << 0x10U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_ex_cache[0xbU] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_store_unit__req_port_o[2U] 
            >> 0x10U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_store_unit__req_port_o[3U] 
                         << 0x10U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_req_ports_ex_cache[0xcU] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_store_unit__req_port_o[3U] 
            >> 0x10U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_store_unit__req_port_o[4U] 
                         << 0x10U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT____Vcellout__gen_rd_ports__BRA__1__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__rd_tag_o 
        = (0x1fffffffffffULL & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__1__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__save_tag)
                                 ? (((QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[3U])) 
                                     << 0x30U) | (((QData)((IData)(
                                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[3U])) 
                                                   << 0x10U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[2U])) 
                                                     >> 0x10U)))
                                 : vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__1__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__address_tag_q));
    __Vtemp_4[0U] = (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT____Vcellout__gen_rd_ports__BRA__0__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__rd_tag_o);
    __Vtemp_4[1U] = (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT____Vcellout__gen_rd_ports__BRA__1__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__rd_tag_o) 
                      << 0xdU) | (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT____Vcellout__gen_rd_ports__BRA__0__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__rd_tag_o 
                                          >> 0x20U)));
    __Vtemp_4[2U] = (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT____Vcellout__gen_rd_ports__BRA__2__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__rd_tag_o) 
                      << 0x1aU) | (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT____Vcellout__gen_rd_ports__BRA__1__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__rd_tag_o) 
                                    >> 0x13U) | ((IData)(
                                                         (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT____Vcellout__gen_rd_ports__BRA__1__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__rd_tag_o 
                                                          >> 0x20U)) 
                                                 << 0xdU)));
    __Vtemp_4[3U] = (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT____Vcellout__gen_rd_ports__BRA__2__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__rd_tag_o) 
                      >> 6U) | ((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT____Vcellout__gen_rd_ports__BRA__2__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__rd_tag_o 
                                         >> 0x20U)) 
                                << 0x1aU));
    __Vtemp_4[4U] = (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__rd_tag_q) 
                      << 7U) | ((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT____Vcellout__gen_rd_ports__BRA__2__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__rd_tag_o 
                                         >> 0x20U)) 
                                >> 6U));
    __Vtemp_4[5U] = (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__rd_tag_q) 
                      >> 0x19U) | ((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__rd_tag_q 
                                            >> 0x20U)) 
                                   << 7U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__rd_tag 
        = ((0xb3U >= (0xffU & ((IData)(0x2dU) * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__vld_sel_q))))
            ? (0x1fffffffffffULL & (((QData)((IData)(
                                                     __Vtemp_4[
                                                     (((IData)(0x2cU) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(0x2dU) 
                                                           * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__vld_sel_q)))) 
                                                      >> 5U)])) 
                                     << ((0U == (0x1fU 
                                                 & ((IData)(0x2dU) 
                                                    * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__vld_sel_q))))
                                          ? 0x20U : 
                                         ((IData)(0x40U) 
                                          - (0x1fU 
                                             & ((IData)(0x2dU) 
                                                * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__vld_sel_q)))))) 
                                    | (((0U == (0x1fU 
                                                & ((IData)(0x2dU) 
                                                   * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__vld_sel_q))))
                                         ? 0ULL : ((QData)((IData)(
                                                                   __Vtemp_4[
                                                                   (((IData)(0x1fU) 
                                                                     + 
                                                                     (0xffU 
                                                                      & ((IData)(0x2dU) 
                                                                         * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__vld_sel_q)))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0x2dU) 
                                                        * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__vld_sel_q)))))) 
                                       | ((QData)((IData)(
                                                          __Vtemp_4[
                                                          (7U 
                                                           & (((IData)(0x2dU) 
                                                               * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__vld_sel_q)) 
                                                              >> 5U))])) 
                                          >> (0x1fU 
                                              & ((IData)(0x2dU) 
                                                 * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__vld_sel_q)))))))
            : 0ULL);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__rd_hit_oh_d 
        = ((((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__rd_tag 
              == (0x1fffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__3__KET____DOT__i_tag_sram__DOT__genblk1__DOT__data_sram__DOT____Vcellout__i_tc_sram__rdata_o)) 
             & ((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__3__KET____DOT__i_tag_sram__DOT__genblk1__DOT__data_sram__DOT____Vcellout__i_tc_sram__rdata_o 
                         >> 0x2dU)) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__cmp_en_q))) 
            << 3U) | ((((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__rd_tag 
                         == (0x1fffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__2__KET____DOT__i_tag_sram__DOT__genblk1__DOT__data_sram__DOT____Vcellout__i_tc_sram__rdata_o)) 
                        & ((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__2__KET____DOT__i_tag_sram__DOT__genblk1__DOT__data_sram__DOT____Vcellout__i_tc_sram__rdata_o 
                                    >> 0x2dU)) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__cmp_en_q))) 
                       << 2U) | ((((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__rd_tag 
                                    == (0x1fffffffffffULL 
                                        & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__1__KET____DOT__i_tag_sram__DOT__genblk1__DOT__data_sram__DOT____Vcellout__i_tc_sram__rdata_o)) 
                                   & ((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__1__KET____DOT__i_tag_sram__DOT__genblk1__DOT__data_sram__DOT____Vcellout__i_tc_sram__rdata_o 
                                               >> 0x2dU)) 
                                      & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__cmp_en_q))) 
                                  << 1U) | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__rd_tag 
                                             == (0x1fffffffffffULL 
                                                 & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__0__KET____DOT__i_tag_sram__DOT__genblk1__DOT__data_sram__DOT____Vcellout__i_tc_sram__rdata_o)) 
                                            & ((IData)(
                                                       (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__gen_tag_srams__BRA__0__KET____DOT__i_tag_sram__DOT__genblk1__DOT__data_sram__DOT____Vcellout__i_tc_sram__rdata_o 
                                                        >> 0x2dU)) 
                                               & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__cmp_en_q))))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__wbuffer_hit_oh 
        = ((((0U != (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__wbuffer_q[0x20U] 
                              >> 0x12U))) & ((0x1fffffffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__wbuffer_q[0x24U])) 
                                                  << 0x1dU) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__wbuffer_q[0x23U])) 
                                                    >> 3U))) 
                                             == (0xffffffffffffffULL 
                                                 & VL_SHIFTR_QQI(56,56,32, 
                                                                 ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__wr_cl_vld_d)
                                                                   ? 
                                                                  ((0xfffffffffff800ULL 
                                                                    & (((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_q[2U])) 
                                                                        << 0x32U) 
                                                                       | (((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_q[1U])) 
                                                                           << 0x12U) 
                                                                          | (0x3fffffffff800ULL 
                                                                             & ((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_q[0U])) 
                                                                                >> 0xeU))))) 
                                                                   | (QData)((IData)(
                                                                                (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__wr_cl_idx_d) 
                                                                                << 5U) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_q[0U] 
                                                                                >> 0xeU))))))
                                                                   : 
                                                                  ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__rd_tag 
                                                                    << 0xbU) 
                                                                   | (QData)((IData)(
                                                                                (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__bank_idx_q) 
                                                                                << 5U) 
                                                                                | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__bank_off_q)))))), 3U)))) 
            << 7U) | ((((0U != (0xffU & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__wbuffer_q[0x1cU] 
                                          << 1U) | 
                                         (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__wbuffer_q[0x1bU] 
                                          >> 0x1fU)))) 
                        & ((0x1fffffffffffffULL & (
                                                   ((QData)((IData)(
                                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__wbuffer_q[0x20U])) 
                                                    << 0x30U) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__wbuffer_q[0x1fU])) 
                                                       << 0x10U) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__wbuffer_q[0x1eU])) 
                                                         >> 0x10U)))) 
                           == (0xffffffffffffffULL 
                               & VL_SHIFTR_QQI(56,56,32, 
                                               ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__wr_cl_vld_d)
                                                 ? 
                                                ((0xfffffffffff800ULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_q[2U])) 
                                                      << 0x32U) 
                                                     | (((QData)((IData)(
                                                                         vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_q[1U])) 
                                                         << 0x12U) 
                                                        | (0x3fffffffff800ULL 
                                                           & ((QData)((IData)(
                                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_q[0U])) 
                                                              >> 0xeU))))) 
                                                 | (QData)((IData)(
                                                                   (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__wr_cl_idx_d) 
                                                                     << 5U) 
                                                                    | (0x1fU 
                                                                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_q[0U] 
                                                                          >> 0xeU))))))
                                                 : 
                                                ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__rd_tag 
                                                  << 0xbU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__bank_idx_q) 
                                                                     << 5U) 
                                                                    | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__bank_off_q)))))), 3U)))) 
                       << 6U) | ((((0U != (0xffU & 
                                           (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__wbuffer_q[0x17U] 
                                            >> 0xcU))) 
                                   & ((0x1fffffffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__wbuffer_q[0x1bU])) 
                                           << 0x23U) 
                                          | (((QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__wbuffer_q[0x1aU])) 
                                              << 3U) 
                                             | ((QData)((IData)(
                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__wbuffer_q[0x19U])) 
                                                >> 0x1dU)))) 
                                      == (0xffffffffffffffULL 
                                          & VL_SHIFTR_QQI(56,56,32, 
                                                          ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__wr_cl_vld_d)
                                                            ? 
                                                           ((0xfffffffffff800ULL 
                                                             & (((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_q[2U])) 
                                                                 << 0x32U) 
                                                                | (((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_q[1U])) 
                                                                    << 0x12U) 
                                                                   | (0x3fffffffff800ULL 
                                                                      & ((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_q[0U])) 
                                                                         >> 0xeU))))) 
                                                            | (QData)((IData)(
                                                                              (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__wr_cl_idx_d) 
                                                                                << 5U) 
                                                                               | (0x1fU 
                                                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_q[0U] 
                                                                                >> 0xeU))))))
                                                            : 
                                                           ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__rd_tag 
                                                             << 0xbU) 
                                                            | (QData)((IData)(
                                                                              (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__bank_idx_q) 
                                                                                << 5U) 
                                                                               | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__bank_off_q)))))), 3U)))) 
                                  << 5U) | ((((0U != 
                                               (0xffU 
                                                & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__wbuffer_q[0x13U] 
                                                    << 7U) 
                                                   | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__wbuffer_q[0x12U] 
                                                      >> 0x19U)))) 
                                              & ((0x1fffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__wbuffer_q[0x16U])) 
                                                      << 0x16U) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__wbuffer_q[0x15U])) 
                                                        >> 0xaU))) 
                                                 == 
                                                 (0xffffffffffffffULL 
                                                  & VL_SHIFTR_QQI(56,56,32, 
                                                                  ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__wr_cl_vld_d)
                                                                    ? 
                                                                   ((0xfffffffffff800ULL 
                                                                     & (((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_q[2U])) 
                                                                         << 0x32U) 
                                                                        | (((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_q[1U])) 
                                                                            << 0x12U) 
                                                                           | (0x3fffffffff800ULL 
                                                                              & ((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_q[0U])) 
                                                                                >> 0xeU))))) 
                                                                    | (QData)((IData)(
                                                                                (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__wr_cl_idx_d) 
                                                                                << 5U) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_q[0U] 
                                                                                >> 0xeU))))))
                                                                    : 
                                                                   ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__rd_tag 
                                                                     << 0xbU) 
                                                                    | (QData)((IData)(
                                                                                (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__bank_idx_q) 
                                                                                << 5U) 
                                                                                | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__bank_off_q)))))), 3U)))) 
                                             << 4U) 
                                            | ((((0U 
                                                  != 
                                                  (0xffU 
                                                   & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__wbuffer_q[0xeU] 
                                                      >> 6U))) 
                                                 & ((0x1fffffffffffffULL 
                                                     & (((QData)((IData)(
                                                                         vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__wbuffer_q[0x12U])) 
                                                         << 0x29U) 
                                                        | (((QData)((IData)(
                                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__wbuffer_q[0x11U])) 
                                                            << 9U) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__wbuffer_q[0x10U])) 
                                                              >> 0x17U)))) 
                                                    == 
                                                    (0xffffffffffffffULL 
                                                     & VL_SHIFTR_QQI(56,56,32, 
                                                                     ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__wr_cl_vld_d)
                                                                       ? 
                                                                      ((0xfffffffffff800ULL 
                                                                        & (((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_q[2U])) 
                                                                            << 0x32U) 
                                                                           | (((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_q[1U])) 
                                                                               << 0x12U) 
                                                                              | (0x3fffffffff800ULL 
                                                                                & ((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_q[0U])) 
                                                                                >> 0xeU))))) 
                                                                       | (QData)((IData)(
                                                                                (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__wr_cl_idx_d) 
                                                                                << 5U) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_q[0U] 
                                                                                >> 0xeU))))))
                                                                       : 
                                                                      ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__rd_tag 
                                                                        << 0xbU) 
                                                                       | (QData)((IData)(
                                                                                (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__bank_idx_q) 
                                                                                << 5U) 
                                                                                | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__bank_off_q)))))), 3U)))) 
                                                << 3U) 
                                               | ((((0U 
                                                     != 
                                                     (0xffU 
                                                      & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__wbuffer_q[9U] 
                                                         >> 0x13U))) 
                                                    & ((0x1fffffffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__wbuffer_q[0xdU])) 
                                                            << 0x1cU) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__wbuffer_q[0xcU])) 
                                                              >> 4U))) 
                                                       == 
                                                       (0xffffffffffffffULL 
                                                        & VL_SHIFTR_QQI(56,56,32, 
                                                                        ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__wr_cl_vld_d)
                                                                          ? 
                                                                         ((0xfffffffffff800ULL 
                                                                           & (((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_q[2U])) 
                                                                               << 0x32U) 
                                                                              | (((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_q[1U])) 
                                                                                << 0x12U) 
                                                                                | (0x3fffffffff800ULL 
                                                                                & ((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_q[0U])) 
                                                                                >> 0xeU))))) 
                                                                          | (QData)((IData)(
                                                                                (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__wr_cl_idx_d) 
                                                                                << 5U) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_q[0U] 
                                                                                >> 0xeU))))))
                                                                          : 
                                                                         ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__rd_tag 
                                                                           << 0xbU) 
                                                                          | (QData)((IData)(
                                                                                (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__bank_idx_q) 
                                                                                << 5U) 
                                                                                | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__bank_off_q)))))), 3U)))) 
                                                   << 2U) 
                                                  | ((((0U 
                                                        != 
                                                        (0xffU 
                                                         & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__wbuffer_q[5U])) 
                                                       & ((0x1fffffffffffffULL 
                                                           & (((QData)((IData)(
                                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__wbuffer_q[9U])) 
                                                               << 0x2fU) 
                                                              | (((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__wbuffer_q[8U])) 
                                                                  << 0xfU) 
                                                                 | ((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__wbuffer_q[7U])) 
                                                                    >> 0x11U)))) 
                                                          == 
                                                          (0xffffffffffffffULL 
                                                           & VL_SHIFTR_QQI(56,56,32, 
                                                                           ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__wr_cl_vld_d)
                                                                             ? 
                                                                            ((0xfffffffffff800ULL 
                                                                              & (((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_q[2U])) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_q[1U])) 
                                                                                << 0x12U) 
                                                                                | (0x3fffffffff800ULL 
                                                                                & ((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_q[0U])) 
                                                                                >> 0xeU))))) 
                                                                             | (QData)((IData)(
                                                                                (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__wr_cl_idx_d) 
                                                                                << 5U) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_q[0U] 
                                                                                >> 0xeU))))))
                                                                             : 
                                                                            ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__rd_tag 
                                                                              << 0xbU) 
                                                                             | (QData)((IData)(
                                                                                (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__bank_idx_q) 
                                                                                << 5U) 
                                                                                | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__bank_off_q)))))), 3U)))) 
                                                      << 1U) 
                                                     | ((0U 
                                                         != 
                                                         (0xffU 
                                                          & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__wbuffer_q[0U] 
                                                             >> 0xdU))) 
                                                        & ((0x1fffffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__wbuffer_q[4U])) 
                                                                << 0x22U) 
                                                               | (((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__wbuffer_q[3U])) 
                                                                   << 2U) 
                                                                  | ((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__wbuffer_q[2U])) 
                                                                     >> 0x1eU)))) 
                                                           == 
                                                           (0xffffffffffffffULL 
                                                            & VL_SHIFTR_QQI(56,56,32, 
                                                                            ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__wr_cl_vld_d)
                                                                              ? 
                                                                             ((0xfffffffffff800ULL 
                                                                               & (((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_q[2U])) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_q[1U])) 
                                                                                << 0x12U) 
                                                                                | (0x3fffffffff800ULL 
                                                                                & ((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_q[0U])) 
                                                                                >> 0xeU))))) 
                                                                              | (QData)((IData)(
                                                                                (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__wr_cl_idx_d) 
                                                                                << 5U) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_q[0U] 
                                                                                >> 0xeU))))))
                                                                              : 
                                                                             ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__rd_tag 
                                                                               << 0xbU) 
                                                                              | (QData)((IData)(
                                                                                (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__bank_idx_q) 
                                                                                << 5U) 
                                                                                | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_mem__DOT__bank_off_q)))))), 3U)))))))))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT____Vcellout__gen_rd_ports__BRA__2__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__req_port_o[2U] 
        = (3U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT____Vcellout__gen_rd_ports__BRA__2__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__req_port_o[2U]);
    if ((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__2__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_q))) {
        if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__2__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_q))) {
            if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__2__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_q))) {
                if ((7U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__2__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_q))) {
                    if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__wr_cl_vld_d) 
                                  | (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__2__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__rd_ack_q)))))) {
                        if (((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__rd_hit_oh_d)) 
                             & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__enable_q))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT____Vcellout__gen_rd_ports__BRA__2__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__req_port_o[2U] 
                                = (4U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT____Vcellout__gen_rd_ports__BRA__2__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__req_port_o[2U]);
                        }
                    }
                }
            }
        }
    } else if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__2__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_q))) {
        if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__2__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_q))) {
            if ((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__miss_rtrn_vld))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT____Vcellout__gen_rd_ports__BRA__2__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__req_port_o[2U] 
                    = (4U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT____Vcellout__gen_rd_ports__BRA__2__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__req_port_o[2U]);
            }
        }
    } else if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__2__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_q))) {
        if ((7U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__2__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_q))) {
            if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__wr_cl_vld_d) 
                          | (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__2__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__rd_ack_q)))))) {
                if (((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__rd_hit_oh_d)) 
                     & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__enable_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT____Vcellout__gen_rd_ports__BRA__2__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__req_port_o[2U] 
                        = (4U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT____Vcellout__gen_rd_ports__BRA__2__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__req_port_o[2U]);
                }
            }
        }
    }
}

VL_INLINE_OPT void Vara_tb_verilator___024root___nba_comb__TOP__528(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___nba_comb__TOP__528\n"); );
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT____Vcellout__gen_rd_ports__BRA__1__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__rd_req_o = 0U;
    if ((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__1__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_q))) {
        if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__1__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_q))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT____Vcellout__gen_rd_ports__BRA__1__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__rd_req_o = 1U;
        }
    } else if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__1__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_q) 
                         >> 1U)))) {
        if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__1__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_q))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT____Vcellout__gen_rd_ports__BRA__1__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__rd_req_o = 1U;
        } else if (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[0U] 
                     >> 0xeU) & (0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__controller_i__DOT__fence_t_state_q)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT____Vcellout__gen_rd_ports__BRA__1__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__rd_req_o = 1U;
        }
    }
}

extern const VlWide<537>/*17183:0*/ Vara_tb_verilator__ConstPool__CONST_h243f37ab_0;

VL_INLINE_OPT void Vara_tb_verilator___024root___nba_comb__TOP__530(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___nba_comb__TOP__530\n"); );
    // Init
    VlWide<537>/*17177:0*/ __Vfunc_is_inside_execute_regions__142__Cfg;
    VL_ZERO_W(17178, __Vfunc_is_inside_execute_regions__142__Cfg);
    QData/*63:0*/ __Vfunc_is_inside_execute_regions__142__address;
    __Vfunc_is_inside_execute_regions__142__address = 0;
    CData/*0:0*/ __Vfunc_is_inside_nonidempotent_regions__181__Vfuncout;
    __Vfunc_is_inside_nonidempotent_regions__181__Vfuncout = 0;
    VlWide<537>/*17177:0*/ __Vfunc_is_inside_nonidempotent_regions__181__Cfg;
    VL_ZERO_W(17178, __Vfunc_is_inside_nonidempotent_regions__181__Cfg);
    QData/*63:0*/ __Vfunc_is_inside_nonidempotent_regions__181__address;
    __Vfunc_is_inside_nonidempotent_regions__181__address = 0;
    IData/*31:0*/ __Vfunc_is_inside_nonidempotent_regions__181__unnamedblk1__DOT__k;
    __Vfunc_is_inside_nonidempotent_regions__181__unnamedblk1__DOT__k = 0;
    SData/*15:0*/ __Vfunc_is_inside_nonidempotent_regions__181__pass;
    __Vfunc_is_inside_nonidempotent_regions__181__pass = 0;
    VlWide<3>/*95:0*/ __Vtemp_11;
    VlWide<3>/*95:0*/ __Vtemp_13;
    VlWide<3>/*95:0*/ __Vtemp_14;
    VlWide<3>/*95:0*/ __Vtemp_15;
    VlWide<3>/*95:0*/ __Vtemp_16;
    VlWide<3>/*95:0*/ __Vtemp_22;
    VlWide<3>/*95:0*/ __Vtemp_24;
    VlWide<3>/*95:0*/ __Vtemp_25;
    VlWide<3>/*95:0*/ __Vtemp_26;
    VlWide<3>/*95:0*/ __Vtemp_27;
    VlWide<3>/*95:0*/ __Vtemp_29;
    VlWide<3>/*95:0*/ __Vtemp_31;
    VlWide<3>/*95:0*/ __Vtemp_32;
    VlWide<3>/*95:0*/ __Vtemp_33;
    VlWide<3>/*95:0*/ __Vtemp_34;
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cache_en_d 
        = (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cache_en_q) 
            | (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__controller_i__DOT__cache_init_q))) 
           & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_en_csr));
    if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__state_q)))) {
                if ((0x3fU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__flush_cnt_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cache_en_d 
                        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_en_csr;
                }
            }
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__enable_d 
        = (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__enable_q) 
            | (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__controller_i__DOT__cache_init_q))) 
           & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__dcache_q));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__data_perf_csr = 0ULL;
    if (((0xb03U <= (0xfffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                               >> 1U))) & (0xb09U > 
                                           (0xfffU 
                                            & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                               >> 1U))))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__data_perf_csr 
            = ((5U >= (7U & ((0xfffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                        >> 1U)) - (IData)(3U))))
                ? vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__generic_counter_q
               [(7U & ((0xfffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                  >> 1U)) - (IData)(3U)))]
                : 0ULL);
    } else if ((1U & (~ ((0xb83U <= (0xfffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                               >> 1U))) 
                         & (0xb89U > (0xfffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                                >> 1U))))))) {
        if (((0x323U <= (0xfffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                   >> 1U))) & (0x329U 
                                               > (0xfffU 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                                     >> 1U))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__data_perf_csr 
                = (QData)((IData)(((5U >= (7U & ((0xfffU 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                                     >> 1U)) 
                                                 - (IData)(3U))))
                                    ? vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__mhpmevent_q
                                   [(7U & ((0xfffU 
                                            & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                               >> 1U)) 
                                           - (IData)(3U)))]
                                    : 0U)));
        } else if (((0xc03U <= (0xfffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                          >> 1U))) 
                    & (0xc09U > (0xfffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                           >> 1U))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__data_perf_csr 
                = ((5U >= (7U & ((0xfffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                            >> 1U)) 
                                 - (IData)(3U)))) ? 
                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_perf_counter__DOT__perf_counters_i__DOT__generic_counter_q
                   [(7U & ((0xfffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__csr_buffer_i__DOT__csr_reg_q) 
                                      >> 1U)) - (IData)(3U)))]
                    : 0ULL);
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT____Vcellout__gen_rd_ports__BRA__0__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__rd_req_o = 0U;
    if ((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__0__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_q))) {
        if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__0__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_q))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT____Vcellout__gen_rd_ports__BRA__0__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__rd_req_o = 1U;
        }
    } else if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__0__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_q) 
                         >> 1U)))) {
        if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__0__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_q))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT____Vcellout__gen_rd_ports__BRA__0__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__rd_req_o = 1U;
        } else if (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__gen_mmu__DOT__i_cva6_mmu__req_port_o[0U] 
                     >> 0xeU) & (0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__controller_i__DOT__fence_t_state_q)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT____Vcellout__gen_rd_ports__BRA__0__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__rd_req_o = 1U;
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__controller_i__DOT__i_drain_cnt__DOT__i_counter__DOT__counter_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__controller_i__DOT__i_drain_cnt__DOT__i_counter__DOT__counter_q;
    if (((((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__2__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_q)) 
           | ((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__1__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_q)) 
              | (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__gen_rd_ports__BRA__0__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__DOT__state_q)))) 
          | ((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__valid)) 
             | (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__state_q)))) 
         | (1U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__state_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__controller_i__DOT__i_drain_cnt__DOT__i_counter__DOT__counter_d = 0U;
    } else if ((0xfU != (0xfU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__controller_i__DOT__i_drain_cnt__DOT__i_counter__DOT__counter_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__controller_i__DOT__i_drain_cnt__DOT__i_counter__DOT__counter_d 
            = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__controller_i__DOT__i_drain_cnt__DOT__i_counter__DOT__counter_q)));
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__flush_ack_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__flush_ack_q;
    if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__state_q))) {
            if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__state_q))) {
                if ((0x3fU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__cnt_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__enable_d 
                        = (1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__dcache_q));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__flush_ack_d = 0U;
                }
            }
        } else if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__state_q)))) {
            if ((1U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_flush_ctrl_cache) 
                       | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__dcache_q) 
                          & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__enable_q)))))) {
                if ((1U & ((~ (IData)((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__valid)))) 
                           & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_vld_q))))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__flush_ack_d 
                        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__dcache_flush_ctrl_cache;
                }
            }
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__core_st_pending 
        = (1U & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__no_st_pending_commit)) 
                 & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__acc_cons_q)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__sb_full_cnt_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__sb_full_cnt_q;
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__runtime_cnt_en_q) 
         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__sb_full))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__sb_full_cnt_d 
            = (1ULL + vlSelf->ara_tb_verilator__DOT__dut__DOT__sb_full_cnt_d);
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__mem_n[0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__mem_q[0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__mem_n[1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__mem_q[1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__mem_n[2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__mem_q[2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__mem_n[3U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__mem_q[3U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__mem_n[4U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__mem_q[4U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__mem_n[5U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__mem_q[5U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__mem_n[6U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__mem_q[6U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__mem_n[7U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__mem_q[7U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__mem_n[8U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__mem_q[8U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__mem_n[9U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__mem_q[9U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__mem_n[0xaU] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__mem_q[0xaU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__mem_n[0xbU] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__mem_q[0xbU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__mem_n[0xcU] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__mem_q[0xcU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__mem_n[0xdU] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__mem_q[0xdU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__mem_n[0xeU] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__mem_q[0xeU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__mem_n[0xfU] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__mem_q[0xfU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__mem_n[0x10U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__mem_q[0x10U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__mem_n[0x11U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__mem_q[0x11U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__mem_n[0x12U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__mem_q[0x12U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__mem_n[0x13U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__mem_q[0x13U];
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_valid_q) 
         & (3U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT____Vlvbound_h599d7c21__0[0U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_q[0U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT____Vlvbound_h599d7c21__0[1U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_q[1U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT____Vlvbound_h599d7c21__0[2U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_q[2U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT____Vlvbound_h599d7c21__0[3U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_q[3U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT____Vlvbound_h599d7c21__0[4U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_q[4U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT____Vlvbound_h599d7c21__0[5U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_q[5U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT____Vlvbound_h599d7c21__0[6U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_q[6U];
        if ((0x26cU >= (0x3ffU & ((IData)(0xcfU) * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__write_pointer_q))))) {
            VL_ASSIGNSEL_WW(621,207,(0x3ffU & ((IData)(0xcfU) 
                                               * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__write_pointer_q))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT____Vlvbound_h599d7c21__0);
        }
    }
    if ((0x26cU >= (0x3ffU & ((IData)(0xcfU) * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__read_pointer_q))))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_insn_queue_o[0U] 
            = (((0U == (0x1fU & ((IData)(0xcfU) * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__read_pointer_q))))
                 ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__mem_q[
                         ((IData)(1U) + (0x1fU & (((IData)(0xcfU) 
                                                   * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0xcfU) 
                                                  * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__read_pointer_q)))))) 
               | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__mem_q[
                  (0x1fU & (((IData)(0xcfU) * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__read_pointer_q)) 
                            >> 5U))] >> (0x1fU & ((IData)(0xcfU) 
                                                  * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__read_pointer_q)))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_insn_queue_o[1U] 
            = (((0U == (0x1fU & ((IData)(0xcfU) * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__read_pointer_q))))
                 ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__mem_q[
                         ((IData)(2U) + (0x1fU & (((IData)(0xcfU) 
                                                   * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0xcfU) 
                                                  * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__read_pointer_q)))))) 
               | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__mem_q[
                  ((IData)(1U) + (0x1fU & (((IData)(0xcfU) 
                                            * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0xcfU) * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__read_pointer_q)))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_insn_queue_o[2U] 
            = (((0U == (0x1fU & ((IData)(0xcfU) * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__read_pointer_q))))
                 ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__mem_q[
                         ((IData)(3U) + (0x1fU & (((IData)(0xcfU) 
                                                   * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0xcfU) 
                                                  * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__read_pointer_q)))))) 
               | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__mem_q[
                  ((IData)(2U) + (0x1fU & (((IData)(0xcfU) 
                                            * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0xcfU) * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__read_pointer_q)))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_insn_queue_o[3U] 
            = (((0U == (0x1fU & ((IData)(0xcfU) * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__read_pointer_q))))
                 ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__mem_q[
                         ((IData)(4U) + (0x1fU & (((IData)(0xcfU) 
                                                   * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0xcfU) 
                                                  * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__read_pointer_q)))))) 
               | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__mem_q[
                  ((IData)(3U) + (0x1fU & (((IData)(0xcfU) 
                                            * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0xcfU) * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__read_pointer_q)))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_insn_queue_o[4U] 
            = (((0U == (0x1fU & ((IData)(0xcfU) * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__read_pointer_q))))
                 ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__mem_q[
                         ((IData)(5U) + (0x1fU & (((IData)(0xcfU) 
                                                   * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0xcfU) 
                                                  * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__read_pointer_q)))))) 
               | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__mem_q[
                  ((IData)(4U) + (0x1fU & (((IData)(0xcfU) 
                                            * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0xcfU) * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__read_pointer_q)))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_insn_queue_o[5U] 
            = (((0U == (0x1fU & ((IData)(0xcfU) * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__read_pointer_q))))
                 ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__mem_q[
                         ((IData)(6U) + (0x1fU & (((IData)(0xcfU) 
                                                   * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__read_pointer_q)) 
                                                  >> 5U)))] 
                         << ((IData)(0x20U) - (0x1fU 
                                               & ((IData)(0xcfU) 
                                                  * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__read_pointer_q)))))) 
               | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__mem_q[
                  ((IData)(5U) + (0x1fU & (((IData)(0xcfU) 
                                            * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__read_pointer_q)) 
                                           >> 5U)))] 
                  >> (0x1fU & ((IData)(0xcfU) * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__read_pointer_q)))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_insn_queue_o[6U] 
            = (0x7fffU & (((0U == (0x1fU & ((IData)(0xcfU) 
                                            * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__read_pointer_q))))
                            ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__mem_q[
                                    ((IData)(7U) + 
                                     (0x1fU & (((IData)(0xcfU) 
                                                * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__read_pointer_q)) 
                                               >> 5U)))] 
                                    << ((IData)(0x20U) 
                                        - (0x1fU & 
                                           ((IData)(0xcfU) 
                                            * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__read_pointer_q)))))) 
                          | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__mem_q[
                             ((IData)(6U) + (0x1fU 
                                             & (((IData)(0xcfU) 
                                                 * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__read_pointer_q)) 
                                                >> 5U)))] 
                             >> (0x1fU & ((IData)(0xcfU) 
                                          * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__read_pointer_q))))));
    } else {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_insn_queue_o[0U] = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_insn_queue_o[1U] = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_insn_queue_o[2U] = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_insn_queue_o[3U] = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_insn_queue_o[4U] = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_insn_queue_o[5U] = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_insn_queue_o[6U] = 0U;
    }
    if (((0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__status_cnt_q)) 
         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_valid_q))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_insn_queue_o[0U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_q[0U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_insn_queue_o[1U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_q[1U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_insn_queue_o[2U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_q[2U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_insn_queue_o[3U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_q[3U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_insn_queue_o[4U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_q[4U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_insn_queue_o[5U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_q[5U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_insn_queue_o[6U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_q[6U];
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__operand_b_d 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_valid_q)
            ? (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_q[4U])) 
                << 0x3dU) | (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_q[3U])) 
                              << 0x1dU) | ((QData)((IData)(
                                                           vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_q[2U])) 
                                           >> 3U)))
            : 0ULL);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__operand_c_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__operand_c_i;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_op_mod_d = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_ifmt_d = 2U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_rm_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_rm_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_vec_op_d 
        = (8U == (0xfU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_data[6U] 
                          >> 0xbU)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__input_translation__DOT__vec_replication 
        = (1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_rm_q));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__input_translation__DOT__replicate_c = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__input_translation__DOT__check_ah = 0U;
    if ((4U < (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_rm_q))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_rm_d 
            = (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__fcsr_q 
                     >> 5U));
    }
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_vec_op_d) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_rm_d 
            = (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__fcsr_q 
                     >> 5U));
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_dstfmt_d 
        = ((0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_fmt_q))
            ? 0U : ((1U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_fmt_q))
                     ? ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_vec_op_d)
                         ? 4U : 1U) : ((2U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_fmt_q))
                                        ? (((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_vec_op_d)) 
                                            & (5U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_rm_q)))
                                            ? 4U : 2U)
                                        : 3U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_srcfmt_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_dstfmt_d;
    if ((0x400U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_data[6U])) {
        if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_data[6U] 
                      >> 9U)))) {
            if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_data[6U] 
                          >> 8U)))) {
                if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_data[6U] 
                              >> 7U)))) {
                    if ((0x40U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_data[6U])) {
                        if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_data[6U] 
                                      >> 5U)))) {
                            if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_data[6U] 
                                          >> 4U)))) {
                                if ((8U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_data[6U])) {
                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_op_mod_d 
                                        = (1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_rm_q));
                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__input_translation__DOT__vec_replication = 0U;
                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_srcfmt_d = 1U;
                                } else {
                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_op_mod_d 
                                        = (1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_rm_q));
                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__input_translation__DOT__vec_replication = 0U;
                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_srcfmt_d = 1U;
                                }
                            }
                        }
                    } else if ((0x20U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_data[6U])) {
                        if ((0x10U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_data[6U])) {
                            if ((8U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_data[6U])) {
                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_op_mod_d 
                                    = (1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_rm_q));
                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__input_translation__DOT__vec_replication = 0U;
                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_srcfmt_d = 0U;
                            } else {
                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_op_mod_d 
                                    = (1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_rm_q));
                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__input_translation__DOT__vec_replication = 0U;
                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_srcfmt_d = 0U;
                            }
                        } else if ((8U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_data[6U])) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_op_mod_d = 1U;
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_rm_d = 0U;
                        } else {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_rm_d = 0U;
                        }
                    } else if ((0x10U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_data[6U])) {
                        if ((8U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_data[6U])) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_op_mod_d = 1U;
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_rm_d = 1U;
                        } else {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_rm_d = 1U;
                        }
                    } else if ((8U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_data[6U])) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_op_mod_d = 1U;
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_rm_d = 2U;
                    } else {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_rm_d = 2U;
                    }
                }
            }
        }
    } else if ((0x200U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_data[6U])) {
        if ((0x100U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_data[6U])) {
            if ((0x80U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_data[6U])) {
                if ((0x40U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_data[6U])) {
                    if ((0x20U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_data[6U])) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_rm_d 
                            = ((0x10U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_data[6U])
                                ? ((8U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_data[6U])
                                    ? 2U : 1U) : ((8U 
                                                   & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_data[6U])
                                                   ? 0U
                                                   : 1U));
                    } else if ((0x10U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_data[6U])) {
                        if ((8U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_data[6U])) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_rm_d = 0U;
                        } else {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_rm_d 
                                = (3U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_rm_q));
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__input_translation__DOT__check_ah = 1U;
                        }
                    } else if ((8U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_data[6U])) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_rm_d 
                            = (3U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_rm_q));
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__input_translation__DOT__check_ah = 1U;
                    } else {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_rm_d = 3U;
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__input_translation__DOT__check_ah = 1U;
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__input_translation__DOT__vec_replication = 0U;
                    }
                } else if ((0x20U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_data[6U])) {
                    if ((0x10U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_data[6U])) {
                        if ((8U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_data[6U])) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_rm_d = 3U;
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_op_mod_d = 1U;
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__input_translation__DOT__check_ah = 1U;
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__input_translation__DOT__vec_replication = 0U;
                        } else {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_rm_d 
                                = (3U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_rm_q));
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__input_translation__DOT__check_ah = 1U;
                        }
                    } else if ((8U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_data[6U])) {
                        if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_vec_op_d) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__input_translation__DOT__vec_replication = 0U;
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_srcfmt_d 
                                = ((1U & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__operand_c_i 
                                                  >> 1U)))
                                    ? ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__operand_c_i))
                                        ? 3U : 2U) : 
                                   ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__operand_c_i))
                                     ? 4U : 0U));
                        } else if ((1U & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__operand_c_i 
                                                  >> 2U)))) {
                            if ((1U & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__operand_c_i 
                                               >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__operand_c_i)))) {
                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_srcfmt_d = 4U;
                                }
                            }
                        } else {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_srcfmt_d 
                                = ((1U & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__operand_c_i 
                                                  >> 1U)))
                                    ? ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__operand_c_i))
                                        ? 3U : 2U) : 
                                   ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__operand_c_i))
                                     ? 1U : 0U));
                        }
                    } else if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_vec_op_d) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_op_mod_d 
                            = (1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_rm_q));
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__input_translation__DOT__vec_replication = 0U;
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_ifmt_d 
                            = ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_fmt_q))
                                ? ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_fmt_q))
                                    ? 0U : 1U) : ((1U 
                                                   & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_fmt_q))
                                                   ? 1U
                                                   : 2U));
                    } else {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_op_mod_d 
                            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT____VdfgExtracted_hffcf3b7b__0;
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_ifmt_d 
                            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT____VdfgExtracted_h6d9c91a6__0;
                    }
                } else if ((0x10U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_data[6U])) {
                    if ((8U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_data[6U])) {
                        if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_vec_op_d) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_op_mod_d 
                                = (1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_rm_q));
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__input_translation__DOT__vec_replication = 0U;
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_ifmt_d 
                                = ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_fmt_q))
                                    ? ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_fmt_q))
                                        ? 0U : 1U) : 
                                   ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_fmt_q))
                                     ? 1U : 2U));
                        } else {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_op_mod_d 
                                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT____VdfgExtracted_hffcf3b7b__0;
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_ifmt_d 
                                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT____VdfgExtracted_h6d9c91a6__0;
                        }
                    } else {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_op_mod_d = 1U;
                    }
                } else if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_data[6U] 
                                     >> 3U)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_op_mod_d = 1U;
                }
            } else if ((0x40U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_data[6U])) {
                if ((0x20U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_data[6U])) {
                    if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_data[6U] 
                                  >> 4U)))) {
                        if ((8U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_data[6U])) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_rm_d 
                                = (3U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_rm_q));
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__input_translation__DOT__check_ah = 1U;
                        }
                    }
                } else if ((0x10U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_data[6U])) {
                    if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_data[6U] 
                                  >> 3U)))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_op_mod_d = 1U;
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__input_translation__DOT__replicate_c = 1U;
                    }
                } else if ((8U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_data[6U])) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__input_translation__DOT__replicate_c = 1U;
                }
            }
        }
    }
    if (((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_vec_op_d)) 
         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__input_translation__DOT__check_ah))) {
        if ((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_rm_q))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_dstfmt_d = 4U;
        }
    }
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_vec_op_d) 
         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__input_translation__DOT__vec_replication))) {
        if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__input_translation__DOT__replicate_c) {
            if ((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_dstfmt_d))) {
                if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_dstfmt_d) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_dstfmt_d)))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__operand_c_d 
                            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT____VdfgExtracted_h191c0dcd__0;
                    }
                }
            } else if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_dstfmt_d))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__operand_c_d 
                    = ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_dstfmt_d))
                        ? (((QData)((IData)(((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_valid_q)
                                              ? (0xffU 
                                                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_q[0U] 
                                                    >> 3U))
                                              : 0U))) 
                            << 0x38U) | (((QData)((IData)(
                                                          ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_valid_q)
                                                            ? 
                                                           (0xffU 
                                                            & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_q[0U] 
                                                               >> 3U))
                                                            : 0U))) 
                                          << 0x30U) 
                                         | (((QData)((IData)(
                                                             ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_valid_q)
                                                               ? 
                                                              (0xffU 
                                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_q[0U] 
                                                                  >> 3U))
                                                               : 0U))) 
                                             << 0x28U) 
                                            | (((QData)((IData)(
                                                                ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_valid_q)
                                                                  ? 
                                                                 (0xffU 
                                                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_q[0U] 
                                                                     >> 3U))
                                                                  : 0U))) 
                                                << 0x20U) 
                                               | (((QData)((IData)(
                                                                   ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_valid_q)
                                                                     ? 
                                                                    (0xffU 
                                                                     & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_q[0U] 
                                                                        >> 3U))
                                                                     : 0U))) 
                                                   << 0x18U) 
                                                  | (((QData)((IData)(
                                                                      ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_valid_q)
                                                                        ? 
                                                                       (0xffU 
                                                                        & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_q[0U] 
                                                                           >> 3U))
                                                                        : 0U))) 
                                                      << 0x10U) 
                                                     | (((QData)((IData)(
                                                                         ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_valid_q)
                                                                           ? 
                                                                          (0xffU 
                                                                           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_q[0U] 
                                                                              >> 3U))
                                                                           : 0U))) 
                                                         << 8U) 
                                                        | (QData)((IData)(
                                                                          ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_valid_q)
                                                                            ? 
                                                                           (0xffU 
                                                                            & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_q[0U] 
                                                                               >> 3U))
                                                                            : 0U))))))))))
                        : vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT____VdfgExtracted_h191c0dcd__0);
            } else if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_dstfmt_d)))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__operand_c_d 
                    = (((QData)((IData)(((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_valid_q)
                                          ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_q[1U] 
                                              << 0x1dU) 
                                             | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_q[0U] 
                                                >> 3U))
                                          : 0U))) << 0x20U) 
                       | (QData)((IData)(((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_valid_q)
                                           ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_q[1U] 
                                               << 0x1dU) 
                                              | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_q[0U] 
                                                 >> 3U))
                                           : 0U))));
            }
        } else if ((4U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_dstfmt_d))) {
            if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_dstfmt_d) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_dstfmt_d)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__operand_b_d 
                        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT____VdfgExtracted_hd79ab04d__0;
                }
            }
        } else if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_dstfmt_d))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__operand_b_d 
                = ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_dstfmt_d))
                    ? (((QData)((IData)(((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_valid_q)
                                          ? (0xffU 
                                             & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_q[2U] 
                                                >> 3U))
                                          : 0U))) << 0x38U) 
                       | (((QData)((IData)(((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_valid_q)
                                             ? (0xffU 
                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_q[2U] 
                                                   >> 3U))
                                             : 0U))) 
                           << 0x30U) | (((QData)((IData)(
                                                         ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_valid_q)
                                                           ? 
                                                          (0xffU 
                                                           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_q[2U] 
                                                              >> 3U))
                                                           : 0U))) 
                                         << 0x28U) 
                                        | (((QData)((IData)(
                                                            ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_valid_q)
                                                              ? 
                                                             (0xffU 
                                                              & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_q[2U] 
                                                                 >> 3U))
                                                              : 0U))) 
                                            << 0x20U) 
                                           | (((QData)((IData)(
                                                               ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_valid_q)
                                                                 ? 
                                                                (0xffU 
                                                                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_q[2U] 
                                                                    >> 3U))
                                                                 : 0U))) 
                                               << 0x18U) 
                                              | (((QData)((IData)(
                                                                  ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_valid_q)
                                                                    ? 
                                                                   (0xffU 
                                                                    & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_q[2U] 
                                                                       >> 3U))
                                                                    : 0U))) 
                                                  << 0x10U) 
                                                 | (((QData)((IData)(
                                                                     ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_valid_q)
                                                                       ? 
                                                                      (0xffU 
                                                                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_q[2U] 
                                                                          >> 3U))
                                                                       : 0U))) 
                                                     << 8U) 
                                                    | (QData)((IData)(
                                                                      ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_valid_q)
                                                                        ? 
                                                                       (0xffU 
                                                                        & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_q[2U] 
                                                                           >> 3U))
                                                                        : 0U))))))))))
                    : vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT____VdfgExtracted_hd79ab04d__0);
        } else if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__fpu_dstfmt_d)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__operand_b_d 
                = (((QData)((IData)(((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_valid_q)
                                      ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_q[3U] 
                                          << 0x1dU) 
                                         | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_q[2U] 
                                            >> 3U))
                                      : 0U))) << 0x20U) 
                   | (QData)((IData)(((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fpu_valid_q)
                                       ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_q[3U] 
                                           << 0x1dU) 
                                          | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_data_q[2U] 
                                             >> 3U))
                                       : 0U))));
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_misaligned_exception[0U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_misaligned_exception[1U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_misaligned_exception[2U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_misaligned_exception[3U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_misaligned_exception[4U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_misaligned_exception[5U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_misaligned_exception[6U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__data_misaligned = 0U;
    if ((0x8000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[5U])) {
        if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U] 
                      >> 0xaU)))) {
            if ((0x200U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U])) {
                if ((0x100U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U])) {
                    if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U] 
                                  >> 7U)))) {
                        if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U] 
                                      >> 6U)))) {
                            if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U] 
                                          >> 4U)))) {
                                if ((8U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U])) {
                                    if ((0U != (7U 
                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[3U] 
                                                   >> 0x1bU)))) {
                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__data_misaligned = 1U;
                                    }
                                }
                            }
                            if ((0x10U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U])) {
                                if ((8U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U])) {
                                    if ((0x8000000U 
                                         & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[3U])) {
                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__data_misaligned = 1U;
                                    }
                                } else if ((0U != (3U 
                                                   & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[3U] 
                                                      >> 0x1bU)))) {
                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__data_misaligned = 1U;
                                }
                            }
                        }
                    }
                } else {
                    if ((0x80U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U])) {
                        if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U] 
                                      >> 6U)))) {
                            if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U] 
                                          >> 5U)))) {
                                if ((0U != (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[3U] 
                                                  >> 0x1bU)))) {
                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__data_misaligned = 1U;
                                }
                            }
                        }
                    } else if ((0x40U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U])) {
                        if ((0x20U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U])) {
                            if ((0U != (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[3U] 
                                              >> 0x1bU)))) {
                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__data_misaligned = 1U;
                            }
                        } else if ((0x10U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U])) {
                            if ((8U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U])) {
                                if ((0U != (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[3U] 
                                                  >> 0x1bU)))) {
                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__data_misaligned = 1U;
                                }
                            }
                        }
                    } else if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U] 
                                         >> 5U)))) {
                        if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U] 
                                      >> 4U)))) {
                            if ((8U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U])) {
                                if ((0U != (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[3U] 
                                                  >> 0x1bU)))) {
                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__data_misaligned = 1U;
                                }
                            }
                        }
                    }
                    if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U] 
                                  >> 7U)))) {
                        if ((0x40U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U])) {
                            if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U] 
                                          >> 5U)))) {
                                if ((0x10U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U])) {
                                    if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U] 
                                                  >> 3U)))) {
                                        if ((0U != 
                                             (3U & 
                                              (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[3U] 
                                               >> 0x1bU)))) {
                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__data_misaligned = 1U;
                                        }
                                    }
                                } else if ((0U != (3U 
                                                   & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[3U] 
                                                      >> 0x1bU)))) {
                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__data_misaligned = 1U;
                                }
                            }
                        } else if ((0x20U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U])) {
                            if ((0U != (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[3U] 
                                              >> 0x1bU)))) {
                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__data_misaligned = 1U;
                            }
                        } else if ((0x10U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U])) {
                            if ((0U != (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[3U] 
                                              >> 0x1bU)))) {
                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__data_misaligned = 1U;
                            }
                        } else if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U] 
                                             >> 3U)))) {
                            if ((0U != (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[3U] 
                                              >> 0x1bU)))) {
                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__data_misaligned = 1U;
                            }
                        }
                    }
                }
            } else if ((0x100U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U])) {
                if ((0x80U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U])) {
                    if ((0x40U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U])) {
                        if ((0x20U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U])) {
                            if ((0x10U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U])) {
                                if ((8U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U])) {
                                    if ((0U != (7U 
                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[3U] 
                                                   >> 0x1bU)))) {
                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__data_misaligned = 1U;
                                    }
                                }
                                if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U] 
                                              >> 3U)))) {
                                    if ((0U != (3U 
                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[3U] 
                                                   >> 0x1bU)))) {
                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__data_misaligned = 1U;
                                    }
                                }
                            } else if ((0U != (7U & 
                                               (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[3U] 
                                                >> 0x1bU)))) {
                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__data_misaligned = 1U;
                            }
                        } else if ((0x10U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U])) {
                            if ((0U != (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[3U] 
                                              >> 0x1bU)))) {
                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__data_misaligned = 1U;
                            }
                        } else if ((8U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U])) {
                            if ((0x8000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[3U])) {
                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__data_misaligned = 1U;
                            }
                        }
                    } else if ((0x20U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U])) {
                        if ((0x10U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U])) {
                            if ((0U != (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[3U] 
                                              >> 0x1bU)))) {
                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__data_misaligned = 1U;
                            }
                        } else if ((0x8000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[3U])) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__data_misaligned = 1U;
                        }
                    } else if ((0x10U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U])) {
                        if ((8U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U])) {
                            if ((0x8000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[3U])) {
                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__data_misaligned = 1U;
                            }
                        }
                    }
                } else {
                    if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U] 
                                  >> 6U)))) {
                        if ((0x20U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U])) {
                            if ((0x10U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U])) {
                                if ((0U != (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[3U] 
                                                  >> 0x1bU)))) {
                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__data_misaligned = 1U;
                                }
                            }
                        }
                    }
                    if ((0x40U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U])) {
                        if ((0x20U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U])) {
                            if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U] 
                                          >> 4U)))) {
                                if ((0x8000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[3U])) {
                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__data_misaligned = 1U;
                                }
                            }
                        } else if ((0x10U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U])) {
                            if ((8U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U])) {
                                if ((0x8000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[3U])) {
                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__data_misaligned = 1U;
                                }
                            } else if ((0U != (3U & 
                                               (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[3U] 
                                                >> 0x1bU)))) {
                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__data_misaligned = 1U;
                            }
                        } else if ((0U != (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[3U] 
                                                 >> 0x1bU)))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__data_misaligned = 1U;
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__data_misaligned) {
        if ((1U == (0xfU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U] 
                            >> 0xbU)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_misaligned_exception[4U] 
                = (0x2000U | (0x7ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_misaligned_exception[4U]));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_misaligned_exception[5U] = 0U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_misaligned_exception[6U] = 0U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_misaligned_exception[0U] 
                = (1U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_misaligned_exception[0U]);
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_misaligned_exception[2U] 
                = ((0x7ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_misaligned_exception[2U]) 
                   | ((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[5U])) 
                                << 0x25U) | (((QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[4U])) 
                                              << 5U) 
                                             | ((QData)((IData)(
                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[3U])) 
                                                >> 0x1bU)))) 
                      << 0xbU));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_misaligned_exception[3U] 
                = (((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[5U])) 
                              << 0x25U) | (((QData)((IData)(
                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[4U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[3U])) 
                                              >> 0x1bU)))) 
                    >> 0x15U) | ((IData)(((((QData)((IData)(
                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[5U])) 
                                            << 0x25U) 
                                           | (((QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[4U])) 
                                               << 5U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[3U])) 
                                                 >> 0x1bU))) 
                                          >> 0x20U)) 
                                 << 0xbU));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_misaligned_exception[4U] 
                = ((0xfffff800U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_misaligned_exception[4U]) 
                   | ((IData)(((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[5U])) 
                                 << 0x25U) | (((QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[4U])) 
                                               << 5U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[3U])) 
                                                 >> 0x1bU))) 
                               >> 0x20U)) >> 0x15U));
        } else if ((2U == (0xfU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U] 
                                   >> 0xbU)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_misaligned_exception[4U] 
                = (0x3000U | (0x7ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_misaligned_exception[4U]));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_misaligned_exception[5U] = 0U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_misaligned_exception[6U] = 0U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_misaligned_exception[0U] 
                = (1U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_misaligned_exception[0U]);
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_misaligned_exception[2U] 
                = ((0x7ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_misaligned_exception[2U]) 
                   | ((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[5U])) 
                                << 0x25U) | (((QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[4U])) 
                                              << 5U) 
                                             | ((QData)((IData)(
                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[3U])) 
                                                >> 0x1bU)))) 
                      << 0xbU));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_misaligned_exception[3U] 
                = (((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[5U])) 
                              << 0x25U) | (((QData)((IData)(
                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[4U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[3U])) 
                                              >> 0x1bU)))) 
                    >> 0x15U) | ((IData)(((((QData)((IData)(
                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[5U])) 
                                            << 0x25U) 
                                           | (((QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[4U])) 
                                               << 5U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[3U])) 
                                                 >> 0x1bU))) 
                                          >> 0x20U)) 
                                 << 0xbU));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_misaligned_exception[4U] 
                = ((0xfffff800U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_misaligned_exception[4U]) 
                   | ((IData)(((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[5U])) 
                                 << 0x25U) | (((QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[4U])) 
                                               << 5U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[3U])) 
                                                 >> 0x1bU))) 
                               >> 0x20U)) >> 0x15U));
        }
    }
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__en_ld_st_translation_q) 
         & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[2U] 
            >> 0x18U))) {
        if ((1U == (0xfU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U] 
                            >> 0xbU)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_misaligned_exception[4U] 
                = (0x6800U | (0x7ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_misaligned_exception[4U]));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_misaligned_exception[5U] = 0U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_misaligned_exception[6U] = 0U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_misaligned_exception[0U] 
                = (1U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_misaligned_exception[0U]);
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_misaligned_exception[2U] 
                = ((0x7ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_misaligned_exception[2U]) 
                   | ((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[5U])) 
                                << 0x25U) | (((QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[4U])) 
                                              << 5U) 
                                             | ((QData)((IData)(
                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[3U])) 
                                                >> 0x1bU)))) 
                      << 0xbU));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_misaligned_exception[3U] 
                = (((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[5U])) 
                              << 0x25U) | (((QData)((IData)(
                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[4U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[3U])) 
                                              >> 0x1bU)))) 
                    >> 0x15U) | ((IData)(((((QData)((IData)(
                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[5U])) 
                                            << 0x25U) 
                                           | (((QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[4U])) 
                                               << 5U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[3U])) 
                                                 >> 0x1bU))) 
                                          >> 0x20U)) 
                                 << 0xbU));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_misaligned_exception[4U] 
                = ((0xfffff800U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_misaligned_exception[4U]) 
                   | ((IData)(((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[5U])) 
                                 << 0x25U) | (((QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[4U])) 
                                               << 5U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[3U])) 
                                                 >> 0x1bU))) 
                               >> 0x20U)) >> 0x15U));
        } else if ((2U == (0xfU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U] 
                                   >> 0xbU)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_misaligned_exception[4U] 
                = (0x7800U | (0x7ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_misaligned_exception[4U]));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_misaligned_exception[5U] = 0U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_misaligned_exception[6U] = 0U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_misaligned_exception[0U] 
                = (1U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_misaligned_exception[0U]);
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_misaligned_exception[2U] 
                = ((0x7ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_misaligned_exception[2U]) 
                   | ((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[5U])) 
                                << 0x25U) | (((QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[4U])) 
                                              << 5U) 
                                             | ((QData)((IData)(
                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[3U])) 
                                                >> 0x1bU)))) 
                      << 0xbU));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_misaligned_exception[3U] 
                = (((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[5U])) 
                              << 0x25U) | (((QData)((IData)(
                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[4U])) 
                                            << 5U) 
                                           | ((QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[3U])) 
                                              >> 0x1bU)))) 
                    >> 0x15U) | ((IData)(((((QData)((IData)(
                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[5U])) 
                                            << 0x25U) 
                                           | (((QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[4U])) 
                                               << 5U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[3U])) 
                                                 >> 0x1bU))) 
                                          >> 0x20U)) 
                                 << 0xbU));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_misaligned_exception[4U] 
                = ((0xfffff800U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_misaligned_exception[4U]) 
                   | ((IData)(((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[5U])) 
                                 << 0x25U) | (((QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[4U])) 
                                               << 5U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[3U])) 
                                                 >> 0x1bU))) 
                               >> 0x20U)) >> 0x15U));
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x3fU][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x3fU][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x3fU][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x3fU][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x3eU][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x3eU][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x3eU][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x3eU][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x3dU][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x3dU][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x3dU][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x3dU][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x3cU][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x3cU][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x3cU][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x3cU][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x3bU][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x3bU][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x3bU][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x3bU][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x3aU][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x3aU][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x3aU][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x3aU][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x39U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x39U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x39U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x39U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x38U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x38U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x38U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x38U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x37U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x37U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x37U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x37U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x36U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x36U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x36U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x36U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x35U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x35U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x35U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x35U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x34U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x34U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x34U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x34U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x33U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x33U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x33U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x33U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x32U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x32U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x32U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x32U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x31U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x31U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x31U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x31U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x30U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x30U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x30U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x30U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x2fU][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x2fU][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x2fU][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x2fU][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x2eU][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x2eU][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x2eU][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x2eU][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x2dU][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x2dU][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x2dU][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x2dU][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x2cU][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x2cU][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x2cU][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x2cU][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x2bU][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x2bU][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x2bU][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x2bU][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x2aU][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x2aU][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x2aU][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x2aU][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x29U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x29U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x29U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x29U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x28U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x28U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x28U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x28U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x27U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x27U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x27U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x27U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x26U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x26U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x26U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x26U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x25U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x25U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x25U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x25U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x24U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x24U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x24U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x24U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x23U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x23U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x23U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x23U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x22U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x22U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x22U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x22U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x21U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x21U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x21U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x21U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x20U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x20U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x20U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x20U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x1fU][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x1fU][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x1fU][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x1fU][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x1eU][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x1eU][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x1eU][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x1eU][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x1dU][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x1dU][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x1dU][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x1dU][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x1cU][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x1cU][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x1cU][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x1cU][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x1bU][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x1bU][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x1bU][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x1bU][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x1aU][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x1aU][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x1aU][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x1aU][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x19U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x19U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x19U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x19U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x18U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x18U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x18U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x18U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x17U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x17U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x17U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x17U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x16U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x16U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x16U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x16U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x15U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x15U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x15U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x15U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x14U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x14U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x14U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x14U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x13U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x13U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x13U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x13U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x12U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x12U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x12U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x12U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x11U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x11U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x11U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x11U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x10U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x10U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0x10U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0x10U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0xfU][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0xfU][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0xfU][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0xfU][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0xeU][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0xeU][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0xeU][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0xeU][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0xdU][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0xdU][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0xdU][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0xdU][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0xcU][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0xcU][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0xcU][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0xcU][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0xbU][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0xbU][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0xbU][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0xbU][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0xaU][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0xaU][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0xaU][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0xaU][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[9U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [9U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[9U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [9U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[8U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [8U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[8U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [8U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[7U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [7U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[7U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [7U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[6U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [6U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[6U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [6U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[5U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [5U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[5U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [5U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[4U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [4U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[4U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [4U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[3U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [3U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[3U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [3U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[2U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [2U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[2U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [2U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[1U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [1U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[1U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [1U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[0U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
        [0U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__gen_asic_bht__DOT__saturation_counter 
        = (3U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_q
           [(0x3fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[2U] 
                      >> 7U))][(1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[2U] 
                                      >> 6U))]);
    if ((IData)(((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_update[2U] 
                  >> 1U) & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__debug_mode_q))))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[(0x3fU 
                                                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[2U] 
                                                                                >> 7U))][(1U 
                                                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[2U] 
                                                                                >> 6U))] 
            = (4U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d
               [(0x3fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[2U] 
                          >> 7U))][(1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[2U] 
                                          >> 6U))]);
        if ((3U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__gen_asic_bht__DOT__saturation_counter))) {
            if ((1U & (~ vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_update[0U]))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[(0x3fU 
                                                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[2U] 
                                                                                >> 7U))][(1U 
                                                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[2U] 
                                                                                >> 6U))] 
                    = ((4U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d
                        [(0x3fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[2U] 
                                   >> 7U))][(1U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[2U] 
                                                   >> 6U))]) 
                       | (3U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__gen_asic_bht__DOT__saturation_counter) 
                                - (IData)(1U))));
            }
        } else if ((0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__gen_asic_bht__DOT__saturation_counter))) {
            if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_update[0U])) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[(0x3fU 
                                                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[2U] 
                                                                                >> 7U))][(1U 
                                                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[2U] 
                                                                                >> 6U))] 
                    = ((4U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d
                        [(0x3fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[2U] 
                                   >> 7U))][(1U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[2U] 
                                                   >> 6U))]) 
                       | (3U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__gen_asic_bht__DOT__saturation_counter))));
            }
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d[(0x3fU 
                                                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[2U] 
                                                                                >> 7U))][(1U 
                                                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[2U] 
                                                                                >> 6U))] 
                = ((4U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__bht_d
                    [(0x3fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[2U] 
                               >> 7U))][(1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[2U] 
                                               >> 6U))]) 
                   | (3U & ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_update[0U])
                             ? ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__gen_asic_bht__DOT__saturation_counter))
                             : ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__bht_gen__DOT__i_bht__DOT__gen_asic_bht__DOT__saturation_counter) 
                                - (IData)(1U)))));
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[0xfU][1U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [0xfU][1U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[0xfU][1U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [0xfU][1U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[0xfU][1U][2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [0xfU][1U][2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[0xfU][0U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [0xfU][0U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[0xfU][0U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [0xfU][0U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[0xfU][0U][2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [0xfU][0U][2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[0xeU][1U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [0xeU][1U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[0xeU][1U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [0xeU][1U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[0xeU][1U][2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [0xeU][1U][2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[0xeU][0U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [0xeU][0U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[0xeU][0U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [0xeU][0U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[0xeU][0U][2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [0xeU][0U][2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[0xdU][1U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [0xdU][1U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[0xdU][1U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [0xdU][1U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[0xdU][1U][2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [0xdU][1U][2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[0xdU][0U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [0xdU][0U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[0xdU][0U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [0xdU][0U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[0xdU][0U][2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [0xdU][0U][2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[0xcU][1U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [0xcU][1U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[0xcU][1U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [0xcU][1U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[0xcU][1U][2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [0xcU][1U][2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[0xcU][0U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [0xcU][0U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[0xcU][0U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [0xcU][0U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[0xcU][0U][2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [0xcU][0U][2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[0xbU][1U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [0xbU][1U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[0xbU][1U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [0xbU][1U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[0xbU][1U][2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [0xbU][1U][2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[0xbU][0U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [0xbU][0U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[0xbU][0U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [0xbU][0U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[0xbU][0U][2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [0xbU][0U][2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[0xaU][1U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [0xaU][1U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[0xaU][1U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [0xaU][1U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[0xaU][1U][2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [0xaU][1U][2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[0xaU][0U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [0xaU][0U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[0xaU][0U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [0xaU][0U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[0xaU][0U][2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [0xaU][0U][2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[9U][1U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [9U][1U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[9U][1U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [9U][1U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[9U][1U][2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [9U][1U][2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[9U][0U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [9U][0U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[9U][0U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [9U][0U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[9U][0U][2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [9U][0U][2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[8U][1U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [8U][1U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[8U][1U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [8U][1U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[8U][1U][2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [8U][1U][2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[8U][0U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [8U][0U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[8U][0U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [8U][0U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[8U][0U][2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [8U][0U][2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[7U][1U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [7U][1U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[7U][1U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [7U][1U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[7U][1U][2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [7U][1U][2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[7U][0U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [7U][0U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[7U][0U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [7U][0U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[7U][0U][2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [7U][0U][2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[6U][1U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [6U][1U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[6U][1U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [6U][1U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[6U][1U][2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [6U][1U][2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[6U][0U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [6U][0U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[6U][0U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [6U][0U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[6U][0U][2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [6U][0U][2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[5U][1U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [5U][1U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[5U][1U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [5U][1U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[5U][1U][2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [5U][1U][2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[5U][0U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [5U][0U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[5U][0U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [5U][0U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[5U][0U][2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [5U][0U][2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[4U][1U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [4U][1U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[4U][1U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [4U][1U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[4U][1U][2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [4U][1U][2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[4U][0U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [4U][0U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[4U][0U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [4U][0U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[4U][0U][2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [4U][0U][2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[3U][1U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [3U][1U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[3U][1U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [3U][1U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[3U][1U][2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [3U][1U][2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[3U][0U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [3U][0U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[3U][0U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [3U][0U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[3U][0U][2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [3U][0U][2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[2U][1U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [2U][1U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[2U][1U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [2U][1U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[2U][1U][2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [2U][1U][2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[2U][0U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [2U][0U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[2U][0U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [2U][0U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[2U][0U][2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [2U][0U][2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[1U][1U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [1U][1U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[1U][1U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [1U][1U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[1U][1U][2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [1U][1U][2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[1U][0U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [1U][0U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[1U][0U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [1U][0U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[1U][0U][2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [1U][0U][2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[0U][1U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [0U][1U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[0U][1U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [0U][1U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[0U][1U][2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [0U][1U][2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[0U][0U][0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [0U][0U][0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[0U][0U][1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [0U][0U][1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[0U][0U][2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_q
        [0U][0U][2U];
    if ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_update[4U] 
         & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__debug_mode_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[(0xfU 
                                                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[2U] 
                                                                                >> 7U))][(1U 
                                                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[2U] 
                                                                                >> 6U))][2U] 
            = (1U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d
               [(0xfU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[2U] 
                         >> 7U))][(1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[2U] 
                                         >> 6U))][2U]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[(0xfU 
                                                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[2U] 
                                                                                >> 7U))][(1U 
                                                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[2U] 
                                                                                >> 6U))][0U] 
            = (IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_update[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_update[0U]))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_gen__DOT__i_btb__DOT__gen_asic_btb__DOT__btb_d[(0xfU 
                                                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[2U] 
                                                                                >> 7U))][(1U 
                                                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[2U] 
                                                                                >> 6U))][1U] 
            = (IData)(((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_update[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__btb_update[0U]))) 
                       >> 0x20U));
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_lu_hit = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_content = 0ULL;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_is_page = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_asid = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_stage = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_asid 
        = ((0xfffeU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_asid)) 
           | (1U & (((((0xffffU & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__satp_q 
                                           >> 0x2cU))) 
                       == (0xffffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__tags_q[1U] 
                                      >> 0xdU))) | 
                      (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__content_q[2U] 
                       >> 5U)) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__enable_translation_csr_ex)) 
                    | (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__enable_translation_csr_ex)))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_stage 
        = ((0xfffeU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_stage)) 
           | (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__tags_q[0U] 
                    >> 1U)));
    if ((1U & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__tags_q[0U] 
                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_asid)) 
               & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_stage)))) {
        if ((0U != (7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__level_match)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_is_page 
                = (3U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__is_page_o);
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_content 
                = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__content_q[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__content_q[2U])));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_lu_hit = 1U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit 
                = (1U | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit));
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_asid 
        = ((0xfffdU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_asid)) 
           | (2U & ((((((0xffffU & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__satp_q 
                                            >> 0x2cU))) 
                        == (0xffffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__tags_q[3U] 
                                       >> 0xaU))) << 1U) 
                      | (0xffffffeU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__content_q[6U] 
                                       >> 4U))) & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__enable_translation_csr_ex) 
                                                   << 1U)) 
                    | ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__enable_translation_csr_ex)) 
                       << 1U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_stage 
        = ((0xfffdU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_stage)) 
           | (2U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__tags_q[1U] 
                    >> 0x1dU)));
    if ((1U & (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__tags_q[1U] 
                 >> 0x1dU) & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_asid) 
                              >> 1U)) & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_stage) 
                                         >> 1U)))) {
        if ((0U != (7U & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__level_match 
                                  >> 3U))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_is_page 
                = (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__is_page_o 
                         >> 2U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_content 
                = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__content_q[7U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__content_q[6U])));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_lu_hit = 1U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit 
                = (2U | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit));
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_asid 
        = ((0xfffbU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_asid)) 
           | (4U & ((((((0xffffU & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__satp_q 
                                            >> 0x2cU))) 
                        == (0xffffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__tags_q[5U] 
                                       >> 7U))) << 2U) 
                      | (0x1ffffffcU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__content_q[0xaU] 
                                        >> 3U))) & 
                     ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__enable_translation_csr_ex) 
                      << 2U)) | ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__enable_translation_csr_ex)) 
                                 << 2U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_stage 
        = ((0xfffbU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_stage)) 
           | (4U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__tags_q[3U] 
                    >> 0x19U)));
    if ((1U & (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__tags_q[3U] 
                 >> 0x1aU) & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_asid) 
                              >> 2U)) & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_stage) 
                                         >> 2U)))) {
        if ((0U != (7U & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__level_match 
                                  >> 6U))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_is_page 
                = (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__is_page_o 
                         >> 4U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_content 
                = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__content_q[0xbU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__content_q[0xaU])));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_lu_hit = 1U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit 
                = (4U | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit));
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_asid 
        = ((0xfff7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_asid)) 
           | (8U & ((((((0xffffU & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__satp_q 
                                            >> 0x2cU))) 
                        == (0xffffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__tags_q[7U] 
                                       >> 4U))) << 3U) 
                      | (0x3ffffff8U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__content_q[0xeU] 
                                        >> 2U))) & 
                     ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__enable_translation_csr_ex) 
                      << 3U)) | ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__enable_translation_csr_ex)) 
                                 << 3U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_stage 
        = ((0xfff7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_stage)) 
           | (8U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__tags_q[5U] 
                    >> 0x15U)));
    if ((1U & (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__tags_q[5U] 
                 >> 0x17U) & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_asid) 
                              >> 3U)) & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_stage) 
                                         >> 3U)))) {
        if ((0U != (7U & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__level_match 
                                  >> 9U))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_is_page 
                = (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__is_page_o 
                         >> 6U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_content 
                = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__content_q[0xfU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__content_q[0xeU])));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_lu_hit = 1U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit 
                = (8U | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit));
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_asid 
        = ((0xffefU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_asid)) 
           | (0x10U & ((((((0xffffU & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__satp_q 
                                               >> 0x2cU))) 
                           == (0xffffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__tags_q[9U] 
                                          >> 1U))) 
                          << 4U) | (0x7ffffff0U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__content_q[0x12U] 
                                                   >> 1U))) 
                        & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__enable_translation_csr_ex) 
                           << 4U)) | ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__enable_translation_csr_ex)) 
                                      << 4U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_stage 
        = ((0xffefU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_stage)) 
           | (0x10U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__tags_q[7U] 
                       >> 0x11U)));
    if ((1U & (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__tags_q[7U] 
                 >> 0x14U) & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_asid) 
                              >> 4U)) & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_stage) 
                                         >> 4U)))) {
        if ((0U != (7U & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__level_match 
                                  >> 0xcU))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_is_page 
                = (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__is_page_o 
                         >> 8U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_content 
                = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__content_q[0x13U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__content_q[0x12U])));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_lu_hit = 1U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit 
                = (0x10U | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit));
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_asid 
        = ((0xffdfU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_asid)) 
           | (0x20U & ((((((0xffffU & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__satp_q 
                                               >> 0x2cU))) 
                           == (0xffffU & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__tags_q[0xbU] 
                                           << 2U) | 
                                          (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__tags_q[0xaU] 
                                           >> 0x1eU)))) 
                          << 5U) | (0xffffffe0U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__content_q[0x16U])) 
                        & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__enable_translation_csr_ex) 
                           << 5U)) | ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__enable_translation_csr_ex)) 
                                      << 5U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_stage 
        = ((0xffdfU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_stage)) 
           | (0x20U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__tags_q[9U] 
                       >> 0xdU)));
    if ((1U & (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__tags_q[9U] 
                 >> 0x11U) & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_asid) 
                              >> 5U)) & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_stage) 
                                         >> 5U)))) {
        if ((0U != (7U & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__level_match 
                                  >> 0xfU))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_is_page 
                = (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__is_page_o 
                         >> 0xaU));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_content 
                = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__content_q[0x17U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__content_q[0x16U])));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_lu_hit = 1U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit 
                = (0x20U | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit));
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_asid 
        = ((0xffbfU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_asid)) 
           | (0x40U & ((((((0xffffU & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__satp_q 
                                               >> 0x2cU))) 
                           == (0xffffU & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__tags_q[0xdU] 
                                           << 5U) | 
                                          (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__tags_q[0xcU] 
                                           >> 0x1bU)))) 
                          << 6U) | (0xffffffc0U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__content_q[0x1aU] 
                                                   << 1U))) 
                        & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__enable_translation_csr_ex) 
                           << 6U)) | ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__enable_translation_csr_ex)) 
                                      << 6U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_stage 
        = ((0xffbfU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_stage)) 
           | (0x40U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__tags_q[0xbU] 
                       >> 9U)));
    if ((1U & (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__tags_q[0xbU] 
                 >> 0xeU) & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_asid) 
                             >> 6U)) & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_stage) 
                                        >> 6U)))) {
        if ((0U != (7U & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__level_match 
                                  >> 0x12U))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_is_page 
                = (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__is_page_o 
                         >> 0xcU));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_content 
                = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__content_q[0x1bU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__content_q[0x1aU])));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_lu_hit = 1U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit 
                = (0x40U | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit));
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_asid 
        = ((0xff7fU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_asid)) 
           | (0x80U & ((((((0xffffU & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__satp_q 
                                               >> 0x2cU))) 
                           == (0xffffU & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__tags_q[0xfU] 
                                           << 8U) | 
                                          (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__tags_q[0xeU] 
                                           >> 0x18U)))) 
                          << 7U) | (0xffffff80U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__content_q[0x1eU] 
                                                   << 2U))) 
                        & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__enable_translation_csr_ex) 
                           << 7U)) | ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__enable_translation_csr_ex)) 
                                      << 7U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_stage 
        = ((0xff7fU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_stage)) 
           | (0x80U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__tags_q[0xdU] 
                       >> 5U)));
    if ((1U & (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__tags_q[0xdU] 
                 >> 0xbU) & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_asid) 
                             >> 7U)) & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_stage) 
                                        >> 7U)))) {
        if ((0U != (7U & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__level_match 
                                  >> 0x15U))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_is_page 
                = (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__is_page_o 
                         >> 0xeU));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_content 
                = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__content_q[0x1fU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__content_q[0x1eU])));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_lu_hit = 1U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit 
                = (0x80U | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit));
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_asid 
        = ((0xfeffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_asid)) 
           | (0x100U & ((((((0xffffU & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__satp_q 
                                                >> 0x2cU))) 
                            == (0xffffU & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__tags_q[0x11U] 
                                            << 0xbU) 
                                           | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__tags_q[0x10U] 
                                              >> 0x15U)))) 
                           << 8U) | (0xffffff00U & 
                                     (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__content_q[0x22U] 
                                      << 3U))) & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__enable_translation_csr_ex) 
                                                  << 8U)) 
                        | ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__enable_translation_csr_ex)) 
                           << 8U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_stage 
        = ((0xfeffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_stage)) 
           | (0x100U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__tags_q[0xfU] 
                        >> 1U)));
    if ((1U & (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__tags_q[0xfU] 
                 >> 8U) & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_asid) 
                           >> 8U)) & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_stage) 
                                      >> 8U)))) {
        if ((0U != (7U & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__level_match 
                                  >> 0x18U))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_is_page 
                = (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__is_page_o 
                         >> 0x10U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_content 
                = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__content_q[0x23U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__content_q[0x22U])));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_lu_hit = 1U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit 
                = (0x100U | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit));
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_asid 
        = ((0xfdffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_asid)) 
           | (0x200U & ((((((0xffffU & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__satp_q 
                                                >> 0x2cU))) 
                            == (0xffffU & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__tags_q[0x13U] 
                                            << 0xeU) 
                                           | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__tags_q[0x12U] 
                                              >> 0x12U)))) 
                           << 9U) | (0xfffffe00U & 
                                     (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__content_q[0x26U] 
                                      << 4U))) & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__enable_translation_csr_ex) 
                                                  << 9U)) 
                        | ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__enable_translation_csr_ex)) 
                           << 9U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_stage 
        = ((0xfdffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_stage)) 
           | (0x200U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__tags_q[0x11U] 
                        << 3U)));
    if ((1U & (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__tags_q[0x11U] 
                 >> 5U) & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_asid) 
                           >> 9U)) & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_stage) 
                                      >> 9U)))) {
        if ((0U != (7U & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__level_match 
                                  >> 0x1bU))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_is_page 
                = (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__is_page_o 
                         >> 0x12U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_content 
                = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__content_q[0x27U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__content_q[0x26U])));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_lu_hit = 1U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit 
                = (0x200U | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit));
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_asid 
        = ((0xfbffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_asid)) 
           | (0x400U & ((((((0xffffU & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__satp_q 
                                                >> 0x2cU))) 
                            == (0xffffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__tags_q[0x14U] 
                                           >> 0xfU))) 
                           << 0xaU) | (0xfffffc00U 
                                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__content_q[0x2aU] 
                                          << 5U))) 
                         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__enable_translation_csr_ex) 
                            << 0xaU)) | ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__enable_translation_csr_ex)) 
                                         << 0xaU))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_stage 
        = ((0xfbffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_stage)) 
           | (0x400U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__tags_q[0x13U] 
                        << 7U)));
    if ((1U & (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__tags_q[0x13U] 
                 >> 2U) & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_asid) 
                           >> 0xaU)) & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_stage) 
                                        >> 0xaU)))) {
        if ((0U != (7U & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__level_match 
                                  >> 0x1eU))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_is_page 
                = (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__is_page_o 
                         >> 0x14U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_content 
                = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__content_q[0x2bU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__content_q[0x2aU])));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_lu_hit = 1U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit 
                = (0x400U | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit));
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_asid 
        = ((0xf7ffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_asid)) 
           | (0x800U & ((((((0xffffU & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__satp_q 
                                                >> 0x2cU))) 
                            == (0xffffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__tags_q[0x16U] 
                                           >> 0xcU))) 
                           << 0xbU) | (0xfffff800U 
                                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__content_q[0x2eU] 
                                          << 6U))) 
                         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__enable_translation_csr_ex) 
                            << 0xbU)) | ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__enable_translation_csr_ex)) 
                                         << 0xbU))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_stage 
        = ((0xf7ffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_stage)) 
           | (0x800U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__tags_q[0x15U] 
                        << 0xbU)));
    if ((((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__tags_q[0x14U] 
           >> 0x1fU) & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_asid) 
                        >> 0xbU)) & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_stage) 
                                     >> 0xbU))) {
        if ((0U != (7U & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__level_match 
                                  >> 0x21U))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_is_page 
                = (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__is_page_o 
                         >> 0x16U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_content 
                = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__content_q[0x2fU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__content_q[0x2eU])));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_lu_hit = 1U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit 
                = (0x800U | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit));
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_asid 
        = ((0xefffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_asid)) 
           | (0x1000U & ((((((0xffffU & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__satp_q 
                                                 >> 0x2cU))) 
                             == (0xffffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__tags_q[0x18U] 
                                            >> 9U))) 
                            << 0xcU) | (0xfffff000U 
                                        & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__content_q[0x32U] 
                                           << 7U))) 
                          & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__enable_translation_csr_ex) 
                             << 0xcU)) | ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__enable_translation_csr_ex)) 
                                          << 0xcU))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_stage 
        = ((0xefffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_stage)) 
           | (0x1000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__tags_q[0x16U] 
                         >> 0x11U)));
    if ((1U & (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__tags_q[0x16U] 
                 >> 0x1cU) & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_asid) 
                              >> 0xcU)) & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_stage) 
                                           >> 0xcU)))) {
        if ((0U != (7U & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__level_match 
                                  >> 0x24U))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_is_page 
                = (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__is_page_o 
                         >> 0x18U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_content 
                = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__content_q[0x33U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__content_q[0x32U])));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_lu_hit = 1U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit 
                = (0x1000U | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit));
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_asid 
        = ((0xdfffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_asid)) 
           | (0x2000U & ((((((0xffffU & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__satp_q 
                                                 >> 0x2cU))) 
                             == (0xffffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__tags_q[0x1aU] 
                                            >> 6U))) 
                            << 0xdU) | (0xffffe000U 
                                        & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__content_q[0x36U] 
                                           << 8U))) 
                          & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__enable_translation_csr_ex) 
                             << 0xdU)) | ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__enable_translation_csr_ex)) 
                                          << 0xdU))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_stage 
        = ((0xdfffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_stage)) 
           | (0x2000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__tags_q[0x18U] 
                         >> 0xdU)));
    if ((1U & (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__tags_q[0x18U] 
                 >> 0x19U) & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_asid) 
                              >> 0xdU)) & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_stage) 
                                           >> 0xdU)))) {
        if ((0U != (7U & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__level_match 
                                  >> 0x27U))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_is_page 
                = (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__is_page_o 
                         >> 0x1aU));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_content 
                = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__content_q[0x37U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__content_q[0x36U])));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_lu_hit = 1U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit 
                = (0x2000U | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit));
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_asid 
        = ((0xbfffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_asid)) 
           | (0x4000U & ((((((0xffffU & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__satp_q 
                                                 >> 0x2cU))) 
                             == (0xffffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__tags_q[0x1cU] 
                                            >> 3U))) 
                            << 0xeU) | (0xffffc000U 
                                        & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__content_q[0x3aU] 
                                           << 9U))) 
                          & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__enable_translation_csr_ex) 
                             << 0xeU)) | ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__enable_translation_csr_ex)) 
                                          << 0xeU))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_stage 
        = ((0xbfffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_stage)) 
           | (0x4000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__tags_q[0x1aU] 
                         >> 9U)));
    if ((1U & (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__tags_q[0x1aU] 
                 >> 0x16U) & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_asid) 
                              >> 0xeU)) & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_stage) 
                                           >> 0xeU)))) {
        if ((0U != (7U & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__level_match 
                                  >> 0x2aU))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_is_page 
                = (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__is_page_o 
                         >> 0x1cU));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_content 
                = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__content_q[0x3bU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__content_q[0x3aU])));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_lu_hit = 1U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit 
                = (0x4000U | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit));
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_asid 
        = ((0x7fffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_asid)) 
           | (0x8000U & ((((((0xffffU & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__satp_q 
                                                 >> 0x2cU))) 
                             == (0xffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__tags_q[0x1eU])) 
                            << 0xfU) | (0xffff8000U 
                                        & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__content_q[0x3eU] 
                                           << 0xaU))) 
                          & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__enable_translation_csr_ex) 
                             << 0xfU)) | ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__enable_translation_csr_ex)) 
                                          << 0xfU))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_stage 
        = ((0x7fffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_stage)) 
           | (0x8000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__tags_q[0x1cU] 
                         >> 5U)));
    if ((((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__tags_q[0x1cU] 
           >> 0x13U) & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_asid) 
                        >> 0xfU)) & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__match_stage) 
                                     >> 0xfU))) {
        if ((0U != (7U & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__level_match 
                                  >> 0x2dU))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_is_page 
                = (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__is_page_o 
                   >> 0x1eU);
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_content 
                = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__content_q[0x3fU])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__content_q[0x3eU])));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_lu_hit = 1U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit 
                = (0x8000U | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit));
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_shared_tlb__DOT____VdfgTmp_hd364da4b__0 
        = ((5U >= (7U & ((IData)(3U) * vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_shared_tlb__DOT__i_req_q))) 
           && (1U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_shared_tlb__DOT__v_st_enbl) 
                     >> (7U & ((IData)(3U) * vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_shared_tlb__DOT__i_req_q)))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_req[0U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_req[1U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_req[2U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_req[3U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_req[4U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_req[5U] = 0U;
    if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_insn_queue_empty)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_req[0U] 
            = ((0xfffffe00U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_insn_queue_o[2U] 
                               << 6U)) | ((0x1c0U & 
                                           (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__fcsr_q 
                                            << 1U)) 
                                          | (0x38U 
                                             & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_insn_queue_o[0U] 
                                                << 3U))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_req[1U] 
            = (((0x1c0U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_insn_queue_o[3U] 
                           << 6U)) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_insn_queue_o[2U] 
                                      >> 0x1aU)) | 
               (0xfffffe00U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_insn_queue_o[3U] 
                               << 6U)));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_req[2U] 
            = (((0x1c0U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_insn_queue_o[4U] 
                           << 6U)) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_insn_queue_o[3U] 
                                      >> 0x1aU)) | 
               (0xfffffe00U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_insn_queue_o[4U] 
                               << 6U)));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_req[3U] 
            = (((0x1c0U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_insn_queue_o[5U] 
                           << 6U)) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_insn_queue_o[4U] 
                                      >> 0x1aU)) | 
               (0xfffffe00U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_insn_queue_o[5U] 
                               << 6U)));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_req[4U] 
            = (((IData)((QData)((IData)(((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_insn_queue_o[1U] 
                                          << 0x1dU) 
                                         | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_insn_queue_o[0U] 
                                            >> 3U))))) 
                << 9U) | ((0x1c0U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_insn_queue_o[6U] 
                                     << 6U)) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_insn_queue_o[5U] 
                                                >> 0x1aU)));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_req[5U] 
            = (((IData)((QData)((IData)(((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_insn_queue_o[1U] 
                                          << 0x1dU) 
                                         | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_insn_queue_o[0U] 
                                            >> 3U))))) 
                >> 0x17U) | ((IData)(((QData)((IData)(
                                                      ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_insn_queue_o[1U] 
                                                        << 0x1dU) 
                                                       | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_insn_queue_o[0U] 
                                                          >> 3U)))) 
                                      >> 0x20U)) << 9U));
    }
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit) 
         & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[2U])) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__lvl = 4U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__new_index = 0xffffffffU;
    }
    if ((IData)((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit) 
                  >> 1U) & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[2U]))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__lvl = 4U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__new_index = 0xfffffffeU;
    }
    if ((IData)((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit) 
                  >> 2U) & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[2U]))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__lvl = 4U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__new_index = 0xffffffffU;
    }
    if ((IData)((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit) 
                  >> 3U) & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[2U]))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__lvl = 4U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__new_index = 0xfffffffeU;
    }
    if ((IData)((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit) 
                  >> 4U) & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[2U]))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__lvl = 4U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__new_index = 0xffffffffU;
    }
    if ((IData)((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit) 
                  >> 5U) & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[2U]))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__lvl = 4U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__new_index = 0xfffffffeU;
    }
    if ((IData)((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit) 
                  >> 6U) & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[2U]))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__lvl = 4U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__new_index = 0xffffffffU;
    }
    if ((IData)((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit) 
                  >> 7U) & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[2U]))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__lvl = 4U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__new_index = 0xfffffffeU;
    }
    if ((IData)((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit) 
                  >> 8U) & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[2U]))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__lvl = 4U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__new_index = 0xffffffffU;
    }
    if ((IData)((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit) 
                  >> 9U) & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[2U]))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__lvl = 4U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__new_index = 0xfffffffeU;
    }
    if ((IData)((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit) 
                  >> 0xaU) & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[2U]))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__lvl = 4U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__new_index = 0xffffffffU;
    }
    if ((IData)((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit) 
                  >> 0xbU) & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[2U]))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__lvl = 4U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__new_index = 0xfffffffeU;
    }
    if ((IData)((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit) 
                  >> 0xcU) & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[2U]))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__lvl = 4U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__new_index = 0xffffffffU;
    }
    if ((IData)((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit) 
                  >> 0xdU) & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[2U]))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__lvl = 4U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__new_index = 0xfffffffeU;
    }
    if ((IData)((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit) 
                  >> 0xeU) & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[2U]))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__lvl = 4U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__new_index = 0xffffffffU;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_q;
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit) 
         & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[2U])) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__shift = 1U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
            = (3U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
            = (8U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__idx_base = 7U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
            = (0x80U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n);
    }
    if ((IData)((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit) 
                  >> 1U) & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[2U]))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
            = (3U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
            = (8U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__idx_base = 7U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__shift = 1U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
            = (0x3fffff7fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n);
    }
    if ((IData)((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit) 
                  >> 2U) & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[2U]))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
            = (3U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
            = (0x3ffffff7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__idx_base = 7U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__shift = 1U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
            = (0x100U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n);
    }
    if ((IData)((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit) 
                  >> 3U) & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[2U]))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
            = (3U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
            = (0x3ffffff7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__idx_base = 7U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__shift = 1U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
            = (0x3ffffeffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n);
    }
    if ((IData)((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit) 
                  >> 4U) & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[2U]))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
            = (1U | (0x3ffffffcU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
            = (0x10U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__idx_base = 7U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__shift = 1U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
            = (0x200U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n);
    }
    if ((IData)((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit) 
                  >> 5U) & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[2U]))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
            = (1U | (0x3ffffffcU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
            = (0x10U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__idx_base = 7U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__shift = 1U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
            = (0x3ffffdffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n);
    }
    if ((IData)((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit) 
                  >> 6U) & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[2U]))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
            = (1U | (0x3ffffffcU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
            = (0x3fffffefU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__idx_base = 7U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__shift = 1U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
            = (0x400U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n);
    }
    if ((IData)((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit) 
                  >> 7U) & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[2U]))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
            = (1U | (0x3ffffffcU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
            = (0x3fffffefU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__idx_base = 7U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__shift = 1U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
            = (0x3ffffbffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n);
    }
    if ((IData)((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit) 
                  >> 8U) & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[2U]))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
            = (0x3ffffffeU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
            = (4U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
            = (0x20U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__idx_base = 7U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__shift = 1U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
            = (0x800U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n);
    }
    if ((IData)((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit) 
                  >> 9U) & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[2U]))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
            = (0x3ffffffeU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
            = (4U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
            = (0x20U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__idx_base = 7U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__shift = 1U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
            = (0x3ffff7ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n);
    }
    if ((IData)((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit) 
                  >> 0xaU) & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[2U]))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
            = (0x3ffffffeU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
            = (4U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
            = (0x3fffffdfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__idx_base = 7U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__shift = 1U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
            = (0x1000U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n);
    }
    if ((IData)((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit) 
                  >> 0xbU) & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[2U]))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
            = (0x3ffffffeU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
            = (4U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
            = (0x3fffffdfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__idx_base = 7U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__shift = 1U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
            = (0x3fffefffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n);
    }
    if ((IData)((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit) 
                  >> 0xcU) & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[2U]))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
            = (0x3ffffffeU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
            = (0x3ffffffbU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
            = (0x40U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__idx_base = 7U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__shift = 1U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
            = (0x2000U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n);
    }
    if ((IData)((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit) 
                  >> 0xdU) & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[2U]))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
            = (0x3ffffffeU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
            = (0x3ffffffbU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
            = (0x40U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__idx_base = 7U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__shift = 1U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
            = (0x3fffdfffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n);
    }
    if ((IData)((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit) 
                  >> 0xeU) & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[2U]))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
            = (0x3ffffffeU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
            = (0x3ffffffbU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
            = (0x3fffffbfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__idx_base = 7U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__shift = 1U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
            = (0x4000U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n);
    }
    if ((IData)((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__lu_hit) 
                  >> 0xfU) & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[2U]))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__lvl = 4U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__new_index = 0xfffffffeU;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
            = (0x3ffffffeU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
            = (0x3ffffffbU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
            = (0x3fffffbfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__idx_base = 7U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_replacement__DOT__unnamedblk3__DOT__unnamedblk4__DOT__shift = 1U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n 
            = (0x3fffbfffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_itlb__DOT__plru_tree_n);
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[0U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[1U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[2U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[3U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[4U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[5U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[6U] 
        = ((IData)((0xffffffffffffffULL & (((QData)((IData)(
                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[0U]))))) 
           << 0xbU);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[7U] 
        = (((IData)((0xffffffffffffffULL & (((QData)((IData)(
                                                             vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[0U]))))) 
            >> 0x15U) | ((IData)(((0xffffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[0U])))) 
                                  >> 0x20U)) << 0xbU));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[8U] 
        = ((8U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[2U] 
                  << 3U)) | ((IData)(((0xffffffffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[0U])))) 
                                      >> 0x20U)) >> 0x15U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__iaccess_err 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[2U] 
            & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__enable_translation_csr_ex)) 
           & (((0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__priv_lvl)) 
               & (~ (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_content 
                             >> 4U)))) | ((1U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__priv_lvl)) 
                                          & (IData)(
                                                    (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_content 
                                                     >> 4U)))));
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__enable_translation_csr_ex) {
        if ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[2U] 
             & (~ ((0x3ffffffU == (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[1U] 
                                   >> 6U)) | (~ (IData)(
                                                        (0U 
                                                         != 
                                                         (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[1U] 
                                                          >> 6U)))))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[4U] 
                = (0x6000U | (0x7ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[4U]));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[5U] = 0U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[6U] 
                = (0xfffff800U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[6U]);
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[0U] 
                = (1U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[0U]);
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[2U] 
                = ((0x7ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[2U]) 
                   | ((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[0U])))) 
                      << 0xbU));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[3U] 
                = (((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[1U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[0U])))) 
                    >> 0x15U) | ((IData)(((((QData)((IData)(
                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[0U]))) 
                                          >> 0x20U)) 
                                 << 0xbU));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[4U] 
                = ((0xfffff800U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[4U]) 
                   | ((IData)(((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[0U]))) 
                               >> 0x20U)) >> 0x15U));
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[6U] 
            = ((0x7ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[6U]) 
               | ((IData)(((0xfffffffffff000ULL & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_content 
                                                   << 2U)) 
                           | (QData)((IData)((0xfffU 
                                              & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[0U]))))) 
                  << 0xbU));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[7U] 
            = (((IData)(((0xfffffffffff000ULL & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_content 
                                                 << 2U)) 
                         | (QData)((IData)((0xfffU 
                                            & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[0U]))))) 
                >> 0x15U) | ((IData)((((0xfffffffffff000ULL 
                                        & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_content 
                                           << 2U)) 
                                       | (QData)((IData)(
                                                         (0xfffU 
                                                          & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[0U])))) 
                                      >> 0x20U)) << 0xbU));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[8U] 
            = (0xfU & ((IData)((((0xfffffffffff000ULL 
                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_content 
                                     << 2U)) | (QData)((IData)(
                                                               (0xfffU 
                                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[0U])))) 
                                >> 0x20U)) >> 0x15U));
        if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_is_page))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[6U] 
                = ((0x7fffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[6U]) 
                   | (0xff800000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[0U] 
                                     << 0xbU)));
        }
        if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_is_page))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[6U] 
                = ((0x7fffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[6U]) 
                   | (0xff800000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[0U] 
                                     << 0xbU)));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[7U] 
                = ((0xfffffe00U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[7U]) 
                   | (0x1ffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[0U] 
                                >> 0x15U)));
        }
        if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__itlb_lu_hit) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[8U] 
                = ((7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[8U]) 
                   | (8U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[2U] 
                            << 3U)));
            if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__iaccess_err) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[4U] 
                    = (0x6000U | (0x7ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[4U]));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[5U] = 0U;
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[6U] 
                    = (0xfffff800U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[6U]);
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[0U] 
                    = (1U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[0U]);
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[2U] 
                    = ((0x7ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[2U]) 
                       | ((IData)((((QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[0U])))) 
                          << 0xbU));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[3U] 
                    = (((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[0U])))) 
                        >> 0x15U) | ((IData)(((((QData)((IData)(
                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[0U]))) 
                                              >> 0x20U)) 
                                     << 0xbU));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[4U] 
                    = ((0xfffff800U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[4U]) 
                       | ((IData)(((((QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[0U]))) 
                                   >> 0x20U)) >> 0x15U));
            }
        } else if (((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_ptw__DOT__state_q)) 
                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_ptw__DOT__is_instr_ptw_q))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[8U] 
                = ((7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[8U]) 
                   | (0xfU & (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__ptw_error) 
                               | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__ptw_access_exception)) 
                              << 3U)));
            if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__ptw_error) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[4U] 
                    = (0x6000U | (0x7ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[4U]));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[5U] = 0U;
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[6U] 
                    = (0xfffff800U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[6U]);
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[0U] 
                    = (1U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[0U]);
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[2U] 
                    = ((0x7ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[2U]) 
                       | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_ptw__DOT__vaddr_q) 
                          << 0xbU));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[3U] 
                    = (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_ptw__DOT__vaddr_q) 
                        >> 0x15U) | ((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_ptw__DOT__vaddr_q 
                                              >> 0x20U)) 
                                     << 0xbU));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[4U] 
                    = ((0xfffff800U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[4U]) 
                       | ((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_ptw__DOT__vaddr_q 
                                   >> 0x20U)) >> 0x15U));
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[4U] 
                    = (0x800U | (0x7ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[4U]));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[5U] = 0U;
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[6U] 
                    = (0xfffff800U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[6U]);
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[0U] 
                    = (1U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[0U]);
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[2U] 
                    = ((0x7ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[2U]) 
                       | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_ptw__DOT__vaddr_q) 
                          << 0xbU));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[3U] 
                    = (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_ptw__DOT__vaddr_q) 
                        >> 0x15U) | ((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_ptw__DOT__vaddr_q 
                                              >> 0x20U)) 
                                     << 0xbU));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[4U] 
                    = ((0xfffff800U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[4U]) 
                       | ((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_ptw__DOT__vaddr_q 
                                   >> 0x20U)) >> 0x15U));
            }
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_shared_tlb__DOT____VdfgTmp_ha2c87e36__0 
        = (1U & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_shared_tlb__DOT____VdfgTmp_hd364da4b__0)) 
                 | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_shared_tlb__DOT__shared_tag_rd[1U] 
                    >> 0x1dU)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_shared_tlb__DOT____VdfgTmp_ha1144629__0 
        = (1U & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_shared_tlb__DOT____VdfgTmp_hd364da4b__0)) 
                 | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_shared_tlb__DOT__shared_tag_rd[1U] 
                    >> 0x1eU)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_shared_tlb__DOT____VdfgTmp_ha20794ca__0 
        = (1U & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_shared_tlb__DOT____VdfgTmp_hd364da4b__0)) 
                 | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_shared_tlb__DOT__shared_tag_rd[0U] 
                    >> 1U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_shared_tlb__DOT____VdfgTmp_ha2de1b5d__0 
        = (1U & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_shared_tlb__DOT____VdfgTmp_hd364da4b__0)) 
                 | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__gen_mmu__DOT__i_cva6_mmu__DOT__i_shared_tlb__DOT__shared_tag_rd[0U] 
                    >> 2U)));
    __Vfunc_is_inside_execute_regions__142__address 
        = (0xffffffffffffffULL & (((QData)((IData)(
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[8U])) 
                                   << 0x35U) | (((QData)((IData)(
                                                                 vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[7U])) 
                                                 << 0x15U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[6U])) 
                                                   >> 0xbU))));
    VL_ASSIGN_W(17178,__Vfunc_is_inside_execute_regions__142__Cfg, Vara_tb_verilator__ConstPool__CONST_h243f37ab_0);
    {
        if ((0U != ((__Vfunc_is_inside_execute_regions__142__Cfg[0xacU] 
                     << 0x13U) | (__Vfunc_is_inside_execute_regions__142__Cfg[0xabU] 
                                  >> 0xdU)))) {
            vlSelf->__Vfunc_is_inside_execute_regions__142__pass = 0U;
            vlSelf->__Vfunc_is_inside_execute_regions__142__unnamedblk2__DOT__k = 0U;
            while ((vlSelf->__Vfunc_is_inside_execute_regions__142__unnamedblk2__DOT__k 
                    < ((__Vfunc_is_inside_execute_regions__142__Cfg[0xacU] 
                        << 0x13U) | (__Vfunc_is_inside_execute_regions__142__Cfg[0xabU] 
                                     >> 0xdU)))) {
                vlSelf->__Vfunc_range_check__143__address 
                    = __Vfunc_is_inside_execute_regions__142__address;
                vlSelf->__Vfunc_range_check__143__len 
                    = ((0x4319U >= ((IData)(0xd6dU) 
                                    + (0x3ffU & VL_SHIFTL_III(10,32,32, vlSelf->__Vfunc_is_inside_execute_regions__142__unnamedblk2__DOT__k, 6U))))
                        ? (((QData)((IData)(__Vfunc_is_inside_execute_regions__142__Cfg[
                                            (((IData)(0xdacU) 
                                              + (0x3ffU 
                                                 & VL_SHIFTL_III(10,32,32, vlSelf->__Vfunc_is_inside_execute_regions__142__unnamedblk2__DOT__k, 6U))) 
                                             >> 5U)])) 
                            << ((0U == (0x1fU & ((IData)(0xd6dU) 
                                                 + 
                                                 (0x3ffU 
                                                  & VL_SHIFTL_III(10,32,32, vlSelf->__Vfunc_is_inside_execute_regions__142__unnamedblk2__DOT__k, 6U)))))
                                 ? 0x20U : ((IData)(0x40U) 
                                            - (0x1fU 
                                               & ((IData)(0xd6dU) 
                                                  + 
                                                  (0x3ffU 
                                                   & VL_SHIFTL_III(10,32,32, vlSelf->__Vfunc_is_inside_execute_regions__142__unnamedblk2__DOT__k, 6U))))))) 
                           | (((0U == (0x1fU & ((IData)(0xd6dU) 
                                                + (0x3ffU 
                                                   & VL_SHIFTL_III(10,32,32, vlSelf->__Vfunc_is_inside_execute_regions__142__unnamedblk2__DOT__k, 6U)))))
                                ? 0ULL : ((QData)((IData)(
                                                          __Vfunc_is_inside_execute_regions__142__Cfg[
                                                          (((IData)(0xd8cU) 
                                                            + 
                                                            (0x3ffU 
                                                             & VL_SHIFTL_III(10,32,32, vlSelf->__Vfunc_is_inside_execute_regions__142__unnamedblk2__DOT__k, 6U))) 
                                                           >> 5U)])) 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(0xd6dU) 
                                                    + 
                                                    (0x3ffU 
                                                     & VL_SHIFTL_III(10,32,32, vlSelf->__Vfunc_is_inside_execute_regions__142__unnamedblk2__DOT__k, 6U))))))) 
                              | ((QData)((IData)(__Vfunc_is_inside_execute_regions__142__Cfg[
                                                 (((IData)(0xd6dU) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,32,32, vlSelf->__Vfunc_is_inside_execute_regions__142__unnamedblk2__DOT__k, 6U))) 
                                                  >> 5U)])) 
                                 >> (0x1fU & ((IData)(0xd6dU) 
                                              + (0x3ffU 
                                                 & VL_SHIFTL_III(10,32,32, vlSelf->__Vfunc_is_inside_execute_regions__142__unnamedblk2__DOT__k, 6U)))))))
                        : 0ULL);
                vlSelf->__Vfunc_range_check__143__base 
                    = ((0x4319U >= ((IData)(0x116dU) 
                                    + (0x3ffU & VL_SHIFTL_III(10,32,32, vlSelf->__Vfunc_is_inside_execute_regions__142__unnamedblk2__DOT__k, 6U))))
                        ? (((QData)((IData)(__Vfunc_is_inside_execute_regions__142__Cfg[
                                            (((IData)(0x11acU) 
                                              + (0x3ffU 
                                                 & VL_SHIFTL_III(10,32,32, vlSelf->__Vfunc_is_inside_execute_regions__142__unnamedblk2__DOT__k, 6U))) 
                                             >> 5U)])) 
                            << ((0U == (0x1fU & ((IData)(0x116dU) 
                                                 + 
                                                 (0x3ffU 
                                                  & VL_SHIFTL_III(10,32,32, vlSelf->__Vfunc_is_inside_execute_regions__142__unnamedblk2__DOT__k, 6U)))))
                                 ? 0x20U : ((IData)(0x40U) 
                                            - (0x1fU 
                                               & ((IData)(0x116dU) 
                                                  + 
                                                  (0x3ffU 
                                                   & VL_SHIFTL_III(10,32,32, vlSelf->__Vfunc_is_inside_execute_regions__142__unnamedblk2__DOT__k, 6U))))))) 
                           | (((0U == (0x1fU & ((IData)(0x116dU) 
                                                + (0x3ffU 
                                                   & VL_SHIFTL_III(10,32,32, vlSelf->__Vfunc_is_inside_execute_regions__142__unnamedblk2__DOT__k, 6U)))))
                                ? 0ULL : ((QData)((IData)(
                                                          __Vfunc_is_inside_execute_regions__142__Cfg[
                                                          (((IData)(0x118cU) 
                                                            + 
                                                            (0x3ffU 
                                                             & VL_SHIFTL_III(10,32,32, vlSelf->__Vfunc_is_inside_execute_regions__142__unnamedblk2__DOT__k, 6U))) 
                                                           >> 5U)])) 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(0x116dU) 
                                                    + 
                                                    (0x3ffU 
                                                     & VL_SHIFTL_III(10,32,32, vlSelf->__Vfunc_is_inside_execute_regions__142__unnamedblk2__DOT__k, 6U))))))) 
                              | ((QData)((IData)(__Vfunc_is_inside_execute_regions__142__Cfg[
                                                 (((IData)(0x116dU) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,32,32, vlSelf->__Vfunc_is_inside_execute_regions__142__unnamedblk2__DOT__k, 6U))) 
                                                  >> 5U)])) 
                                 >> (0x1fU & ((IData)(0x116dU) 
                                              + (0x3ffU 
                                                 & VL_SHIFTL_III(10,32,32, vlSelf->__Vfunc_is_inside_execute_regions__142__unnamedblk2__DOT__k, 6U)))))))
                        : 0ULL);
                __Vtemp_11[0U] = (IData)(vlSelf->__Vfunc_range_check__143__address);
                __Vtemp_11[1U] = (IData)((vlSelf->__Vfunc_range_check__143__address 
                                          >> 0x20U));
                __Vtemp_11[2U] = 0U;
                __Vtemp_13[0U] = (IData)(vlSelf->__Vfunc_range_check__143__base);
                __Vtemp_13[1U] = (IData)((vlSelf->__Vfunc_range_check__143__base 
                                          >> 0x20U));
                __Vtemp_13[2U] = 0U;
                __Vtemp_14[0U] = (IData)(vlSelf->__Vfunc_range_check__143__len);
                __Vtemp_14[1U] = (IData)((vlSelf->__Vfunc_range_check__143__len 
                                          >> 0x20U));
                __Vtemp_14[2U] = 0U;
                VL_ADD_W(3, __Vtemp_15, __Vtemp_13, __Vtemp_14);
                __Vtemp_16[0U] = __Vtemp_15[0U];
                __Vtemp_16[1U] = __Vtemp_15[1U];
                __Vtemp_16[2U] = (1U & __Vtemp_15[2U]);
                vlSelf->__Vfunc_range_check__143__Vfuncout 
                    = ((vlSelf->__Vfunc_range_check__143__address 
                        >= vlSelf->__Vfunc_range_check__143__base) 
                       & VL_LT_W(3, __Vtemp_11, __Vtemp_16));
                vlSelf->__Vfunc_is_inside_execute_regions__142__pass 
                    = (((~ ((IData)(1U) << (0xfU & vlSelf->__Vfunc_is_inside_execute_regions__142__unnamedblk2__DOT__k))) 
                        & (IData)(vlSelf->__Vfunc_is_inside_execute_regions__142__pass)) 
                       | (0xffffU & ((IData)(vlSelf->__Vfunc_range_check__143__Vfuncout) 
                                     << (0xfU & vlSelf->__Vfunc_is_inside_execute_regions__142__unnamedblk2__DOT__k))));
                vlSelf->__Vfunc_is_inside_execute_regions__142__unnamedblk2__DOT__k 
                    = ((IData)(1U) + vlSelf->__Vfunc_is_inside_execute_regions__142__unnamedblk2__DOT__k);
            }
            vlSelf->__Vfunc_is_inside_execute_regions__142__Vfuncout 
                = (0U != (IData)(vlSelf->__Vfunc_is_inside_execute_regions__142__pass));
            goto __Vlabel1568;
        } else {
            vlSelf->__Vfunc_is_inside_execute_regions__142__Vfuncout = 1U;
            goto __Vlabel1568;
        }
        __Vlabel1568: ;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_pmp_data_if__DOT__match_any_execute_region 
        = vlSelf->__Vfunc_is_inside_execute_regions__142__Vfuncout;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[3U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[3U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[4U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[4U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[5U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[5U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[6U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[6U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[7U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[7U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[8U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__pmp_icache_areq_i[8U];
    if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_pmp_data_if__DOT__match_any_execute_region)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[4U] 
            = (0x800U | (0x7ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[4U]));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[5U] = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[6U] 
            = (0xfffff800U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[6U]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[0U] 
            = (1U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[0U]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[2U] 
            = ((0x7ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[2U]) 
               | ((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[0U])))) 
                  << 0xbU));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[3U] 
            = (((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[1U])) 
                          << 0x20U) | (QData)((IData)(
                                                      vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[0U])))) 
                >> 0x15U) | ((IData)(((((QData)((IData)(
                                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[0U]))) 
                                      >> 0x20U)) << 0xbU));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[4U] 
            = ((0xfffff800U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[4U]) 
               | ((IData)(((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_cache_ex[0U]))) 
                           >> 0x20U)) >> 0x15U));
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_dreq_cache_if[0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_dreq_cache_if[1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_dreq_cache_if[2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_dreq_cache_if[3U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[3U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_dreq_cache_if[4U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[4U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_dreq_cache_if[5U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[5U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_dreq_cache_if[6U] 
        = (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_q) 
            << 0xbU) | (0x7ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[6U]));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_dreq_cache_if[7U] 
        = (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_q) 
            >> 0x15U) | ((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_q 
                                  >> 0x20U)) << 0xbU));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_dreq_cache_if[8U] 
        = ((0xfffff800U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_dreq_cache_if[8U]) 
           | ((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__vaddr_q 
                       >> 0x20U)) >> 0x15U));
    __Vfunc_is_inside_nonidempotent_regions__181__address 
        = (0xffffffffffffffULL & (((QData)((IData)(
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[8U])) 
                                   << 0x35U) | (((QData)((IData)(
                                                                 vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[7U])) 
                                                 << 0x15U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[6U])) 
                                                   >> 0xbU))));
    VL_ASSIGN_W(17178,__Vfunc_is_inside_nonidempotent_regions__181__Cfg, Vara_tb_verilator__ConstPool__CONST_h243f37ab_0);
    __Vfunc_is_inside_nonidempotent_regions__181__pass = 0U;
    __Vfunc_is_inside_nonidempotent_regions__181__unnamedblk1__DOT__k = 0U;
    while ((__Vfunc_is_inside_nonidempotent_regions__181__unnamedblk1__DOT__k 
            < ((__Vfunc_is_inside_nonidempotent_regions__181__Cfg[0xedU] 
                << 0x13U) | (__Vfunc_is_inside_nonidempotent_regions__181__Cfg[0xecU] 
                             >> 0xdU)))) {
        vlSelf->__Vfunc_range_check__182__address = __Vfunc_is_inside_nonidempotent_regions__181__address;
        vlSelf->__Vfunc_range_check__182__len = ((0x4319U 
                                                  >= 
                                                  ((IData)(0x158dU) 
                                                   + 
                                                   (0x3ffU 
                                                    & VL_SHIFTL_III(10,32,32, __Vfunc_is_inside_nonidempotent_regions__181__unnamedblk1__DOT__k, 6U))))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   __Vfunc_is_inside_nonidempotent_regions__181__Cfg[
                                                                   (((IData)(0x15ccU) 
                                                                     + 
                                                                     (0x3ffU 
                                                                      & VL_SHIFTL_III(10,32,32, __Vfunc_is_inside_nonidempotent_regions__181__unnamedblk1__DOT__k, 6U))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x158dU) 
                                                         + 
                                                         (0x3ffU 
                                                          & VL_SHIFTL_III(10,32,32, __Vfunc_is_inside_nonidempotent_regions__181__unnamedblk1__DOT__k, 6U)))))
                                                     ? 0x20U
                                                     : 
                                                    ((IData)(0x40U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(0x158dU) 
                                                         + 
                                                         (0x3ffU 
                                                          & VL_SHIFTL_III(10,32,32, __Vfunc_is_inside_nonidempotent_regions__181__unnamedblk1__DOT__k, 6U))))))) 
                                                  | (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x158dU) 
                                                           + 
                                                           (0x3ffU 
                                                            & VL_SHIFTL_III(10,32,32, __Vfunc_is_inside_nonidempotent_regions__181__unnamedblk1__DOT__k, 6U)))))
                                                       ? 0ULL
                                                       : 
                                                      ((QData)((IData)(
                                                                       __Vfunc_is_inside_nonidempotent_regions__181__Cfg[
                                                                       (((IData)(0x15acU) 
                                                                         + 
                                                                         (0x3ffU 
                                                                          & VL_SHIFTL_III(10,32,32, __Vfunc_is_inside_nonidempotent_regions__181__unnamedblk1__DOT__k, 6U))) 
                                                                        >> 5U)])) 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x158dU) 
                                                            + 
                                                            (0x3ffU 
                                                             & VL_SHIFTL_III(10,32,32, __Vfunc_is_inside_nonidempotent_regions__181__unnamedblk1__DOT__k, 6U))))))) 
                                                     | ((QData)((IData)(
                                                                        __Vfunc_is_inside_nonidempotent_regions__181__Cfg[
                                                                        (((IData)(0x158dU) 
                                                                          + 
                                                                          (0x3ffU 
                                                                           & VL_SHIFTL_III(10,32,32, __Vfunc_is_inside_nonidempotent_regions__181__unnamedblk1__DOT__k, 6U))) 
                                                                         >> 5U)])) 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x158dU) 
                                                            + 
                                                            (0x3ffU 
                                                             & VL_SHIFTL_III(10,32,32, __Vfunc_is_inside_nonidempotent_regions__181__unnamedblk1__DOT__k, 6U)))))))
                                                  : 0ULL);
        vlSelf->__Vfunc_range_check__182__base = ((0x4319U 
                                                   >= 
                                                   ((IData)(0x198dU) 
                                                    + 
                                                    (0x3ffU 
                                                     & VL_SHIFTL_III(10,32,32, __Vfunc_is_inside_nonidempotent_regions__181__unnamedblk1__DOT__k, 6U))))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    __Vfunc_is_inside_nonidempotent_regions__181__Cfg[
                                                                    (((IData)(0x19ccU) 
                                                                      + 
                                                                      (0x3ffU 
                                                                       & VL_SHIFTL_III(10,32,32, __Vfunc_is_inside_nonidempotent_regions__181__unnamedblk1__DOT__k, 6U))) 
                                                                     >> 5U)])) 
                                                    << 
                                                    ((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x198dU) 
                                                          + 
                                                          (0x3ffU 
                                                           & VL_SHIFTL_III(10,32,32, __Vfunc_is_inside_nonidempotent_regions__181__unnamedblk1__DOT__k, 6U)))))
                                                      ? 0x20U
                                                      : 
                                                     ((IData)(0x40U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(0x198dU) 
                                                          + 
                                                          (0x3ffU 
                                                           & VL_SHIFTL_III(10,32,32, __Vfunc_is_inside_nonidempotent_regions__181__unnamedblk1__DOT__k, 6U))))))) 
                                                   | (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x198dU) 
                                                            + 
                                                            (0x3ffU 
                                                             & VL_SHIFTL_III(10,32,32, __Vfunc_is_inside_nonidempotent_regions__181__unnamedblk1__DOT__k, 6U)))))
                                                        ? 0ULL
                                                        : 
                                                       ((QData)((IData)(
                                                                        __Vfunc_is_inside_nonidempotent_regions__181__Cfg[
                                                                        (((IData)(0x19acU) 
                                                                          + 
                                                                          (0x3ffU 
                                                                           & VL_SHIFTL_III(10,32,32, __Vfunc_is_inside_nonidempotent_regions__181__unnamedblk1__DOT__k, 6U))) 
                                                                         >> 5U)])) 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(0x198dU) 
                                                             + 
                                                             (0x3ffU 
                                                              & VL_SHIFTL_III(10,32,32, __Vfunc_is_inside_nonidempotent_regions__181__unnamedblk1__DOT__k, 6U))))))) 
                                                      | ((QData)((IData)(
                                                                         __Vfunc_is_inside_nonidempotent_regions__181__Cfg[
                                                                         (((IData)(0x198dU) 
                                                                           + 
                                                                           (0x3ffU 
                                                                            & VL_SHIFTL_III(10,32,32, __Vfunc_is_inside_nonidempotent_regions__181__unnamedblk1__DOT__k, 6U))) 
                                                                          >> 5U)])) 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(0x198dU) 
                                                             + 
                                                             (0x3ffU 
                                                              & VL_SHIFTL_III(10,32,32, __Vfunc_is_inside_nonidempotent_regions__181__unnamedblk1__DOT__k, 6U)))))))
                                                   : 0ULL);
        __Vtemp_22[0U] = (IData)(vlSelf->__Vfunc_range_check__182__address);
        __Vtemp_22[1U] = (IData)((vlSelf->__Vfunc_range_check__182__address 
                                  >> 0x20U));
        __Vtemp_22[2U] = 0U;
        __Vtemp_24[0U] = (IData)(vlSelf->__Vfunc_range_check__182__base);
        __Vtemp_24[1U] = (IData)((vlSelf->__Vfunc_range_check__182__base 
                                  >> 0x20U));
        __Vtemp_24[2U] = 0U;
        __Vtemp_25[0U] = (IData)(vlSelf->__Vfunc_range_check__182__len);
        __Vtemp_25[1U] = (IData)((vlSelf->__Vfunc_range_check__182__len 
                                  >> 0x20U));
        __Vtemp_25[2U] = 0U;
        VL_ADD_W(3, __Vtemp_26, __Vtemp_24, __Vtemp_25);
        __Vtemp_27[0U] = __Vtemp_26[0U];
        __Vtemp_27[1U] = __Vtemp_26[1U];
        __Vtemp_27[2U] = (1U & __Vtemp_26[2U]);
        vlSelf->__Vfunc_range_check__182__Vfuncout 
            = ((vlSelf->__Vfunc_range_check__182__address 
                >= vlSelf->__Vfunc_range_check__182__base) 
               & VL_LT_W(3, __Vtemp_22, __Vtemp_27));
        __Vfunc_is_inside_nonidempotent_regions__181__pass 
            = (((~ ((IData)(1U) << (0xfU & __Vfunc_is_inside_nonidempotent_regions__181__unnamedblk1__DOT__k))) 
                & (IData)(__Vfunc_is_inside_nonidempotent_regions__181__pass)) 
               | (0xffffU & ((IData)(vlSelf->__Vfunc_range_check__182__Vfuncout) 
                             << (0xfU & __Vfunc_is_inside_nonidempotent_regions__181__unnamedblk1__DOT__k))));
        __Vfunc_is_inside_nonidempotent_regions__181__unnamedblk1__DOT__k 
            = ((IData)(1U) + __Vfunc_is_inside_nonidempotent_regions__181__unnamedblk1__DOT__k);
    }
    __Vfunc_is_inside_nonidempotent_regions__181__Vfuncout 
        = (0U != (IData)(__Vfunc_is_inside_nonidempotent_regions__181__pass));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__addr_ni 
        = __Vfunc_is_inside_nonidempotent_regions__181__Vfuncout;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_tag_d 
        = (0x3fffffffffffULL & ((8U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[8U])
                                 ? (((QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[8U])) 
                                     << 0x2bU) | (((QData)((IData)(
                                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[7U])) 
                                                   << 0xbU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__icache_areq_ex_cache[6U])) 
                                                     >> 0x15U)))
                                 : vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_tag_q));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_hit 
        = (((((0x3fffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__3__KET____DOT__tag_sram__DOT__genblk1__DOT__data_sram__DOT____Vcellout__i_tc_sram__rdata_o) 
              == vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_tag_d) 
             & (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__3__KET____DOT__tag_sram__DOT__genblk1__DOT__data_sram__DOT____Vcellout__i_tc_sram__rdata_o 
                        >> 0x2eU))) << 3U) | (((((0x3fffffffffffULL 
                                                  & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__2__KET____DOT__tag_sram__DOT__genblk1__DOT__data_sram__DOT____Vcellout__i_tc_sram__rdata_o) 
                                                 == vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_tag_d) 
                                                & (IData)(
                                                          (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__2__KET____DOT__tag_sram__DOT__genblk1__DOT__data_sram__DOT____Vcellout__i_tc_sram__rdata_o 
                                                           >> 0x2eU))) 
                                               << 2U) 
                                              | (((((0x3fffffffffffULL 
                                                     & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__1__KET____DOT__tag_sram__DOT__genblk1__DOT__data_sram__DOT____Vcellout__i_tc_sram__rdata_o) 
                                                    == vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_tag_d) 
                                                   & (IData)(
                                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__1__KET____DOT__tag_sram__DOT__genblk1__DOT__data_sram__DOT____Vcellout__i_tc_sram__rdata_o 
                                                              >> 0x2eU))) 
                                                  << 1U) 
                                                 | (((0x3fffffffffffULL 
                                                      & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__tag_sram__DOT__genblk1__DOT__data_sram__DOT____Vcellout__i_tc_sram__rdata_o) 
                                                     == vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_tag_d) 
                                                    & (IData)(
                                                              (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__gen_sram__BRA__0__KET____DOT__tag_sram__DOT__genblk1__DOT__data_sram__DOT____Vcellout__i_tc_sram__rdata_o 
                                                               >> 0x2eU))))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__paddr_is_nc 
        = (1U & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cache_en_q)) 
                 | (~ ([&]() {
                        vlSelf->__Vfunc_is_inside_cacheable_regions__179__address 
                            = (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_cva6_icache__DOT__cl_tag_d 
                               << 0xaU);
                        VL_ASSIGN_W(17178,vlSelf->__Vfunc_is_inside_cacheable_regions__179__Cfg, Vara_tb_verilator__ConstPool__CONST_h243f37ab_0);
                        vlSelf->__Vfunc_is_inside_cacheable_regions__179__pass = 0U;
                        vlSelf->__Vfunc_is_inside_cacheable_regions__179__unnamedblk3__DOT__k = 0U;
                        while ((vlSelf->__Vfunc_is_inside_cacheable_regions__179__unnamedblk3__DOT__k 
                                < ((vlSelf->__Vfunc_is_inside_cacheable_regions__179__Cfg[0x6bU] 
                                    << 0x13U) | (vlSelf->__Vfunc_is_inside_cacheable_regions__179__Cfg[0x6aU] 
                                                 >> 0xdU)))) {
                            vlSelf->__Vfunc_range_check__180__address 
                                = vlSelf->__Vfunc_is_inside_cacheable_regions__179__address;
                            vlSelf->__Vfunc_range_check__180__len 
                                = ((0x4319U >= ((IData)(0x54dU) 
                                                + (0x3ffU 
                                                   & VL_SHIFTL_III(10,32,32, vlSelf->__Vfunc_is_inside_cacheable_regions__179__unnamedblk3__DOT__k, 6U))))
                                    ? (((QData)((IData)(
                                                        vlSelf->__Vfunc_is_inside_cacheable_regions__179__Cfg[
                                                        (((IData)(0x58cU) 
                                                          + 
                                                          (0x3ffU 
                                                           & VL_SHIFTL_III(10,32,32, vlSelf->__Vfunc_is_inside_cacheable_regions__179__unnamedblk3__DOT__k, 6U))) 
                                                         >> 5U)])) 
                                        << ((0U == 
                                             (0x1fU 
                                              & ((IData)(0x54dU) 
                                                 + 
                                                 (0x3ffU 
                                                  & VL_SHIFTL_III(10,32,32, vlSelf->__Vfunc_is_inside_cacheable_regions__179__unnamedblk3__DOT__k, 6U)))))
                                             ? 0x20U
                                             : ((IData)(0x40U) 
                                                - (0x1fU 
                                                   & ((IData)(0x54dU) 
                                                      + 
                                                      (0x3ffU 
                                                       & VL_SHIFTL_III(10,32,32, vlSelf->__Vfunc_is_inside_cacheable_regions__179__unnamedblk3__DOT__k, 6U))))))) 
                                       | (((0U == (0x1fU 
                                                   & ((IData)(0x54dU) 
                                                      + 
                                                      (0x3ffU 
                                                       & VL_SHIFTL_III(10,32,32, vlSelf->__Vfunc_is_inside_cacheable_regions__179__unnamedblk3__DOT__k, 6U)))))
                                            ? 0ULL : 
                                           ((QData)((IData)(
                                                            vlSelf->__Vfunc_is_inside_cacheable_regions__179__Cfg[
                                                            (((IData)(0x56cU) 
                                                              + 
                                                              (0x3ffU 
                                                               & VL_SHIFTL_III(10,32,32, vlSelf->__Vfunc_is_inside_cacheable_regions__179__unnamedblk3__DOT__k, 6U))) 
                                                             >> 5U)])) 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x54dU) 
                                                      + 
                                                      (0x3ffU 
                                                       & VL_SHIFTL_III(10,32,32, vlSelf->__Vfunc_is_inside_cacheable_regions__179__unnamedblk3__DOT__k, 6U))))))) 
                                          | ((QData)((IData)(
                                                             vlSelf->__Vfunc_is_inside_cacheable_regions__179__Cfg[
                                                             (((IData)(0x54dU) 
                                                               + 
                                                               (0x3ffU 
                                                                & VL_SHIFTL_III(10,32,32, vlSelf->__Vfunc_is_inside_cacheable_regions__179__unnamedblk3__DOT__k, 6U))) 
                                                              >> 5U)])) 
                                             >> (0x1fU 
                                                 & ((IData)(0x54dU) 
                                                    + 
                                                    (0x3ffU 
                                                     & VL_SHIFTL_III(10,32,32, vlSelf->__Vfunc_is_inside_cacheable_regions__179__unnamedblk3__DOT__k, 6U)))))))
                                    : 0ULL);
                            vlSelf->__Vfunc_range_check__180__base 
                                = ((0x4319U >= ((IData)(0x94dU) 
                                                + (0x3ffU 
                                                   & VL_SHIFTL_III(10,32,32, vlSelf->__Vfunc_is_inside_cacheable_regions__179__unnamedblk3__DOT__k, 6U))))
                                    ? (((QData)((IData)(
                                                        vlSelf->__Vfunc_is_inside_cacheable_regions__179__Cfg[
                                                        (((IData)(0x98cU) 
                                                          + 
                                                          (0x3ffU 
                                                           & VL_SHIFTL_III(10,32,32, vlSelf->__Vfunc_is_inside_cacheable_regions__179__unnamedblk3__DOT__k, 6U))) 
                                                         >> 5U)])) 
                                        << ((0U == 
                                             (0x1fU 
                                              & ((IData)(0x94dU) 
                                                 + 
                                                 (0x3ffU 
                                                  & VL_SHIFTL_III(10,32,32, vlSelf->__Vfunc_is_inside_cacheable_regions__179__unnamedblk3__DOT__k, 6U)))))
                                             ? 0x20U
                                             : ((IData)(0x40U) 
                                                - (0x1fU 
                                                   & ((IData)(0x94dU) 
                                                      + 
                                                      (0x3ffU 
                                                       & VL_SHIFTL_III(10,32,32, vlSelf->__Vfunc_is_inside_cacheable_regions__179__unnamedblk3__DOT__k, 6U))))))) 
                                       | (((0U == (0x1fU 
                                                   & ((IData)(0x94dU) 
                                                      + 
                                                      (0x3ffU 
                                                       & VL_SHIFTL_III(10,32,32, vlSelf->__Vfunc_is_inside_cacheable_regions__179__unnamedblk3__DOT__k, 6U)))))
                                            ? 0ULL : 
                                           ((QData)((IData)(
                                                            vlSelf->__Vfunc_is_inside_cacheable_regions__179__Cfg[
                                                            (((IData)(0x96cU) 
                                                              + 
                                                              (0x3ffU 
                                                               & VL_SHIFTL_III(10,32,32, vlSelf->__Vfunc_is_inside_cacheable_regions__179__unnamedblk3__DOT__k, 6U))) 
                                                             >> 5U)])) 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0x94dU) 
                                                      + 
                                                      (0x3ffU 
                                                       & VL_SHIFTL_III(10,32,32, vlSelf->__Vfunc_is_inside_cacheable_regions__179__unnamedblk3__DOT__k, 6U))))))) 
                                          | ((QData)((IData)(
                                                             vlSelf->__Vfunc_is_inside_cacheable_regions__179__Cfg[
                                                             (((IData)(0x94dU) 
                                                               + 
                                                               (0x3ffU 
                                                                & VL_SHIFTL_III(10,32,32, vlSelf->__Vfunc_is_inside_cacheable_regions__179__unnamedblk3__DOT__k, 6U))) 
                                                              >> 5U)])) 
                                             >> (0x1fU 
                                                 & ((IData)(0x94dU) 
                                                    + 
                                                    (0x3ffU 
                                                     & VL_SHIFTL_III(10,32,32, vlSelf->__Vfunc_is_inside_cacheable_regions__179__unnamedblk3__DOT__k, 6U)))))))
                                    : 0ULL);
                            __Vtemp_29[0U] = (IData)(vlSelf->__Vfunc_range_check__180__address);
                            __Vtemp_29[1U] = (IData)(
                                                     (vlSelf->__Vfunc_range_check__180__address 
                                                      >> 0x20U));
                            __Vtemp_29[2U] = 0U;
                            __Vtemp_31[0U] = (IData)(vlSelf->__Vfunc_range_check__180__base);
                            __Vtemp_31[1U] = (IData)(
                                                     (vlSelf->__Vfunc_range_check__180__base 
                                                      >> 0x20U));
                            __Vtemp_31[2U] = 0U;
                            __Vtemp_32[0U] = (IData)(vlSelf->__Vfunc_range_check__180__len);
                            __Vtemp_32[1U] = (IData)(
                                                     (vlSelf->__Vfunc_range_check__180__len 
                                                      >> 0x20U));
                            __Vtemp_32[2U] = 0U;
                            VL_ADD_W(3, __Vtemp_33, __Vtemp_31, __Vtemp_32);
                            __Vtemp_34[0U] = __Vtemp_33[0U];
                            __Vtemp_34[1U] = __Vtemp_33[1U];
                            __Vtemp_34[2U] = (1U & 
                                              __Vtemp_33[2U]);
                            vlSelf->__Vfunc_range_check__180__Vfuncout 
                                = ((vlSelf->__Vfunc_range_check__180__address 
                                    >= vlSelf->__Vfunc_range_check__180__base) 
                                   & VL_LT_W(3, __Vtemp_29, __Vtemp_34));
                            vlSelf->__Vfunc_is_inside_cacheable_regions__179__pass 
                                = (((~ ((IData)(1U) 
                                        << (0xfU & vlSelf->__Vfunc_is_inside_cacheable_regions__179__unnamedblk3__DOT__k))) 
                                    & (IData)(vlSelf->__Vfunc_is_inside_cacheable_regions__179__pass)) 
                                   | (0xffffU & ((IData)(vlSelf->__Vfunc_range_check__180__Vfuncout) 
                                                 << 
                                                 (0xfU 
                                                  & vlSelf->__Vfunc_is_inside_cacheable_regions__179__unnamedblk3__DOT__k))));
                            vlSelf->__Vfunc_is_inside_cacheable_regions__179__unnamedblk3__DOT__k 
                                = ((IData)(1U) + vlSelf->__Vfunc_is_inside_cacheable_regions__179__unnamedblk3__DOT__k);
                        }
                        vlSelf->__Vfunc_is_inside_cacheable_regions__179__Vfuncout 
                            = (0U != (IData)(vlSelf->__Vfunc_is_inside_cacheable_regions__179__pass));
                    }(), (IData)(vlSelf->__Vfunc_is_inside_cacheable_regions__179__Vfuncout)))));
}

VL_INLINE_OPT void Vara_tb_verilator___024root___nba_comb__TOP__533(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___nba_comb__TOP__533\n"); );
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_mmu_paddr 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_paddr;
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__genblk3__DOT__mmu_state_q) {
        if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__genblk3__DOT__mmu_state_q) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_mmu_paddr = 0ULL;
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__genblk1__DOT__i_amo_buffer__DOT__amo_data_in[0U] 
        = (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__st_data_q) 
            << 2U) | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__st_data_size_q));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__genblk1__DOT__i_amo_buffer__DOT__amo_data_in[1U] 
        = (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__st_data_q) 
            >> 0x1eU) | ((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__st_data_q 
                                  >> 0x20U)) << 2U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__genblk1__DOT__i_amo_buffer__DOT__amo_data_in[2U] 
        = (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_mmu_paddr) 
            << 2U) | ((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__st_data_q 
                               >> 0x20U)) >> 0x1eU));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__genblk1__DOT__i_amo_buffer__DOT__amo_data_in[3U] 
        = (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__amo_op_q) 
            << 0x1aU) | (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_mmu_paddr) 
                          >> 0x1eU) | ((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_mmu_paddr 
                                                >> 0x20U)) 
                                       << 2U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[0U] 
        = (0xffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[0U]);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[1U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[2U] 
        = ((IData)((0x1fffffffffffULL & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_mmu_paddr 
                                         >> 0xbU))) 
           << 0x10U);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[3U] 
        = (((IData)((0x1fffffffffffULL & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_mmu_paddr 
                                          >> 0xbU))) 
            >> 0x10U) | ((0xe0000000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[3U] 
                                         << 2U)) | 
                         ((IData)(((0x1fffffffffffULL 
                                    & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_mmu_paddr 
                                       >> 0xbU)) >> 0x20U)) 
                          << 0x10U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT____Vcellout__i_load_unit__req_port_o[4U] 
        = (0xffU & ((0xffU & ((0xfffcU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[4U] 
                                          << 2U)) | 
                              (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[3U] 
                               >> 0x1eU))) | ((IData)(
                                                      ((0x1fffffffffffULL 
                                                        & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_mmu_paddr 
                                                           >> 0xbU)) 
                                                       >> 0x20U)) 
                                              >> 0x10U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__page_offset_matches = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__address_checker__DOT__unnamedblk2__DOT__i = 0U;
    {
        while ((4U > vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__address_checker__DOT__unnamedblk2__DOT__i)) {
            if ((((0x1ffU & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[4U] 
                              << 2U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[3U] 
                                        >> 0x1eU))) 
                  == (0x1ffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_queue_q
                                [(3U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__address_checker__DOT__unnamedblk2__DOT__i)][2U] 
                                >> 0xeU))) & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__commit_queue_q
                 [(3U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__address_checker__DOT__unnamedblk2__DOT__i)][0U])) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__page_offset_matches = 1U;
                goto __Vlabel1569;
            }
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__address_checker__DOT__unnamedblk2__DOT__i 
                = ((IData)(1U) + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__address_checker__DOT__unnamedblk2__DOT__i);
        }
        __Vlabel1569: ;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__address_checker__DOT__unnamedblk3__DOT__i = 0U;
    {
        while ((4U > vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__address_checker__DOT__unnamedblk3__DOT__i)) {
            if ((((0x1ffU & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[4U] 
                              << 2U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[3U] 
                                        >> 0x1eU))) 
                  == (0x1ffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__speculative_queue_q
                                [(3U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__address_checker__DOT__unnamedblk3__DOT__i)][2U] 
                                >> 0xeU))) & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__speculative_queue_q
                 [(3U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__address_checker__DOT__unnamedblk3__DOT__i)][0U])) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__page_offset_matches = 1U;
                goto __Vlabel1570;
            }
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__address_checker__DOT__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__store_buffer_i__DOT__address_checker__DOT__unnamedblk3__DOT__i);
        }
        __Vlabel1570: ;
    }
    if ((((0x1ffU & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[4U] 
                      << 2U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[3U] 
                                >> 0x1eU))) == (0x1ffU 
                                                & (IData)(
                                                          (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__cva6_mmu_paddr 
                                                           >> 3U)))) 
         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__st_valid_without_flush))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__page_offset_matches = 1U;
    }
    if ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__amo_resp[2U] 
         & (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__genblk1__DOT__i_amo_buffer__DOT__i_amo_fifo__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__genblk1__DOT__i_amo_buffer__DOT__i_amo_fifo__DOT__data_ft_n[0U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__genblk1__DOT__i_amo_buffer__DOT__amo_data_in[0U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__genblk1__DOT__i_amo_buffer__DOT__i_amo_fifo__DOT__data_ft_n[1U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__genblk1__DOT__i_amo_buffer__DOT__amo_data_in[1U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__genblk1__DOT__i_amo_buffer__DOT__i_amo_fifo__DOT__data_ft_n[2U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__genblk1__DOT__i_amo_buffer__DOT__amo_data_in[2U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__genblk1__DOT__i_amo_buffer__DOT__i_amo_fifo__DOT__data_ft_n[3U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__i_store_unit__DOT__genblk1__DOT__i_amo_buffer__DOT__amo_data_in[3U];
    }
}

VL_INLINE_OPT void Vara_tb_verilator___024root___nba_comb__TOP__536(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___nba_comb__TOP__536\n"); );
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__4__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__1__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__4__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 5U)) | (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__4__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                                 >> 6U) & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__4__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q) 
                                           >> 1U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__4__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__4__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 3U)) | (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__4__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                                 >> 4U) & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__4__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q) 
                                           >> 1U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__4__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel 
        = (1U & ((~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__4__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                     >> 1U)) | (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__4__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes) 
                                 & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__4__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                                >> 2U)));
}

VL_INLINE_OPT void Vara_tb_verilator___024root___nba_comb__TOP__541(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___nba_comb__TOP__541\n"); );
    // Init
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_h8f8094d7__0;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_h8f8094d7__0 = 0;
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((((4U <= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
             & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__4__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)) 
            << 4U) | ((((3U <= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                        & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)) 
                       << 3U) | ((((2U <= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                                   & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__2__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)) 
                                  << 2U) | ((((1U <= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__rr_q)) 
                                              & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes)) 
                                             << 1U) 
                                            | (1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__0__KET____DOT__i_opgroup_block__DOT__i_arbiter__DOT__gen_arbiter__DOT__req_nodes))))));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_h8f8094d7__0 
        = (1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1eU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_h8f8094d7__0));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_h8f8094d7__0 
        = (1U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 1U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1dU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_h8f8094d7__0) 
              << 1U));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_h8f8094d7__0 
        = (1U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 2U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x1bU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_h8f8094d7__0) 
              << 2U));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_h8f8094d7__0 
        = (1U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 3U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0x17U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_h8f8094d7__0) 
              << 3U));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_h8f8094d7__0 
        = (1U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask) 
                 >> 4U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp 
        = ((0xfU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp)) 
           | ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__i_arbiter__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT____Vlvbound_h8f8094d7__0) 
              << 4U));
}

VL_INLINE_OPT void Vara_tb_verilator___024root___nba_comb__TOP__547(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___nba_comb__TOP__547\n"); );
    // Init
    QData/*63:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT____Vlvbound_h82d26d44__0;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT____Vlvbound_h82d26d44__0 = 0;
    QData/*63:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT____Vlvbound_hb51b6bfa__0;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT____Vlvbound_hb51b6bfa__0 = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__genblk2__BRA__0__KET____DOT__decoder_i__DOT__gen_accel_decoder__DOT__i_accel_decoder__DOT____VdfgExtracted_h35048444__0;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__genblk2__BRA__0__KET____DOT__decoder_i__DOT__gen_accel_decoder__DOT__i_accel_decoder__DOT____VdfgExtracted_h35048444__0 = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__genblk2__BRA__0__KET____DOT__decoder_i__DOT__gen_accel_decoder__DOT__i_accel_decoder__DOT____VdfgExtracted_h35048444__1;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__genblk2__BRA__0__KET____DOT__decoder_i__DOT__gen_accel_decoder__DOT__i_accel_decoder__DOT____VdfgExtracted_h35048444__1 = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__genblk2__BRA__0__KET____DOT__decoder_i__DOT__gen_accel_decoder__DOT__i_accel_decoder__DOT____VdfgExtracted_h35048444__2;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__genblk2__BRA__0__KET____DOT__decoder_i__DOT__gen_accel_decoder__DOT__i_accel_decoder__DOT____VdfgExtracted_h35048444__2 = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__genblk2__BRA__0__KET____DOT__decoder_i__DOT__gen_accel_decoder__DOT__i_accel_decoder__DOT____VdfgExtracted_h35048444__3;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__genblk2__BRA__0__KET____DOT__decoder_i__DOT__gen_accel_decoder__DOT__i_accel_decoder__DOT____VdfgExtracted_h35048444__3 = 0;
    SData/*11:0*/ __Vfunc_is_vector_csr__38__csr;
    __Vfunc_is_vector_csr__38__csr = 0;
    SData/*11:0*/ __Vfunc_is_vector_csr__39__csr;
    __Vfunc_is_vector_csr__39__csr = 0;
    SData/*11:0*/ __Vfunc_is_vector_csr__40__csr;
    __Vfunc_is_vector_csr__40__csr = 0;
    SData/*11:0*/ __Vfunc_is_vector_csr__41__csr;
    __Vfunc_is_vector_csr__41__csr = 0;
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
        = (0x3fffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U]);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[9U] 
        = (0xffffc000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[9U]);
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT____Vlvbound_h82d26d44__0 
        = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__pc_j[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__pc_j[0U])));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[9U] 
        = ((0x3fffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[9U]) 
           | ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT____Vlvbound_h82d26d44__0) 
              << 0xeU));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[0xaU] 
        = (((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT____Vlvbound_h82d26d44__0) 
            >> 0x12U) | ((IData)((ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT____Vlvbound_h82d26d44__0 
                                  >> 0x20U)) << 0xeU));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[0xbU] 
        = ((IData)((ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT____Vlvbound_h82d26d44__0 
                    >> 0x20U)) >> 0x12U);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[0U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[1U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[2U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[3U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[4U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[5U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[6U] 
        = (0xfffff800U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[6U]);
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT____Vlvbound_hb51b6bfa__0 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__address_out;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[6U] 
        = ((0x7ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[6U]) 
           | ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT____Vlvbound_hb51b6bfa__0) 
              << 0xbU));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[7U] 
        = (((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT____Vlvbound_hb51b6bfa__0) 
            >> 0x15U) | ((IData)((ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT____Vlvbound_hb51b6bfa__0 
                                  >> 0x20U)) << 0xbU));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
        = ((0xffffc000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U]) 
           | ((IData)((ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT____Vlvbound_hb51b6bfa__0 
                       >> 0x20U)) >> 0x15U));
    if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__idx_ds))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[4U] 
            = ((0x7ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[4U]) 
               | ((IData)(((1U == (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__instr_data_out[4U] 
                                         >> 0xaU)))
                            ? 1ULL : 0xcULL)) << 0xbU));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[5U] 
            = (((IData)(((1U == (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__instr_data_out[4U] 
                                       >> 0xaU))) ? 1ULL
                          : 0xcULL)) >> 0x15U) | ((IData)(
                                                          (((1U 
                                                             == 
                                                             (3U 
                                                              & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__instr_data_out[4U] 
                                                                 >> 0xaU)))
                                                             ? 1ULL
                                                             : 0xcULL) 
                                                           >> 0x20U)) 
                                                  << 0xbU));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[6U] 
            = ((0xfffff800U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[6U]) 
               | ((IData)((((1U == (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__instr_data_out[4U] 
                                          >> 0xaU)))
                             ? 1ULL : 0xcULL) >> 0x20U)) 
                  >> 0x15U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
            = ((0x3fffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U]) 
               | (0xffffc000U & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__instr_data_out[5U] 
                                  << 0x1fU) | (0x7fffc000U 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__instr_data_out[4U] 
                                                  >> 1U)))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[9U] 
            = ((0xffffc000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[9U]) 
               | (0x3fffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__instr_data_out[5U] 
                             >> 1U)));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[0U] 
            = ((0xfffffffeU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[0U]) 
               | (0U != (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__instr_data_out[4U] 
                               >> 0xaU))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[2U] 
            = ((0x7ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[2U]) 
               | ((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__instr_data_out[4U])) 
                            << 0x36U) | (((QData)((IData)(
                                                          vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__instr_data_out[3U])) 
                                          << 0x16U) 
                                         | ((QData)((IData)(
                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__instr_data_out[2U])) 
                                            >> 0xaU)))) 
                  << 0xbU));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[3U] 
            = (((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__instr_data_out[4U])) 
                          << 0x36U) | (((QData)((IData)(
                                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__instr_data_out[3U])) 
                                        << 0x16U) | 
                                       ((QData)((IData)(
                                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__instr_data_out[2U])) 
                                        >> 0xaU)))) 
                >> 0x15U) | ((IData)(((((QData)((IData)(
                                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__instr_data_out[4U])) 
                                        << 0x36U) | 
                                       (((QData)((IData)(
                                                         vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__instr_data_out[3U])) 
                                         << 0x16U) 
                                        | ((QData)((IData)(
                                                           vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__instr_data_out[2U])) 
                                           >> 0xaU))) 
                                      >> 0x20U)) << 0xbU));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[4U] 
            = ((0xfffff800U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[4U]) 
               | ((IData)(((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__instr_data_out[4U])) 
                             << 0x36U) | (((QData)((IData)(
                                                           vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__instr_data_out[3U])) 
                                           << 0x16U) 
                                          | ((QData)((IData)(
                                                             vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__instr_data_out[2U])) 
                                             >> 0xaU))) 
                           >> 0x20U)) >> 0x15U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
            = ((0xffffc7ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U]) 
               | (0x3800U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__instr_data_out[4U] 
                             >> 1U)));
    }
    if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__idx_ds))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[4U] 
            = ((0x7ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[4U]) 
               | ((IData)(((1U == (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__instr_data_out[9U] 
                                         >> 0x19U)))
                            ? 1ULL : 0xcULL)) << 0xbU));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[5U] 
            = (((IData)(((1U == (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__instr_data_out[9U] 
                                       >> 0x19U))) ? 1ULL
                          : 0xcULL)) >> 0x15U) | ((IData)(
                                                          (((1U 
                                                             == 
                                                             (3U 
                                                              & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__instr_data_out[9U] 
                                                                 >> 0x19U)))
                                                             ? 1ULL
                                                             : 0xcULL) 
                                                           >> 0x20U)) 
                                                  << 0xbU));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[6U] 
            = ((0xfffff800U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[6U]) 
               | ((IData)((((1U == (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__instr_data_out[9U] 
                                          >> 0x19U)))
                             ? 1ULL : 0xcULL) >> 0x20U)) 
                  >> 0x15U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
            = ((0x3fffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U]) 
               | (0xffffc000U & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__instr_data_out[0xaU] 
                                  << 0x10U) | (0xc000U 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__instr_data_out[9U] 
                                                  >> 0x10U)))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[9U] 
            = ((0xffffc000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[9U]) 
               | (0x3fffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__instr_data_out[0xaU] 
                             >> 0x10U)));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[0U] 
            = ((0xfffffffeU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[0U]) 
               | (0U != (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__instr_data_out[9U] 
                               >> 0x19U))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[2U] 
            = ((0x7ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[2U]) 
               | ((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__instr_data_out[9U])) 
                            << 0x27U) | (((QData)((IData)(
                                                          vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__instr_data_out[8U])) 
                                          << 7U) | 
                                         ((QData)((IData)(
                                                          vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__instr_data_out[7U])) 
                                          >> 0x19U)))) 
                  << 0xbU));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[3U] 
            = (((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__instr_data_out[9U])) 
                          << 0x27U) | (((QData)((IData)(
                                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__instr_data_out[8U])) 
                                        << 7U) | ((QData)((IData)(
                                                                  vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__instr_data_out[7U])) 
                                                  >> 0x19U)))) 
                >> 0x15U) | ((IData)(((((QData)((IData)(
                                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__instr_data_out[9U])) 
                                        << 0x27U) | 
                                       (((QData)((IData)(
                                                         vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__instr_data_out[8U])) 
                                         << 7U) | ((QData)((IData)(
                                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__instr_data_out[7U])) 
                                                   >> 0x19U))) 
                                      >> 0x20U)) << 0xbU));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[4U] 
            = ((0xfffff800U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[4U]) 
               | ((IData)(((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__instr_data_out[9U])) 
                             << 0x27U) | (((QData)((IData)(
                                                           vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__instr_data_out[8U])) 
                                           << 7U) | 
                                          ((QData)((IData)(
                                                           vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__instr_data_out[7U])) 
                                           >> 0x19U))) 
                           >> 0x20U)) >> 0x15U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
            = ((0xffffc7ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U]) 
               | (0x3800U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__instr_data_out[9U] 
                             >> 0x10U)));
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__is_compressed_rvc = 1U;
    if ((0U != (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                      >> 0xeU)))) {
        if ((1U != (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                          >> 0xeU)))) {
            if ((2U != (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                              >> 0xeU)))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__is_compressed_rvc = 0U;
            }
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__is_illegal_rvc = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[9U] 
            << 0x12U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                         >> 0xeU));
    if ((0U == (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                      >> 0xeU)))) {
        if ((0x20000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U])) {
            if ((0x10000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U])) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                    = ((0x8000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U])
                        ? (0x843023U | ((0xc000000U 
                                         & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                            << 7U)) 
                                        | ((0x2000000U 
                                            & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                               >> 1U)) 
                                           | ((0x700000U 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                  << 4U)) 
                                              | ((0x38000U 
                                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                     >> 6U)) 
                                                 | (0xc00U 
                                                    & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                       >> 0xeU)))))))
                        : (0x842023U | ((0x4000000U 
                                         & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                            << 7U)) 
                                        | ((0x2000000U 
                                            & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                               >> 1U)) 
                                           | ((0x700000U 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                  << 4U)) 
                                              | ((0x38000U 
                                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                     >> 6U)) 
                                                 | ((0xc00U 
                                                     & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                        >> 0xeU)) 
                                                    | (0x200U 
                                                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                          >> 0xbU)))))))));
            } else if ((0x8000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U])) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                    = (0x843027U | ((0xc000000U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                   << 7U)) 
                                    | ((0x2000000U 
                                        & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                           >> 1U)) 
                                       | ((0x700000U 
                                           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                              << 4U)) 
                                          | ((0x38000U 
                                              & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                 >> 6U)) 
                                             | (0xc00U 
                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                   >> 0xeU)))))));
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                    = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[9U] 
                        << 0x12U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                     >> 0xeU));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__is_illegal_rvc = 1U;
            }
        } else if ((0x10000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U])) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                = ((0x8000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U])
                    ? (0x43403U | ((0xc000000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                  << 7U)) 
                                   | ((0x3800000U & 
                                       (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                        >> 1U)) | (
                                                   (0x38000U 
                                                    & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                       >> 6U)) 
                                                   | (0x380U 
                                                      & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                         >> 9U))))))
                    : (0x42403U | ((0x4000000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                  << 7U)) 
                                   | ((0x3800000U & 
                                       (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                        >> 1U)) | (
                                                   (0x400000U 
                                                    & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                       << 2U)) 
                                                   | ((0x38000U 
                                                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                          >> 6U)) 
                                                      | (0x380U 
                                                         & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                            >> 9U))))))));
        } else if ((0x8000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U])) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                = (0x43407U | ((0xc000000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                              << 7U)) 
                               | ((0x3800000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                 >> 1U)) 
                                  | ((0x38000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                  >> 6U)) 
                                     | (0x380U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                  >> 9U))))));
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                = (0x10413U | ((0x3c000000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                               << 5U)) 
                               | ((0x3000000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                 >> 1U)) 
                                  | ((0x800000U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                   << 4U)) 
                                     | ((0x400000U 
                                         & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                            << 2U)) 
                                        | (0x380U & 
                                           (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                            >> 9U)))))));
            if ((0U == (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                 >> 0x13U)))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__is_illegal_rvc = 1U;
            }
        }
    } else if ((1U == (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                             >> 0xeU)))) {
        if ((0x20000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U])) {
            if ((0x10000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U])) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                    = (0x40063U | (((- (IData)((1U 
                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                   >> 0x1aU)))) 
                                    << 0x1cU) | ((0xc000000U 
                                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                     << 7U)) 
                                                 | ((0x2000000U 
                                                     & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                        << 9U)) 
                                                    | ((0x38000U 
                                                        & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                           >> 6U)) 
                                                       | ((0x1000U 
                                                           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                              >> 0xfU)) 
                                                          | ((0xc00U 
                                                              & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                                 >> 0xeU)) 
                                                             | ((0x300U 
                                                                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                                    >> 9U)) 
                                                                | (0x80U 
                                                                   & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                                      >> 0x13U))))))))));
            } else if ((0x8000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U])) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                    = (0x6fU | ((0x80000000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                << 5U)) 
                                | ((0x40000000U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                   << 8U)) 
                                   | ((0x30000000U 
                                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                          << 5U)) | 
                                      ((0x8000000U 
                                        & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                           << 7U)) 
                                       | ((0x4000000U 
                                           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                              << 5U)) 
                                          | ((0x2000000U 
                                              & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                 << 9U)) 
                                             | ((0x1000000U 
                                                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                    >> 1U)) 
                                                | ((0xe00000U 
                                                    & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                       << 4U)) 
                                                   | ((0x1ff000U 
                                                       & ((- (IData)(
                                                                     (1U 
                                                                      & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                                         >> 0x1aU)))) 
                                                          << 0xcU)) 
                                                      | (0x80U 
                                                         & ((~ 
                                                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                              >> 0x1dU)) 
                                                            << 7U))))))))))));
            } else if ((0x2000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U])) {
                if ((0x1000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U])) {
                    if ((0x4000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U])) {
                        if ((0x100000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U])) {
                            if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                          >> 0x13U)))) {
                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                    = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[9U] 
                                        << 0x12U) | 
                                       (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                        >> 0xeU));
                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__is_illegal_rvc = 1U;
                            }
                        } else {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                = ((0x80000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U])
                                    ? (0x84043bU | 
                                       ((0x700000U 
                                         & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                            << 4U)) 
                                        | ((0x38000U 
                                            & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                               >> 6U)) 
                                           | (0x380U 
                                              & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                 >> 0xeU)))))
                                    : (0x4084043bU 
                                       | ((0x700000U 
                                           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                              << 4U)) 
                                          | ((0x38000U 
                                              & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                 >> 6U)) 
                                             | (0x380U 
                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                   >> 0xeU))))));
                        }
                    } else {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                            = ((0x100000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U])
                                ? ((0x80000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U])
                                    ? (0x847433U | 
                                       ((0x700000U 
                                         & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                            << 4U)) 
                                        | ((0x38000U 
                                            & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                               >> 6U)) 
                                           | (0x380U 
                                              & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                 >> 0xeU)))))
                                    : (0x846433U | 
                                       ((0x700000U 
                                         & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                            << 4U)) 
                                        | ((0x38000U 
                                            & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                               >> 6U)) 
                                           | (0x380U 
                                              & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                 >> 0xeU))))))
                                : ((0x80000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U])
                                    ? (0x844433U | 
                                       ((0x700000U 
                                         & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                            << 4U)) 
                                        | ((0x38000U 
                                            & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                               >> 6U)) 
                                           | (0x380U 
                                              & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                 >> 0xeU)))))
                                    : (0x40840433U 
                                       | ((0x700000U 
                                           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                              << 4U)) 
                                          | ((0x38000U 
                                              & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                 >> 6U)) 
                                             | (0x380U 
                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                   >> 0xeU)))))));
                    }
                } else {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                        = (0x47413U | (((- (IData)(
                                                   (1U 
                                                    & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                       >> 0x1aU)))) 
                                        << 0x1aU) | 
                                       ((0x2000000U 
                                         & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                            >> 1U)) 
                                        | ((0x1f00000U 
                                            & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                               << 4U)) 
                                           | ((0x38000U 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                  >> 6U)) 
                                              | (0x380U 
                                                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                    >> 0xeU)))))));
                }
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                    = (0x45413U | ((0x40000000U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                   << 6U)) 
                                   | ((0x2000000U & 
                                       (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                        >> 1U)) | (
                                                   (0x1f00000U 
                                                    & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                       << 4U)) 
                                                   | ((0x38000U 
                                                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                          >> 6U)) 
                                                      | (0x380U 
                                                         & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                            >> 0xeU)))))));
            }
        } else if ((0x10000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U])) {
            if ((0x8000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U])) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                    = (0x37U | (((- (IData)((1U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                   >> 0x1aU)))) 
                                 << 0x11U) | ((0x1f000U 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                  >> 4U)) 
                                              | (0xf80U 
                                                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                    >> 0xeU)))));
                if ((0U == ((0x20U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                      >> 0x15U)) | 
                            (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                      >> 0x10U))))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__is_illegal_rvc = 1U;
                }
                if ((2U == (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                     >> 0x15U)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                        = (0x10113U | (((- (IData)(
                                                   (1U 
                                                    & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                       >> 0x1aU)))) 
                                        << 0x1dU) | 
                                       ((0x18000000U 
                                         & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                            << 0xaU)) 
                                        | ((0x4000000U 
                                            & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                               << 7U)) 
                                           | ((0x2000000U 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                  << 9U)) 
                                              | (0x1000000U 
                                                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                    << 4U)))))));
                }
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                    = (0x13U | (((- (IData)((1U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                   >> 0x1aU)))) 
                                 << 0x1aU) | ((0x2000000U 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                  >> 1U)) 
                                              | ((0x1f00000U 
                                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                     << 4U)) 
                                                 | (0xf80U 
                                                    & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                       >> 0xeU))))));
            }
        } else if ((0x8000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U])) {
            if ((0U != (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                 >> 0x15U)))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                    = (0x1bU | (((- (IData)((1U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                   >> 0x1aU)))) 
                                 << 0x1aU) | ((0x2000000U 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                  >> 1U)) 
                                              | ((0x1f00000U 
                                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                     << 4U)) 
                                                 | ((0xf8000U 
                                                     & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                        >> 6U)) 
                                                    | (0xf80U 
                                                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                          >> 0xeU)))))));
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__is_illegal_rvc = 1U;
            }
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                = (0x13U | (((- (IData)((1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                               >> 0x1aU)))) 
                             << 0x1aU) | ((0x2000000U 
                                           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                              >> 1U)) 
                                          | ((0x1f00000U 
                                              & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                 << 4U)) 
                                             | ((0xf8000U 
                                                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                    >> 6U)) 
                                                | (0xf80U 
                                                   & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                      >> 0xeU)))))));
        }
    } else if ((2U == (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                             >> 0xeU)))) {
        if ((0x20000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U])) {
            if ((0x10000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U])) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                    = ((0x8000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U])
                        ? (0x13023U | ((0x1c000000U 
                                        & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                           << 5U)) 
                                       | ((0x2000000U 
                                           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                              >> 1U)) 
                                          | ((0x1f00000U 
                                              & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                 << 4U)) 
                                             | (0xc00U 
                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                   >> 0xeU))))))
                        : (0x12023U | ((0xc000000U 
                                        & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                           << 5U)) 
                                       | ((0x2000000U 
                                           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                              >> 1U)) 
                                          | ((0x1f00000U 
                                              & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                 << 4U)) 
                                             | (0xe00U 
                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                   >> 0xeU)))))));
            } else if ((0x8000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U])) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                    = (0x13027U | ((0x1c000000U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                   << 5U)) 
                                   | ((0x2000000U & 
                                       (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                        >> 1U)) | (
                                                   (0x1f00000U 
                                                    & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                       << 4U)) 
                                                   | (0xc00U 
                                                      & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                         >> 0xeU))))));
            } else if ((0x4000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U])) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                    = (0x33U | ((0x1f00000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                               << 4U)) 
                                | ((0xf8000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                >> 6U)) 
                                   | (0xf80U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                >> 0xeU)))));
                if ((0U == (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                     >> 0x10U)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                        = ((0U == (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                            >> 0x15U)))
                            ? 0x100073U : (0xe7U | 
                                           (0xf8000U 
                                            & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                               >> 6U))));
                }
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                    = (0x33U | ((0x1f00000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                               << 4U)) 
                                | (0xf80U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                             >> 0xeU))));
                if ((0U == (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                     >> 0x10U)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                        = (0x67U | (0xf8000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                >> 6U)));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__is_illegal_rvc 
                        = (0U == (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                           >> 0x15U)));
                }
            }
        } else if ((0x10000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U])) {
            if ((0x8000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U])) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                    = (0x13003U | ((0x1c000000U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                   << 0xaU)) 
                                   | ((0x2000000U & 
                                       (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                        >> 1U)) | (
                                                   (0x1800000U 
                                                    & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                       << 4U)) 
                                                   | (0xf80U 
                                                      & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                         >> 0xeU))))));
                if ((0U == (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                     >> 0x15U)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__is_illegal_rvc = 1U;
                }
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                    = (0x12003U | ((0xc000000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                  << 0xaU)) 
                                   | ((0x2000000U & 
                                       (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                        >> 1U)) | (
                                                   (0x1c00000U 
                                                    & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                       << 4U)) 
                                                   | (0xf80U 
                                                      & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                         >> 0xeU))))));
                if ((0U == (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                     >> 0x15U)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__is_illegal_rvc = 1U;
                }
            }
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                = ((0x8000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U])
                    ? (0x13007U | ((0x1c000000U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                   << 0xaU)) 
                                   | ((0x2000000U & 
                                       (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                        >> 1U)) | (
                                                   (0x1800000U 
                                                    & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                       << 4U)) 
                                                   | (0xf80U 
                                                      & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                         >> 0xeU))))))
                    : (0x1013U | ((0x2000000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                 >> 1U)) 
                                  | ((0x1f00000U & 
                                      (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                       << 4U)) | ((0xf8000U 
                                                   & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                      >> 6U)) 
                                                  | (0xf80U 
                                                     & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                                        >> 0xeU)))))));
        }
    }
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__is_illegal_rvc) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
            = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[9U] 
                << 0x12U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                             >> 0xeU));
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk2__BRA__0__KET____DOT__decoder_i__orig_instr_o = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__genblk2__BRA__0__KET____DOT__decoder_i__DOT____VdfgExtracted_h91fb3c13__0 
        = ((0x7c00U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                       >> 5U)) | ((0x3e0U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                             >> 0xfU)) 
                                  | (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                              >> 7U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__genblk2__BRA__0__KET____DOT__decoder_i__DOT____VdfgExtracted_he0d336ee__0 
        = ((0x3e0U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                      >> 0xaU)) | (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                            >> 0x14U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__genblk2__BRA__0__KET____DOT__decoder_i__DOT__ebreak = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__genblk2__BRA__0__KET____DOT__decoder_i__DOT__ecall = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__genblk2__BRA__0__KET____DOT__decoder_i__DOT__gen_accel_decoder__DOT__i_accel_decoder__DOT__is_fd = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__genblk2__BRA__0__KET____DOT__decoder_i__DOT__gen_accel_decoder__DOT__i_accel_decoder__DOT__is_fs1 = 0U;
    __Vfunc_is_vector_csr__39__csr = (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                      >> 0x14U);
    {
        if ((((((((8U == (IData)(__Vfunc_is_vector_csr__39__csr)) 
                  || (9U == (IData)(__Vfunc_is_vector_csr__39__csr))) 
                 || (0xaU == (IData)(__Vfunc_is_vector_csr__39__csr))) 
                || (0xfU == (IData)(__Vfunc_is_vector_csr__39__csr))) 
               || (0xc20U == (IData)(__Vfunc_is_vector_csr__39__csr))) 
              || (0xc21U == (IData)(__Vfunc_is_vector_csr__39__csr))) 
             || (0xc22U == (IData)(__Vfunc_is_vector_csr__39__csr)))) {
            vlSelf->__Vfunc_is_vector_csr__39__Vfuncout = 1U;
            goto __Vlabel1571;
        } else {
            vlSelf->__Vfunc_is_vector_csr__39__Vfuncout = 0U;
            goto __Vlabel1571;
        }
        __Vlabel1571: ;
    }
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__genblk2__BRA__0__KET____DOT__decoder_i__DOT__gen_accel_decoder__DOT__i_accel_decoder__DOT____VdfgExtracted_h35048444__1 
        = vlSelf->__Vfunc_is_vector_csr__39__Vfuncout;
    __Vfunc_is_vector_csr__40__csr = (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                      >> 0x14U);
    {
        if ((((((((8U == (IData)(__Vfunc_is_vector_csr__40__csr)) 
                  || (9U == (IData)(__Vfunc_is_vector_csr__40__csr))) 
                 || (0xaU == (IData)(__Vfunc_is_vector_csr__40__csr))) 
                || (0xfU == (IData)(__Vfunc_is_vector_csr__40__csr))) 
               || (0xc20U == (IData)(__Vfunc_is_vector_csr__40__csr))) 
              || (0xc21U == (IData)(__Vfunc_is_vector_csr__40__csr))) 
             || (0xc22U == (IData)(__Vfunc_is_vector_csr__40__csr)))) {
            vlSelf->__Vfunc_is_vector_csr__40__Vfuncout = 1U;
            goto __Vlabel1572;
        } else {
            vlSelf->__Vfunc_is_vector_csr__40__Vfuncout = 0U;
            goto __Vlabel1572;
        }
        __Vlabel1572: ;
    }
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__genblk2__BRA__0__KET____DOT__decoder_i__DOT__gen_accel_decoder__DOT__i_accel_decoder__DOT____VdfgExtracted_h35048444__2 
        = vlSelf->__Vfunc_is_vector_csr__40__Vfuncout;
    __Vfunc_is_vector_csr__41__csr = (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                      >> 0x14U);
    {
        if ((((((((8U == (IData)(__Vfunc_is_vector_csr__41__csr)) 
                  || (9U == (IData)(__Vfunc_is_vector_csr__41__csr))) 
                 || (0xaU == (IData)(__Vfunc_is_vector_csr__41__csr))) 
                || (0xfU == (IData)(__Vfunc_is_vector_csr__41__csr))) 
               || (0xc20U == (IData)(__Vfunc_is_vector_csr__41__csr))) 
              || (0xc21U == (IData)(__Vfunc_is_vector_csr__41__csr))) 
             || (0xc22U == (IData)(__Vfunc_is_vector_csr__41__csr)))) {
            vlSelf->__Vfunc_is_vector_csr__41__Vfuncout = 1U;
            goto __Vlabel1573;
        } else {
            vlSelf->__Vfunc_is_vector_csr__41__Vfuncout = 0U;
            goto __Vlabel1573;
        }
        __Vlabel1573: ;
    }
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__genblk2__BRA__0__KET____DOT__decoder_i__DOT__gen_accel_decoder__DOT__i_accel_decoder__DOT____VdfgExtracted_h35048444__3 
        = vlSelf->__Vfunc_is_vector_csr__41__Vfuncout;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__genblk2__BRA__0__KET____DOT__decoder_i__DOT__gen_accel_decoder__DOT__i_accel_decoder__DOT__is_vfp = 0U;
    __Vfunc_is_vector_csr__38__csr = (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                      >> 0x14U);
    {
        if ((((((((8U == (IData)(__Vfunc_is_vector_csr__38__csr)) 
                  || (9U == (IData)(__Vfunc_is_vector_csr__38__csr))) 
                 || (0xaU == (IData)(__Vfunc_is_vector_csr__38__csr))) 
                || (0xfU == (IData)(__Vfunc_is_vector_csr__38__csr))) 
               || (0xc20U == (IData)(__Vfunc_is_vector_csr__38__csr))) 
              || (0xc21U == (IData)(__Vfunc_is_vector_csr__38__csr))) 
             || (0xc22U == (IData)(__Vfunc_is_vector_csr__38__csr)))) {
            vlSelf->__Vfunc_is_vector_csr__38__Vfuncout = 1U;
            goto __Vlabel1574;
        } else {
            vlSelf->__Vfunc_is_vector_csr__38__Vfuncout = 0U;
            goto __Vlabel1574;
        }
        __Vlabel1574: ;
    }
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__genblk2__BRA__0__KET____DOT__decoder_i__DOT__gen_accel_decoder__DOT__i_accel_decoder__DOT____VdfgExtracted_h35048444__0 
        = vlSelf->__Vfunc_is_vector_csr__38__Vfuncout;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__genblk2__BRA__0__KET____DOT__decoder_i__DOT__gen_accel_decoder__DOT__i_accel_decoder__DOT__is_rs1 = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__genblk2__BRA__0__KET____DOT__decoder_i__DOT__gen_accel_decoder__DOT__i_accel_decoder__DOT__is_rs2 = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__genblk2__BRA__0__KET____DOT__decoder_i__DOT__gen_accel_decoder__DOT__i_accel_decoder__DOT__is_rd = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__genblk2__BRA__0__KET____DOT__decoder_i__DOT__is_accel = 0U;
    if ((0x57U == (0x7fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o))) {
        if ((1U == (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                          >> 0xcU)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__genblk2__BRA__0__KET____DOT__decoder_i__DOT__gen_accel_decoder__DOT__i_accel_decoder__DOT__is_fd 
                = (0x10U == (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                             >> 0x1aU));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__genblk2__BRA__0__KET____DOT__decoder_i__DOT__gen_accel_decoder__DOT__i_accel_decoder__DOT__is_vfp = 1U;
        } else if ((2U != (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                 >> 0xcU)))) {
            if ((4U != (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                              >> 0xcU)))) {
                if ((5U == (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                  >> 0xcU)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__genblk2__BRA__0__KET____DOT__decoder_i__DOT__gen_accel_decoder__DOT__i_accel_decoder__DOT__is_vfp = 1U;
                }
            }
        }
        if ((1U != (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                          >> 0xcU)))) {
            if ((2U != (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                              >> 0xcU)))) {
                if ((4U != (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                  >> 0xcU)))) {
                    if ((5U == (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                      >> 0xcU)))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__genblk2__BRA__0__KET____DOT__decoder_i__DOT__gen_accel_decoder__DOT__i_accel_decoder__DOT__is_fs1 = 1U;
                    }
                    if ((5U != (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                      >> 0xcU)))) {
                        if ((6U != (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                          >> 0xcU)))) {
                            if ((7U == (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                              >> 0xcU)))) {
                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__genblk2__BRA__0__KET____DOT__decoder_i__DOT__gen_accel_decoder__DOT__i_accel_decoder__DOT__is_rs2 
                                    = (0x40U == (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                                 >> 0x19U));
                            }
                        }
                    }
                }
                if ((4U == (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                  >> 0xcU)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__genblk2__BRA__0__KET____DOT__decoder_i__DOT__gen_accel_decoder__DOT__i_accel_decoder__DOT__is_rs1 = 1U;
                } else if ((5U != (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                         >> 0xcU)))) {
                    if ((6U == (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                      >> 0xcU)))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__genblk2__BRA__0__KET____DOT__decoder_i__DOT__gen_accel_decoder__DOT__i_accel_decoder__DOT__is_rs1 = 1U;
                    } else if ((7U == (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                             >> 0xcU)))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__genblk2__BRA__0__KET____DOT__decoder_i__DOT__gen_accel_decoder__DOT__i_accel_decoder__DOT__is_rs1 
                            = (3U != (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                      >> 0x1eU));
                    }
                }
            }
            if ((2U == (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                              >> 0xcU)))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__genblk2__BRA__0__KET____DOT__decoder_i__DOT__gen_accel_decoder__DOT__i_accel_decoder__DOT__is_rd 
                    = (0x10U == (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                 >> 0x1aU));
            } else if ((4U != (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                     >> 0xcU)))) {
                if ((5U != (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                  >> 0xcU)))) {
                    if ((6U != (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                      >> 0xcU)))) {
                        if ((7U == (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                          >> 0xcU)))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__genblk2__BRA__0__KET____DOT__decoder_i__DOT__gen_accel_decoder__DOT__i_accel_decoder__DOT__is_rd = 1U;
                        }
                    }
                }
            }
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__genblk2__BRA__0__KET____DOT__decoder_i__DOT__is_accel = 1U;
    } else {
        if (((7U == (0x7fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o)) 
             || (0x27U == (0x7fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o)))) {
            if (((((((((0U == ((8U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                      >> 0x19U)) | 
                               (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                      >> 0xcU)))) || 
                       (5U == ((8U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                      >> 0x19U)) | 
                               (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                      >> 0xcU))))) 
                      || (6U == ((8U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                        >> 0x19U)) 
                                 | (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                          >> 0xcU))))) 
                     || (7U == ((8U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                       >> 0x19U)) | 
                                (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                       >> 0xcU))))) 
                    || (8U == ((8U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                      >> 0x19U)) | 
                               (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                      >> 0xcU))))) 
                   || (0xdU == ((8U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                       >> 0x19U)) | 
                                (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                       >> 0xcU))))) 
                  || (0xeU == ((8U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                      >> 0x19U)) | 
                               (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                      >> 0xcU))))) 
                 || (0xfU == ((8U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                     >> 0x19U)) | (7U 
                                                   & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                                      >> 0xcU)))))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__genblk2__BRA__0__KET____DOT__decoder_i__DOT__gen_accel_decoder__DOT__i_accel_decoder__DOT__is_rs1 = 1U;
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__genblk2__BRA__0__KET____DOT__decoder_i__DOT__gen_accel_decoder__DOT__i_accel_decoder__DOT__is_rs2 
                    = (2U == (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                    >> 0x1aU)));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__genblk2__BRA__0__KET____DOT__decoder_i__DOT__is_accel = 1U;
            }
        } else {
            if ((0x2fU == (0x7fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o))) {
                if (((((0U == (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                     >> 0xcU))) || 
                       (5U == (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                     >> 0xcU)))) || 
                      (6U == (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                    >> 0xcU)))) || 
                     (7U == (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                   >> 0xcU))))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__genblk2__BRA__0__KET____DOT__decoder_i__DOT__gen_accel_decoder__DOT__i_accel_decoder__DOT__is_rs1 = 1U;
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__genblk2__BRA__0__KET____DOT__decoder_i__DOT__is_accel = 1U;
                }
            } else if ((0x73U == (0x7fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o))) {
                if (((((((1U == (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                       >> 0xcU))) || 
                         (2U == (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                       >> 0xcU)))) 
                        || (3U == (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                         >> 0xcU)))) 
                       || (5U == (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                        >> 0xcU)))) 
                      || (6U == (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                       >> 0xcU)))) 
                     || (7U == (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                      >> 0xcU))))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__genblk2__BRA__0__KET____DOT__decoder_i__DOT__gen_accel_decoder__DOT__i_accel_decoder__DOT__is_rs1 
                        = ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__genblk2__BRA__0__KET____DOT__decoder_i__DOT__gen_accel_decoder__DOT__i_accel_decoder__DOT____VdfgExtracted_h35048444__1;
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__genblk2__BRA__0__KET____DOT__decoder_i__DOT__is_accel 
                        = ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__genblk2__BRA__0__KET____DOT__decoder_i__DOT__gen_accel_decoder__DOT__i_accel_decoder__DOT____VdfgExtracted_h35048444__0;
                }
            }
            if ((0x2fU != (0x7fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o))) {
                if ((0x73U == (0x7fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o))) {
                    if (((((((1U == (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                           >> 0xcU))) 
                             || (2U == (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                              >> 0xcU)))) 
                            || (3U == (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                             >> 0xcU)))) 
                           || (5U == (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                            >> 0xcU)))) 
                          || (6U == (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                           >> 0xcU)))) 
                         || (7U == (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                          >> 0xcU))))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__genblk2__BRA__0__KET____DOT__decoder_i__DOT__gen_accel_decoder__DOT__i_accel_decoder__DOT__is_rs2 
                            = ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__genblk2__BRA__0__KET____DOT__decoder_i__DOT__gen_accel_decoder__DOT__i_accel_decoder__DOT____VdfgExtracted_h35048444__2;
                    }
                }
            }
        }
        if ((1U & (~ ((7U == (0x7fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o)) 
                      || (0x27U == (0x7fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o)))))) {
            if ((0x2fU != (0x7fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o))) {
                if ((0x73U == (0x7fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o))) {
                    if (((((((1U == (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                           >> 0xcU))) 
                             || (2U == (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                              >> 0xcU)))) 
                            || (3U == (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                             >> 0xcU)))) 
                           || (5U == (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                            >> 0xcU)))) 
                          || (6U == (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                           >> 0xcU)))) 
                         || (7U == (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                          >> 0xcU))))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__genblk2__BRA__0__KET____DOT__decoder_i__DOT__gen_accel_decoder__DOT__i_accel_decoder__DOT__is_rd 
                            = ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__genblk2__BRA__0__KET____DOT__decoder_i__DOT__gen_accel_decoder__DOT__i_accel_decoder__DOT____VdfgExtracted_h35048444__3;
                    }
                }
            }
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__is_control_flow_instr = 0U;
    if ((1U & (~ vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[0U]))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk2__BRA__0__KET____DOT__decoder_i__orig_instr_o 
            = (IData)(((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__is_compressed_rvc)
                        ? (QData)((IData)((0xffffU 
                                           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_queue__fetch_entry_o[8U] 
                                              >> 0xeU))))
                        : (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o))));
        if ((0x40U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o)) {
            if ((0x20U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o)) {
                if ((0x10U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o)) {
                    if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                      >> 2U)))) {
                            if ((2U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o)) {
                                if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o)) {
                                    if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                                  >> 0xeU)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                                    >> 0xdU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                                     >> 0xcU)))) {
                                                if (
                                                    (0U 
                                                     != 
                                                     (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                                      >> 0x14U))) {
                                                    if (
                                                        (1U 
                                                         == 
                                                         (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                                          >> 0x14U))) {
                                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__genblk2__BRA__0__KET____DOT__decoder_i__DOT__ebreak = 1U;
                                                    }
                                                }
                                                if (
                                                    (0U 
                                                     == 
                                                     (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                                      >> 0x14U))) {
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__genblk2__BRA__0__KET____DOT__decoder_i__DOT__ecall = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                              >> 4U)))) {
                    if ((8U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o)) {
                        if ((4U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o)) {
                            if ((2U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o)) {
                                if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o)) {
                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__is_control_flow_instr = 1U;
                                }
                            }
                        }
                    } else if ((4U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o)) {
                        if ((2U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o)) {
                            if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o)) {
                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__is_control_flow_instr = 1U;
                            }
                        }
                    } else if ((2U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o)) {
                        if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o)) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__is_control_flow_instr = 1U;
                            if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o 
                                          >> 0xeU)))) {
                                if ((0x2000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT____Vcellout__genblk1__DOT__genblk1__BRA__0__KET____DOT__compressed_decoder_i__instr_o)) {
                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__is_control_flow_instr = 0U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__genblk2__BRA__0__KET____DOT__decoder_i__DOT__is_accel) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__is_control_flow_instr = 0U;
    }
}

VL_INLINE_OPT void Vara_tb_verilator___024root___nba_comb__TOP__553(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___nba_comb__TOP__553\n"); );
    // Init
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT____VdfgTmp_hce28e2fc__0;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT____VdfgTmp_hce28e2fc__0 = 0;
    // Body
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT____VdfgTmp_hce28e2fc__0 
        = ((0x7ffffffffffffULL & (((QData)((IData)(
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_q[2U])) 
                                   << 0x2dU) | (((QData)((IData)(
                                                                 vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_q[1U])) 
                                                 << 0xdU) 
                                                | ((QData)((IData)(
                                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_q[0U])) 
                                                   >> 0x13U)))) 
           == (0x7ffffffffffffULL & (((QData)((IData)(
                                                      vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_dirty_rr__DOT__gen_arbiter__DOT__data_nodes[4U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_wbuffer__DOT__i_dirty_rr__DOT__gen_arbiter__DOT__data_nodes[3U])))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT____VdfgTmp_he90f889c__0 
        = ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT____VdfgTmp_hce28e2fc__0) 
           & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT____VdfgTmp_hf77a6657__0));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_rdwr_collision 
        = ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT____VdfgTmp_hce28e2fc__0) 
           & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_vld_q));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_rdrd_collision_d 
        = ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT____Vcellout__i_wt_dcache_wbuffer__miss_req_o) 
             << 3U) & ((0xfffffff8U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_rdrd_collision_q)) 
                       | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT____VdfgTmp_he90f889c__0) 
                          << 3U))) | ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT____Vcellout__gen_rd_ports__BRA__2__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__miss_req_o) 
                                        << 2U) & ((0xfffffffcU 
                                                   & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_rdrd_collision_q)) 
                                                  | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT____VdfgTmp_h14d9f494__0) 
                                                     << 2U))) 
                                      | ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT____Vcellout__gen_rd_ports__BRA__1__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__miss_req_o) 
                                           << 1U) & 
                                          ((0xfffffffeU 
                                            & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_rdrd_collision_q)) 
                                           | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT____VdfgTmp_hf3981adc__0) 
                                              << 1U))) 
                                         | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT____Vcellout__gen_rd_ports__BRA__0__KET____DOT__genblk1__DOT__i_wt_dcache_ctrl__miss_req_o) 
                                            & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_rdrd_collision_q) 
                                               | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT____VdfgTmp_hb0b120f9__0))))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT____VdfgExtracted_h394368a0__0 
        = ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__mshr_rdwr_collision)) 
           & (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_cache_wt__DOT__i_cache_subsystem__DOT__i_wt_dcache__DOT__i_wt_dcache_missunit__DOT__miss_req_masked_d)));
}

VL_INLINE_OPT void Vara_tb_verilator___024root___nba_comb__TOP__574(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___nba_comb__TOP__574\n"); );
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__gen_pulp_divsqrt__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_status_q 
        = ((0x1fU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__gen_pulp_divsqrt__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_status_q)) 
           | (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__gen_pulp_divsqrt__DOT__i_fpnew_divsqrt_multi__DOT__unit_done_q)
                ? (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__gen_pulp_divsqrt__DOT__i_fpnew_divsqrt_multi__DOT__held_status_q)
                : (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__gen_pulp_divsqrt__DOT__i_fpnew_divsqrt_multi__DOT____Vcellout__i_divsqrt_lei__Fflags_SO)) 
              << 5U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__gen_pulp_divsqrt__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_result_q[2U] 
        = (IData)(((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__gen_pulp_divsqrt__DOT__i_fpnew_divsqrt_multi__DOT__unit_done_q)
                    ? vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__gen_pulp_divsqrt__DOT__i_fpnew_divsqrt_multi__DOT__held_result_q
                    : vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__gen_pulp_divsqrt__DOT__i_fpnew_divsqrt_multi__DOT__adjusted_result));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__gen_pulp_divsqrt__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_result_q[3U] 
        = (IData)((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__gen_pulp_divsqrt__DOT__i_fpnew_divsqrt_multi__DOT__unit_done_q)
                     ? vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__gen_pulp_divsqrt__DOT__i_fpnew_divsqrt_multi__DOT__held_result_q
                     : vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__gen_pulp_divsqrt__DOT__i_fpnew_divsqrt_multi__DOT__adjusted_result) 
                   >> 0x20U));
}

VL_INLINE_OPT void Vara_tb_verilator___024root___nba_comb__TOP__579(Vara_tb_verilator___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___nba_comb__TOP__579\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<8>/*255:0*/ __Vtemp_9;
    // Body
    if ((0x2aU != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__op_q))) {
        if ((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__op_q))) {
            if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_p_mul_ew64__DOT__p_mul__DOT__unnamedblk3__DOT__b = 1U;
                }
                if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_p_mul_ew64__DOT__p_mul__DOT__unnamedblk2__DOT__b = 1U;
                }
            }
            if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_p_mul_ew64__DOT__p_mul__DOT__unnamedblk4__DOT__b = 1U;
                }
            }
        }
    }
    if ((0x2aU != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__op_q))) {
        if ((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__op_q))) {
            if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_p_mul_ew32__DOT__p_mul__DOT__unnamedblk10__DOT__b = 2U;
                }
                if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_p_mul_ew32__DOT__p_mul__DOT__unnamedblk11__DOT__b = 2U;
                }
            }
            if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_p_mul_ew32__DOT__p_mul__DOT__unnamedblk12__DOT__b = 2U;
                }
            }
        }
    }
    if ((0x2aU != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q))) {
        if ((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q))) {
            if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_p_mul_ew16__DOT__p_mul__DOT__unnamedblk18__DOT__b = 4U;
                }
                if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_p_mul_ew16__DOT__p_mul__DOT__unnamedblk19__DOT__b = 4U;
                }
            }
            if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_p_mul_ew16__DOT__p_mul__DOT__unnamedblk20__DOT__b = 4U;
                }
            }
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vmul_mask 
        = (0xffU & ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__mask_q) 
                      << 0x18U) | (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__mask_q) 
                                    << 0x10U) | (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__mask_q) 
                                                  << 8U) 
                                                 | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__mask_i)))) 
                    >> (0x1fU & VL_SHIFTL_III(5,32,32, 
                                              (7U & 
                                               (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[0U] 
                                                >> 3U)), 3U))));
    if ((0x2aU != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i))) {
        if ((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i))) {
            if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__gen_p_mul_ew8__DOT__p_mul__DOT__unnamedblk28__DOT__b = 8U;
                }
            }
            if ((1U & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__gen_p_mul_ew8__DOT__p_mul__DOT__unnamedblk26__DOT__b = 8U;
                }
                if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__gen_p_mul_ew8__DOT__p_mul__DOT__unnamedblk27__DOT__b = 8U;
                }
            }
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew64__result_o = 0ULL;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__r = 0U;
    if ((0x2aU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__op_q))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew64__result_o 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[0U])));
    } else if ((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__op_q))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__r 
            = ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))
                ? ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))
                    ? ((0xfeU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__r)) 
                       | ((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[1U] 
                              >> 0x1fU)) & (0ULL != 
                                            (0x7fffffffffffffffULL 
                                             & (((QData)((IData)(
                                                                 vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[0U])))))))
                    : 0U) : ((0xfeU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__r)) 
                             | (1U & ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))
                                       ? ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[1U] 
                                           >> 0x1eU) 
                                          & ((0ULL 
                                              != (0x3fffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[0U]))))) 
                                             | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[1U] 
                                                >> 0x1fU)))
                                       : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[1U] 
                                          >> 0x1eU)))));
        VL_SHIFTR_WWI(128,128,32, __Vtemp_1, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res, 0x3fU);
        __Vtemp_2[0U] = (1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__r));
        __Vtemp_2[1U] = 0U;
        __Vtemp_2[2U] = 0U;
        __Vtemp_2[3U] = 0U;
        VL_ADD_W(4, __Vtemp_3, __Vtemp_1, __Vtemp_2);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew64__result_o 
            = (((QData)((IData)(((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__op_q))
                                  ? __Vtemp_3[1U] : (IData)(
                                                            ((((QData)((IData)(
                                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[0U]))) 
                                                             >> 0x20U))))) 
                << 0x20U) | (QData)((IData)(((0x32U 
                                              == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__op_q))
                                              ? __Vtemp_3[0U]
                                              : (IData)(
                                                        (((QData)((IData)(
                                                                          vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[0U]))))))));
    } else if ((((0x2bU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__op_q)) 
                 || (0x2cU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__op_q))) 
                || (0x2dU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__op_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew64__result_o 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[3U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[2U])));
    } else if (((0x2eU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__op_q)) 
                || (0x30U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__op_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew64__result_o 
            = ((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[1U])) 
                 << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[0U]))) 
               + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__opc_q);
    } else if (((0x2fU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__op_q)) 
                || (0x31U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__op_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew64__result_o 
            = ((- (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__mul_res[0U])))) 
               + vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew64__DOT__gen_pipeline__DOT__opc_q);
    } else {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew64__result_o = 0ULL;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__r = 0U;
    if ((0x2aU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__op_q))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew32__result_o 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[2U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[0U])));
    } else if ((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__op_q))) {
        if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
            if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__r 
                    = ((0xfeU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__r)) 
                       | ((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[0U] 
                              >> 0x1fU)) & (0U != (0x7fffffffU 
                                                   & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[0U]))));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__r 
                    = ((0xfdU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__r)) 
                       | (((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[2U] 
                               >> 0x1fU)) & (0U != 
                                             (0x7fffffffU 
                                              & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[2U]))) 
                          << 1U));
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__r = 0U;
            }
        } else if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__r 
                = ((0xfeU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__r)) 
                   | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[0U] 
                       >> 0x1eU) & (0U != (0xbfffffffU 
                                           & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[0U]))));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__r 
                = ((0xfdU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__r)) 
                   | (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[2U] 
                        >> 0x1eU) & (0U != (0xbfffffffU 
                                            & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[2U]))) 
                      << 1U));
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__r 
                = ((0xfcU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__r)) 
                   | ((2U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[2U] 
                             >> 0x1dU)) | (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[0U] 
                                                 >> 0x1eU))));
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew32__result_o 
            = ((0xffffffff00000000ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew32__result_o) 
               | (IData)((IData)(((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__op_q))
                                   ? (VL_SHIFTR_QQI(64,64,32, 
                                                    (((QData)((IData)(
                                                                      vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[0U]))), 0x1fU) 
                                      + (QData)((IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__r)))))
                                   : (QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[0U]))))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew32__result_o 
            = ((0xffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew32__result_o) 
               | ((QData)((IData)((IData)(((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__op_q))
                                            ? (VL_SHIFTR_QQI(64,64,32, 
                                                             (((QData)((IData)(
                                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[3U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[2U]))), 0x1fU) 
                                               + (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__r) 
                                                                     >> 1U)))))
                                            : (QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[2U])))))) 
                  << 0x20U));
    } else if ((((0x2bU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__op_q)) 
                 || (0x2cU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__op_q))) 
                || (0x2dU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__op_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew32__result_o 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[3U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[1U])));
    } else if (((0x2eU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__op_q)) 
                || (0x30U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__op_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew32__result_o 
            = (((QData)((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[2U] 
                                 + (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__opc_q 
                                            >> 0x20U))))) 
                << 0x20U) | (QData)((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[0U] 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__opc_q)))));
    } else if (((0x2fU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__op_q)) 
                || (0x31U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__op_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew32__result_o 
            = ((0xffffffff00000000ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew32__result_o) 
               | (IData)((IData)(((- vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[0U]) 
                                  + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__opc_q)))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew32__result_o 
            = ((0xffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew32__result_o) 
               | ((QData)((IData)(((- vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__mul_res[2U]) 
                                   + (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew32__DOT__gen_pipeline__DOT__opc_q 
                                              >> 0x20U))))) 
                  << 0x20U));
    } else {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew32__result_o = 0ULL;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r = 0U;
    if ((0x2aU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
            = ((0xffff000000000000ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o) 
               | (((QData)((IData)(((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[2U] 
                                     << 0x10U) | (0xffffU 
                                                  & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[1U])))) 
                   << 0x10U) | (QData)((IData)((0xffffU 
                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[0U])))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
            = ((0xffffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o) 
               | ((QData)((IData)((0xffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[3U]))) 
                  << 0x30U));
    } else if ((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q))) {
        if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
            if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r 
                    = ((0xfeU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r)) 
                       | ((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[0U] 
                              >> 0xfU)) & (0U != (0x7fffU 
                                                  & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[0U]))));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r 
                    = ((0xfdU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r)) 
                       | (((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[1U] 
                               >> 0xfU)) & (0U != (0x7fffU 
                                                   & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[1U]))) 
                          << 1U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r 
                    = ((0xfbU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r)) 
                       | (((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[2U] 
                               >> 0xfU)) & (0U != (0x7fffU 
                                                   & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[2U]))) 
                          << 2U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r 
                    = ((0xf7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r)) 
                       | (((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[3U] 
                               >> 0xfU)) & (0U != (0x7fffU 
                                                   & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[3U]))) 
                          << 3U));
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r = 0U;
            }
        } else if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r 
                = ((0xfeU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r)) 
                   | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[0U] 
                       >> 0xeU) & (0U != (0xbfffU & 
                                          vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[0U]))));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r 
                = ((0xfdU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r)) 
                   | (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[1U] 
                        >> 0xeU) & (0U != (0xbfffU 
                                           & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[1U]))) 
                      << 1U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r 
                = ((0xfbU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r)) 
                   | (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[2U] 
                        >> 0xeU) & (0U != (0xbfffU 
                                           & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[2U]))) 
                      << 2U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r 
                = ((0xf7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r)) 
                   | (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[3U] 
                        >> 0xeU) & (0U != (0xbfffU 
                                           & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[3U]))) 
                      << 3U));
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r 
                = ((0xf8U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r)) 
                   | ((4U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[2U] 
                             >> 0xcU)) | ((2U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[1U] 
                                                 >> 0xdU)) 
                                          | (1U & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[0U] 
                                                   >> 0xeU)))));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r 
                = ((0xf7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r)) 
                   | (8U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[3U] 
                            >> 0xbU)));
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
            = ((0xffffffffffff0000ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o) 
               | (IData)((IData)((0xffffU & ((0x32U 
                                              == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q))
                                              ? (VL_SHIFTR_III(32,32,32, 
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[0U], 0x10U) 
                                                 + 
                                                 (1U 
                                                  & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r)))
                                              : (0xffffU 
                                                 & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[0U]))))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
            = ((0xffffffff0000ffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o) 
               | ((QData)((IData)((0xffffU & ((0x32U 
                                               == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q))
                                               ? (VL_SHIFTR_III(32,32,32, 
                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[1U], 0x10U) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r) 
                                                      >> 1U)))
                                               : (0xffffU 
                                                  & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[1U]))))) 
                  << 0x10U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
            = ((0xffff0000ffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o) 
               | ((QData)((IData)((0xffffU & ((0x32U 
                                               == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q))
                                               ? (VL_SHIFTR_III(32,32,32, 
                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[2U], 0x10U) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r) 
                                                      >> 2U)))
                                               : (0xffffU 
                                                  & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[2U]))))) 
                  << 0x20U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
            = ((0xffffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o) 
               | ((QData)((IData)((0xffffU & ((0x32U 
                                               == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q))
                                               ? (VL_SHIFTR_III(32,32,32, 
                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[3U], 0x10U) 
                                                  + 
                                                  (1U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__r) 
                                                      >> 3U)))
                                               : (0xffffU 
                                                  & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[3U]))))) 
                  << 0x30U));
    } else if ((((0x2bU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q)) 
                 || (0x2cU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q))) 
                || (0x2dU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
            = ((0xffff000000000000ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o) 
               | (((QData)((IData)(((0xffff0000U & 
                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[2U]) 
                                    | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[1U] 
                                       >> 0x10U)))) 
                   << 0x10U) | (QData)((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[0U] 
                                                >> 0x10U)))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
            = ((0xffffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o) 
               | ((QData)((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[3U] 
                                   >> 0x10U))) << 0x30U));
    } else if (((0x2eU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q)) 
                || (0x30U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
            = ((0xffffffff00000000ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o) 
               | (IData)((IData)((((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[1U] 
                                    + (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__opc_q 
                                               >> 0x10U))) 
                                   << 0x10U) | (0xffffU 
                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[0U] 
                                                   + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__opc_q)))))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
            = ((0xffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o) 
               | ((QData)((IData)((((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[3U] 
                                     + (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__opc_q 
                                                >> 0x30U))) 
                                    << 0x10U) | (0xffffU 
                                                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[2U] 
                                                    + (IData)(
                                                              (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__opc_q 
                                                               >> 0x20U))))))) 
                  << 0x20U));
    } else if (((0x2fU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q)) 
                || (0x31U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__op_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
            = ((0xffffffffffff0000ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o) 
               | (IData)((IData)((0xffffU & ((- vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[0U]) 
                                             + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__opc_q))))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
            = ((0xffffffff0000ffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o) 
               | ((QData)((IData)((0xffffU & ((- vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[1U]) 
                                              + (IData)(
                                                        (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__opc_q 
                                                         >> 0x10U)))))) 
                  << 0x10U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
            = ((0xffff0000ffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o) 
               | ((QData)((IData)((0xffffU & ((- vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[2U]) 
                                              + (IData)(
                                                        (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__opc_q 
                                                         >> 0x20U)))))) 
                  << 0x20U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
            = ((0xffffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o) 
               | ((QData)((IData)((0xffffU & ((- vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__mul_res[3U]) 
                                              + (IData)(
                                                        (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew16__DOT__gen_pipeline__DOT__opc_q 
                                                         >> 0x30U)))))) 
                  << 0x30U));
    } else {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o = 0ULL;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r = 0U;
    if ((0x2aU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffffff000000ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | (IData)((IData)(((0xff0000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                                                << 0x10U)) 
                                  | ((0xff00U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                                                 >> 8U)) 
                                     | (0xffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U]))))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffff000000ffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)(((0xff0000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U]) 
                                   | ((0xff00U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                                                  << 8U)) 
                                      | (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                                                  >> 0x10U)))))) 
                  << 0x18U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)(((0xff00U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                                               >> 8U)) 
                                   | (0xffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U])))) 
                  << 0x30U));
    } else if ((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i))) {
        if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
            if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                    = ((0xfeU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                       | ((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                              >> 7U)) & (0U != (0x7fU 
                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U]))));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                    = ((0xfdU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                       | (((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                               >> 0x17U)) & (0U != 
                                             (0x7fU 
                                              & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                                                 >> 0x10U)))) 
                          << 1U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                    = ((0xfbU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                       | (((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                               >> 7U)) & (0U != (0x7fU 
                                                 & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U]))) 
                          << 2U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                    = ((0xf7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                       | (((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                               >> 0x17U)) & (0U != 
                                             (0x7fU 
                                              & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                                                 >> 0x10U)))) 
                          << 3U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                    = ((0xefU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                       | (((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                               >> 7U)) & (0U != (0x7fU 
                                                 & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U]))) 
                          << 4U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                    = ((0xdfU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                       | (((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                               >> 0x17U)) & (0U != 
                                             (0x7fU 
                                              & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                                                 >> 0x10U)))) 
                          << 5U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                    = ((0xbfU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                       | (((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                               >> 7U)) & (0U != (0x7fU 
                                                 & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U]))) 
                          << 6U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                    = ((0x7fU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                       | (((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                               >> 0x17U)) & (0U != 
                                             (0x7fU 
                                              & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                                                 >> 0x10U)))) 
                          << 7U));
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r = 0U;
            }
        } else if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_dispatcher__DOT__csr_vxrm_q))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                = ((0xfeU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                   | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                       >> 6U) & (0U != (0xbfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U]))));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                = ((0xfdU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                   | (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                        >> 0x16U) & (0U != (0xbf0000U 
                                            & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U]))) 
                      << 1U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                = ((0xfbU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                   | (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                        >> 6U) & (0U != (0xbfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U]))) 
                      << 2U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                = ((0xf7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                   | (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                        >> 0x16U) & (0U != (0xbf0000U 
                                            & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U]))) 
                      << 3U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                = ((0xefU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                   | (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                        >> 6U) & (0U != (0xbfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U]))) 
                      << 4U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                = ((0xdfU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                   | (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                        >> 0x16U) & (0U != (0xbf0000U 
                                            & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U]))) 
                      << 5U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                = ((0xbfU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                   | (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                        >> 6U) & (0U != (0xbfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U]))) 
                      << 6U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                = ((0x7fU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                   | (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                        >> 0x16U) & (0U != (0xbf0000U 
                                            & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U]))) 
                      << 7U));
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                = ((0xf8U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                   | ((4U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                             >> 4U)) | ((2U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                                               >> 0x15U)) 
                                        | (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                                                 >> 6U)))));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                = ((0xc7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                   | ((0x20U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                                >> 0x11U)) | ((0x10U 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                                                  >> 2U)) 
                                              | (8U 
                                                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                                                    >> 0x13U)))));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r 
                = ((0x3fU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)) 
                   | ((0x80U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                                >> 0xfU)) | (0x40U 
                                             & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U])));
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffffffffff00ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | (IData)((IData)((0xffU & ((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i))
                                            ? (VL_SHIFTR_III(16,16,32, 
                                                             (0xffffU 
                                                              & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U]), 7U) 
                                               + (1U 
                                                  & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r)))
                                            : (0xffU 
                                               & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U]))))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffffffff00ffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)((0xffU & ((0x32U 
                                             == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i))
                                             ? (VL_SHIFTR_III(16,16,32, 
                                                              (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                                                               >> 0x10U), 7U) 
                                                + (1U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r) 
                                                      >> 1U)))
                                             : (0xffU 
                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                                                   >> 0x10U)))))) 
                  << 8U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffffff00ffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)((0xffU & ((0x32U 
                                             == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i))
                                             ? (VL_SHIFTR_III(16,16,32, 
                                                              (0xffffU 
                                                               & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U]), 7U) 
                                                + (1U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r) 
                                                      >> 2U)))
                                             : (0xffU 
                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U]))))) 
                  << 0x10U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffff00ffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)((0xffU & ((0x32U 
                                             == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i))
                                             ? (VL_SHIFTR_III(16,16,32, 
                                                              (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                                                               >> 0x10U), 7U) 
                                                + (1U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r) 
                                                      >> 3U)))
                                             : (0xffU 
                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                                                   >> 0x10U)))))) 
                  << 0x18U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffff00ffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)((0xffU & ((0x32U 
                                             == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i))
                                             ? (VL_SHIFTR_III(16,16,32, 
                                                              (0xffffU 
                                                               & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U]), 7U) 
                                                + (1U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r) 
                                                      >> 4U)))
                                             : (0xffU 
                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U]))))) 
                  << 0x20U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffff00ffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)((0xffU & ((0x32U 
                                             == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i))
                                             ? (VL_SHIFTR_III(16,16,32, 
                                                              (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                                                               >> 0x10U), 7U) 
                                                + (1U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r) 
                                                      >> 5U)))
                                             : (0xffU 
                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                                                   >> 0x10U)))))) 
                  << 0x28U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xff00ffffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)((0xffU & ((0x32U 
                                             == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i))
                                             ? (VL_SHIFTR_III(16,16,32, 
                                                              (0xffffU 
                                                               & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U]), 7U) 
                                                + (1U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r) 
                                                      >> 6U)))
                                             : (0xffU 
                                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U]))))) 
                  << 0x30U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)((0xffU & ((0x32U 
                                             == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i))
                                             ? (VL_SHIFTR_III(16,16,32, 
                                                              (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                                                               >> 0x10U), 7U) 
                                                + (1U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__r) 
                                                      >> 7U)))
                                             : (0xffU 
                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                                                   >> 0x10U)))))) 
                  << 0x38U));
    } else if ((((0x2bU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i)) 
                 || (0x2cU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i))) 
                || (0x2dU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffffff000000ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | (IData)((IData)(((0xff0000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                                                << 8U)) 
                                  | ((0xff00U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                                                 >> 0x10U)) 
                                     | (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                                                 >> 8U)))))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffff000000ffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)(((0xff0000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                                                 >> 8U)) 
                                   | ((0xff00U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U]) 
                                      | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                                         >> 0x18U))))) 
                  << 0x18U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)(((0xff00U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                                               >> 0x10U)) 
                                   | (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                                               >> 8U))))) 
                  << 0x30U));
    } else if (((0x2eU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i)) 
                || (0x30U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffffffff0000ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | (IData)((IData)(((0xff00U & ((((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                                                 << 0x10U) 
                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                                                   >> 0x10U)) 
                                               + (IData)(
                                                         (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i 
                                                          >> 8U))) 
                                              << 8U)) 
                                  | (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                                              + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i)))))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffff0000ffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)(((0xff00U & ((((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                                                  << 0x10U) 
                                                 | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                                                    >> 0x10U)) 
                                                + (IData)(
                                                          (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i 
                                                           >> 0x18U))) 
                                               << 8U)) 
                                   | (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                                               + (IData)(
                                                         (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i 
                                                          >> 0x10U))))))) 
                  << 0x10U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffff0000ffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)(((0xff00U & ((((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                                                  << 0x10U) 
                                                 | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                                                    >> 0x10U)) 
                                                + (IData)(
                                                          (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i 
                                                           >> 0x28U))) 
                                               << 8U)) 
                                   | (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                                               + (IData)(
                                                         (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i 
                                                          >> 0x20U))))))) 
                  << 0x20U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)(((0xff00U & ((((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                                                  << 0x10U) 
                                                 | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                                                    >> 0x10U)) 
                                                + (IData)(
                                                          (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i 
                                                           >> 0x38U))) 
                                               << 8U)) 
                                   | (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                                               + (IData)(
                                                         (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i 
                                                          >> 0x30U))))))) 
                  << 0x30U));
    } else if (((0x2fU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i)) 
                || (0x31U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffffffffff00ULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | (IData)((IData)((0xffU & ((- vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U]) 
                                           + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i))))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffffffff00ffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)((0xffU & ((- ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                                                 << 0x10U) 
                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[0U] 
                                                   >> 0x10U))) 
                                            + (IData)(
                                                      (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i 
                                                       >> 8U)))))) 
                  << 8U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffffff00ffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)((0xffU & ((- vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U]) 
                                            + (IData)(
                                                      (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i 
                                                       >> 0x10U)))))) 
                  << 0x10U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffff00ffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)((0xffU & ((- ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                                                 << 0x10U) 
                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[1U] 
                                                   >> 0x10U))) 
                                            + (IData)(
                                                      (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i 
                                                       >> 0x18U)))))) 
                  << 0x18U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffff00ffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)((0xffU & ((- vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U]) 
                                            + (IData)(
                                                      (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i 
                                                       >> 0x20U)))))) 
                  << 0x20U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffff00ffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)((0xffU & ((- ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                                                 << 0x10U) 
                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[2U] 
                                                   >> 0x10U))) 
                                            + (IData)(
                                                      (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i 
                                                       >> 0x28U)))))) 
                  << 0x28U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xff00ffffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)((0xffU & ((- vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U]) 
                                            + (IData)(
                                                      (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i 
                                                       >> 0x30U)))))) 
                  << 0x30U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
            = ((0xffffffffffffffULL & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o) 
               | ((QData)((IData)((0xffU & ((- ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                                                 << 0x10U) 
                                                | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT__mul_res[3U] 
                                                   >> 0x10U))) 
                                            + (IData)(
                                                      (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__operand_c_i 
                                                       >> 0x38U)))))) 
                  << 0x38U));
    } else {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o = 0ULL;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__vxsat_o 
        = ((((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i)) 
             << 7U) & (((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
                                 >> 0x3fU)) << 7U) 
                       ^ (0xffff80U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT____VdfgTmp_h356aaa47__0) 
                                       >> 8U)))) | 
           ((((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i)) 
              << 6U) & (((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
                                  >> 0x37U)) << 6U) 
                        ^ (0x7fffc0U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT____VdfgTmp_h41bc6aa6__0) 
                                        >> 9U)))) | 
            ((((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i)) 
               << 5U) & (((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
                                   >> 0x2fU)) << 5U) 
                         ^ (0x3fffe0U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT____VdfgTmp_h794d12a4__0) 
                                         >> 0xaU)))) 
             | ((((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i)) 
                  << 4U) & (((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
                                      >> 0x27U)) << 4U) 
                            ^ (0x1ffff0U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT____VdfgTmp_h8bfb1247__0) 
                                            >> 0xbU)))) 
                | ((((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i)) 
                     << 3U) & (((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
                                         >> 0x1fU)) 
                                << 3U) ^ (0xffff8U 
                                          & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT____VdfgTmp_h3ebd511b__0) 
                                             >> 0xcU)))) 
                   | ((((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i)) 
                        << 2U) & (((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
                                            >> 0x17U)) 
                                   << 2U) ^ (0x7fffcU 
                                             & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT____VdfgTmp_h292fcbac__0) 
                                                >> 0xdU)))) 
                      | ((((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i)) 
                           << 1U) & (((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
                                               >> 0xfU)) 
                                      << 1U) ^ (0x3fffeU 
                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT____VdfgTmp_h9bc07f5c__0) 
                                                   >> 0xeU)))) 
                         | ((0x32U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellinp__i_simd_mul_ew8__op_i)) 
                            & ((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
                                        >> 7U)) ^ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__i_simd_mul_ew8__DOT____VdfgTmp_h3bc13685__0) 
                                                   >> 0xfU))))))))));
    __Vtemp_9[0U] = (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o);
    __Vtemp_9[1U] = (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew8__result_o 
                             >> 0x20U));
    __Vtemp_9[2U] = (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o);
    __Vtemp_9[3U] = (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew16__result_o 
                             >> 0x20U));
    __Vtemp_9[4U] = (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew32__result_o);
    __Vtemp_9[5U] = (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew32__result_o 
                             >> 0x20U));
    __Vtemp_9[6U] = (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew64__result_o);
    __Vtemp_9[7U] = (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT____Vcellout__i_simd_mul_ew64__result_o 
                             >> 0x20U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vmul_result 
        = (((QData)((IData)(__Vtemp_9[(((IData)(0x3fU) 
                                        + (0xffU & 
                                           VL_SHIFTL_III(8,32,32, 
                                                         (7U 
                                                          & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[0U] 
                                                             >> 3U)), 6U))) 
                                       >> 5U)])) << 
            ((0U == (0x1fU & VL_SHIFTL_III(8,32,32, 
                                           (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[0U] 
                                                  >> 3U)), 6U)))
              ? 0x20U : ((IData)(0x40U) - (0x1fU & 
                                           VL_SHIFTL_III(8,32,32, 
                                                         (7U 
                                                          & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[0U] 
                                                             >> 3U)), 6U))))) 
           | (((0U == (0x1fU & VL_SHIFTL_III(8,32,32, 
                                             (7U & 
                                              (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[0U] 
                                               >> 3U)), 6U)))
                ? 0ULL : ((QData)((IData)(__Vtemp_9[
                                          (((IData)(0x1fU) 
                                            + (0xffU 
                                               & VL_SHIFTL_III(8,32,32, 
                                                               (7U 
                                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[0U] 
                                                                   >> 3U)), 6U))) 
                                           >> 5U)])) 
                          << ((IData)(0x20U) - (0x1fU 
                                                & VL_SHIFTL_III(8,32,32, 
                                                                (7U 
                                                                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[0U] 
                                                                    >> 3U)), 6U))))) 
              | ((QData)((IData)(__Vtemp_9[(7U & (VL_SHIFTL_III(8,32,32, 
                                                                (7U 
                                                                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[0U] 
                                                                    >> 3U)), 6U) 
                                                  >> 5U))])) 
                 >> (0x1fU & VL_SHIFTL_III(8,32,32, 
                                           (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__gen_lanes__BRA__1__KET____DOT__i_lane__DOT__i_vfus__DOT__i_vmfpu__DOT__vinsn_processing_q[0U] 
                                                  >> 3U)), 6U)))));
}
