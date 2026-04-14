// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vara_tb_verilator.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vara_tb_verilator__Syms.h"
#include "Vara_tb_verilator__Syms.h"
#include "Vara_tb_verilator___024root.h"

VL_ATTR_COLD void Vara_tb_verilator___024root___stl_comb__TOP__561(Vara_tb_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___stl_comb__TOP__561\n"); );
    // Init
    VlWide<8>/*255:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__shuffled_word;
    VL_ZERO_W(256, ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__shuffled_word);
    QData/*63:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word = 0;
    QData/*63:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr_valid_d;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr_valid_d = 0;
    IData/*31:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addr_generation__DOT__unnamedblk1__DOT__b;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addr_generation__DOT__unnamedblk1__DOT__b = 0;
    VlWide<3>/*95:0*/ __Vtemp_h5def9396__0;
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__state_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__state_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_d[0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_d[1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_d[2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_d[3U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[3U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_d[4U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[4U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_d[5U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[5U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_d[6U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[6U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_d[7U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[7U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_d[8U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[8U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__vinsn_running_d 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__vinsn_running_q) 
           & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sequencer__DOT__vinsn_running_q));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addrgen_req[0U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addrgen_req[1U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addrgen_req[2U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addrgen_req[3U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addrgen_req[4U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addrgen_req[5U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addrgen_req_valid = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__addrgen_ack = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__addrgen_error = 0U;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr_valid_d = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__addrgen_operand_ready = 0U;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word = 0ULL;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_op_cnt_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_op_cnt_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_final_addr_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__i_addrgen_idx_op_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__last_elm_subw_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__last_elm_subw_q;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__shuffled_word[0U] 
        = (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__i_lane__sldu_addrgen_operand_o);
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__shuffled_word[1U] 
        = (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__i_lane__sldu_addrgen_operand_o 
                   >> 0x20U));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__shuffled_word[2U] 
        = (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT____Vcellout__gen_lanes__BRA__1__KET____DOT__i_lane__sldu_addrgen_operand_o);
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__shuffled_word[3U] 
        = (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT____Vcellout__gen_lanes__BRA__1__KET____DOT__i_lane__sldu_addrgen_operand_o 
                   >> 0x20U));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__shuffled_word[4U] 
        = (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT____Vcellout__gen_lanes__BRA__2__KET____DOT__i_lane__sldu_addrgen_operand_o);
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__shuffled_word[5U] 
        = (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT____Vcellout__gen_lanes__BRA__2__KET____DOT__i_lane__sldu_addrgen_operand_o 
                   >> 0x20U));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__shuffled_word[6U] 
        = (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT____Vcellout__gen_lanes__BRA__3__KET____DOT__i_lane__sldu_addrgen_operand_o);
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__shuffled_word[7U] 
        = (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT____Vcellout__gen_lanes__BRA__3__KET____DOT__i_lane__sldu_addrgen_operand_o 
                   >> 0x20U));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addr_generation__DOT__unnamedblk1__DOT__b = 0U;
    while ((0x20U > ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addr_generation__DOT__unnamedblk1__DOT__b)) {
        vlSelf->__Vfunc_shuffle_index__331__ew = (7U 
                                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[7U] 
                                                     >> 0xcU));
        vlSelf->__Vfunc_shuffle_index__331__NrLanes = 4U;
        vlSelf->__Vfunc_shuffle_index__331__byte_idx 
            = (0x1fffU & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addr_generation__DOT__unnamedblk1__DOT__b);
        {
            if ((1U == vlSelf->__Vfunc_shuffle_index__331__NrLanes)) {
                if ((4U & (IData)(vlSelf->__Vfunc_shuffle_index__331__ew))) {
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk5__DOT__idx[0U] = 0x8002000U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk5__DOT__idx[1U] = 0x400180U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk5__DOT__idx[2U] = 0x3801800aU;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk5__DOT__idx[3U] = 0U;
                    vlSelf->__Vfunc_shuffle_index__331__Vfuncout 
                        = ((0x67U >= (0x7fU & ((IData)(0xdU) 
                                               * (7U 
                                                  & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))
                            ? (0x1fffU & (((0U == (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (7U 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))
                                            ? 0U : 
                                           (vlSelf->__Vfunc_shuffle_index__331__unnamedblk5__DOT__idx[
                                            (((IData)(0xcU) 
                                              + (0x7fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (7U 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (7U 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))))))) 
                                          | (vlSelf->__Vfunc_shuffle_index__331__unnamedblk5__DOT__idx[
                                             (3U & 
                                              (((IData)(0xdU) 
                                                * (7U 
                                                   & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))) 
                                               >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (7U 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))))
                            : 0U);
                    goto __Vlabel264;
                } else if ((2U & (IData)(vlSelf->__Vfunc_shuffle_index__331__ew))) {
                    if ((1U & (IData)(vlSelf->__Vfunc_shuffle_index__331__ew))) {
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk1__DOT__idx[0U] = 0x8002000U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk1__DOT__idx[1U] = 0x400180U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk1__DOT__idx[2U] = 0x3801800aU;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk1__DOT__idx[3U] = 0U;
                        vlSelf->__Vfunc_shuffle_index__331__Vfuncout 
                            = ((0x67U >= (0x7fU & ((IData)(0xdU) 
                                                   * 
                                                   (7U 
                                                    & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))
                                ? (0x1fffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (7U 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))
                                                ? 0U
                                                : (
                                                   vlSelf->__Vfunc_shuffle_index__331__unnamedblk1__DOT__idx[
                                                   (((IData)(0xcU) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0xdU) 
                                                         * 
                                                         (7U 
                                                          & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0xdU) 
                                                        * 
                                                        (7U 
                                                         & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))))))) 
                                              | (vlSelf->__Vfunc_shuffle_index__331__unnamedblk1__DOT__idx[
                                                 (3U 
                                                  & (((IData)(0xdU) 
                                                      * 
                                                      (7U 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(0xdU) 
                                                     * 
                                                     (7U 
                                                      & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))))
                                : 0U);
                        goto __Vlabel264;
                    } else {
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk2__DOT__idx[0U] = 0x8002000U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk2__DOT__idx[1U] = 0x400180U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk2__DOT__idx[2U] = 0x3801800aU;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk2__DOT__idx[3U] = 0U;
                        vlSelf->__Vfunc_shuffle_index__331__Vfuncout 
                            = ((0x67U >= (0x7fU & ((IData)(0xdU) 
                                                   * 
                                                   (7U 
                                                    & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))
                                ? (0x1fffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (7U 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))
                                                ? 0U
                                                : (
                                                   vlSelf->__Vfunc_shuffle_index__331__unnamedblk2__DOT__idx[
                                                   (((IData)(0xcU) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0xdU) 
                                                         * 
                                                         (7U 
                                                          & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0xdU) 
                                                        * 
                                                        (7U 
                                                         & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))))))) 
                                              | (vlSelf->__Vfunc_shuffle_index__331__unnamedblk2__DOT__idx[
                                                 (3U 
                                                  & (((IData)(0xdU) 
                                                      * 
                                                      (7U 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(0xdU) 
                                                     * 
                                                     (7U 
                                                      & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))))
                                : 0U);
                        goto __Vlabel264;
                    }
                } else if ((1U & (IData)(vlSelf->__Vfunc_shuffle_index__331__ew))) {
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk3__DOT__idx[0U] = 0x10002000U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk3__DOT__idx[1U] = 0x200280U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk3__DOT__idx[2U] = 0x38018006U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk3__DOT__idx[3U] = 0U;
                    vlSelf->__Vfunc_shuffle_index__331__Vfuncout 
                        = ((0x67U >= (0x7fU & ((IData)(0xdU) 
                                               * (7U 
                                                  & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))
                            ? (0x1fffU & (((0U == (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (7U 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))
                                            ? 0U : 
                                           (vlSelf->__Vfunc_shuffle_index__331__unnamedblk3__DOT__idx[
                                            (((IData)(0xcU) 
                                              + (0x7fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (7U 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (7U 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))))))) 
                                          | (vlSelf->__Vfunc_shuffle_index__331__unnamedblk3__DOT__idx[
                                             (3U & 
                                              (((IData)(0xdU) 
                                                * (7U 
                                                   & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))) 
                                               >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (7U 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))))
                            : 0U);
                    goto __Vlabel264;
                } else {
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk4__DOT__idx[0U] = 0x8008000U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk4__DOT__idx[1U] = 0x100300U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk4__DOT__idx[2U] = 0x3800c00aU;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk4__DOT__idx[3U] = 0U;
                    vlSelf->__Vfunc_shuffle_index__331__Vfuncout 
                        = ((0x67U >= (0x7fU & ((IData)(0xdU) 
                                               * (7U 
                                                  & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))
                            ? (0x1fffU & (((0U == (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (7U 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))
                                            ? 0U : 
                                           (vlSelf->__Vfunc_shuffle_index__331__unnamedblk4__DOT__idx[
                                            (((IData)(0xcU) 
                                              + (0x7fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (7U 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (7U 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))))))) 
                                          | (vlSelf->__Vfunc_shuffle_index__331__unnamedblk4__DOT__idx[
                                             (3U & 
                                              (((IData)(0xdU) 
                                                * (7U 
                                                   & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))) 
                                               >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (7U 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))))
                            : 0U);
                    goto __Vlabel264;
                }
            } else if ((2U == vlSelf->__Vfunc_shuffle_index__331__NrLanes)) {
                if ((4U & (IData)(vlSelf->__Vfunc_shuffle_index__331__ew))) {
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk10__DOT__idx[0U] = 0x8002000U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk10__DOT__idx[1U] = 0x400180U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk10__DOT__idx[2U] = 0x3801800aU;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk10__DOT__idx[3U] = 0x1200800U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk10__DOT__idx[4U] = 0xc0058028U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk10__DOT__idx[5U] = 0x3801a00U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk10__DOT__idx[6U] = 0x78U;
                    vlSelf->__Vfunc_shuffle_index__331__Vfuncout 
                        = ((0xcfU >= (0xffU & ((IData)(0xdU) 
                                               * (0xfU 
                                                  & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))
                            ? (0x1fffU & (((0U == (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (0xfU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))
                                            ? 0U : 
                                           (vlSelf->__Vfunc_shuffle_index__331__unnamedblk10__DOT__idx[
                                            (((IData)(0xcU) 
                                              + (0xffU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0xfU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (0xfU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))))))) 
                                          | (vlSelf->__Vfunc_shuffle_index__331__unnamedblk10__DOT__idx[
                                             (7U & 
                                              (((IData)(0xdU) 
                                                * (0xfU 
                                                   & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))) 
                                               >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0xfU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))))
                            : 0U);
                    goto __Vlabel264;
                } else if ((2U & (IData)(vlSelf->__Vfunc_shuffle_index__331__ew))) {
                    if ((1U & (IData)(vlSelf->__Vfunc_shuffle_index__331__ew))) {
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk6__DOT__idx[0U] = 0x8002000U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk6__DOT__idx[1U] = 0x400180U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk6__DOT__idx[2U] = 0x3801800aU;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk6__DOT__idx[3U] = 0x1200800U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk6__DOT__idx[4U] = 0xc0058028U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk6__DOT__idx[5U] = 0x3801a00U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk6__DOT__idx[6U] = 0x78U;
                        vlSelf->__Vfunc_shuffle_index__331__Vfuncout 
                            = ((0xcfU >= (0xffU & ((IData)(0xdU) 
                                                   * 
                                                   (0xfU 
                                                    & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))
                                ? (0x1fffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0xfU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))
                                                ? 0U
                                                : (
                                                   vlSelf->__Vfunc_shuffle_index__331__unnamedblk6__DOT__idx[
                                                   (((IData)(0xcU) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0xdU) 
                                                         * 
                                                         (0xfU 
                                                          & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0xdU) 
                                                        * 
                                                        (0xfU 
                                                         & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))))))) 
                                              | (vlSelf->__Vfunc_shuffle_index__331__unnamedblk6__DOT__idx[
                                                 (7U 
                                                  & (((IData)(0xdU) 
                                                      * 
                                                      (0xfU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(0xdU) 
                                                     * 
                                                     (0xfU 
                                                      & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))))
                                : 0U);
                        goto __Vlabel264;
                    } else {
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk7__DOT__idx[0U] = 0x8002000U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk7__DOT__idx[1U] = 0x800180U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk7__DOT__idx[2U] = 0x58028012U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk7__DOT__idx[3U] = 0xa00400U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk7__DOT__idx[4U] = 0xc0038018U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk7__DOT__idx[5U] = 0x3801a00U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk7__DOT__idx[6U] = 0x78U;
                        vlSelf->__Vfunc_shuffle_index__331__Vfuncout 
                            = ((0xcfU >= (0xffU & ((IData)(0xdU) 
                                                   * 
                                                   (0xfU 
                                                    & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))
                                ? (0x1fffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0xfU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))
                                                ? 0U
                                                : (
                                                   vlSelf->__Vfunc_shuffle_index__331__unnamedblk7__DOT__idx[
                                                   (((IData)(0xcU) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0xdU) 
                                                         * 
                                                         (0xfU 
                                                          & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0xdU) 
                                                        * 
                                                        (0xfU 
                                                         & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))))))) 
                                              | (vlSelf->__Vfunc_shuffle_index__331__unnamedblk7__DOT__idx[
                                                 (7U 
                                                  & (((IData)(0xdU) 
                                                      * 
                                                      (0xfU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(0xdU) 
                                                     * 
                                                     (0xfU 
                                                      & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))))
                                : 0U);
                        goto __Vlabel264;
                    }
                } else if ((1U & (IData)(vlSelf->__Vfunc_shuffle_index__331__ew))) {
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk8__DOT__idx[0U] = 0x20002000U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk8__DOT__idx[1U] = 0x400480U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk8__DOT__idx[2U] = 0x6803000aU;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk8__DOT__idx[3U] = 0x600200U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk8__DOT__idx[4U] = 0x60058028U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk8__DOT__idx[5U] = 0x3800e00U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk8__DOT__idx[6U] = 0x78U;
                    vlSelf->__Vfunc_shuffle_index__331__Vfuncout 
                        = ((0xcfU >= (0xffU & ((IData)(0xdU) 
                                               * (0xfU 
                                                  & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))
                            ? (0x1fffU & (((0U == (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (0xfU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))
                                            ? 0U : 
                                           (vlSelf->__Vfunc_shuffle_index__331__unnamedblk8__DOT__idx[
                                            (((IData)(0xcU) 
                                              + (0xffU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0xfU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (0xfU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))))))) 
                                          | (vlSelf->__Vfunc_shuffle_index__331__unnamedblk8__DOT__idx[
                                             (7U & 
                                              (((IData)(0xdU) 
                                                * (0xfU 
                                                   & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))) 
                                               >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0xfU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))))
                            : 0U);
                    goto __Vlabel264;
                } else {
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk9__DOT__idx[0U] = 0x10010000U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk9__DOT__idx[1U] = 0x200600U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk9__DOT__idx[2U] = 0x70018014U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk9__DOT__idx[3U] = 0x1200100U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk9__DOT__idx[4U] = 0x30068014U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk9__DOT__idx[5U] = 0x1c01600U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk9__DOT__idx[6U] = 0x78U;
                    vlSelf->__Vfunc_shuffle_index__331__Vfuncout 
                        = ((0xcfU >= (0xffU & ((IData)(0xdU) 
                                               * (0xfU 
                                                  & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))
                            ? (0x1fffU & (((0U == (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (0xfU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))
                                            ? 0U : 
                                           (vlSelf->__Vfunc_shuffle_index__331__unnamedblk9__DOT__idx[
                                            (((IData)(0xcU) 
                                              + (0xffU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0xfU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (0xfU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))))))) 
                                          | (vlSelf->__Vfunc_shuffle_index__331__unnamedblk9__DOT__idx[
                                             (7U & 
                                              (((IData)(0xdU) 
                                                * (0xfU 
                                                   & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))) 
                                               >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0xfU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))))
                            : 0U);
                    goto __Vlabel264;
                }
            } else if ((4U == vlSelf->__Vfunc_shuffle_index__331__NrLanes)) {
                if ((4U & (IData)(vlSelf->__Vfunc_shuffle_index__331__ew))) {
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk15__DOT__idx[0U] = 0x8002000U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk15__DOT__idx[1U] = 0x400180U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk15__DOT__idx[2U] = 0x3801800aU;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk15__DOT__idx[3U] = 0x1200800U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk15__DOT__idx[4U] = 0xc0058028U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk15__DOT__idx[5U] = 0x3801a00U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk15__DOT__idx[6U] = 0x20100078U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk15__DOT__idx[7U] = 0x9804802U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk15__DOT__idx[8U] = 0x802a0140U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk15__DOT__idx[9U] = 0x1800b805U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk15__DOT__idx[0xaU] = 0x80680320U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk15__DOT__idx[0xbU] = 0x3a01c00dU;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk15__DOT__idx[0xcU] = 0xf80780U;
                    vlSelf->__Vfunc_shuffle_index__331__Vfuncout 
                        = ((0x19fU >= (0x1ffU & ((IData)(0xdU) 
                                                 * 
                                                 (0x1fU 
                                                  & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))
                            ? (0x1fffU & (((0U == (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (0x1fU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))
                                            ? 0U : 
                                           (vlSelf->__Vfunc_shuffle_index__331__unnamedblk15__DOT__idx[
                                            (((IData)(0xcU) 
                                              + (0x1ffU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (0x1fU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))))))) 
                                          | (vlSelf->__Vfunc_shuffle_index__331__unnamedblk15__DOT__idx[
                                             (0xfU 
                                              & (((IData)(0xdU) 
                                                  * 
                                                  (0x1fU 
                                                   & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))))
                            : 0U);
                    goto __Vlabel264;
                } else if ((2U & (IData)(vlSelf->__Vfunc_shuffle_index__331__ew))) {
                    if ((1U & (IData)(vlSelf->__Vfunc_shuffle_index__331__ew))) {
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk11__DOT__idx[0U] = 0x8002000U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk11__DOT__idx[1U] = 0x400180U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk11__DOT__idx[2U] = 0x3801800aU;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk11__DOT__idx[3U] = 0x1200800U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk11__DOT__idx[4U] = 0xc0058028U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk11__DOT__idx[5U] = 0x3801a00U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk11__DOT__idx[6U] = 0x20100078U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk11__DOT__idx[7U] = 0x9804802U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk11__DOT__idx[8U] = 0x802a0140U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk11__DOT__idx[9U] = 0x1800b805U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk11__DOT__idx[0xaU] = 0x80680320U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk11__DOT__idx[0xbU] = 0x3a01c00dU;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk11__DOT__idx[0xcU] = 0xf80780U;
                        vlSelf->__Vfunc_shuffle_index__331__Vfuncout 
                            = ((0x19fU >= (0x1ffU & 
                                           ((IData)(0xdU) 
                                            * (0x1fU 
                                               & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))
                                ? (0x1fffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))
                                                ? 0U
                                                : (
                                                   vlSelf->__Vfunc_shuffle_index__331__unnamedblk11__DOT__idx[
                                                   (((IData)(0xcU) 
                                                     + 
                                                     (0x1ffU 
                                                      & ((IData)(0xdU) 
                                                         * 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0xdU) 
                                                        * 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))))))) 
                                              | (vlSelf->__Vfunc_shuffle_index__331__unnamedblk11__DOT__idx[
                                                 (0xfU 
                                                  & (((IData)(0xdU) 
                                                      * 
                                                      (0x1fU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(0xdU) 
                                                     * 
                                                     (0x1fU 
                                                      & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))))
                                : 0U);
                        goto __Vlabel264;
                    } else {
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk12__DOT__idx[0U] = 0x8002000U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk12__DOT__idx[1U] = 0x800180U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk12__DOT__idx[2U] = 0x58028012U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk12__DOT__idx[3U] = 0x2201000U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk12__DOT__idx[4U] = 0x80098048U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk12__DOT__idx[5U] = 0x6803201U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk12__DOT__idx[6U] = 0xa00400d8U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk12__DOT__idx[7U] = 0x3801800U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk12__DOT__idx[8U] = 0x801a00c0U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk12__DOT__idx[9U] = 0x14007803U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk12__DOT__idx[0xaU] = 0x805802a0U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk12__DOT__idx[0xbU] = 0x3a01c00bU;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk12__DOT__idx[0xcU] = 0xf80780U;
                        vlSelf->__Vfunc_shuffle_index__331__Vfuncout 
                            = ((0x19fU >= (0x1ffU & 
                                           ((IData)(0xdU) 
                                            * (0x1fU 
                                               & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))
                                ? (0x1fffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))
                                                ? 0U
                                                : (
                                                   vlSelf->__Vfunc_shuffle_index__331__unnamedblk12__DOT__idx[
                                                   (((IData)(0xcU) 
                                                     + 
                                                     (0x1ffU 
                                                      & ((IData)(0xdU) 
                                                         * 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0xdU) 
                                                        * 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))))))) 
                                              | (vlSelf->__Vfunc_shuffle_index__331__unnamedblk12__DOT__idx[
                                                 (0xfU 
                                                  & (((IData)(0xdU) 
                                                      * 
                                                      (0x1fU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(0xdU) 
                                                     * 
                                                     (0x1fU 
                                                      & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))))
                                : 0U);
                        goto __Vlabel264;
                    }
                } else if ((1U & (IData)(vlSelf->__Vfunc_shuffle_index__331__ew))) {
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk13__DOT__idx[0U] = 0x20002000U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk13__DOT__idx[1U] = 0x1000480U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk13__DOT__idx[2U] = 0xc8060022U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk13__DOT__idx[3U] = 0xa00400U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk13__DOT__idx[4U] = 0x40068030U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk13__DOT__idx[5U] = 0x7002a01U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk13__DOT__idx[6U] = 0x600200e8U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk13__DOT__idx[7U] = 0x5802800U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk13__DOT__idx[8U] = 0x80260120U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk13__DOT__idx[9U] = 0x600d806U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk13__DOT__idx[0xaU] = 0x803800e0U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk13__DOT__idx[0xbU] = 0x2e016007U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk13__DOT__idx[0xcU] = 0xf80780U;
                    vlSelf->__Vfunc_shuffle_index__331__Vfuncout 
                        = ((0x19fU >= (0x1ffU & ((IData)(0xdU) 
                                                 * 
                                                 (0x1fU 
                                                  & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))
                            ? (0x1fffU & (((0U == (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (0x1fU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))
                                            ? 0U : 
                                           (vlSelf->__Vfunc_shuffle_index__331__unnamedblk13__DOT__idx[
                                            (((IData)(0xcU) 
                                              + (0x1ffU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (0x1fU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))))))) 
                                          | (vlSelf->__Vfunc_shuffle_index__331__unnamedblk13__DOT__idx[
                                             (0xfU 
                                              & (((IData)(0xdU) 
                                                  * 
                                                  (0x1fU 
                                                   & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))))
                            : 0U);
                    goto __Vlabel264;
                } else {
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk14__DOT__idx[0U] = 0x40010000U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk14__DOT__idx[1U] = 0x400c00U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk14__DOT__idx[2U] = 0xe0050018U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk14__DOT__idx[3U] = 0x1400200U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk14__DOT__idx[4U] = 0x600d0048U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk14__DOT__idx[5U] = 0x5801c00U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk14__DOT__idx[6U] = 0x200100f0U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk14__DOT__idx[7U] = 0xc804401U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk14__DOT__idx[8U] = 0x401a0050U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk14__DOT__idx[9U] = 0x300e805U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk14__DOT__idx[0xaU] = 0x804c0160U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk14__DOT__idx[0xbU] = 0x1e00700dU;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk14__DOT__idx[0xcU] = 0xf805c0U;
                    vlSelf->__Vfunc_shuffle_index__331__Vfuncout 
                        = ((0x19fU >= (0x1ffU & ((IData)(0xdU) 
                                                 * 
                                                 (0x1fU 
                                                  & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))
                            ? (0x1fffU & (((0U == (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (0x1fU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))
                                            ? 0U : 
                                           (vlSelf->__Vfunc_shuffle_index__331__unnamedblk14__DOT__idx[
                                            (((IData)(0xcU) 
                                              + (0x1ffU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (0x1fU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))))))) 
                                          | (vlSelf->__Vfunc_shuffle_index__331__unnamedblk14__DOT__idx[
                                             (0xfU 
                                              & (((IData)(0xdU) 
                                                  * 
                                                  (0x1fU 
                                                   & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))))
                            : 0U);
                    goto __Vlabel264;
                }
            } else if ((8U == vlSelf->__Vfunc_shuffle_index__331__NrLanes)) {
                if ((4U & (IData)(vlSelf->__Vfunc_shuffle_index__331__ew))) {
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk20__DOT__idx[0U] = 0x8002000U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk20__DOT__idx[1U] = 0x400180U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk20__DOT__idx[2U] = 0x3801800aU;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk20__DOT__idx[3U] = 0x1200800U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk20__DOT__idx[4U] = 0xc0058028U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk20__DOT__idx[5U] = 0x3801a00U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk20__DOT__idx[6U] = 0x20100078U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk20__DOT__idx[7U] = 0x9804802U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk20__DOT__idx[8U] = 0x802a0140U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk20__DOT__idx[9U] = 0x1800b805U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk20__DOT__idx[0xaU] = 0x80680320U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk20__DOT__idx[0xbU] = 0x3a01c00dU;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk20__DOT__idx[0xcU] = 0xf80780U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk20__DOT__idx[0xdU] = 0x88042020U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk20__DOT__idx[0xeU] = 0x2401180U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk20__DOT__idx[0xfU] = 0x3809804aU;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk20__DOT__idx[0x10U] = 0x5202801U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk20__DOT__idx[0x11U] = 0xc01580a8U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk20__DOT__idx[0x12U] = 0xb805a02U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk20__DOT__idx[0x13U] = 0x20300178U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk20__DOT__idx[0x14U] = 0x1980c806U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk20__DOT__idx[0x15U] = 0x806a0340U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk20__DOT__idx[0x16U] = 0x3801b80dU;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk20__DOT__idx[0x17U] = 0x80e80720U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk20__DOT__idx[0x18U] = 0x7a03c01dU;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk20__DOT__idx[0x19U] = 0x1f80f80U;
                    vlSelf->__Vfunc_shuffle_index__331__Vfuncout 
                        = ((0x33fU >= (0x3ffU & ((IData)(0xdU) 
                                                 * 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))
                            ? (0x1fffU & (((0U == (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (0x3fU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))
                                            ? 0U : 
                                           (vlSelf->__Vfunc_shuffle_index__331__unnamedblk20__DOT__idx[
                                            (((IData)(0xcU) 
                                              + (0x3ffU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0x3fU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (0x3fU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))))))) 
                                          | (vlSelf->__Vfunc_shuffle_index__331__unnamedblk20__DOT__idx[
                                             (0x1fU 
                                              & (((IData)(0xdU) 
                                                  * 
                                                  (0x3fU 
                                                   & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0x3fU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))))
                            : 0U);
                    goto __Vlabel264;
                } else if ((2U & (IData)(vlSelf->__Vfunc_shuffle_index__331__ew))) {
                    if ((1U & (IData)(vlSelf->__Vfunc_shuffle_index__331__ew))) {
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk16__DOT__idx[0U] = 0x8002000U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk16__DOT__idx[1U] = 0x400180U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk16__DOT__idx[2U] = 0x3801800aU;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk16__DOT__idx[3U] = 0x1200800U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk16__DOT__idx[4U] = 0xc0058028U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk16__DOT__idx[5U] = 0x3801a00U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk16__DOT__idx[6U] = 0x20100078U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk16__DOT__idx[7U] = 0x9804802U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk16__DOT__idx[8U] = 0x802a0140U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk16__DOT__idx[9U] = 0x1800b805U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk16__DOT__idx[0xaU] = 0x80680320U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk16__DOT__idx[0xbU] = 0x3a01c00dU;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk16__DOT__idx[0xcU] = 0xf80780U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk16__DOT__idx[0xdU] = 0x88042020U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk16__DOT__idx[0xeU] = 0x2401180U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk16__DOT__idx[0xfU] = 0x3809804aU;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk16__DOT__idx[0x10U] = 0x5202801U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk16__DOT__idx[0x11U] = 0xc01580a8U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk16__DOT__idx[0x12U] = 0xb805a02U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk16__DOT__idx[0x13U] = 0x20300178U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk16__DOT__idx[0x14U] = 0x1980c806U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk16__DOT__idx[0x15U] = 0x806a0340U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk16__DOT__idx[0x16U] = 0x3801b80dU;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk16__DOT__idx[0x17U] = 0x80e80720U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk16__DOT__idx[0x18U] = 0x7a03c01dU;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk16__DOT__idx[0x19U] = 0x1f80f80U;
                        vlSelf->__Vfunc_shuffle_index__331__Vfuncout 
                            = ((0x33fU >= (0x3ffU & 
                                           ((IData)(0xdU) 
                                            * (0x3fU 
                                               & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))
                                ? (0x1fffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0x3fU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))
                                                ? 0U
                                                : (
                                                   vlSelf->__Vfunc_shuffle_index__331__unnamedblk16__DOT__idx[
                                                   (((IData)(0xcU) 
                                                     + 
                                                     (0x3ffU 
                                                      & ((IData)(0xdU) 
                                                         * 
                                                         (0x3fU 
                                                          & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0xdU) 
                                                        * 
                                                        (0x3fU 
                                                         & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))))))) 
                                              | (vlSelf->__Vfunc_shuffle_index__331__unnamedblk16__DOT__idx[
                                                 (0x1fU 
                                                  & (((IData)(0xdU) 
                                                      * 
                                                      (0x3fU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(0xdU) 
                                                     * 
                                                     (0x3fU 
                                                      & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))))
                                : 0U);
                        goto __Vlabel264;
                    } else {
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk17__DOT__idx[0U] = 0x8002000U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk17__DOT__idx[1U] = 0x800180U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk17__DOT__idx[2U] = 0x58028012U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk17__DOT__idx[3U] = 0x2201000U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk17__DOT__idx[4U] = 0x80098048U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk17__DOT__idx[5U] = 0x6803201U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk17__DOT__idx[6U] = 0x202000d8U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk17__DOT__idx[7U] = 0x11808804U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk17__DOT__idx[8U] = 0x80520280U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk17__DOT__idx[9U] = 0x3001580aU;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk17__DOT__idx[0xaU] = 0x80c80620U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk17__DOT__idx[0xbU] = 0x72038019U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk17__DOT__idx[0xcU] = 0x1d80e80U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk17__DOT__idx[0xdU] = 0x1800a004U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk17__DOT__idx[0xeU] = 0xc00380U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk17__DOT__idx[0xfU] = 0x7803801aU;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk17__DOT__idx[0x10U] = 0x2a01400U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk17__DOT__idx[0x11U] = 0xc00b8058U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk17__DOT__idx[0x12U] = 0x7803a01U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk17__DOT__idx[0x13U] = 0xa02400f8U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk17__DOT__idx[0x14U] = 0x13809804U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk17__DOT__idx[0x15U] = 0x805a02c0U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk17__DOT__idx[0x16U] = 0x3401780bU;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk17__DOT__idx[0x17U] = 0x80d806a0U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk17__DOT__idx[0x18U] = 0x7a03c01bU;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk17__DOT__idx[0x19U] = 0x1f80f80U;
                        vlSelf->__Vfunc_shuffle_index__331__Vfuncout 
                            = ((0x33fU >= (0x3ffU & 
                                           ((IData)(0xdU) 
                                            * (0x3fU 
                                               & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))
                                ? (0x1fffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0x3fU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))
                                                ? 0U
                                                : (
                                                   vlSelf->__Vfunc_shuffle_index__331__unnamedblk17__DOT__idx[
                                                   (((IData)(0xcU) 
                                                     + 
                                                     (0x3ffU 
                                                      & ((IData)(0xdU) 
                                                         * 
                                                         (0x3fU 
                                                          & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0xdU) 
                                                        * 
                                                        (0x3fU 
                                                         & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))))))) 
                                              | (vlSelf->__Vfunc_shuffle_index__331__unnamedblk17__DOT__idx[
                                                 (0x1fU 
                                                  & (((IData)(0xdU) 
                                                      * 
                                                      (0x3fU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(0xdU) 
                                                     * 
                                                     (0x3fU 
                                                      & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))))
                                : 0U);
                        goto __Vlabel264;
                    }
                } else if ((1U & (IData)(vlSelf->__Vfunc_shuffle_index__331__ew))) {
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk18__DOT__idx[0U] = 0x20002000U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk18__DOT__idx[1U] = 0x1000480U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk18__DOT__idx[2U] = 0xc8060022U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk18__DOT__idx[3U] = 0x4202000U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk18__DOT__idx[4U] = 0x1480a0U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk18__DOT__idx[5U] = 0xe006203U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk18__DOT__idx[6U] = 0xa00401c8U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk18__DOT__idx[7U] = 0x6803000U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk18__DOT__idx[8U] = 0x2a0140U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk18__DOT__idx[9U] = 0x2400e807U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk18__DOT__idx[0xaU] = 0x80b004a0U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk18__DOT__idx[0xbU] = 0x6a034016U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk18__DOT__idx[0xcU] = 0x1e80f00U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk18__DOT__idx[0xdU] = 0x28006002U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk18__DOT__idx[0xeU] = 0x1200580U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk18__DOT__idx[0xfU] = 0xd8068026U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk18__DOT__idx[0x10U] = 0x4602200U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk18__DOT__idx[0x11U] = 0x201580a8U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk18__DOT__idx[0x12U] = 0xe806603U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk18__DOT__idx[0x13U] = 0xe00601d8U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk18__DOT__idx[0x14U] = 0x7803800U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk18__DOT__idx[0x15U] = 0x802e0160U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk18__DOT__idx[0x16U] = 0x2600f807U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk18__DOT__idx[0x17U] = 0x80b804e0U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk18__DOT__idx[0x18U] = 0x6e036017U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk18__DOT__idx[0x19U] = 0x1f80f80U;
                    vlSelf->__Vfunc_shuffle_index__331__Vfuncout 
                        = ((0x33fU >= (0x3ffU & ((IData)(0xdU) 
                                                 * 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))
                            ? (0x1fffU & (((0U == (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (0x3fU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))
                                            ? 0U : 
                                           (vlSelf->__Vfunc_shuffle_index__331__unnamedblk18__DOT__idx[
                                            (((IData)(0xcU) 
                                              + (0x3ffU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0x3fU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (0x3fU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))))))) 
                                          | (vlSelf->__Vfunc_shuffle_index__331__unnamedblk18__DOT__idx[
                                             (0x1fU 
                                              & (((IData)(0xdU) 
                                                  * 
                                                  (0x3fU 
                                                   & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0x3fU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))))
                            : 0U);
                    goto __Vlabel264;
                } else {
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk19__DOT__idx[0U] = 0x40010000U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk19__DOT__idx[1U] = 0x2000c00U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk19__DOT__idx[2U] = 0xc00c0050U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk19__DOT__idx[3U] = 0x1800401U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk19__DOT__idx[4U] = 0x400e0050U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk19__DOT__idx[5U] = 0xd005802U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk19__DOT__idx[6U] = 0x400201e0U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk19__DOT__idx[7U] = 0xd004801U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk19__DOT__idx[8U] = 0x80540220U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk19__DOT__idx[9U] = 0x601d00cU;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk19__DOT__idx[0xaU] = 0x5801c0U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk19__DOT__idx[0xbU] = 0x5c02600fU;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk19__DOT__idx[0xcU] = 0x1f00d80U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk19__DOT__idx[0xdU] = 0x44012001U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk19__DOT__idx[0xeU] = 0x2100c80U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk19__DOT__idx[0xfU] = 0xc80c4052U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk19__DOT__idx[0x10U] = 0x1a00501U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk19__DOT__idx[0x11U] = 0x500e8054U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk19__DOT__idx[0x12U] = 0xd405a02U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk19__DOT__idx[0x13U] = 0x600301e8U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk19__DOT__idx[0x14U] = 0xd804c01U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk19__DOT__idx[0x15U] = 0xc0560230U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk19__DOT__idx[0x16U] = 0x701d80cU;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk19__DOT__idx[0x17U] = 0x805c01e0U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk19__DOT__idx[0x18U] = 0x5e02700fU;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk19__DOT__idx[0x19U] = 0x1f80dc0U;
                    vlSelf->__Vfunc_shuffle_index__331__Vfuncout 
                        = ((0x33fU >= (0x3ffU & ((IData)(0xdU) 
                                                 * 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))
                            ? (0x1fffU & (((0U == (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (0x3fU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))
                                            ? 0U : 
                                           (vlSelf->__Vfunc_shuffle_index__331__unnamedblk19__DOT__idx[
                                            (((IData)(0xcU) 
                                              + (0x3ffU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0x3fU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (0x3fU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))))))) 
                                          | (vlSelf->__Vfunc_shuffle_index__331__unnamedblk19__DOT__idx[
                                             (0x1fU 
                                              & (((IData)(0xdU) 
                                                  * 
                                                  (0x3fU 
                                                   & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0x3fU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))))
                            : 0U);
                    goto __Vlabel264;
                }
            } else if (VL_LIKELY((0x10U == vlSelf->__Vfunc_shuffle_index__331__NrLanes))) {
                if ((4U & (IData)(vlSelf->__Vfunc_shuffle_index__331__ew))) {
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk25__DOT__idx[0U] = 0x8002000U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk25__DOT__idx[1U] = 0x400180U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk25__DOT__idx[2U] = 0x3801800aU;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk25__DOT__idx[3U] = 0x1200800U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk25__DOT__idx[4U] = 0xc0058028U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk25__DOT__idx[5U] = 0x3801a00U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk25__DOT__idx[6U] = 0x20100078U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk25__DOT__idx[7U] = 0x9804802U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk25__DOT__idx[8U] = 0x802a0140U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk25__DOT__idx[9U] = 0x1800b805U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk25__DOT__idx[0xaU] = 0x80680320U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk25__DOT__idx[0xbU] = 0x3a01c00dU;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk25__DOT__idx[0xcU] = 0xf80780U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk25__DOT__idx[0xdU] = 0x88042020U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk25__DOT__idx[0xeU] = 0x2401180U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk25__DOT__idx[0xfU] = 0x3809804aU;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk25__DOT__idx[0x10U] = 0x5202801U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk25__DOT__idx[0x11U] = 0xc01580a8U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk25__DOT__idx[0x12U] = 0xb805a02U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk25__DOT__idx[0x13U] = 0x20300178U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk25__DOT__idx[0x14U] = 0x1980c806U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk25__DOT__idx[0x15U] = 0x806a0340U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk25__DOT__idx[0x16U] = 0x3801b80dU;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk25__DOT__idx[0x17U] = 0x80e80720U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk25__DOT__idx[0x18U] = 0x7a03c01dU;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk25__DOT__idx[0x19U] = 0x1f80f80U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk25__DOT__idx[0x1aU] = 0x8082040U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk25__DOT__idx[0x1bU] = 0x4402181U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk25__DOT__idx[0x1cU] = 0x3811808aU;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk25__DOT__idx[0x1dU] = 0x9204802U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk25__DOT__idx[0x1eU] = 0xc0258128U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk25__DOT__idx[0x1fU] = 0x13809a04U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk25__DOT__idx[0x20U] = 0x20500278U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk25__DOT__idx[0x21U] = 0x2981480aU;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk25__DOT__idx[0x22U] = 0x80aa0540U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk25__DOT__idx[0x23U] = 0x5802b815U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk25__DOT__idx[0x24U] = 0x81680b20U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk25__DOT__idx[0x25U] = 0xba05c02dU;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk25__DOT__idx[0x26U] = 0x2f81780U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk25__DOT__idx[0x27U] = 0x880c2060U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk25__DOT__idx[0x28U] = 0x6403181U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk25__DOT__idx[0x29U] = 0x381980caU;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk25__DOT__idx[0x2aU] = 0xd206803U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk25__DOT__idx[0x2bU] = 0xc03581a8U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk25__DOT__idx[0x2cU] = 0x1b80da06U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk25__DOT__idx[0x2dU] = 0x20700378U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk25__DOT__idx[0x2eU] = 0x3981c80eU;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk25__DOT__idx[0x2fU] = 0x80ea0740U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk25__DOT__idx[0x30U] = 0x7803b81dU;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk25__DOT__idx[0x31U] = 0x81e80f20U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk25__DOT__idx[0x32U] = 0xfa07c03dU;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk25__DOT__idx[0x33U] = 0x3f81f80U;
                    vlSelf->__Vfunc_shuffle_index__331__Vfuncout 
                        = ((0x67fU >= (0x7ffU & ((IData)(0xdU) 
                                                 * 
                                                 (0x7fU 
                                                  & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))
                            ? (0x1fffU & (((0U == (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (0x7fU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))
                                            ? 0U : 
                                           (vlSelf->__Vfunc_shuffle_index__331__unnamedblk25__DOT__idx[
                                            (((IData)(0xcU) 
                                              + (0x7ffU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0x7fU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (0x7fU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))))))) 
                                          | (vlSelf->__Vfunc_shuffle_index__331__unnamedblk25__DOT__idx[
                                             (0x3fU 
                                              & (((IData)(0xdU) 
                                                  * 
                                                  (0x7fU 
                                                   & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0x7fU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))))
                            : 0U);
                    goto __Vlabel264;
                } else if ((2U & (IData)(vlSelf->__Vfunc_shuffle_index__331__ew))) {
                    if ((1U & (IData)(vlSelf->__Vfunc_shuffle_index__331__ew))) {
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk21__DOT__idx[0U] = 0x8002000U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk21__DOT__idx[1U] = 0x400180U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk21__DOT__idx[2U] = 0x3801800aU;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk21__DOT__idx[3U] = 0x1200800U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk21__DOT__idx[4U] = 0xc0058028U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk21__DOT__idx[5U] = 0x3801a00U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk21__DOT__idx[6U] = 0x20100078U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk21__DOT__idx[7U] = 0x9804802U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk21__DOT__idx[8U] = 0x802a0140U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk21__DOT__idx[9U] = 0x1800b805U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk21__DOT__idx[0xaU] = 0x80680320U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk21__DOT__idx[0xbU] = 0x3a01c00dU;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk21__DOT__idx[0xcU] = 0xf80780U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk21__DOT__idx[0xdU] = 0x88042020U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk21__DOT__idx[0xeU] = 0x2401180U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk21__DOT__idx[0xfU] = 0x3809804aU;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk21__DOT__idx[0x10U] = 0x5202801U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk21__DOT__idx[0x11U] = 0xc01580a8U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk21__DOT__idx[0x12U] = 0xb805a02U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk21__DOT__idx[0x13U] = 0x20300178U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk21__DOT__idx[0x14U] = 0x1980c806U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk21__DOT__idx[0x15U] = 0x806a0340U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk21__DOT__idx[0x16U] = 0x3801b80dU;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk21__DOT__idx[0x17U] = 0x80e80720U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk21__DOT__idx[0x18U] = 0x7a03c01dU;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk21__DOT__idx[0x19U] = 0x1f80f80U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk21__DOT__idx[0x1aU] = 0x8082040U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk21__DOT__idx[0x1bU] = 0x4402181U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk21__DOT__idx[0x1cU] = 0x3811808aU;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk21__DOT__idx[0x1dU] = 0x9204802U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk21__DOT__idx[0x1eU] = 0xc0258128U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk21__DOT__idx[0x1fU] = 0x13809a04U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk21__DOT__idx[0x20U] = 0x20500278U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk21__DOT__idx[0x21U] = 0x2981480aU;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk21__DOT__idx[0x22U] = 0x80aa0540U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk21__DOT__idx[0x23U] = 0x5802b815U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk21__DOT__idx[0x24U] = 0x81680b20U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk21__DOT__idx[0x25U] = 0xba05c02dU;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk21__DOT__idx[0x26U] = 0x2f81780U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk21__DOT__idx[0x27U] = 0x880c2060U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk21__DOT__idx[0x28U] = 0x6403181U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk21__DOT__idx[0x29U] = 0x381980caU;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk21__DOT__idx[0x2aU] = 0xd206803U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk21__DOT__idx[0x2bU] = 0xc03581a8U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk21__DOT__idx[0x2cU] = 0x1b80da06U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk21__DOT__idx[0x2dU] = 0x20700378U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk21__DOT__idx[0x2eU] = 0x3981c80eU;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk21__DOT__idx[0x2fU] = 0x80ea0740U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk21__DOT__idx[0x30U] = 0x7803b81dU;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk21__DOT__idx[0x31U] = 0x81e80f20U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk21__DOT__idx[0x32U] = 0xfa07c03dU;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk21__DOT__idx[0x33U] = 0x3f81f80U;
                        vlSelf->__Vfunc_shuffle_index__331__Vfuncout 
                            = ((0x67fU >= (0x7ffU & 
                                           ((IData)(0xdU) 
                                            * (0x7fU 
                                               & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))
                                ? (0x1fffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0x7fU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))
                                                ? 0U
                                                : (
                                                   vlSelf->__Vfunc_shuffle_index__331__unnamedblk21__DOT__idx[
                                                   (((IData)(0xcU) 
                                                     + 
                                                     (0x7ffU 
                                                      & ((IData)(0xdU) 
                                                         * 
                                                         (0x7fU 
                                                          & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0xdU) 
                                                        * 
                                                        (0x7fU 
                                                         & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))))))) 
                                              | (vlSelf->__Vfunc_shuffle_index__331__unnamedblk21__DOT__idx[
                                                 (0x3fU 
                                                  & (((IData)(0xdU) 
                                                      * 
                                                      (0x7fU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(0xdU) 
                                                     * 
                                                     (0x7fU 
                                                      & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))))
                                : 0U);
                        goto __Vlabel264;
                    } else {
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk22__DOT__idx[0U] = 0x8002000U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk22__DOT__idx[1U] = 0x800180U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk22__DOT__idx[2U] = 0x58028012U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk22__DOT__idx[3U] = 0x2201000U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk22__DOT__idx[4U] = 0x80098048U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk22__DOT__idx[5U] = 0x6803201U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk22__DOT__idx[6U] = 0x202000d8U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk22__DOT__idx[7U] = 0x11808804U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk22__DOT__idx[8U] = 0x80520280U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk22__DOT__idx[9U] = 0x3001580aU;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk22__DOT__idx[0xaU] = 0x80c80620U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk22__DOT__idx[0xbU] = 0x72038019U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk22__DOT__idx[0xcU] = 0x1d80e80U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk22__DOT__idx[0xdU] = 0x8082040U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk22__DOT__idx[0xeU] = 0x4802181U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk22__DOT__idx[0xfU] = 0x58128092U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk22__DOT__idx[0x10U] = 0xa205002U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk22__DOT__idx[0x11U] = 0x80298148U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk22__DOT__idx[0x12U] = 0x1680b205U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk22__DOT__idx[0x13U] = 0x206002d8U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk22__DOT__idx[0x14U] = 0x3181880cU;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk22__DOT__idx[0x15U] = 0x80d20680U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk22__DOT__idx[0x16U] = 0x7003581aU;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk22__DOT__idx[0x17U] = 0x81c80e20U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk22__DOT__idx[0x18U] = 0xf2078039U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk22__DOT__idx[0x19U] = 0x3d81e80U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk22__DOT__idx[0x1aU] = 0x1800a004U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk22__DOT__idx[0x1bU] = 0xc00380U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk22__DOT__idx[0x1cU] = 0x7803801aU;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk22__DOT__idx[0x1dU] = 0x2a01400U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk22__DOT__idx[0x1eU] = 0xc00b8058U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk22__DOT__idx[0x1fU] = 0x7803a01U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk22__DOT__idx[0x20U] = 0xa02400f8U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk22__DOT__idx[0x21U] = 0x13809804U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk22__DOT__idx[0x22U] = 0x805a02c0U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk22__DOT__idx[0x23U] = 0x3401780bU;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk22__DOT__idx[0x24U] = 0x80d806a0U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk22__DOT__idx[0x25U] = 0x7a03c01bU;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk22__DOT__idx[0x26U] = 0x1f80f80U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk22__DOT__idx[0x27U] = 0x1808a044U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk22__DOT__idx[0x28U] = 0x4c02381U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk22__DOT__idx[0x29U] = 0x7813809aU;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk22__DOT__idx[0x2aU] = 0xaa05402U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk22__DOT__idx[0x2bU] = 0xc02b8158U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk22__DOT__idx[0x2cU] = 0x1780ba05U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk22__DOT__idx[0x2dU] = 0xa06402f8U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk22__DOT__idx[0x2eU] = 0x3381980cU;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk22__DOT__idx[0x2fU] = 0x80da06c0U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk22__DOT__idx[0x30U] = 0x7403781bU;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk22__DOT__idx[0x31U] = 0x81d80ea0U;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk22__DOT__idx[0x32U] = 0xfa07c03bU;
                        vlSelf->__Vfunc_shuffle_index__331__unnamedblk22__DOT__idx[0x33U] = 0x3f81f80U;
                        vlSelf->__Vfunc_shuffle_index__331__Vfuncout 
                            = ((0x67fU >= (0x7ffU & 
                                           ((IData)(0xdU) 
                                            * (0x7fU 
                                               & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))
                                ? (0x1fffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0x7fU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))
                                                ? 0U
                                                : (
                                                   vlSelf->__Vfunc_shuffle_index__331__unnamedblk22__DOT__idx[
                                                   (((IData)(0xcU) 
                                                     + 
                                                     (0x7ffU 
                                                      & ((IData)(0xdU) 
                                                         * 
                                                         (0x7fU 
                                                          & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0xdU) 
                                                        * 
                                                        (0x7fU 
                                                         & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))))))) 
                                              | (vlSelf->__Vfunc_shuffle_index__331__unnamedblk22__DOT__idx[
                                                 (0x3fU 
                                                  & (((IData)(0xdU) 
                                                      * 
                                                      (0x7fU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(0xdU) 
                                                     * 
                                                     (0x7fU 
                                                      & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))))
                                : 0U);
                        goto __Vlabel264;
                    }
                } else if ((1U & (IData)(vlSelf->__Vfunc_shuffle_index__331__ew))) {
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk23__DOT__idx[0U] = 0x20002000U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk23__DOT__idx[1U] = 0x1000480U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk23__DOT__idx[2U] = 0xc8060022U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk23__DOT__idx[3U] = 0x4202000U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk23__DOT__idx[4U] = 0x1480a0U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk23__DOT__idx[5U] = 0xe006203U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk23__DOT__idx[6U] = 0x204001c8U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk23__DOT__idx[7U] = 0x24812008U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk23__DOT__idx[8U] = 0xa20500U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk23__DOT__idx[9U] = 0x6002c816U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk23__DOT__idx[0xaU] = 0x81a00c20U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk23__DOT__idx[0xbU] = 0xe2070034U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk23__DOT__idx[0xcU] = 0x3c81e00U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk23__DOT__idx[0xdU] = 0x3000a004U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk23__DOT__idx[0xeU] = 0x1400680U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk23__DOT__idx[0xfU] = 0xe807002aU;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk23__DOT__idx[0x10U] = 0x4a02400U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk23__DOT__idx[0x11U] = 0x401680b0U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk23__DOT__idx[0x12U] = 0xf006a03U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk23__DOT__idx[0x13U] = 0xa04401e8U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk23__DOT__idx[0x14U] = 0x26813008U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk23__DOT__idx[0x15U] = 0xaa0540U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk23__DOT__idx[0x16U] = 0x6402e817U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk23__DOT__idx[0x17U] = 0x81b00ca0U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk23__DOT__idx[0x18U] = 0xea074036U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk23__DOT__idx[0x19U] = 0x3e81f00U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk23__DOT__idx[0x1aU] = 0x28006002U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk23__DOT__idx[0x1bU] = 0x1200580U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk23__DOT__idx[0x1cU] = 0xd8068026U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk23__DOT__idx[0x1dU] = 0x4602200U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk23__DOT__idx[0x1eU] = 0x201580a8U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk23__DOT__idx[0x1fU] = 0xe806603U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk23__DOT__idx[0x20U] = 0x604201d8U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk23__DOT__idx[0x21U] = 0x25812808U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk23__DOT__idx[0x22U] = 0x80a60520U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk23__DOT__idx[0x23U] = 0x6202d816U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk23__DOT__idx[0x24U] = 0x81a80c60U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk23__DOT__idx[0x25U] = 0xe6072035U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk23__DOT__idx[0x26U] = 0x3d81e80U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk23__DOT__idx[0x27U] = 0x3800e006U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk23__DOT__idx[0x28U] = 0x1600780U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk23__DOT__idx[0x29U] = 0xf807802eU;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk23__DOT__idx[0x2aU] = 0x4e02600U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk23__DOT__idx[0x2bU] = 0x601780b8U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk23__DOT__idx[0x2cU] = 0xf806e03U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk23__DOT__idx[0x2dU] = 0xe04601f8U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk23__DOT__idx[0x2eU] = 0x27813808U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk23__DOT__idx[0x2fU] = 0x80ae0560U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk23__DOT__idx[0x30U] = 0x6602f817U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk23__DOT__idx[0x31U] = 0x81b80ce0U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk23__DOT__idx[0x32U] = 0xee076037U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk23__DOT__idx[0x33U] = 0x3f81f80U;
                    vlSelf->__Vfunc_shuffle_index__331__Vfuncout 
                        = ((0x67fU >= (0x7ffU & ((IData)(0xdU) 
                                                 * 
                                                 (0x7fU 
                                                  & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))
                            ? (0x1fffU & (((0U == (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (0x7fU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))
                                            ? 0U : 
                                           (vlSelf->__Vfunc_shuffle_index__331__unnamedblk23__DOT__idx[
                                            (((IData)(0xcU) 
                                              + (0x7ffU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0x7fU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (0x7fU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))))))) 
                                          | (vlSelf->__Vfunc_shuffle_index__331__unnamedblk23__DOT__idx[
                                             (0x3fU 
                                              & (((IData)(0xdU) 
                                                  * 
                                                  (0x7fU 
                                                   & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0x7fU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))))
                            : 0U);
                    goto __Vlabel264;
                } else {
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk24__DOT__idx[0U] = 0x40010000U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk24__DOT__idx[1U] = 0x2000c00U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk24__DOT__idx[2U] = 0xc00c0050U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk24__DOT__idx[3U] = 0x9004001U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk24__DOT__idx[4U] = 0x2c0140U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk24__DOT__idx[5U] = 0x1c00d006U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk24__DOT__idx[6U] = 0x800403c0U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk24__DOT__idx[7U] = 0xe005001U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk24__DOT__idx[8U] = 0x580240U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk24__DOT__idx[9U] = 0x4401e00dU;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk24__DOT__idx[0xaU] = 0x1500980U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk24__DOT__idx[0xbU] = 0xd806402eU;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk24__DOT__idx[0xcU] = 0x3e01d00U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk24__DOT__idx[0xdU] = 0x48014002U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk24__DOT__idx[0xeU] = 0x2200d00U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk24__DOT__idx[0xfU] = 0xd00c8054U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk24__DOT__idx[0x10U] = 0x9404201U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk24__DOT__idx[0x11U] = 0x202d0148U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk24__DOT__idx[0x12U] = 0x1c80d406U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk24__DOT__idx[0x13U] = 0xc00603d0U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk24__DOT__idx[0x14U] = 0xf005801U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk24__DOT__idx[0x15U] = 0x805c0260U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk24__DOT__idx[0x16U] = 0x4601f00dU;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk24__DOT__idx[0x17U] = 0x15809c0U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk24__DOT__idx[0x18U] = 0xdc06602fU;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk24__DOT__idx[0x19U] = 0x3f01d80U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk24__DOT__idx[0x1aU] = 0x44012001U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk24__DOT__idx[0x1bU] = 0x2100c80U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk24__DOT__idx[0x1cU] = 0xc80c4052U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk24__DOT__idx[0x1dU] = 0x9204101U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk24__DOT__idx[0x1eU] = 0x102c8144U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk24__DOT__idx[0x1fU] = 0x1c40d206U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk24__DOT__idx[0x20U] = 0xa00503c8U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk24__DOT__idx[0x21U] = 0xe805401U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk24__DOT__idx[0x22U] = 0x405a0250U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk24__DOT__idx[0x23U] = 0x4501e80dU;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk24__DOT__idx[0x24U] = 0x815409a0U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk24__DOT__idx[0x25U] = 0xda06502eU;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk24__DOT__idx[0x26U] = 0x3e81d40U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk24__DOT__idx[0x27U] = 0x4c016003U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk24__DOT__idx[0x28U] = 0x2300d80U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk24__DOT__idx[0x29U] = 0xd80cc056U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk24__DOT__idx[0x2aU] = 0x9604301U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk24__DOT__idx[0x2bU] = 0x302d814cU;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk24__DOT__idx[0x2cU] = 0x1cc0d606U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk24__DOT__idx[0x2dU] = 0xe00703d8U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk24__DOT__idx[0x2eU] = 0xf805c01U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk24__DOT__idx[0x2fU] = 0xc05e0270U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk24__DOT__idx[0x30U] = 0x4701f80dU;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk24__DOT__idx[0x31U] = 0x815c09e0U;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk24__DOT__idx[0x32U] = 0xde06702fU;
                    vlSelf->__Vfunc_shuffle_index__331__unnamedblk24__DOT__idx[0x33U] = 0x3f81dc0U;
                    vlSelf->__Vfunc_shuffle_index__331__Vfuncout 
                        = ((0x67fU >= (0x7ffU & ((IData)(0xdU) 
                                                 * 
                                                 (0x7fU 
                                                  & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))
                            ? (0x1fffU & (((0U == (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (0x7fU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))
                                            ? 0U : 
                                           (vlSelf->__Vfunc_shuffle_index__331__unnamedblk24__DOT__idx[
                                            (((IData)(0xcU) 
                                              + (0x7ffU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0x7fU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (0x7fU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))))))) 
                                          | (vlSelf->__Vfunc_shuffle_index__331__unnamedblk24__DOT__idx[
                                             (0x3fU 
                                              & (((IData)(0xdU) 
                                                  * 
                                                  (0x7fU 
                                                   & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx))) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0x7fU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__331__byte_idx)))))))
                            : 0U);
                    goto __Vlabel264;
                }
            } else {
                VL_WRITEF("[%0t] %%Error: ara_pkg.sv:897: Assertion failed in %Nara_pkg.shuffle_index: Error. Supported number of lanes are 1, 2, 4, 8, 16.\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name());
                VL_STOP_MT("/home/yongfu/proj/score/tools/araxl/hardware/include/ara_pkg.sv", 897, "");
            }
            __Vlabel264: ;
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addr_generation__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b_shuffled 
            = vlSelf->__Vfunc_shuffle_index__331__Vfuncout;
        VL_ASSIGNSEL_WI(256,8,(0xffU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addr_generation__DOT__unnamedblk1__DOT__b 
                                        << 3U)), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__deshuffled_word, 
                        (0xffU & (((0U == (0x1fU & 
                                           ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addr_generation__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b_shuffled) 
                                            << 3U)))
                                    ? 0U : (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__shuffled_word[
                                            (((IData)(7U) 
                                              + (0xffU 
                                                 & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addr_generation__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b_shuffled) 
                                                    << 3U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addr_generation__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b_shuffled) 
                                                      << 3U))))) 
                                  | (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__shuffled_word[
                                     (7U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addr_generation__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b_shuffled) 
                                            >> 2U))] 
                                     >> (0x1fU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addr_generation__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b_shuffled) 
                                                  << 3U))))));
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addr_generation__DOT__unnamedblk1__DOT__b 
            = ((IData)(1U) + ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addr_generation__DOT__unnamedblk1__DOT__b);
    }
    if ((0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q))) {
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__deshuffled_word[
                                (((IData)(0x3fU) + 
                                  (0xffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                            << 6U))) 
                                 >> 5U)])) << ((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                                    << 6U)))
                                                ? 0x20U
                                                : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                                       << 6U))))) 
               | (((0U == (0x1fU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                    << 6U))) ? 0ULL
                    : ((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__deshuffled_word[
                                       (((IData)(0x1fU) 
                                         + (0xffU & 
                                            ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                             << 6U))) 
                                        >> 5U)])) << 
                       ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                                   << 6U))))) 
                  | ((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__deshuffled_word[
                                     (6U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                            << 1U))])) 
                     >> (0x1fU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                  << 6U)))));
    }
    if ((1U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q))) {
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__deshuffled_word[
                                (((IData)(0x3fU) + 
                                  (0xffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                            << 6U))) 
                                 >> 5U)])) << ((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                                    << 6U)))
                                                ? 0x20U
                                                : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                                       << 6U))))) 
               | (((0U == (0x1fU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                    << 6U))) ? 0ULL
                    : ((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__deshuffled_word[
                                       (((IData)(0x1fU) 
                                         + (0xffU & 
                                            ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                             << 6U))) 
                                        >> 5U)])) << 
                       ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                                   << 6U))))) 
                  | ((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__deshuffled_word[
                                     (6U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                            << 1U))])) 
                     >> (0x1fU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                  << 6U)))));
    }
    if ((2U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q))) {
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__deshuffled_word[
                                (((IData)(0x3fU) + 
                                  (0xffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                            << 6U))) 
                                 >> 5U)])) << ((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                                    << 6U)))
                                                ? 0x20U
                                                : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                                       << 6U))))) 
               | (((0U == (0x1fU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                    << 6U))) ? 0ULL
                    : ((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__deshuffled_word[
                                       (((IData)(0x1fU) 
                                         + (0xffU & 
                                            ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                             << 6U))) 
                                        >> 5U)])) << 
                       ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                                   << 6U))))) 
                  | ((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__deshuffled_word[
                                     (6U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                            << 1U))])) 
                     >> (0x1fU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                  << 6U)))));
    }
    if ((3U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q))) {
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__deshuffled_word[
                                (((IData)(0x3fU) + 
                                  (0xffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                            << 6U))) 
                                 >> 5U)])) << ((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                                    << 6U)))
                                                ? 0x20U
                                                : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                                       << 6U))))) 
               | (((0U == (0x1fU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                    << 6U))) ? 0ULL
                    : ((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__deshuffled_word[
                                       (((IData)(0x1fU) 
                                         + (0xffU & 
                                            ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                             << 6U))) 
                                        >> 5U)])) << 
                       ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                                   << 6U))))) 
                  | ((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__deshuffled_word[
                                     (6U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                            << 1U))])) 
                     >> (0x1fU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                  << 6U)))));
    }
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr 
        = ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word;
    if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__state_q))) {
        if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__state_q))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__addrgen_ack = 0U;
            if (((0x81U == (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[8U] 
                                     >> 0xeU))) | (0x84U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[8U] 
                                                       >> 0xeU))))) {
                if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__idx_completed_sync) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__addrgen_ack = 1U;
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addrgen_req_valid = 0U;
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__state_d = 0U;
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_d = 0U;
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_d = 0U;
                    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_op_error_q) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__addrgen_error = 1U;
                    }
                }
            } else if (((0x80U == (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[8U] 
                                            >> 0xeU))) 
                        | (0x83U == (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[8U] 
                                              >> 0xeU))))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addrgen_req_valid = 0U;
                if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__idx_completed_sync) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__addrgen_ack = 1U;
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__state_d = 0U;
                }
            }
        } else {
            vlSelf->__Vfunc_is_load__332__op = (0xffU 
                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[8U] 
                                                   >> 0xeU));
            vlSelf->__Vfunc_is_load__332__Vfuncout 
                = ((0x7fU <= (IData)(vlSelf->__Vfunc_is_load__332__op)) 
                   & (0x81U >= (IData)(vlSelf->__Vfunc_is_load__332__op)));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addrgen_req[0U] 
                = (((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[5U])) 
                              << 0x3aU) | (((QData)((IData)(
                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[4U])) 
                                            << 0x1aU) 
                                           | ((QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[3U])) 
                                              >> 6U)))) 
                    << 0x18U) | ((0xe00000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[1U] 
                                               << 0x11U)) 
                                 | (((IData)(vlSelf->__Vfunc_is_load__332__Vfuncout) 
                                     << 0x14U) | ((0x40000U 
                                                   & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[1U] 
                                                      << 0x12U)) 
                                                  | (0x3ffffU 
                                                     & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[2U] 
                                                         << 9U) 
                                                        | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[1U] 
                                                           >> 0x17U)))))));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addrgen_req[1U] 
                = (((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[5U])) 
                              << 0x3aU) | (((QData)((IData)(
                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[4U])) 
                                            << 0x1aU) 
                                           | ((QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[3U])) 
                                              >> 6U)))) 
                    >> 8U) | ((IData)(((((QData)((IData)(
                                                         vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[5U])) 
                                         << 0x3aU) 
                                        | (((QData)((IData)(
                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[4U])) 
                                            << 0x1aU) 
                                           | ((QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[3U])) 
                                              >> 6U))) 
                                       >> 0x20U)) << 0x18U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addrgen_req[2U] 
                = ((0xff000000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[2U] 
                                   << 0xfU)) | ((IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[5U])) 
                                                           << 0x3aU) 
                                                          | (((QData)((IData)(
                                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[4U])) 
                                                              << 0x1aU) 
                                                             | ((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[3U])) 
                                                                >> 6U))) 
                                                         >> 0x20U)) 
                                                >> 8U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addrgen_req[3U] 
                = (((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[7U])) 
                              << 0x38U) | (((QData)((IData)(
                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[6U])) 
                                            << 0x18U) 
                                           | ((QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[5U])) 
                                              >> 8U)))) 
                    << 5U) | (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[2U] 
                                       >> 0x11U)));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addrgen_req[4U] 
                = (((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[7U])) 
                              << 0x38U) | (((QData)((IData)(
                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[6U])) 
                                            << 0x18U) 
                                           | ((QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[5U])) 
                                              >> 8U)))) 
                    >> 0x1bU) | ((IData)(((((QData)((IData)(
                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[7U])) 
                                            << 0x38U) 
                                           | (((QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[6U])) 
                                               << 0x18U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[5U])) 
                                                 >> 8U))) 
                                          >> 0x20U)) 
                                 << 5U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addrgen_req[5U] 
                = ((IData)(((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[7U])) 
                              << 0x38U) | (((QData)((IData)(
                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[6U])) 
                                            << 0x18U) 
                                           | ((QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[5U])) 
                                              >> 8U))) 
                            >> 0x20U)) >> 0x1bU);
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addrgen_req_valid = 1U;
            if (((0xfU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__sldu_addrgen_operand_valid)) 
                 & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT____Vcellinp__i_sldu__sldu_operand_target_fu_i))) {
                ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr_valid_d = 1U;
                if ((0x4000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[7U])) {
                    if ((0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_q))) {
                        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr 
                            = (QData)((IData)((0xffU 
                                               & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word))));
                    }
                    if ((1U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_q))) {
                        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr 
                            = (QData)((IData)((0xffU 
                                               & (IData)(
                                                         (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word 
                                                          >> 8U)))));
                    }
                    if ((2U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_q))) {
                        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr 
                            = (QData)((IData)((0xffU 
                                               & (IData)(
                                                         (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word 
                                                          >> 0x10U)))));
                    }
                    if ((3U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_q))) {
                        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr 
                            = (QData)((IData)((0xffU 
                                               & (IData)(
                                                         (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word 
                                                          >> 0x18U)))));
                    }
                    if ((4U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_q))) {
                        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr 
                            = (QData)((IData)((0xffU 
                                               & (IData)(
                                                         (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word 
                                                          >> 0x20U)))));
                    }
                    if ((5U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_q))) {
                        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr 
                            = (QData)((IData)((0xffU 
                                               & (IData)(
                                                         (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word 
                                                          >> 0x28U)))));
                    }
                    if ((6U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_q))) {
                        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr 
                            = (QData)((IData)((0xffU 
                                               & (IData)(
                                                         (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word 
                                                          >> 0x30U)))));
                    }
                    if ((7U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_q))) {
                        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr 
                            = (QData)((IData)((0xffU 
                                               & (IData)(
                                                         (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word 
                                                          >> 0x38U)))));
                    }
                } else if ((0x2000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[7U])) {
                    if ((0x1000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[7U])) {
                        if ((0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_q))) {
                            ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr 
                                = ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word;
                        }
                    } else {
                        if ((0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_q))) {
                            ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr 
                                = (QData)((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word));
                        }
                        if ((1U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_q))) {
                            ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr 
                                = (QData)((IData)((ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word 
                                                   >> 0x20U)));
                        }
                    }
                } else if ((0x1000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[7U])) {
                    if ((0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_q))) {
                        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr 
                            = (QData)((IData)((0xffffU 
                                               & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word))));
                    }
                    if ((1U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_q))) {
                        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr 
                            = (QData)((IData)((0xffffU 
                                               & (IData)(
                                                         (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word 
                                                          >> 0x10U)))));
                    }
                    if ((2U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_q))) {
                        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr 
                            = (QData)((IData)((0xffffU 
                                               & (IData)(
                                                         (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word 
                                                          >> 0x20U)))));
                    }
                    if ((3U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_q))) {
                        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr 
                            = (QData)((IData)((0xffffU 
                                               & (IData)(
                                                         (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word 
                                                          >> 0x30U)))));
                    }
                } else {
                    if ((0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_q))) {
                        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr 
                            = (QData)((IData)((0xffU 
                                               & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word))));
                    }
                    if ((1U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_q))) {
                        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr 
                            = (QData)((IData)((0xffU 
                                               & (IData)(
                                                         (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word 
                                                          >> 8U)))));
                    }
                    if ((2U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_q))) {
                        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr 
                            = (QData)((IData)((0xffU 
                                               & (IData)(
                                                         (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word 
                                                          >> 0x10U)))));
                    }
                    if ((3U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_q))) {
                        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr 
                            = (QData)((IData)((0xffU 
                                               & (IData)(
                                                         (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word 
                                                          >> 0x18U)))));
                    }
                    if ((4U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_q))) {
                        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr 
                            = (QData)((IData)((0xffU 
                                               & (IData)(
                                                         (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word 
                                                          >> 0x20U)))));
                    }
                    if ((5U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_q))) {
                        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr 
                            = (QData)((IData)((0xffU 
                                               & (IData)(
                                                         (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word 
                                                          >> 0x28U)))));
                    }
                    if ((6U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_q))) {
                        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr 
                            = (QData)((IData)((0xffU 
                                               & (IData)(
                                                         (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word 
                                                          >> 0x30U)))));
                    }
                    if ((7U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_q))) {
                        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr 
                            = (QData)((IData)((0xffU 
                                               & (IData)(
                                                         (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word 
                                                          >> 0x38U)))));
                    }
                }
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_final_addr_d 
                    = ((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[7U])) 
                         << 0x38U) | (((QData)((IData)(
                                                       vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[6U])) 
                                       << 0x18U) | 
                                      ((QData)((IData)(
                                                       vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[5U])) 
                                       >> 8U))) + ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr);
                if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr_ready_q) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_op_cnt_d 
                        = (0x1fffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_op_cnt_q) 
                                      - (IData)(1U)));
                    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_q) 
                         == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__last_elm_subw_q))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_d = 0U;
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_d 
                            = (3U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_d)));
                        if ((3U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__addrgen_operand_ready = 1U;
                        }
                    } else {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_d 
                            = (7U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_d)));
                    }
                }
                if ((0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_op_cnt_d))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__addrgen_operand_ready = 1U;
                }
            }
            if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_op_error_d) 
                 | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addrgen_req_ready))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__state_d = 3U;
            }
        }
    } else if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__state_q))) {
        vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__is_addr_error__333__vew 
            = (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[1U] 
                     >> 4U));
        vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__is_addr_error__333__addr 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[7U])) 
                << 0x38U) | (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[6U])) 
                              << 0x18U) | ((QData)((IData)(
                                                           vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[5U])) 
                                           >> 8U)));
        vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__is_addr_error__333__Vfuncout 
            = (0U != (vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__is_addr_error__333__addr 
                      & ((1ULL << (IData)(vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__is_addr_error__333__vew)) 
                         - 1ULL)));
        if (vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__is_addr_error__333__Vfuncout) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__state_d = 0U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__addrgen_ack = 1U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__addrgen_error = 1U;
        } else {
            vlSelf->__Vfunc_is_load__334__op = (0xffU 
                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[8U] 
                                                   >> 0xeU));
            vlSelf->__Vfunc_is_load__334__Vfuncout 
                = ((0x7fU <= (IData)(vlSelf->__Vfunc_is_load__334__op)) 
                   & (0x81U >= (IData)(vlSelf->__Vfunc_is_load__334__op)));
            __Vtemp_h5def9396__0[0U] = (((IData)((((QData)((IData)(
                                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[5U])) 
                                                   << 0x3aU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[4U])) 
                                                      << 0x1aU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[3U])) 
                                                        >> 6U)))) 
                                         << 0x18U) 
                                        | ((0xe00000U 
                                            & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[1U] 
                                               << 0x11U)) 
                                           | (((IData)(vlSelf->__Vfunc_is_load__334__Vfuncout) 
                                               << 0x14U) 
                                              | ((((0x7fU 
                                                    == 
                                                    (0xffU 
                                                     & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[8U] 
                                                        >> 0xeU))) 
                                                   | (0x82U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[8U] 
                                                          >> 0xeU)))) 
                                                  << 0x13U) 
                                                 | ((0x40000U 
                                                     & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[1U] 
                                                        << 0x12U)) 
                                                    | (0x3ffffU 
                                                       & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[2U] 
                                                           << 9U) 
                                                          | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[1U] 
                                                             >> 0x17U))))))));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addrgen_req[0U] 
                = __Vtemp_h5def9396__0[0U];
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addrgen_req[1U] 
                = (((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[5U])) 
                              << 0x3aU) | (((QData)((IData)(
                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[4U])) 
                                            << 0x1aU) 
                                           | ((QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[3U])) 
                                              >> 6U)))) 
                    >> 8U) | ((IData)(((((QData)((IData)(
                                                         vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[5U])) 
                                         << 0x3aU) 
                                        | (((QData)((IData)(
                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[4U])) 
                                            << 0x1aU) 
                                           | ((QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[3U])) 
                                              >> 6U))) 
                                       >> 0x20U)) << 0x18U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addrgen_req[2U] 
                = ((0xff000000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[2U] 
                                   << 0xfU)) | ((IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[5U])) 
                                                           << 0x3aU) 
                                                          | (((QData)((IData)(
                                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[4U])) 
                                                              << 0x1aU) 
                                                             | ((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[3U])) 
                                                                >> 6U))) 
                                                         >> 0x20U)) 
                                                >> 8U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addrgen_req[3U] 
                = (((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[7U])) 
                              << 0x38U) | (((QData)((IData)(
                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[6U])) 
                                            << 0x18U) 
                                           | ((QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[5U])) 
                                              >> 8U)))) 
                    << 5U) | (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[2U] 
                                       >> 0x11U)));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addrgen_req[4U] 
                = (((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[7U])) 
                              << 0x38U) | (((QData)((IData)(
                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[6U])) 
                                            << 0x18U) 
                                           | ((QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[5U])) 
                                              >> 8U)))) 
                    >> 0x1bU) | ((IData)(((((QData)((IData)(
                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[7U])) 
                                            << 0x38U) 
                                           | (((QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[6U])) 
                                               << 0x18U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[5U])) 
                                                 >> 8U))) 
                                          >> 0x20U)) 
                                 << 5U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addrgen_req[5U] 
                = ((IData)(((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[7U])) 
                              << 0x38U) | (((QData)((IData)(
                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[6U])) 
                                            << 0x18U) 
                                           | ((QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[5U])) 
                                              >> 8U))) 
                            >> 0x20U)) >> 0x1bU);
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addrgen_req_valid = 1U;
            if (((0x80U == (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[8U] 
                                     >> 0xeU))) | (0x83U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[8U] 
                                                       >> 0xeU))))) {
                if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addrgen_req_ready) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__state_d = 3U;
                }
            } else if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addrgen_req_ready) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addrgen_req_valid = 0U;
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__addrgen_ack = 1U;
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__state_d = 0U;
            }
        }
    } else {
        vlSelf->__Vfunc_is_store__336__op = (0xffU 
                                             & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__pe_req[8U] 
                                                >> 0xeU));
        vlSelf->__Vfunc_is_store__336__Vfuncout = (
                                                   (0x82U 
                                                    <= (IData)(vlSelf->__Vfunc_is_store__336__op)) 
                                                   & (0x84U 
                                                      >= (IData)(vlSelf->__Vfunc_is_store__336__op)));
        vlSelf->__Vfunc_is_load__335__op = (0xffU & 
                                            (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__pe_req[8U] 
                                             >> 0xeU));
        vlSelf->__Vfunc_is_load__335__Vfuncout = ((0x7fU 
                                                   <= (IData)(vlSelf->__Vfunc_is_load__335__op)) 
                                                  & (0x81U 
                                                     >= (IData)(vlSelf->__Vfunc_is_load__335__op)));
        if ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__pe_req_valid) 
              & ((IData)(vlSelf->__Vfunc_is_load__335__Vfuncout) 
                 | (IData)(vlSelf->__Vfunc_is_store__336__Vfuncout))) 
             & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__vinsn_running_q) 
                   >> (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__pe_req[8U] 
                             >> 0x16U)))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__vinsn_running_d 
                = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__vinsn_running_d) 
                   | (0xffU & ((IData)(1U) << (7U & 
                                               (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__pe_req[8U] 
                                                >> 0x16U)))));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_d[0U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__pe_req[0U];
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_d[1U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__pe_req[1U];
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_d[2U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__pe_req[2U];
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_d[3U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__pe_req[3U];
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_d[4U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__pe_req[4U];
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_d[5U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__pe_req[5U];
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_d[6U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__pe_req[6U];
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_d[7U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__pe_req[7U];
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_d[8U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__pe_req[8U];
            if (((0x81U == (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__pe_req[8U] 
                                     >> 0xeU))) | (0x84U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__pe_req[8U] 
                                                       >> 0xeU))))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__state_d = 2U;
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__last_elm_subw_d 
                    = ((0x4000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__pe_req[7U])
                        ? 0U : ((0x2000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__pe_req[7U])
                                 ? ((0x1000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__pe_req[7U])
                                     ? 0U : 1U) : (
                                                   (0x1000U 
                                                    & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__pe_req[7U])
                                                    ? 3U
                                                    : 7U)));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_op_cnt_d 
                    = (0x1fffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__pe_req[2U] 
                                  >> 9U));
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__state_d = 1U;
            }
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__i_addrgen_idx_op_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr_valid_d) 
           & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__0__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr_ready_q));
}

VL_ATTR_COLD void Vara_tb_verilator___024root___stl_comb__TOP__562(Vara_tb_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___stl_comb__TOP__562\n"); );
    // Init
    VlWide<8>/*255:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__shuffled_word;
    VL_ZERO_W(256, ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__shuffled_word);
    QData/*63:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word = 0;
    QData/*63:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr_valid_d;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr_valid_d = 0;
    IData/*31:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addr_generation__DOT__unnamedblk1__DOT__b;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addr_generation__DOT__unnamedblk1__DOT__b = 0;
    VlWide<3>/*95:0*/ __Vtemp_hdd5740e0__0;
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__state_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__state_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_d[0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_d[1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_d[2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_d[3U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[3U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_d[4U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[4U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_d[5U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[5U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_d[6U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[6U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_d[7U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[7U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_d[8U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[8U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__vinsn_running_d 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__vinsn_running_q) 
           & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_sequencer__DOT__vinsn_running_q));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addrgen_req[0U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addrgen_req[1U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addrgen_req[2U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addrgen_req[3U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addrgen_req[4U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addrgen_req[5U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addrgen_req_valid = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__addrgen_ack = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__addrgen_error = 0U;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr_valid_d = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__addrgen_operand_ready = 0U;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word = 0ULL;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_op_cnt_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_op_cnt_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_final_addr_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__i_addrgen_idx_op_spill_reg__DOT____Vcellout__spill_register_flushable_i__data_o;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__last_elm_subw_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__last_elm_subw_q;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__shuffled_word[0U] 
        = (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__i_lane__sldu_addrgen_operand_o);
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__shuffled_word[1U] 
        = (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT____Vcellout__gen_lanes__BRA__0__KET____DOT__i_lane__sldu_addrgen_operand_o 
                   >> 0x20U));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__shuffled_word[2U] 
        = (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT____Vcellout__gen_lanes__BRA__1__KET____DOT__i_lane__sldu_addrgen_operand_o);
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__shuffled_word[3U] 
        = (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT____Vcellout__gen_lanes__BRA__1__KET____DOT__i_lane__sldu_addrgen_operand_o 
                   >> 0x20U));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__shuffled_word[4U] 
        = (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT____Vcellout__gen_lanes__BRA__2__KET____DOT__i_lane__sldu_addrgen_operand_o);
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__shuffled_word[5U] 
        = (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT____Vcellout__gen_lanes__BRA__2__KET____DOT__i_lane__sldu_addrgen_operand_o 
                   >> 0x20U));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__shuffled_word[6U] 
        = (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT____Vcellout__gen_lanes__BRA__3__KET____DOT__i_lane__sldu_addrgen_operand_o);
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__shuffled_word[7U] 
        = (IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT____Vcellout__gen_lanes__BRA__3__KET____DOT__i_lane__sldu_addrgen_operand_o 
                   >> 0x20U));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addr_generation__DOT__unnamedblk1__DOT__b = 0U;
    while ((0x20U > ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addr_generation__DOT__unnamedblk1__DOT__b)) {
        vlSelf->__Vfunc_shuffle_index__579__ew = (7U 
                                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[7U] 
                                                     >> 0xcU));
        vlSelf->__Vfunc_shuffle_index__579__NrLanes = 4U;
        vlSelf->__Vfunc_shuffle_index__579__byte_idx 
            = (0x1fffU & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addr_generation__DOT__unnamedblk1__DOT__b);
        {
            if ((1U == vlSelf->__Vfunc_shuffle_index__579__NrLanes)) {
                if ((4U & (IData)(vlSelf->__Vfunc_shuffle_index__579__ew))) {
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk5__DOT__idx[0U] = 0x8002000U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk5__DOT__idx[1U] = 0x400180U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk5__DOT__idx[2U] = 0x3801800aU;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk5__DOT__idx[3U] = 0U;
                    vlSelf->__Vfunc_shuffle_index__579__Vfuncout 
                        = ((0x67U >= (0x7fU & ((IData)(0xdU) 
                                               * (7U 
                                                  & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))
                            ? (0x1fffU & (((0U == (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (7U 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))
                                            ? 0U : 
                                           (vlSelf->__Vfunc_shuffle_index__579__unnamedblk5__DOT__idx[
                                            (((IData)(0xcU) 
                                              + (0x7fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (7U 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (7U 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))))))) 
                                          | (vlSelf->__Vfunc_shuffle_index__579__unnamedblk5__DOT__idx[
                                             (3U & 
                                              (((IData)(0xdU) 
                                                * (7U 
                                                   & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))) 
                                               >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (7U 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))))
                            : 0U);
                    goto __Vlabel265;
                } else if ((2U & (IData)(vlSelf->__Vfunc_shuffle_index__579__ew))) {
                    if ((1U & (IData)(vlSelf->__Vfunc_shuffle_index__579__ew))) {
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk1__DOT__idx[0U] = 0x8002000U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk1__DOT__idx[1U] = 0x400180U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk1__DOT__idx[2U] = 0x3801800aU;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk1__DOT__idx[3U] = 0U;
                        vlSelf->__Vfunc_shuffle_index__579__Vfuncout 
                            = ((0x67U >= (0x7fU & ((IData)(0xdU) 
                                                   * 
                                                   (7U 
                                                    & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))
                                ? (0x1fffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (7U 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))
                                                ? 0U
                                                : (
                                                   vlSelf->__Vfunc_shuffle_index__579__unnamedblk1__DOT__idx[
                                                   (((IData)(0xcU) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0xdU) 
                                                         * 
                                                         (7U 
                                                          & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0xdU) 
                                                        * 
                                                        (7U 
                                                         & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))))))) 
                                              | (vlSelf->__Vfunc_shuffle_index__579__unnamedblk1__DOT__idx[
                                                 (3U 
                                                  & (((IData)(0xdU) 
                                                      * 
                                                      (7U 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(0xdU) 
                                                     * 
                                                     (7U 
                                                      & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))))
                                : 0U);
                        goto __Vlabel265;
                    } else {
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk2__DOT__idx[0U] = 0x8002000U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk2__DOT__idx[1U] = 0x400180U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk2__DOT__idx[2U] = 0x3801800aU;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk2__DOT__idx[3U] = 0U;
                        vlSelf->__Vfunc_shuffle_index__579__Vfuncout 
                            = ((0x67U >= (0x7fU & ((IData)(0xdU) 
                                                   * 
                                                   (7U 
                                                    & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))
                                ? (0x1fffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (7U 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))
                                                ? 0U
                                                : (
                                                   vlSelf->__Vfunc_shuffle_index__579__unnamedblk2__DOT__idx[
                                                   (((IData)(0xcU) 
                                                     + 
                                                     (0x7fU 
                                                      & ((IData)(0xdU) 
                                                         * 
                                                         (7U 
                                                          & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0xdU) 
                                                        * 
                                                        (7U 
                                                         & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))))))) 
                                              | (vlSelf->__Vfunc_shuffle_index__579__unnamedblk2__DOT__idx[
                                                 (3U 
                                                  & (((IData)(0xdU) 
                                                      * 
                                                      (7U 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(0xdU) 
                                                     * 
                                                     (7U 
                                                      & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))))
                                : 0U);
                        goto __Vlabel265;
                    }
                } else if ((1U & (IData)(vlSelf->__Vfunc_shuffle_index__579__ew))) {
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk3__DOT__idx[0U] = 0x10002000U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk3__DOT__idx[1U] = 0x200280U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk3__DOT__idx[2U] = 0x38018006U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk3__DOT__idx[3U] = 0U;
                    vlSelf->__Vfunc_shuffle_index__579__Vfuncout 
                        = ((0x67U >= (0x7fU & ((IData)(0xdU) 
                                               * (7U 
                                                  & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))
                            ? (0x1fffU & (((0U == (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (7U 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))
                                            ? 0U : 
                                           (vlSelf->__Vfunc_shuffle_index__579__unnamedblk3__DOT__idx[
                                            (((IData)(0xcU) 
                                              + (0x7fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (7U 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (7U 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))))))) 
                                          | (vlSelf->__Vfunc_shuffle_index__579__unnamedblk3__DOT__idx[
                                             (3U & 
                                              (((IData)(0xdU) 
                                                * (7U 
                                                   & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))) 
                                               >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (7U 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))))
                            : 0U);
                    goto __Vlabel265;
                } else {
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk4__DOT__idx[0U] = 0x8008000U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk4__DOT__idx[1U] = 0x100300U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk4__DOT__idx[2U] = 0x3800c00aU;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk4__DOT__idx[3U] = 0U;
                    vlSelf->__Vfunc_shuffle_index__579__Vfuncout 
                        = ((0x67U >= (0x7fU & ((IData)(0xdU) 
                                               * (7U 
                                                  & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))
                            ? (0x1fffU & (((0U == (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (7U 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))
                                            ? 0U : 
                                           (vlSelf->__Vfunc_shuffle_index__579__unnamedblk4__DOT__idx[
                                            (((IData)(0xcU) 
                                              + (0x7fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (7U 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (7U 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))))))) 
                                          | (vlSelf->__Vfunc_shuffle_index__579__unnamedblk4__DOT__idx[
                                             (3U & 
                                              (((IData)(0xdU) 
                                                * (7U 
                                                   & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))) 
                                               >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (7U 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))))
                            : 0U);
                    goto __Vlabel265;
                }
            } else if ((2U == vlSelf->__Vfunc_shuffle_index__579__NrLanes)) {
                if ((4U & (IData)(vlSelf->__Vfunc_shuffle_index__579__ew))) {
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk10__DOT__idx[0U] = 0x8002000U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk10__DOT__idx[1U] = 0x400180U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk10__DOT__idx[2U] = 0x3801800aU;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk10__DOT__idx[3U] = 0x1200800U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk10__DOT__idx[4U] = 0xc0058028U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk10__DOT__idx[5U] = 0x3801a00U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk10__DOT__idx[6U] = 0x78U;
                    vlSelf->__Vfunc_shuffle_index__579__Vfuncout 
                        = ((0xcfU >= (0xffU & ((IData)(0xdU) 
                                               * (0xfU 
                                                  & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))
                            ? (0x1fffU & (((0U == (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (0xfU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))
                                            ? 0U : 
                                           (vlSelf->__Vfunc_shuffle_index__579__unnamedblk10__DOT__idx[
                                            (((IData)(0xcU) 
                                              + (0xffU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0xfU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (0xfU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))))))) 
                                          | (vlSelf->__Vfunc_shuffle_index__579__unnamedblk10__DOT__idx[
                                             (7U & 
                                              (((IData)(0xdU) 
                                                * (0xfU 
                                                   & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))) 
                                               >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0xfU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))))
                            : 0U);
                    goto __Vlabel265;
                } else if ((2U & (IData)(vlSelf->__Vfunc_shuffle_index__579__ew))) {
                    if ((1U & (IData)(vlSelf->__Vfunc_shuffle_index__579__ew))) {
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk6__DOT__idx[0U] = 0x8002000U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk6__DOT__idx[1U] = 0x400180U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk6__DOT__idx[2U] = 0x3801800aU;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk6__DOT__idx[3U] = 0x1200800U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk6__DOT__idx[4U] = 0xc0058028U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk6__DOT__idx[5U] = 0x3801a00U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk6__DOT__idx[6U] = 0x78U;
                        vlSelf->__Vfunc_shuffle_index__579__Vfuncout 
                            = ((0xcfU >= (0xffU & ((IData)(0xdU) 
                                                   * 
                                                   (0xfU 
                                                    & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))
                                ? (0x1fffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0xfU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))
                                                ? 0U
                                                : (
                                                   vlSelf->__Vfunc_shuffle_index__579__unnamedblk6__DOT__idx[
                                                   (((IData)(0xcU) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0xdU) 
                                                         * 
                                                         (0xfU 
                                                          & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0xdU) 
                                                        * 
                                                        (0xfU 
                                                         & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))))))) 
                                              | (vlSelf->__Vfunc_shuffle_index__579__unnamedblk6__DOT__idx[
                                                 (7U 
                                                  & (((IData)(0xdU) 
                                                      * 
                                                      (0xfU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(0xdU) 
                                                     * 
                                                     (0xfU 
                                                      & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))))
                                : 0U);
                        goto __Vlabel265;
                    } else {
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk7__DOT__idx[0U] = 0x8002000U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk7__DOT__idx[1U] = 0x800180U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk7__DOT__idx[2U] = 0x58028012U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk7__DOT__idx[3U] = 0xa00400U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk7__DOT__idx[4U] = 0xc0038018U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk7__DOT__idx[5U] = 0x3801a00U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk7__DOT__idx[6U] = 0x78U;
                        vlSelf->__Vfunc_shuffle_index__579__Vfuncout 
                            = ((0xcfU >= (0xffU & ((IData)(0xdU) 
                                                   * 
                                                   (0xfU 
                                                    & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))
                                ? (0x1fffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0xfU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))
                                                ? 0U
                                                : (
                                                   vlSelf->__Vfunc_shuffle_index__579__unnamedblk7__DOT__idx[
                                                   (((IData)(0xcU) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0xdU) 
                                                         * 
                                                         (0xfU 
                                                          & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0xdU) 
                                                        * 
                                                        (0xfU 
                                                         & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))))))) 
                                              | (vlSelf->__Vfunc_shuffle_index__579__unnamedblk7__DOT__idx[
                                                 (7U 
                                                  & (((IData)(0xdU) 
                                                      * 
                                                      (0xfU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(0xdU) 
                                                     * 
                                                     (0xfU 
                                                      & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))))
                                : 0U);
                        goto __Vlabel265;
                    }
                } else if ((1U & (IData)(vlSelf->__Vfunc_shuffle_index__579__ew))) {
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk8__DOT__idx[0U] = 0x20002000U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk8__DOT__idx[1U] = 0x400480U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk8__DOT__idx[2U] = 0x6803000aU;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk8__DOT__idx[3U] = 0x600200U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk8__DOT__idx[4U] = 0x60058028U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk8__DOT__idx[5U] = 0x3800e00U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk8__DOT__idx[6U] = 0x78U;
                    vlSelf->__Vfunc_shuffle_index__579__Vfuncout 
                        = ((0xcfU >= (0xffU & ((IData)(0xdU) 
                                               * (0xfU 
                                                  & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))
                            ? (0x1fffU & (((0U == (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (0xfU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))
                                            ? 0U : 
                                           (vlSelf->__Vfunc_shuffle_index__579__unnamedblk8__DOT__idx[
                                            (((IData)(0xcU) 
                                              + (0xffU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0xfU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (0xfU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))))))) 
                                          | (vlSelf->__Vfunc_shuffle_index__579__unnamedblk8__DOT__idx[
                                             (7U & 
                                              (((IData)(0xdU) 
                                                * (0xfU 
                                                   & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))) 
                                               >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0xfU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))))
                            : 0U);
                    goto __Vlabel265;
                } else {
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk9__DOT__idx[0U] = 0x10010000U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk9__DOT__idx[1U] = 0x200600U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk9__DOT__idx[2U] = 0x70018014U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk9__DOT__idx[3U] = 0x1200100U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk9__DOT__idx[4U] = 0x30068014U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk9__DOT__idx[5U] = 0x1c01600U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk9__DOT__idx[6U] = 0x78U;
                    vlSelf->__Vfunc_shuffle_index__579__Vfuncout 
                        = ((0xcfU >= (0xffU & ((IData)(0xdU) 
                                               * (0xfU 
                                                  & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))
                            ? (0x1fffU & (((0U == (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (0xfU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))
                                            ? 0U : 
                                           (vlSelf->__Vfunc_shuffle_index__579__unnamedblk9__DOT__idx[
                                            (((IData)(0xcU) 
                                              + (0xffU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0xfU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (0xfU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))))))) 
                                          | (vlSelf->__Vfunc_shuffle_index__579__unnamedblk9__DOT__idx[
                                             (7U & 
                                              (((IData)(0xdU) 
                                                * (0xfU 
                                                   & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))) 
                                               >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0xfU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))))
                            : 0U);
                    goto __Vlabel265;
                }
            } else if ((4U == vlSelf->__Vfunc_shuffle_index__579__NrLanes)) {
                if ((4U & (IData)(vlSelf->__Vfunc_shuffle_index__579__ew))) {
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk15__DOT__idx[0U] = 0x8002000U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk15__DOT__idx[1U] = 0x400180U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk15__DOT__idx[2U] = 0x3801800aU;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk15__DOT__idx[3U] = 0x1200800U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk15__DOT__idx[4U] = 0xc0058028U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk15__DOT__idx[5U] = 0x3801a00U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk15__DOT__idx[6U] = 0x20100078U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk15__DOT__idx[7U] = 0x9804802U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk15__DOT__idx[8U] = 0x802a0140U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk15__DOT__idx[9U] = 0x1800b805U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk15__DOT__idx[0xaU] = 0x80680320U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk15__DOT__idx[0xbU] = 0x3a01c00dU;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk15__DOT__idx[0xcU] = 0xf80780U;
                    vlSelf->__Vfunc_shuffle_index__579__Vfuncout 
                        = ((0x19fU >= (0x1ffU & ((IData)(0xdU) 
                                                 * 
                                                 (0x1fU 
                                                  & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))
                            ? (0x1fffU & (((0U == (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (0x1fU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))
                                            ? 0U : 
                                           (vlSelf->__Vfunc_shuffle_index__579__unnamedblk15__DOT__idx[
                                            (((IData)(0xcU) 
                                              + (0x1ffU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (0x1fU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))))))) 
                                          | (vlSelf->__Vfunc_shuffle_index__579__unnamedblk15__DOT__idx[
                                             (0xfU 
                                              & (((IData)(0xdU) 
                                                  * 
                                                  (0x1fU 
                                                   & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))))
                            : 0U);
                    goto __Vlabel265;
                } else if ((2U & (IData)(vlSelf->__Vfunc_shuffle_index__579__ew))) {
                    if ((1U & (IData)(vlSelf->__Vfunc_shuffle_index__579__ew))) {
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk11__DOT__idx[0U] = 0x8002000U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk11__DOT__idx[1U] = 0x400180U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk11__DOT__idx[2U] = 0x3801800aU;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk11__DOT__idx[3U] = 0x1200800U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk11__DOT__idx[4U] = 0xc0058028U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk11__DOT__idx[5U] = 0x3801a00U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk11__DOT__idx[6U] = 0x20100078U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk11__DOT__idx[7U] = 0x9804802U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk11__DOT__idx[8U] = 0x802a0140U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk11__DOT__idx[9U] = 0x1800b805U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk11__DOT__idx[0xaU] = 0x80680320U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk11__DOT__idx[0xbU] = 0x3a01c00dU;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk11__DOT__idx[0xcU] = 0xf80780U;
                        vlSelf->__Vfunc_shuffle_index__579__Vfuncout 
                            = ((0x19fU >= (0x1ffU & 
                                           ((IData)(0xdU) 
                                            * (0x1fU 
                                               & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))
                                ? (0x1fffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))
                                                ? 0U
                                                : (
                                                   vlSelf->__Vfunc_shuffle_index__579__unnamedblk11__DOT__idx[
                                                   (((IData)(0xcU) 
                                                     + 
                                                     (0x1ffU 
                                                      & ((IData)(0xdU) 
                                                         * 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0xdU) 
                                                        * 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))))))) 
                                              | (vlSelf->__Vfunc_shuffle_index__579__unnamedblk11__DOT__idx[
                                                 (0xfU 
                                                  & (((IData)(0xdU) 
                                                      * 
                                                      (0x1fU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(0xdU) 
                                                     * 
                                                     (0x1fU 
                                                      & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))))
                                : 0U);
                        goto __Vlabel265;
                    } else {
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk12__DOT__idx[0U] = 0x8002000U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk12__DOT__idx[1U] = 0x800180U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk12__DOT__idx[2U] = 0x58028012U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk12__DOT__idx[3U] = 0x2201000U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk12__DOT__idx[4U] = 0x80098048U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk12__DOT__idx[5U] = 0x6803201U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk12__DOT__idx[6U] = 0xa00400d8U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk12__DOT__idx[7U] = 0x3801800U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk12__DOT__idx[8U] = 0x801a00c0U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk12__DOT__idx[9U] = 0x14007803U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk12__DOT__idx[0xaU] = 0x805802a0U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk12__DOT__idx[0xbU] = 0x3a01c00bU;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk12__DOT__idx[0xcU] = 0xf80780U;
                        vlSelf->__Vfunc_shuffle_index__579__Vfuncout 
                            = ((0x19fU >= (0x1ffU & 
                                           ((IData)(0xdU) 
                                            * (0x1fU 
                                               & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))
                                ? (0x1fffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))
                                                ? 0U
                                                : (
                                                   vlSelf->__Vfunc_shuffle_index__579__unnamedblk12__DOT__idx[
                                                   (((IData)(0xcU) 
                                                     + 
                                                     (0x1ffU 
                                                      & ((IData)(0xdU) 
                                                         * 
                                                         (0x1fU 
                                                          & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0xdU) 
                                                        * 
                                                        (0x1fU 
                                                         & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))))))) 
                                              | (vlSelf->__Vfunc_shuffle_index__579__unnamedblk12__DOT__idx[
                                                 (0xfU 
                                                  & (((IData)(0xdU) 
                                                      * 
                                                      (0x1fU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(0xdU) 
                                                     * 
                                                     (0x1fU 
                                                      & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))))
                                : 0U);
                        goto __Vlabel265;
                    }
                } else if ((1U & (IData)(vlSelf->__Vfunc_shuffle_index__579__ew))) {
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk13__DOT__idx[0U] = 0x20002000U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk13__DOT__idx[1U] = 0x1000480U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk13__DOT__idx[2U] = 0xc8060022U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk13__DOT__idx[3U] = 0xa00400U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk13__DOT__idx[4U] = 0x40068030U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk13__DOT__idx[5U] = 0x7002a01U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk13__DOT__idx[6U] = 0x600200e8U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk13__DOT__idx[7U] = 0x5802800U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk13__DOT__idx[8U] = 0x80260120U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk13__DOT__idx[9U] = 0x600d806U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk13__DOT__idx[0xaU] = 0x803800e0U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk13__DOT__idx[0xbU] = 0x2e016007U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk13__DOT__idx[0xcU] = 0xf80780U;
                    vlSelf->__Vfunc_shuffle_index__579__Vfuncout 
                        = ((0x19fU >= (0x1ffU & ((IData)(0xdU) 
                                                 * 
                                                 (0x1fU 
                                                  & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))
                            ? (0x1fffU & (((0U == (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (0x1fU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))
                                            ? 0U : 
                                           (vlSelf->__Vfunc_shuffle_index__579__unnamedblk13__DOT__idx[
                                            (((IData)(0xcU) 
                                              + (0x1ffU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (0x1fU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))))))) 
                                          | (vlSelf->__Vfunc_shuffle_index__579__unnamedblk13__DOT__idx[
                                             (0xfU 
                                              & (((IData)(0xdU) 
                                                  * 
                                                  (0x1fU 
                                                   & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))))
                            : 0U);
                    goto __Vlabel265;
                } else {
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk14__DOT__idx[0U] = 0x40010000U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk14__DOT__idx[1U] = 0x400c00U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk14__DOT__idx[2U] = 0xe0050018U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk14__DOT__idx[3U] = 0x1400200U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk14__DOT__idx[4U] = 0x600d0048U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk14__DOT__idx[5U] = 0x5801c00U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk14__DOT__idx[6U] = 0x200100f0U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk14__DOT__idx[7U] = 0xc804401U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk14__DOT__idx[8U] = 0x401a0050U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk14__DOT__idx[9U] = 0x300e805U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk14__DOT__idx[0xaU] = 0x804c0160U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk14__DOT__idx[0xbU] = 0x1e00700dU;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk14__DOT__idx[0xcU] = 0xf805c0U;
                    vlSelf->__Vfunc_shuffle_index__579__Vfuncout 
                        = ((0x19fU >= (0x1ffU & ((IData)(0xdU) 
                                                 * 
                                                 (0x1fU 
                                                  & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))
                            ? (0x1fffU & (((0U == (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (0x1fU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))
                                            ? 0U : 
                                           (vlSelf->__Vfunc_shuffle_index__579__unnamedblk14__DOT__idx[
                                            (((IData)(0xcU) 
                                              + (0x1ffU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (0x1fU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))))))) 
                                          | (vlSelf->__Vfunc_shuffle_index__579__unnamedblk14__DOT__idx[
                                             (0xfU 
                                              & (((IData)(0xdU) 
                                                  * 
                                                  (0x1fU 
                                                   & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0x1fU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))))
                            : 0U);
                    goto __Vlabel265;
                }
            } else if ((8U == vlSelf->__Vfunc_shuffle_index__579__NrLanes)) {
                if ((4U & (IData)(vlSelf->__Vfunc_shuffle_index__579__ew))) {
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk20__DOT__idx[0U] = 0x8002000U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk20__DOT__idx[1U] = 0x400180U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk20__DOT__idx[2U] = 0x3801800aU;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk20__DOT__idx[3U] = 0x1200800U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk20__DOT__idx[4U] = 0xc0058028U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk20__DOT__idx[5U] = 0x3801a00U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk20__DOT__idx[6U] = 0x20100078U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk20__DOT__idx[7U] = 0x9804802U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk20__DOT__idx[8U] = 0x802a0140U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk20__DOT__idx[9U] = 0x1800b805U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk20__DOT__idx[0xaU] = 0x80680320U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk20__DOT__idx[0xbU] = 0x3a01c00dU;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk20__DOT__idx[0xcU] = 0xf80780U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk20__DOT__idx[0xdU] = 0x88042020U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk20__DOT__idx[0xeU] = 0x2401180U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk20__DOT__idx[0xfU] = 0x3809804aU;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk20__DOT__idx[0x10U] = 0x5202801U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk20__DOT__idx[0x11U] = 0xc01580a8U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk20__DOT__idx[0x12U] = 0xb805a02U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk20__DOT__idx[0x13U] = 0x20300178U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk20__DOT__idx[0x14U] = 0x1980c806U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk20__DOT__idx[0x15U] = 0x806a0340U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk20__DOT__idx[0x16U] = 0x3801b80dU;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk20__DOT__idx[0x17U] = 0x80e80720U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk20__DOT__idx[0x18U] = 0x7a03c01dU;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk20__DOT__idx[0x19U] = 0x1f80f80U;
                    vlSelf->__Vfunc_shuffle_index__579__Vfuncout 
                        = ((0x33fU >= (0x3ffU & ((IData)(0xdU) 
                                                 * 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))
                            ? (0x1fffU & (((0U == (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (0x3fU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))
                                            ? 0U : 
                                           (vlSelf->__Vfunc_shuffle_index__579__unnamedblk20__DOT__idx[
                                            (((IData)(0xcU) 
                                              + (0x3ffU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0x3fU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (0x3fU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))))))) 
                                          | (vlSelf->__Vfunc_shuffle_index__579__unnamedblk20__DOT__idx[
                                             (0x1fU 
                                              & (((IData)(0xdU) 
                                                  * 
                                                  (0x3fU 
                                                   & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0x3fU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))))
                            : 0U);
                    goto __Vlabel265;
                } else if ((2U & (IData)(vlSelf->__Vfunc_shuffle_index__579__ew))) {
                    if ((1U & (IData)(vlSelf->__Vfunc_shuffle_index__579__ew))) {
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk16__DOT__idx[0U] = 0x8002000U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk16__DOT__idx[1U] = 0x400180U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk16__DOT__idx[2U] = 0x3801800aU;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk16__DOT__idx[3U] = 0x1200800U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk16__DOT__idx[4U] = 0xc0058028U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk16__DOT__idx[5U] = 0x3801a00U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk16__DOT__idx[6U] = 0x20100078U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk16__DOT__idx[7U] = 0x9804802U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk16__DOT__idx[8U] = 0x802a0140U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk16__DOT__idx[9U] = 0x1800b805U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk16__DOT__idx[0xaU] = 0x80680320U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk16__DOT__idx[0xbU] = 0x3a01c00dU;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk16__DOT__idx[0xcU] = 0xf80780U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk16__DOT__idx[0xdU] = 0x88042020U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk16__DOT__idx[0xeU] = 0x2401180U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk16__DOT__idx[0xfU] = 0x3809804aU;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk16__DOT__idx[0x10U] = 0x5202801U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk16__DOT__idx[0x11U] = 0xc01580a8U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk16__DOT__idx[0x12U] = 0xb805a02U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk16__DOT__idx[0x13U] = 0x20300178U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk16__DOT__idx[0x14U] = 0x1980c806U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk16__DOT__idx[0x15U] = 0x806a0340U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk16__DOT__idx[0x16U] = 0x3801b80dU;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk16__DOT__idx[0x17U] = 0x80e80720U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk16__DOT__idx[0x18U] = 0x7a03c01dU;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk16__DOT__idx[0x19U] = 0x1f80f80U;
                        vlSelf->__Vfunc_shuffle_index__579__Vfuncout 
                            = ((0x33fU >= (0x3ffU & 
                                           ((IData)(0xdU) 
                                            * (0x3fU 
                                               & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))
                                ? (0x1fffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0x3fU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))
                                                ? 0U
                                                : (
                                                   vlSelf->__Vfunc_shuffle_index__579__unnamedblk16__DOT__idx[
                                                   (((IData)(0xcU) 
                                                     + 
                                                     (0x3ffU 
                                                      & ((IData)(0xdU) 
                                                         * 
                                                         (0x3fU 
                                                          & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0xdU) 
                                                        * 
                                                        (0x3fU 
                                                         & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))))))) 
                                              | (vlSelf->__Vfunc_shuffle_index__579__unnamedblk16__DOT__idx[
                                                 (0x1fU 
                                                  & (((IData)(0xdU) 
                                                      * 
                                                      (0x3fU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(0xdU) 
                                                     * 
                                                     (0x3fU 
                                                      & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))))
                                : 0U);
                        goto __Vlabel265;
                    } else {
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk17__DOT__idx[0U] = 0x8002000U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk17__DOT__idx[1U] = 0x800180U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk17__DOT__idx[2U] = 0x58028012U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk17__DOT__idx[3U] = 0x2201000U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk17__DOT__idx[4U] = 0x80098048U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk17__DOT__idx[5U] = 0x6803201U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk17__DOT__idx[6U] = 0x202000d8U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk17__DOT__idx[7U] = 0x11808804U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk17__DOT__idx[8U] = 0x80520280U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk17__DOT__idx[9U] = 0x3001580aU;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk17__DOT__idx[0xaU] = 0x80c80620U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk17__DOT__idx[0xbU] = 0x72038019U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk17__DOT__idx[0xcU] = 0x1d80e80U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk17__DOT__idx[0xdU] = 0x1800a004U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk17__DOT__idx[0xeU] = 0xc00380U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk17__DOT__idx[0xfU] = 0x7803801aU;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk17__DOT__idx[0x10U] = 0x2a01400U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk17__DOT__idx[0x11U] = 0xc00b8058U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk17__DOT__idx[0x12U] = 0x7803a01U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk17__DOT__idx[0x13U] = 0xa02400f8U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk17__DOT__idx[0x14U] = 0x13809804U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk17__DOT__idx[0x15U] = 0x805a02c0U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk17__DOT__idx[0x16U] = 0x3401780bU;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk17__DOT__idx[0x17U] = 0x80d806a0U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk17__DOT__idx[0x18U] = 0x7a03c01bU;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk17__DOT__idx[0x19U] = 0x1f80f80U;
                        vlSelf->__Vfunc_shuffle_index__579__Vfuncout 
                            = ((0x33fU >= (0x3ffU & 
                                           ((IData)(0xdU) 
                                            * (0x3fU 
                                               & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))
                                ? (0x1fffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0x3fU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))
                                                ? 0U
                                                : (
                                                   vlSelf->__Vfunc_shuffle_index__579__unnamedblk17__DOT__idx[
                                                   (((IData)(0xcU) 
                                                     + 
                                                     (0x3ffU 
                                                      & ((IData)(0xdU) 
                                                         * 
                                                         (0x3fU 
                                                          & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0xdU) 
                                                        * 
                                                        (0x3fU 
                                                         & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))))))) 
                                              | (vlSelf->__Vfunc_shuffle_index__579__unnamedblk17__DOT__idx[
                                                 (0x1fU 
                                                  & (((IData)(0xdU) 
                                                      * 
                                                      (0x3fU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(0xdU) 
                                                     * 
                                                     (0x3fU 
                                                      & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))))
                                : 0U);
                        goto __Vlabel265;
                    }
                } else if ((1U & (IData)(vlSelf->__Vfunc_shuffle_index__579__ew))) {
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk18__DOT__idx[0U] = 0x20002000U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk18__DOT__idx[1U] = 0x1000480U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk18__DOT__idx[2U] = 0xc8060022U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk18__DOT__idx[3U] = 0x4202000U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk18__DOT__idx[4U] = 0x1480a0U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk18__DOT__idx[5U] = 0xe006203U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk18__DOT__idx[6U] = 0xa00401c8U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk18__DOT__idx[7U] = 0x6803000U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk18__DOT__idx[8U] = 0x2a0140U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk18__DOT__idx[9U] = 0x2400e807U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk18__DOT__idx[0xaU] = 0x80b004a0U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk18__DOT__idx[0xbU] = 0x6a034016U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk18__DOT__idx[0xcU] = 0x1e80f00U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk18__DOT__idx[0xdU] = 0x28006002U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk18__DOT__idx[0xeU] = 0x1200580U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk18__DOT__idx[0xfU] = 0xd8068026U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk18__DOT__idx[0x10U] = 0x4602200U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk18__DOT__idx[0x11U] = 0x201580a8U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk18__DOT__idx[0x12U] = 0xe806603U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk18__DOT__idx[0x13U] = 0xe00601d8U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk18__DOT__idx[0x14U] = 0x7803800U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk18__DOT__idx[0x15U] = 0x802e0160U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk18__DOT__idx[0x16U] = 0x2600f807U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk18__DOT__idx[0x17U] = 0x80b804e0U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk18__DOT__idx[0x18U] = 0x6e036017U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk18__DOT__idx[0x19U] = 0x1f80f80U;
                    vlSelf->__Vfunc_shuffle_index__579__Vfuncout 
                        = ((0x33fU >= (0x3ffU & ((IData)(0xdU) 
                                                 * 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))
                            ? (0x1fffU & (((0U == (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (0x3fU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))
                                            ? 0U : 
                                           (vlSelf->__Vfunc_shuffle_index__579__unnamedblk18__DOT__idx[
                                            (((IData)(0xcU) 
                                              + (0x3ffU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0x3fU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (0x3fU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))))))) 
                                          | (vlSelf->__Vfunc_shuffle_index__579__unnamedblk18__DOT__idx[
                                             (0x1fU 
                                              & (((IData)(0xdU) 
                                                  * 
                                                  (0x3fU 
                                                   & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0x3fU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))))
                            : 0U);
                    goto __Vlabel265;
                } else {
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk19__DOT__idx[0U] = 0x40010000U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk19__DOT__idx[1U] = 0x2000c00U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk19__DOT__idx[2U] = 0xc00c0050U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk19__DOT__idx[3U] = 0x1800401U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk19__DOT__idx[4U] = 0x400e0050U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk19__DOT__idx[5U] = 0xd005802U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk19__DOT__idx[6U] = 0x400201e0U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk19__DOT__idx[7U] = 0xd004801U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk19__DOT__idx[8U] = 0x80540220U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk19__DOT__idx[9U] = 0x601d00cU;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk19__DOT__idx[0xaU] = 0x5801c0U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk19__DOT__idx[0xbU] = 0x5c02600fU;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk19__DOT__idx[0xcU] = 0x1f00d80U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk19__DOT__idx[0xdU] = 0x44012001U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk19__DOT__idx[0xeU] = 0x2100c80U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk19__DOT__idx[0xfU] = 0xc80c4052U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk19__DOT__idx[0x10U] = 0x1a00501U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk19__DOT__idx[0x11U] = 0x500e8054U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk19__DOT__idx[0x12U] = 0xd405a02U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk19__DOT__idx[0x13U] = 0x600301e8U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk19__DOT__idx[0x14U] = 0xd804c01U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk19__DOT__idx[0x15U] = 0xc0560230U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk19__DOT__idx[0x16U] = 0x701d80cU;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk19__DOT__idx[0x17U] = 0x805c01e0U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk19__DOT__idx[0x18U] = 0x5e02700fU;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk19__DOT__idx[0x19U] = 0x1f80dc0U;
                    vlSelf->__Vfunc_shuffle_index__579__Vfuncout 
                        = ((0x33fU >= (0x3ffU & ((IData)(0xdU) 
                                                 * 
                                                 (0x3fU 
                                                  & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))
                            ? (0x1fffU & (((0U == (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (0x3fU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))
                                            ? 0U : 
                                           (vlSelf->__Vfunc_shuffle_index__579__unnamedblk19__DOT__idx[
                                            (((IData)(0xcU) 
                                              + (0x3ffU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0x3fU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (0x3fU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))))))) 
                                          | (vlSelf->__Vfunc_shuffle_index__579__unnamedblk19__DOT__idx[
                                             (0x1fU 
                                              & (((IData)(0xdU) 
                                                  * 
                                                  (0x3fU 
                                                   & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0x3fU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))))
                            : 0U);
                    goto __Vlabel265;
                }
            } else if (VL_LIKELY((0x10U == vlSelf->__Vfunc_shuffle_index__579__NrLanes))) {
                if ((4U & (IData)(vlSelf->__Vfunc_shuffle_index__579__ew))) {
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk25__DOT__idx[0U] = 0x8002000U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk25__DOT__idx[1U] = 0x400180U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk25__DOT__idx[2U] = 0x3801800aU;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk25__DOT__idx[3U] = 0x1200800U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk25__DOT__idx[4U] = 0xc0058028U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk25__DOT__idx[5U] = 0x3801a00U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk25__DOT__idx[6U] = 0x20100078U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk25__DOT__idx[7U] = 0x9804802U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk25__DOT__idx[8U] = 0x802a0140U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk25__DOT__idx[9U] = 0x1800b805U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk25__DOT__idx[0xaU] = 0x80680320U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk25__DOT__idx[0xbU] = 0x3a01c00dU;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk25__DOT__idx[0xcU] = 0xf80780U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk25__DOT__idx[0xdU] = 0x88042020U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk25__DOT__idx[0xeU] = 0x2401180U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk25__DOT__idx[0xfU] = 0x3809804aU;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk25__DOT__idx[0x10U] = 0x5202801U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk25__DOT__idx[0x11U] = 0xc01580a8U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk25__DOT__idx[0x12U] = 0xb805a02U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk25__DOT__idx[0x13U] = 0x20300178U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk25__DOT__idx[0x14U] = 0x1980c806U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk25__DOT__idx[0x15U] = 0x806a0340U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk25__DOT__idx[0x16U] = 0x3801b80dU;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk25__DOT__idx[0x17U] = 0x80e80720U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk25__DOT__idx[0x18U] = 0x7a03c01dU;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk25__DOT__idx[0x19U] = 0x1f80f80U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk25__DOT__idx[0x1aU] = 0x8082040U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk25__DOT__idx[0x1bU] = 0x4402181U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk25__DOT__idx[0x1cU] = 0x3811808aU;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk25__DOT__idx[0x1dU] = 0x9204802U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk25__DOT__idx[0x1eU] = 0xc0258128U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk25__DOT__idx[0x1fU] = 0x13809a04U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk25__DOT__idx[0x20U] = 0x20500278U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk25__DOT__idx[0x21U] = 0x2981480aU;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk25__DOT__idx[0x22U] = 0x80aa0540U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk25__DOT__idx[0x23U] = 0x5802b815U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk25__DOT__idx[0x24U] = 0x81680b20U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk25__DOT__idx[0x25U] = 0xba05c02dU;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk25__DOT__idx[0x26U] = 0x2f81780U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk25__DOT__idx[0x27U] = 0x880c2060U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk25__DOT__idx[0x28U] = 0x6403181U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk25__DOT__idx[0x29U] = 0x381980caU;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk25__DOT__idx[0x2aU] = 0xd206803U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk25__DOT__idx[0x2bU] = 0xc03581a8U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk25__DOT__idx[0x2cU] = 0x1b80da06U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk25__DOT__idx[0x2dU] = 0x20700378U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk25__DOT__idx[0x2eU] = 0x3981c80eU;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk25__DOT__idx[0x2fU] = 0x80ea0740U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk25__DOT__idx[0x30U] = 0x7803b81dU;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk25__DOT__idx[0x31U] = 0x81e80f20U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk25__DOT__idx[0x32U] = 0xfa07c03dU;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk25__DOT__idx[0x33U] = 0x3f81f80U;
                    vlSelf->__Vfunc_shuffle_index__579__Vfuncout 
                        = ((0x67fU >= (0x7ffU & ((IData)(0xdU) 
                                                 * 
                                                 (0x7fU 
                                                  & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))
                            ? (0x1fffU & (((0U == (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (0x7fU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))
                                            ? 0U : 
                                           (vlSelf->__Vfunc_shuffle_index__579__unnamedblk25__DOT__idx[
                                            (((IData)(0xcU) 
                                              + (0x7ffU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0x7fU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (0x7fU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))))))) 
                                          | (vlSelf->__Vfunc_shuffle_index__579__unnamedblk25__DOT__idx[
                                             (0x3fU 
                                              & (((IData)(0xdU) 
                                                  * 
                                                  (0x7fU 
                                                   & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0x7fU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))))
                            : 0U);
                    goto __Vlabel265;
                } else if ((2U & (IData)(vlSelf->__Vfunc_shuffle_index__579__ew))) {
                    if ((1U & (IData)(vlSelf->__Vfunc_shuffle_index__579__ew))) {
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk21__DOT__idx[0U] = 0x8002000U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk21__DOT__idx[1U] = 0x400180U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk21__DOT__idx[2U] = 0x3801800aU;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk21__DOT__idx[3U] = 0x1200800U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk21__DOT__idx[4U] = 0xc0058028U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk21__DOT__idx[5U] = 0x3801a00U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk21__DOT__idx[6U] = 0x20100078U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk21__DOT__idx[7U] = 0x9804802U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk21__DOT__idx[8U] = 0x802a0140U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk21__DOT__idx[9U] = 0x1800b805U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk21__DOT__idx[0xaU] = 0x80680320U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk21__DOT__idx[0xbU] = 0x3a01c00dU;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk21__DOT__idx[0xcU] = 0xf80780U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk21__DOT__idx[0xdU] = 0x88042020U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk21__DOT__idx[0xeU] = 0x2401180U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk21__DOT__idx[0xfU] = 0x3809804aU;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk21__DOT__idx[0x10U] = 0x5202801U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk21__DOT__idx[0x11U] = 0xc01580a8U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk21__DOT__idx[0x12U] = 0xb805a02U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk21__DOT__idx[0x13U] = 0x20300178U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk21__DOT__idx[0x14U] = 0x1980c806U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk21__DOT__idx[0x15U] = 0x806a0340U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk21__DOT__idx[0x16U] = 0x3801b80dU;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk21__DOT__idx[0x17U] = 0x80e80720U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk21__DOT__idx[0x18U] = 0x7a03c01dU;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk21__DOT__idx[0x19U] = 0x1f80f80U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk21__DOT__idx[0x1aU] = 0x8082040U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk21__DOT__idx[0x1bU] = 0x4402181U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk21__DOT__idx[0x1cU] = 0x3811808aU;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk21__DOT__idx[0x1dU] = 0x9204802U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk21__DOT__idx[0x1eU] = 0xc0258128U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk21__DOT__idx[0x1fU] = 0x13809a04U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk21__DOT__idx[0x20U] = 0x20500278U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk21__DOT__idx[0x21U] = 0x2981480aU;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk21__DOT__idx[0x22U] = 0x80aa0540U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk21__DOT__idx[0x23U] = 0x5802b815U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk21__DOT__idx[0x24U] = 0x81680b20U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk21__DOT__idx[0x25U] = 0xba05c02dU;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk21__DOT__idx[0x26U] = 0x2f81780U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk21__DOT__idx[0x27U] = 0x880c2060U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk21__DOT__idx[0x28U] = 0x6403181U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk21__DOT__idx[0x29U] = 0x381980caU;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk21__DOT__idx[0x2aU] = 0xd206803U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk21__DOT__idx[0x2bU] = 0xc03581a8U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk21__DOT__idx[0x2cU] = 0x1b80da06U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk21__DOT__idx[0x2dU] = 0x20700378U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk21__DOT__idx[0x2eU] = 0x3981c80eU;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk21__DOT__idx[0x2fU] = 0x80ea0740U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk21__DOT__idx[0x30U] = 0x7803b81dU;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk21__DOT__idx[0x31U] = 0x81e80f20U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk21__DOT__idx[0x32U] = 0xfa07c03dU;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk21__DOT__idx[0x33U] = 0x3f81f80U;
                        vlSelf->__Vfunc_shuffle_index__579__Vfuncout 
                            = ((0x67fU >= (0x7ffU & 
                                           ((IData)(0xdU) 
                                            * (0x7fU 
                                               & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))
                                ? (0x1fffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0x7fU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))
                                                ? 0U
                                                : (
                                                   vlSelf->__Vfunc_shuffle_index__579__unnamedblk21__DOT__idx[
                                                   (((IData)(0xcU) 
                                                     + 
                                                     (0x7ffU 
                                                      & ((IData)(0xdU) 
                                                         * 
                                                         (0x7fU 
                                                          & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0xdU) 
                                                        * 
                                                        (0x7fU 
                                                         & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))))))) 
                                              | (vlSelf->__Vfunc_shuffle_index__579__unnamedblk21__DOT__idx[
                                                 (0x3fU 
                                                  & (((IData)(0xdU) 
                                                      * 
                                                      (0x7fU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(0xdU) 
                                                     * 
                                                     (0x7fU 
                                                      & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))))
                                : 0U);
                        goto __Vlabel265;
                    } else {
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk22__DOT__idx[0U] = 0x8002000U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk22__DOT__idx[1U] = 0x800180U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk22__DOT__idx[2U] = 0x58028012U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk22__DOT__idx[3U] = 0x2201000U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk22__DOT__idx[4U] = 0x80098048U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk22__DOT__idx[5U] = 0x6803201U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk22__DOT__idx[6U] = 0x202000d8U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk22__DOT__idx[7U] = 0x11808804U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk22__DOT__idx[8U] = 0x80520280U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk22__DOT__idx[9U] = 0x3001580aU;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk22__DOT__idx[0xaU] = 0x80c80620U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk22__DOT__idx[0xbU] = 0x72038019U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk22__DOT__idx[0xcU] = 0x1d80e80U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk22__DOT__idx[0xdU] = 0x8082040U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk22__DOT__idx[0xeU] = 0x4802181U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk22__DOT__idx[0xfU] = 0x58128092U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk22__DOT__idx[0x10U] = 0xa205002U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk22__DOT__idx[0x11U] = 0x80298148U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk22__DOT__idx[0x12U] = 0x1680b205U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk22__DOT__idx[0x13U] = 0x206002d8U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk22__DOT__idx[0x14U] = 0x3181880cU;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk22__DOT__idx[0x15U] = 0x80d20680U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk22__DOT__idx[0x16U] = 0x7003581aU;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk22__DOT__idx[0x17U] = 0x81c80e20U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk22__DOT__idx[0x18U] = 0xf2078039U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk22__DOT__idx[0x19U] = 0x3d81e80U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk22__DOT__idx[0x1aU] = 0x1800a004U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk22__DOT__idx[0x1bU] = 0xc00380U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk22__DOT__idx[0x1cU] = 0x7803801aU;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk22__DOT__idx[0x1dU] = 0x2a01400U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk22__DOT__idx[0x1eU] = 0xc00b8058U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk22__DOT__idx[0x1fU] = 0x7803a01U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk22__DOT__idx[0x20U] = 0xa02400f8U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk22__DOT__idx[0x21U] = 0x13809804U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk22__DOT__idx[0x22U] = 0x805a02c0U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk22__DOT__idx[0x23U] = 0x3401780bU;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk22__DOT__idx[0x24U] = 0x80d806a0U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk22__DOT__idx[0x25U] = 0x7a03c01bU;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk22__DOT__idx[0x26U] = 0x1f80f80U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk22__DOT__idx[0x27U] = 0x1808a044U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk22__DOT__idx[0x28U] = 0x4c02381U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk22__DOT__idx[0x29U] = 0x7813809aU;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk22__DOT__idx[0x2aU] = 0xaa05402U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk22__DOT__idx[0x2bU] = 0xc02b8158U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk22__DOT__idx[0x2cU] = 0x1780ba05U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk22__DOT__idx[0x2dU] = 0xa06402f8U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk22__DOT__idx[0x2eU] = 0x3381980cU;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk22__DOT__idx[0x2fU] = 0x80da06c0U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk22__DOT__idx[0x30U] = 0x7403781bU;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk22__DOT__idx[0x31U] = 0x81d80ea0U;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk22__DOT__idx[0x32U] = 0xfa07c03bU;
                        vlSelf->__Vfunc_shuffle_index__579__unnamedblk22__DOT__idx[0x33U] = 0x3f81f80U;
                        vlSelf->__Vfunc_shuffle_index__579__Vfuncout 
                            = ((0x67fU >= (0x7ffU & 
                                           ((IData)(0xdU) 
                                            * (0x7fU 
                                               & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))
                                ? (0x1fffU & (((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0x7fU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))
                                                ? 0U
                                                : (
                                                   vlSelf->__Vfunc_shuffle_index__579__unnamedblk22__DOT__idx[
                                                   (((IData)(0xcU) 
                                                     + 
                                                     (0x7ffU 
                                                      & ((IData)(0xdU) 
                                                         * 
                                                         (0x7fU 
                                                          & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(0xdU) 
                                                        * 
                                                        (0x7fU 
                                                         & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))))))) 
                                              | (vlSelf->__Vfunc_shuffle_index__579__unnamedblk22__DOT__idx[
                                                 (0x3fU 
                                                  & (((IData)(0xdU) 
                                                      * 
                                                      (0x7fU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))) 
                                                     >> 5U))] 
                                                 >> 
                                                 (0x1fU 
                                                  & ((IData)(0xdU) 
                                                     * 
                                                     (0x7fU 
                                                      & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))))
                                : 0U);
                        goto __Vlabel265;
                    }
                } else if ((1U & (IData)(vlSelf->__Vfunc_shuffle_index__579__ew))) {
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk23__DOT__idx[0U] = 0x20002000U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk23__DOT__idx[1U] = 0x1000480U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk23__DOT__idx[2U] = 0xc8060022U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk23__DOT__idx[3U] = 0x4202000U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk23__DOT__idx[4U] = 0x1480a0U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk23__DOT__idx[5U] = 0xe006203U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk23__DOT__idx[6U] = 0x204001c8U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk23__DOT__idx[7U] = 0x24812008U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk23__DOT__idx[8U] = 0xa20500U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk23__DOT__idx[9U] = 0x6002c816U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk23__DOT__idx[0xaU] = 0x81a00c20U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk23__DOT__idx[0xbU] = 0xe2070034U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk23__DOT__idx[0xcU] = 0x3c81e00U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk23__DOT__idx[0xdU] = 0x3000a004U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk23__DOT__idx[0xeU] = 0x1400680U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk23__DOT__idx[0xfU] = 0xe807002aU;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk23__DOT__idx[0x10U] = 0x4a02400U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk23__DOT__idx[0x11U] = 0x401680b0U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk23__DOT__idx[0x12U] = 0xf006a03U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk23__DOT__idx[0x13U] = 0xa04401e8U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk23__DOT__idx[0x14U] = 0x26813008U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk23__DOT__idx[0x15U] = 0xaa0540U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk23__DOT__idx[0x16U] = 0x6402e817U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk23__DOT__idx[0x17U] = 0x81b00ca0U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk23__DOT__idx[0x18U] = 0xea074036U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk23__DOT__idx[0x19U] = 0x3e81f00U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk23__DOT__idx[0x1aU] = 0x28006002U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk23__DOT__idx[0x1bU] = 0x1200580U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk23__DOT__idx[0x1cU] = 0xd8068026U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk23__DOT__idx[0x1dU] = 0x4602200U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk23__DOT__idx[0x1eU] = 0x201580a8U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk23__DOT__idx[0x1fU] = 0xe806603U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk23__DOT__idx[0x20U] = 0x604201d8U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk23__DOT__idx[0x21U] = 0x25812808U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk23__DOT__idx[0x22U] = 0x80a60520U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk23__DOT__idx[0x23U] = 0x6202d816U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk23__DOT__idx[0x24U] = 0x81a80c60U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk23__DOT__idx[0x25U] = 0xe6072035U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk23__DOT__idx[0x26U] = 0x3d81e80U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk23__DOT__idx[0x27U] = 0x3800e006U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk23__DOT__idx[0x28U] = 0x1600780U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk23__DOT__idx[0x29U] = 0xf807802eU;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk23__DOT__idx[0x2aU] = 0x4e02600U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk23__DOT__idx[0x2bU] = 0x601780b8U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk23__DOT__idx[0x2cU] = 0xf806e03U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk23__DOT__idx[0x2dU] = 0xe04601f8U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk23__DOT__idx[0x2eU] = 0x27813808U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk23__DOT__idx[0x2fU] = 0x80ae0560U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk23__DOT__idx[0x30U] = 0x6602f817U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk23__DOT__idx[0x31U] = 0x81b80ce0U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk23__DOT__idx[0x32U] = 0xee076037U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk23__DOT__idx[0x33U] = 0x3f81f80U;
                    vlSelf->__Vfunc_shuffle_index__579__Vfuncout 
                        = ((0x67fU >= (0x7ffU & ((IData)(0xdU) 
                                                 * 
                                                 (0x7fU 
                                                  & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))
                            ? (0x1fffU & (((0U == (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (0x7fU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))
                                            ? 0U : 
                                           (vlSelf->__Vfunc_shuffle_index__579__unnamedblk23__DOT__idx[
                                            (((IData)(0xcU) 
                                              + (0x7ffU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0x7fU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (0x7fU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))))))) 
                                          | (vlSelf->__Vfunc_shuffle_index__579__unnamedblk23__DOT__idx[
                                             (0x3fU 
                                              & (((IData)(0xdU) 
                                                  * 
                                                  (0x7fU 
                                                   & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0x7fU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))))
                            : 0U);
                    goto __Vlabel265;
                } else {
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk24__DOT__idx[0U] = 0x40010000U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk24__DOT__idx[1U] = 0x2000c00U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk24__DOT__idx[2U] = 0xc00c0050U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk24__DOT__idx[3U] = 0x9004001U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk24__DOT__idx[4U] = 0x2c0140U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk24__DOT__idx[5U] = 0x1c00d006U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk24__DOT__idx[6U] = 0x800403c0U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk24__DOT__idx[7U] = 0xe005001U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk24__DOT__idx[8U] = 0x580240U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk24__DOT__idx[9U] = 0x4401e00dU;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk24__DOT__idx[0xaU] = 0x1500980U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk24__DOT__idx[0xbU] = 0xd806402eU;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk24__DOT__idx[0xcU] = 0x3e01d00U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk24__DOT__idx[0xdU] = 0x48014002U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk24__DOT__idx[0xeU] = 0x2200d00U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk24__DOT__idx[0xfU] = 0xd00c8054U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk24__DOT__idx[0x10U] = 0x9404201U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk24__DOT__idx[0x11U] = 0x202d0148U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk24__DOT__idx[0x12U] = 0x1c80d406U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk24__DOT__idx[0x13U] = 0xc00603d0U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk24__DOT__idx[0x14U] = 0xf005801U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk24__DOT__idx[0x15U] = 0x805c0260U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk24__DOT__idx[0x16U] = 0x4601f00dU;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk24__DOT__idx[0x17U] = 0x15809c0U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk24__DOT__idx[0x18U] = 0xdc06602fU;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk24__DOT__idx[0x19U] = 0x3f01d80U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk24__DOT__idx[0x1aU] = 0x44012001U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk24__DOT__idx[0x1bU] = 0x2100c80U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk24__DOT__idx[0x1cU] = 0xc80c4052U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk24__DOT__idx[0x1dU] = 0x9204101U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk24__DOT__idx[0x1eU] = 0x102c8144U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk24__DOT__idx[0x1fU] = 0x1c40d206U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk24__DOT__idx[0x20U] = 0xa00503c8U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk24__DOT__idx[0x21U] = 0xe805401U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk24__DOT__idx[0x22U] = 0x405a0250U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk24__DOT__idx[0x23U] = 0x4501e80dU;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk24__DOT__idx[0x24U] = 0x815409a0U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk24__DOT__idx[0x25U] = 0xda06502eU;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk24__DOT__idx[0x26U] = 0x3e81d40U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk24__DOT__idx[0x27U] = 0x4c016003U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk24__DOT__idx[0x28U] = 0x2300d80U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk24__DOT__idx[0x29U] = 0xd80cc056U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk24__DOT__idx[0x2aU] = 0x9604301U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk24__DOT__idx[0x2bU] = 0x302d814cU;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk24__DOT__idx[0x2cU] = 0x1cc0d606U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk24__DOT__idx[0x2dU] = 0xe00703d8U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk24__DOT__idx[0x2eU] = 0xf805c01U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk24__DOT__idx[0x2fU] = 0xc05e0270U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk24__DOT__idx[0x30U] = 0x4701f80dU;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk24__DOT__idx[0x31U] = 0x815c09e0U;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk24__DOT__idx[0x32U] = 0xde06702fU;
                    vlSelf->__Vfunc_shuffle_index__579__unnamedblk24__DOT__idx[0x33U] = 0x3f81dc0U;
                    vlSelf->__Vfunc_shuffle_index__579__Vfuncout 
                        = ((0x67fU >= (0x7ffU & ((IData)(0xdU) 
                                                 * 
                                                 (0x7fU 
                                                  & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))
                            ? (0x1fffU & (((0U == (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (0x7fU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))
                                            ? 0U : 
                                           (vlSelf->__Vfunc_shuffle_index__579__unnamedblk24__DOT__idx[
                                            (((IData)(0xcU) 
                                              + (0x7ffU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0x7fU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(0xdU) 
                                                      * 
                                                      (0x7fU 
                                                       & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))))))) 
                                          | (vlSelf->__Vfunc_shuffle_index__579__unnamedblk24__DOT__idx[
                                             (0x3fU 
                                              & (((IData)(0xdU) 
                                                  * 
                                                  (0x7fU 
                                                   & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx))) 
                                                 >> 5U))] 
                                             >> (0x1fU 
                                                 & ((IData)(0xdU) 
                                                    * 
                                                    (0x7fU 
                                                     & (IData)(vlSelf->__Vfunc_shuffle_index__579__byte_idx)))))))
                            : 0U);
                    goto __Vlabel265;
                }
            } else {
                VL_WRITEF("[%0t] %%Error: ara_pkg.sv:897: Assertion failed in %Nara_pkg.shuffle_index: Error. Supported number of lanes are 1, 2, 4, 8, 16.\n",
                          64,VL_TIME_UNITED_Q(1),-12,
                          vlSymsp->name());
                VL_STOP_MT("/home/yongfu/proj/score/tools/araxl/hardware/include/ara_pkg.sv", 897, "");
            }
            __Vlabel265: ;
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addr_generation__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b_shuffled 
            = vlSelf->__Vfunc_shuffle_index__579__Vfuncout;
        VL_ASSIGNSEL_WI(256,8,(0xffU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addr_generation__DOT__unnamedblk1__DOT__b 
                                        << 3U)), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__deshuffled_word, 
                        (0xffU & (((0U == (0x1fU & 
                                           ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addr_generation__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b_shuffled) 
                                            << 3U)))
                                    ? 0U : (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__shuffled_word[
                                            (((IData)(7U) 
                                              + (0xffU 
                                                 & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addr_generation__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b_shuffled) 
                                                    << 3U))) 
                                             >> 5U)] 
                                            << ((IData)(0x20U) 
                                                - (0x1fU 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addr_generation__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b_shuffled) 
                                                      << 3U))))) 
                                  | (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__shuffled_word[
                                     (7U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addr_generation__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b_shuffled) 
                                            >> 2U))] 
                                     >> (0x1fU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addr_generation__DOT__unnamedblk1__DOT__unnamedblk2__DOT__b_shuffled) 
                                                  << 3U))))));
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addr_generation__DOT__unnamedblk1__DOT__b 
            = ((IData)(1U) + ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addr_generation__DOT__unnamedblk1__DOT__b);
    }
    if ((0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q))) {
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__deshuffled_word[
                                (((IData)(0x3fU) + 
                                  (0xffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                            << 6U))) 
                                 >> 5U)])) << ((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                                    << 6U)))
                                                ? 0x20U
                                                : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                                       << 6U))))) 
               | (((0U == (0x1fU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                    << 6U))) ? 0ULL
                    : ((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__deshuffled_word[
                                       (((IData)(0x1fU) 
                                         + (0xffU & 
                                            ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                             << 6U))) 
                                        >> 5U)])) << 
                       ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                                   << 6U))))) 
                  | ((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__deshuffled_word[
                                     (6U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                            << 1U))])) 
                     >> (0x1fU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                  << 6U)))));
    }
    if ((1U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q))) {
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__deshuffled_word[
                                (((IData)(0x3fU) + 
                                  (0xffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                            << 6U))) 
                                 >> 5U)])) << ((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                                    << 6U)))
                                                ? 0x20U
                                                : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                                       << 6U))))) 
               | (((0U == (0x1fU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                    << 6U))) ? 0ULL
                    : ((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__deshuffled_word[
                                       (((IData)(0x1fU) 
                                         + (0xffU & 
                                            ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                             << 6U))) 
                                        >> 5U)])) << 
                       ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                                   << 6U))))) 
                  | ((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__deshuffled_word[
                                     (6U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                            << 1U))])) 
                     >> (0x1fU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                  << 6U)))));
    }
    if ((2U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q))) {
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__deshuffled_word[
                                (((IData)(0x3fU) + 
                                  (0xffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                            << 6U))) 
                                 >> 5U)])) << ((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                                    << 6U)))
                                                ? 0x20U
                                                : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                                       << 6U))))) 
               | (((0U == (0x1fU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                    << 6U))) ? 0ULL
                    : ((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__deshuffled_word[
                                       (((IData)(0x1fU) 
                                         + (0xffU & 
                                            ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                             << 6U))) 
                                        >> 5U)])) << 
                       ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                                   << 6U))))) 
                  | ((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__deshuffled_word[
                                     (6U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                            << 1U))])) 
                     >> (0x1fU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                  << 6U)))));
    }
    if ((3U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q))) {
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__deshuffled_word[
                                (((IData)(0x3fU) + 
                                  (0xffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                            << 6U))) 
                                 >> 5U)])) << ((0U 
                                                == 
                                                (0x1fU 
                                                 & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                                    << 6U)))
                                                ? 0x20U
                                                : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                                       << 6U))))) 
               | (((0U == (0x1fU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                    << 6U))) ? 0ULL
                    : ((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__deshuffled_word[
                                       (((IData)(0x1fU) 
                                         + (0xffU & 
                                            ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                             << 6U))) 
                                        >> 5U)])) << 
                       ((IData)(0x20U) - (0x1fU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                                   << 6U))))) 
                  | ((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__deshuffled_word[
                                     (6U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                            << 1U))])) 
                     >> (0x1fU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q) 
                                  << 6U)))));
    }
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr 
        = ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word;
    if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__state_q))) {
        if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__state_q))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__addrgen_ack = 0U;
            if (((0x81U == (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[8U] 
                                     >> 0xeU))) | (0x84U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[8U] 
                                                       >> 0xeU))))) {
                if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__idx_completed_sync) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__addrgen_ack = 1U;
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addrgen_req_valid = 0U;
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__state_d = 0U;
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_d = 0U;
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_d = 0U;
                    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_op_error_q) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__addrgen_error = 1U;
                    }
                }
            } else if (((0x80U == (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[8U] 
                                            >> 0xeU))) 
                        | (0x83U == (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[8U] 
                                              >> 0xeU))))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addrgen_req_valid = 0U;
                if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__idx_completed_sync) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__addrgen_ack = 1U;
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__state_d = 0U;
                }
            }
        } else {
            vlSelf->__Vfunc_is_load__580__op = (0xffU 
                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[8U] 
                                                   >> 0xeU));
            vlSelf->__Vfunc_is_load__580__Vfuncout 
                = ((0x7fU <= (IData)(vlSelf->__Vfunc_is_load__580__op)) 
                   & (0x81U >= (IData)(vlSelf->__Vfunc_is_load__580__op)));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addrgen_req[0U] 
                = (((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[5U])) 
                              << 0x3aU) | (((QData)((IData)(
                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[4U])) 
                                            << 0x1aU) 
                                           | ((QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[3U])) 
                                              >> 6U)))) 
                    << 0x18U) | ((0xe00000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[1U] 
                                               << 0x11U)) 
                                 | (((IData)(vlSelf->__Vfunc_is_load__580__Vfuncout) 
                                     << 0x14U) | ((0x40000U 
                                                   & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[1U] 
                                                      << 0x12U)) 
                                                  | (0x3ffffU 
                                                     & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[2U] 
                                                         << 9U) 
                                                        | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[1U] 
                                                           >> 0x17U)))))));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addrgen_req[1U] 
                = (((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[5U])) 
                              << 0x3aU) | (((QData)((IData)(
                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[4U])) 
                                            << 0x1aU) 
                                           | ((QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[3U])) 
                                              >> 6U)))) 
                    >> 8U) | ((IData)(((((QData)((IData)(
                                                         vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[5U])) 
                                         << 0x3aU) 
                                        | (((QData)((IData)(
                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[4U])) 
                                            << 0x1aU) 
                                           | ((QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[3U])) 
                                              >> 6U))) 
                                       >> 0x20U)) << 0x18U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addrgen_req[2U] 
                = ((0xff000000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[2U] 
                                   << 0xfU)) | ((IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[5U])) 
                                                           << 0x3aU) 
                                                          | (((QData)((IData)(
                                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[4U])) 
                                                              << 0x1aU) 
                                                             | ((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[3U])) 
                                                                >> 6U))) 
                                                         >> 0x20U)) 
                                                >> 8U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addrgen_req[3U] 
                = (((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[7U])) 
                              << 0x38U) | (((QData)((IData)(
                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[6U])) 
                                            << 0x18U) 
                                           | ((QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[5U])) 
                                              >> 8U)))) 
                    << 5U) | (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[2U] 
                                       >> 0x11U)));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addrgen_req[4U] 
                = (((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[7U])) 
                              << 0x38U) | (((QData)((IData)(
                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[6U])) 
                                            << 0x18U) 
                                           | ((QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[5U])) 
                                              >> 8U)))) 
                    >> 0x1bU) | ((IData)(((((QData)((IData)(
                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[7U])) 
                                            << 0x38U) 
                                           | (((QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[6U])) 
                                               << 0x18U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[5U])) 
                                                 >> 8U))) 
                                          >> 0x20U)) 
                                 << 5U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addrgen_req[5U] 
                = ((IData)(((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[7U])) 
                              << 0x38U) | (((QData)((IData)(
                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[6U])) 
                                            << 0x18U) 
                                           | ((QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[5U])) 
                                              >> 8U))) 
                            >> 0x20U)) >> 0x1bU);
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addrgen_req_valid = 1U;
            if (((0xfU == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__sldu_addrgen_operand_valid)) 
                 & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT____Vcellinp__i_sldu__sldu_operand_target_fu_i))) {
                ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr_valid_d = 1U;
                if ((0x4000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[7U])) {
                    if ((0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_q))) {
                        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr 
                            = (QData)((IData)((0xffU 
                                               & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word))));
                    }
                    if ((1U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_q))) {
                        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr 
                            = (QData)((IData)((0xffU 
                                               & (IData)(
                                                         (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word 
                                                          >> 8U)))));
                    }
                    if ((2U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_q))) {
                        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr 
                            = (QData)((IData)((0xffU 
                                               & (IData)(
                                                         (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word 
                                                          >> 0x10U)))));
                    }
                    if ((3U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_q))) {
                        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr 
                            = (QData)((IData)((0xffU 
                                               & (IData)(
                                                         (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word 
                                                          >> 0x18U)))));
                    }
                    if ((4U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_q))) {
                        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr 
                            = (QData)((IData)((0xffU 
                                               & (IData)(
                                                         (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word 
                                                          >> 0x20U)))));
                    }
                    if ((5U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_q))) {
                        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr 
                            = (QData)((IData)((0xffU 
                                               & (IData)(
                                                         (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word 
                                                          >> 0x28U)))));
                    }
                    if ((6U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_q))) {
                        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr 
                            = (QData)((IData)((0xffU 
                                               & (IData)(
                                                         (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word 
                                                          >> 0x30U)))));
                    }
                    if ((7U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_q))) {
                        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr 
                            = (QData)((IData)((0xffU 
                                               & (IData)(
                                                         (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word 
                                                          >> 0x38U)))));
                    }
                } else if ((0x2000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[7U])) {
                    if ((0x1000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[7U])) {
                        if ((0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_q))) {
                            ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr 
                                = ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word;
                        }
                    } else {
                        if ((0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_q))) {
                            ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr 
                                = (QData)((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word));
                        }
                        if ((1U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_q))) {
                            ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr 
                                = (QData)((IData)((ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word 
                                                   >> 0x20U)));
                        }
                    }
                } else if ((0x1000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[7U])) {
                    if ((0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_q))) {
                        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr 
                            = (QData)((IData)((0xffffU 
                                               & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word))));
                    }
                    if ((1U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_q))) {
                        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr 
                            = (QData)((IData)((0xffffU 
                                               & (IData)(
                                                         (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word 
                                                          >> 0x10U)))));
                    }
                    if ((2U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_q))) {
                        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr 
                            = (QData)((IData)((0xffffU 
                                               & (IData)(
                                                         (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word 
                                                          >> 0x20U)))));
                    }
                    if ((3U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_q))) {
                        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr 
                            = (QData)((IData)((0xffffU 
                                               & (IData)(
                                                         (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word 
                                                          >> 0x30U)))));
                    }
                } else {
                    if ((0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_q))) {
                        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr 
                            = (QData)((IData)((0xffU 
                                               & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word))));
                    }
                    if ((1U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_q))) {
                        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr 
                            = (QData)((IData)((0xffU 
                                               & (IData)(
                                                         (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word 
                                                          >> 8U)))));
                    }
                    if ((2U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_q))) {
                        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr 
                            = (QData)((IData)((0xffU 
                                               & (IData)(
                                                         (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word 
                                                          >> 0x10U)))));
                    }
                    if ((3U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_q))) {
                        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr 
                            = (QData)((IData)((0xffU 
                                               & (IData)(
                                                         (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word 
                                                          >> 0x18U)))));
                    }
                    if ((4U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_q))) {
                        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr 
                            = (QData)((IData)((0xffU 
                                               & (IData)(
                                                         (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word 
                                                          >> 0x20U)))));
                    }
                    if ((5U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_q))) {
                        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr 
                            = (QData)((IData)((0xffU 
                                               & (IData)(
                                                         (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word 
                                                          >> 0x28U)))));
                    }
                    if ((6U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_q))) {
                        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr 
                            = (QData)((IData)((0xffU 
                                               & (IData)(
                                                         (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word 
                                                          >> 0x30U)))));
                    }
                    if ((7U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_q))) {
                        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr 
                            = (QData)((IData)((0xffU 
                                               & (IData)(
                                                         (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__reduced_word 
                                                          >> 0x38U)))));
                    }
                }
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_final_addr_d 
                    = ((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[7U])) 
                         << 0x38U) | (((QData)((IData)(
                                                       vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[6U])) 
                                       << 0x18U) | 
                                      ((QData)((IData)(
                                                       vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[5U])) 
                                       >> 8U))) + ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr);
                if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr_ready_q) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_op_cnt_d 
                        = (0x1fffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_op_cnt_q) 
                                      - (IData)(1U)));
                    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_q) 
                         == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__last_elm_subw_q))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_d = 0U;
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_d 
                            = (3U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_d)));
                        if ((3U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__word_lane_ptr_q))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__addrgen_operand_ready = 1U;
                        }
                    } else {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_d 
                            = (7U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__elm_ptr_d)));
                    }
                }
                if ((0U == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_op_cnt_d))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__addrgen_operand_ready = 1U;
                }
            }
            if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_op_error_d) 
                 | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addrgen_req_ready))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__state_d = 3U;
            }
        }
    } else if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__state_q))) {
        vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__is_addr_error__581__vew 
            = (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[1U] 
                     >> 4U));
        vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__is_addr_error__581__addr 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[7U])) 
                << 0x38U) | (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[6U])) 
                              << 0x18U) | ((QData)((IData)(
                                                           vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[5U])) 
                                           >> 8U)));
        vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__is_addr_error__581__Vfuncout 
            = (0U != (vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__is_addr_error__581__addr 
                      & ((1ULL << (IData)(vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__is_addr_error__581__vew)) 
                         - 1ULL)));
        if (vlSelf->__Vfunc_ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__is_addr_error__581__Vfuncout) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__state_d = 0U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__addrgen_ack = 1U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__addrgen_error = 1U;
        } else {
            vlSelf->__Vfunc_is_load__582__op = (0xffU 
                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[8U] 
                                                   >> 0xeU));
            vlSelf->__Vfunc_is_load__582__Vfuncout 
                = ((0x7fU <= (IData)(vlSelf->__Vfunc_is_load__582__op)) 
                   & (0x81U >= (IData)(vlSelf->__Vfunc_is_load__582__op)));
            __Vtemp_hdd5740e0__0[0U] = (((IData)((((QData)((IData)(
                                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[5U])) 
                                                   << 0x3aU) 
                                                  | (((QData)((IData)(
                                                                      vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[4U])) 
                                                      << 0x1aU) 
                                                     | ((QData)((IData)(
                                                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[3U])) 
                                                        >> 6U)))) 
                                         << 0x18U) 
                                        | ((0xe00000U 
                                            & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[1U] 
                                               << 0x11U)) 
                                           | (((IData)(vlSelf->__Vfunc_is_load__582__Vfuncout) 
                                               << 0x14U) 
                                              | ((((0x7fU 
                                                    == 
                                                    (0xffU 
                                                     & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[8U] 
                                                        >> 0xeU))) 
                                                   | (0x82U 
                                                      == 
                                                      (0xffU 
                                                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[8U] 
                                                          >> 0xeU)))) 
                                                  << 0x13U) 
                                                 | ((0x40000U 
                                                     & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[1U] 
                                                        << 0x12U)) 
                                                    | (0x3ffffU 
                                                       & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[2U] 
                                                           << 9U) 
                                                          | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[1U] 
                                                             >> 0x17U))))))));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addrgen_req[0U] 
                = __Vtemp_hdd5740e0__0[0U];
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addrgen_req[1U] 
                = (((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[5U])) 
                              << 0x3aU) | (((QData)((IData)(
                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[4U])) 
                                            << 0x1aU) 
                                           | ((QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[3U])) 
                                              >> 6U)))) 
                    >> 8U) | ((IData)(((((QData)((IData)(
                                                         vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[5U])) 
                                         << 0x3aU) 
                                        | (((QData)((IData)(
                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[4U])) 
                                            << 0x1aU) 
                                           | ((QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[3U])) 
                                              >> 6U))) 
                                       >> 0x20U)) << 0x18U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addrgen_req[2U] 
                = ((0xff000000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[2U] 
                                   << 0xfU)) | ((IData)(
                                                        ((((QData)((IData)(
                                                                           vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[5U])) 
                                                           << 0x3aU) 
                                                          | (((QData)((IData)(
                                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[4U])) 
                                                              << 0x1aU) 
                                                             | ((QData)((IData)(
                                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[3U])) 
                                                                >> 6U))) 
                                                         >> 0x20U)) 
                                                >> 8U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addrgen_req[3U] 
                = (((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[7U])) 
                              << 0x38U) | (((QData)((IData)(
                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[6U])) 
                                            << 0x18U) 
                                           | ((QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[5U])) 
                                              >> 8U)))) 
                    << 5U) | (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[2U] 
                                       >> 0x11U)));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addrgen_req[4U] 
                = (((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[7U])) 
                              << 0x38U) | (((QData)((IData)(
                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[6U])) 
                                            << 0x18U) 
                                           | ((QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[5U])) 
                                              >> 8U)))) 
                    >> 0x1bU) | ((IData)(((((QData)((IData)(
                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[7U])) 
                                            << 0x38U) 
                                           | (((QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[6U])) 
                                               << 0x18U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[5U])) 
                                                 >> 8U))) 
                                          >> 0x20U)) 
                                 << 5U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addrgen_req[5U] 
                = ((IData)(((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[7U])) 
                              << 0x38U) | (((QData)((IData)(
                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[6U])) 
                                            << 0x18U) 
                                           | ((QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[5U])) 
                                              >> 8U))) 
                            >> 0x20U)) >> 0x1bU);
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addrgen_req_valid = 1U;
            if (((0x80U == (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[8U] 
                                     >> 0xeU))) | (0x83U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_q[8U] 
                                                       >> 0xeU))))) {
                if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addrgen_req_ready) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__state_d = 3U;
                }
            } else if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addrgen_req_ready) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__addrgen_req_valid = 0U;
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__addrgen_ack = 1U;
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__state_d = 0U;
            }
        }
    } else {
        vlSelf->__Vfunc_is_store__584__op = (0xffU 
                                             & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__pe_req[8U] 
                                                >> 0xeU));
        vlSelf->__Vfunc_is_store__584__Vfuncout = (
                                                   (0x82U 
                                                    <= (IData)(vlSelf->__Vfunc_is_store__584__op)) 
                                                   & (0x84U 
                                                      >= (IData)(vlSelf->__Vfunc_is_store__584__op)));
        vlSelf->__Vfunc_is_load__583__op = (0xffU & 
                                            (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__pe_req[8U] 
                                             >> 0xeU));
        vlSelf->__Vfunc_is_load__583__Vfuncout = ((0x7fU 
                                                   <= (IData)(vlSelf->__Vfunc_is_load__583__op)) 
                                                  & (0x81U 
                                                     >= (IData)(vlSelf->__Vfunc_is_load__583__op)));
        if ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__pe_req_valid) 
              & ((IData)(vlSelf->__Vfunc_is_load__583__Vfuncout) 
                 | (IData)(vlSelf->__Vfunc_is_store__584__Vfuncout))) 
             & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__vinsn_running_q) 
                   >> (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__pe_req[8U] 
                             >> 0x16U)))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__vinsn_running_d 
                = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__vinsn_running_d) 
                   | (0xffU & ((IData)(1U) << (7U & 
                                               (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__pe_req[8U] 
                                                >> 0x16U)))));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_d[0U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__pe_req[0U];
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_d[1U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__pe_req[1U];
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_d[2U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__pe_req[2U];
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_d[3U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__pe_req[3U];
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_d[4U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__pe_req[4U];
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_d[5U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__pe_req[5U];
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_d[6U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__pe_req[6U];
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_d[7U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__pe_req[7U];
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__pe_req_d[8U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__pe_req[8U];
            if (((0x81U == (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__pe_req[8U] 
                                     >> 0xeU))) | (0x84U 
                                                   == 
                                                   (0xffU 
                                                    & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__pe_req[8U] 
                                                       >> 0xeU))))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__state_d = 2U;
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__last_elm_subw_d 
                    = ((0x4000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__pe_req[7U])
                        ? 0U : ((0x2000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__pe_req[7U])
                                 ? ((0x1000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__pe_req[7U])
                                     ? 0U : 1U) : (
                                                   (0x1000U 
                                                    & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__pe_req[7U])
                                                    ? 3U
                                                    : 7U)));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_op_cnt_d 
                    = (0x1fffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__pe_req[2U] 
                                  >> 9U));
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__state_d = 1U;
            }
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__i_addrgen_idx_op_spill_reg__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr_valid_d) 
           & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara_cluster__DOT__p_cluster__BRA__1__KET____DOT__i_ara_macro__DOT__i_ara__DOT__i_vlsu__DOT__i_addrgen__DOT__idx_addr_ready_q));
}
