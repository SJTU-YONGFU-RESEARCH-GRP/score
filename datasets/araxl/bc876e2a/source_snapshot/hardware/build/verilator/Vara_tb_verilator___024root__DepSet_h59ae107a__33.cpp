// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vara_tb_verilator.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vara_tb_verilator__Syms.h"
#include "Vara_tb_verilator___024root.h"

VL_INLINE_OPT void Vara_tb_verilator___024root___nba_comb__TOP__553(Vara_tb_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___nba_comb__TOP__553\n"); );
    // Init
    CData/*7:0*/ __Vfunc_is_imm_fpr__75__op;
    __Vfunc_is_imm_fpr__75__op = 0;
    CData/*7:0*/ __Vfunc_is_imm_fpr__78__op;
    __Vfunc_is_imm_fpr__78__op = 0;
    CData/*7:0*/ __Vfunc_is_imm_fpr__81__op;
    __Vfunc_is_imm_fpr__81__op = 0;
    CData/*7:0*/ __Vfunc_is_imm_fpr__84__op;
    __Vfunc_is_imm_fpr__84__op = 0;
    CData/*7:0*/ __Vfunc_is_imm_fpr__87__op;
    __Vfunc_is_imm_fpr__87__op = 0;
    CData/*7:0*/ __Vfunc_is_imm_fpr__90__op;
    __Vfunc_is_imm_fpr__90__op = 0;
    CData/*7:0*/ __Vfunc_is_imm_fpr__93__op;
    __Vfunc_is_imm_fpr__93__op = 0;
    CData/*7:0*/ __Vfunc_is_imm_fpr__96__op;
    __Vfunc_is_imm_fpr__96__op = 0;
    CData/*7:0*/ __Vfunc_is_rs1_fpr__99__op;
    __Vfunc_is_rs1_fpr__99__op = 0;
    CData/*7:0*/ __Vfunc_is_rs2_fpr__101__op;
    __Vfunc_is_rs2_fpr__101__op = 0;
    CData/*7:0*/ __Vfunc_is_imm_fpr__103__op;
    __Vfunc_is_imm_fpr__103__op = 0;
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__stall 
        = (1U & ((0xaU == (0xfU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                   >> 0x14U))) ? (2U 
                                                  <= 
                                                  (3U 
                                                   & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_insn_queue__DOT__status_cnt_q)))
                  : ((1U == (0xfU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                     >> 0x14U))) ? 
                     ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__acc_cons_q) 
                      & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_no_st_pending)))
                      : (IData)((((0x200000U == (0xf00000U 
                                                 & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U])) 
                                  & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__csr_regfile_i__DOT__acc_cons_q) 
                                 & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_no_st_pending)) 
                                    | (~ ((0U == (7U 
                                                  & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_spec_loads__DOT__i_counter__DOT__counter_q))) 
                                          & (0U == 
                                             (7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_disp_loads__DOT__i_counter__DOT__counter_q)))))))))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__forward_rs1 = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__forward_rs2 = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__forward_rs3 = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__rs1_iro_sb 
        = (0x3fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                    >> 6U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__rs2_iro_sb 
        = (0x3fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U]);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__rs3_iro_sb 
        = (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0xeU] 
           >> 0x1aU);
    __Vfunc_is_rs1_fpr__99__op = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                           >> 0xcU));
    {
        if (((((((((((0x5bU <= (IData)(__Vfunc_is_rs1_fpr__99__op)) 
                     & (0x62U >= (IData)(__Vfunc_is_rs1_fpr__99__op))) 
                    | (0x63U == (IData)(__Vfunc_is_rs1_fpr__99__op))) 
                   | (0x65U == (IData)(__Vfunc_is_rs1_fpr__99__op))) 
                  | (0x66U == (IData)(__Vfunc_is_rs1_fpr__99__op))) 
                 | (0x67U == (IData)(__Vfunc_is_rs1_fpr__99__op))) 
                | (0x69U == (IData)(__Vfunc_is_rs1_fpr__99__op))) 
               | (0x6aU == (IData)(__Vfunc_is_rs1_fpr__99__op))) 
              | ((0x6bU <= (IData)(__Vfunc_is_rs1_fpr__99__op)) 
                 & (0x79U >= (IData)(__Vfunc_is_rs1_fpr__99__op)))) 
             | (0xa7U == (IData)(__Vfunc_is_rs1_fpr__99__op)))) {
            vlSelf->__Vfunc_is_rs1_fpr__99__Vfuncout = 1U;
            goto __Vlabel735;
        } else {
            vlSelf->__Vfunc_is_rs1_fpr__99__Vfuncout = 0U;
            goto __Vlabel735;
        }
        __Vlabel735: ;
    }
    if (((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0xeU] 
             >> 0x17U)) & ((IData)(vlSelf->__Vfunc_is_rs1_fpr__99__Vfuncout)
                            ? (0U != (0xfU & (((0U 
                                                == 
                                                (0x1cU 
                                                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                                    >> 4U)))
                                                ? 0U
                                                : (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellinp__i_issue_read_operands__rd_clobber_fpr_i[
                                                   (((IData)(3U) 
                                                     + 
                                                     (0xfcU 
                                                      & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                                         >> 4U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1cU 
                                                     & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                                        >> 4U))))) 
                                              | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellinp__i_issue_read_operands__rd_clobber_fpr_i[
                                                 (7U 
                                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                                     >> 9U))] 
                                                 >> 
                                                 (0x1cU 
                                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                                     >> 4U))))))
                            : (0U != (0xfU & (((0U 
                                                == 
                                                (0x1cU 
                                                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                                    >> 4U)))
                                                ? 0U
                                                : (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellinp__i_issue_read_operands__rd_clobber_gpr_i[
                                                   (((IData)(3U) 
                                                     + 
                                                     (0xfcU 
                                                      & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                                         >> 4U))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1cU 
                                                     & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                                        >> 4U))))) 
                                              | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellinp__i_issue_read_operands__rd_clobber_gpr_i[
                                                 (7U 
                                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                                     >> 9U))] 
                                                 >> 
                                                 (0x1cU 
                                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                                     >> 4U))))))))) {
        vlSelf->__Vfunc_is_rs1_fpr__100__op = (0xffU 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                                  >> 0xcU));
        {
            if (((((((((((0x5bU <= (IData)(vlSelf->__Vfunc_is_rs1_fpr__100__op)) 
                         & (0x62U >= (IData)(vlSelf->__Vfunc_is_rs1_fpr__100__op))) 
                        | (0x63U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__100__op))) 
                       | (0x65U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__100__op))) 
                      | (0x66U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__100__op))) 
                     | (0x67U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__100__op))) 
                    | (0x69U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__100__op))) 
                   | (0x6aU == (IData)(vlSelf->__Vfunc_is_rs1_fpr__100__op))) 
                  | ((0x6bU <= (IData)(vlSelf->__Vfunc_is_rs1_fpr__100__op)) 
                     & (0x79U >= (IData)(vlSelf->__Vfunc_is_rs1_fpr__100__op)))) 
                 | (0xa7U == (IData)(vlSelf->__Vfunc_is_rs1_fpr__100__op)))) {
                vlSelf->__Vfunc_is_rs1_fpr__100__Vfuncout = 1U;
                goto __Vlabel736;
            } else {
                vlSelf->__Vfunc_is_rs1_fpr__100__Vfuncout = 0U;
                goto __Vlabel736;
            }
            __Vlabel736: ;
        }
        if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__rs1_valid_sb_iro) 
             & ((IData)(vlSelf->__Vfunc_is_rs1_fpr__100__Vfuncout) 
                | ((6U != (0xfU & (((0U == (0x1cU & 
                                            (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                             >> 4U)))
                                     ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellinp__i_issue_read_operands__rd_clobber_gpr_i[
                                             (((IData)(3U) 
                                               + (0xfcU 
                                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                                     >> 4U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1cU 
                                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                                     >> 4U))))) 
                                   | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellinp__i_issue_read_operands__rd_clobber_gpr_i[
                                      (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                             >> 9U))] 
                                      >> (0x1cU & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                                   >> 4U)))))) 
                   | (0x1eU == (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                         >> 0xcU))))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__forward_rs1 = 1U;
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__stall = 1U;
        }
    }
    __Vfunc_is_rs2_fpr__101__op = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                            >> 0xcU));
    {
        if (((((((((0x55U <= (IData)(__Vfunc_is_rs2_fpr__101__op)) 
                   & (0x58U >= (IData)(__Vfunc_is_rs2_fpr__101__op))) 
                  | ((0x59U <= (IData)(__Vfunc_is_rs2_fpr__101__op)) 
                     & (0x5dU >= (IData)(__Vfunc_is_rs2_fpr__101__op)))) 
                 | ((0x5fU <= (IData)(__Vfunc_is_rs2_fpr__101__op)) 
                    & (0x62U >= (IData)(__Vfunc_is_rs2_fpr__101__op)))) 
                | (0x65U == (IData)(__Vfunc_is_rs2_fpr__101__op))) 
               | ((0x66U <= (IData)(__Vfunc_is_rs2_fpr__101__op)) 
                  & (0x67U >= (IData)(__Vfunc_is_rs2_fpr__101__op)))) 
              | (0x69U == (IData)(__Vfunc_is_rs2_fpr__101__op))) 
             | ((0x6bU <= (IData)(__Vfunc_is_rs2_fpr__101__op)) 
                & (0x79U >= (IData)(__Vfunc_is_rs2_fpr__101__op))))) {
            vlSelf->__Vfunc_is_rs2_fpr__101__Vfuncout = 1U;
            goto __Vlabel737;
        } else {
            vlSelf->__Vfunc_is_rs2_fpr__101__Vfuncout = 0U;
            goto __Vlabel737;
        }
        __Vlabel737: ;
    }
    if (((IData)(vlSelf->__Vfunc_is_rs2_fpr__101__Vfuncout)
          ? (0U != (0xfU & (((0U == (0x1cU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                              << 2U)))
                              ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellinp__i_issue_read_operands__rd_clobber_fpr_i[
                                      (((IData)(3U) 
                                        + (0xfcU & 
                                           (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                            << 2U))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1cU 
                                                    & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                                       << 2U))))) 
                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellinp__i_issue_read_operands__rd_clobber_fpr_i[
                               (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                      >> 3U))] >> (0x1cU 
                                                   & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                                      << 2U))))))
          : (0U != (0xfU & (((0U == (0x1cU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                              << 2U)))
                              ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellinp__i_issue_read_operands__rd_clobber_gpr_i[
                                      (((IData)(3U) 
                                        + (0xfcU & 
                                           (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                            << 2U))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1cU 
                                                    & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                                       << 2U))))) 
                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellinp__i_issue_read_operands__rd_clobber_gpr_i[
                               (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                      >> 3U))] >> (0x1cU 
                                                   & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                                      << 2U)))))))) {
        vlSelf->__Vfunc_is_rs2_fpr__102__op = (0xffU 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                                  >> 0xcU));
        {
            if (((((((((0x55U <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__102__op)) 
                       & (0x58U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__102__op))) 
                      | ((0x59U <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__102__op)) 
                         & (0x5dU >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__102__op)))) 
                     | ((0x5fU <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__102__op)) 
                        & (0x62U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__102__op)))) 
                    | (0x65U == (IData)(vlSelf->__Vfunc_is_rs2_fpr__102__op))) 
                   | ((0x66U <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__102__op)) 
                      & (0x67U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__102__op)))) 
                  | (0x69U == (IData)(vlSelf->__Vfunc_is_rs2_fpr__102__op))) 
                 | ((0x6bU <= (IData)(vlSelf->__Vfunc_is_rs2_fpr__102__op)) 
                    & (0x79U >= (IData)(vlSelf->__Vfunc_is_rs2_fpr__102__op))))) {
                vlSelf->__Vfunc_is_rs2_fpr__102__Vfuncout = 1U;
                goto __Vlabel738;
            } else {
                vlSelf->__Vfunc_is_rs2_fpr__102__Vfuncout = 0U;
                goto __Vlabel738;
            }
            __Vlabel738: ;
        }
        if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__rs2_valid_iro_sb) 
             & ((IData)(vlSelf->__Vfunc_is_rs2_fpr__102__Vfuncout) 
                | ((6U != (0xfU & (((0U == (0x1cU & 
                                            (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                             << 2U)))
                                     ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellinp__i_issue_read_operands__rd_clobber_gpr_i[
                                             (((IData)(3U) 
                                               + (0xfcU 
                                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                                     << 2U))) 
                                              >> 5U)] 
                                             << ((IData)(0x20U) 
                                                 - 
                                                 (0x1cU 
                                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                                     << 2U))))) 
                                   | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellinp__i_issue_read_operands__rd_clobber_gpr_i[
                                      (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                             >> 3U))] 
                                      >> (0x1cU & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                                   << 2U)))))) 
                   | (0x1eU == (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                         >> 0xcU))))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__forward_rs2 = 1U;
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__stall = 1U;
        }
    }
    __Vfunc_is_imm_fpr__103__op = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                            >> 0xcU));
    {
        if (((((0x59U <= (IData)(__Vfunc_is_imm_fpr__103__op)) 
               & (0x5aU >= (IData)(__Vfunc_is_imm_fpr__103__op))) 
              | ((0x5fU <= (IData)(__Vfunc_is_imm_fpr__103__op)) 
                 & (0x62U >= (IData)(__Vfunc_is_imm_fpr__103__op)))) 
             | ((0x76U <= (IData)(__Vfunc_is_imm_fpr__103__op)) 
                & (0x79U >= (IData)(__Vfunc_is_imm_fpr__103__op))))) {
            vlSelf->__Vfunc_is_imm_fpr__103__Vfuncout = 1U;
            goto __Vlabel739;
        } else {
            vlSelf->__Vfunc_is_imm_fpr__103__Vfuncout = 0U;
            goto __Vlabel739;
        }
        __Vlabel739: ;
    }
    if (((IData)(vlSelf->__Vfunc_is_imm_fpr__103__Vfuncout)
          ? (0U != (0xfU & (((0U == (0x1cU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0xeU] 
                                              >> 0x18U)))
                              ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellinp__i_issue_read_operands__rd_clobber_fpr_i[
                                      (((IData)(3U) 
                                        + (0xfcU & 
                                           (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0xeU] 
                                            >> 0x18U))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1cU 
                                                    & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0xeU] 
                                                       >> 0x18U))))) 
                            | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellinp__i_issue_read_operands__rd_clobber_fpr_i[
                               (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0xeU] 
                                >> 0x1dU)] >> (0x1cU 
                                               & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0xeU] 
                                                  >> 0x18U))))))
          : 0U)) {
        if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__i_sel_rs3__DOT__gen_arbiter__DOT__req_nodes))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__forward_rs3 = 1U;
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__stall = 1U;
        }
    }
    __Vfunc_is_imm_fpr__75__op = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                           >> 0xcU));
    {
        if (((((0x59U <= (IData)(__Vfunc_is_imm_fpr__75__op)) 
               & (0x5aU >= (IData)(__Vfunc_is_imm_fpr__75__op))) 
              | ((0x5fU <= (IData)(__Vfunc_is_imm_fpr__75__op)) 
                 & (0x62U >= (IData)(__Vfunc_is_imm_fpr__75__op)))) 
             | ((0x76U <= (IData)(__Vfunc_is_imm_fpr__75__op)) 
                & (0x79U >= (IData)(__Vfunc_is_imm_fpr__75__op))))) {
            vlSelf->__Vfunc_is_imm_fpr__75__Vfuncout = 1U;
            goto __Vlabel740;
        } else {
            vlSelf->__Vfunc_is_imm_fpr__75__Vfuncout = 0U;
            goto __Vlabel740;
        }
        __Vlabel740: ;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req 
        = ((0x1fdfU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req)) 
           | (0x1e0U & ((((((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x10U] 
                             >> 0x1aU) == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__rs3_iro_sb)) 
                           << 5U) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x13U] 
                                     >> 0x17U)) & (
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0xeU] 
                                                   >> 0x14U)) 
                        & (((1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x13U] 
                                   >> 0x1bU)) == (IData)(vlSelf->__Vfunc_is_imm_fpr__75__Vfuncout)) 
                           << 5U))));
    __Vfunc_is_imm_fpr__78__op = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                           >> 0xcU));
    {
        if (((((0x59U <= (IData)(__Vfunc_is_imm_fpr__78__op)) 
               & (0x5aU >= (IData)(__Vfunc_is_imm_fpr__78__op))) 
              | ((0x5fU <= (IData)(__Vfunc_is_imm_fpr__78__op)) 
                 & (0x62U >= (IData)(__Vfunc_is_imm_fpr__78__op)))) 
             | ((0x76U <= (IData)(__Vfunc_is_imm_fpr__78__op)) 
                & (0x79U >= (IData)(__Vfunc_is_imm_fpr__78__op))))) {
            vlSelf->__Vfunc_is_imm_fpr__78__Vfuncout = 1U;
            goto __Vlabel741;
        } else {
            vlSelf->__Vfunc_is_imm_fpr__78__Vfuncout = 0U;
            goto __Vlabel741;
        }
        __Vlabel741: ;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req 
        = ((0x1fbfU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req)) 
           | (0x1fc0U & ((((((0x3fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x24U] 
                                       >> 0x17U)) == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__rs3_iro_sb)) 
                            << 6U) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x27U] 
                                      >> 0x13U)) & 
                          (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x22U] 
                           >> 0x10U)) & (((1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x27U] 
                                                 >> 0x18U)) 
                                          == (IData)(vlSelf->__Vfunc_is_imm_fpr__78__Vfuncout)) 
                                         << 6U))));
    __Vfunc_is_imm_fpr__81__op = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                           >> 0xcU));
    {
        if (((((0x59U <= (IData)(__Vfunc_is_imm_fpr__81__op)) 
               & (0x5aU >= (IData)(__Vfunc_is_imm_fpr__81__op))) 
              | ((0x5fU <= (IData)(__Vfunc_is_imm_fpr__81__op)) 
                 & (0x62U >= (IData)(__Vfunc_is_imm_fpr__81__op)))) 
             | ((0x76U <= (IData)(__Vfunc_is_imm_fpr__81__op)) 
                & (0x79U >= (IData)(__Vfunc_is_imm_fpr__81__op))))) {
            vlSelf->__Vfunc_is_imm_fpr__81__Vfuncout = 1U;
            goto __Vlabel742;
        } else {
            vlSelf->__Vfunc_is_imm_fpr__81__Vfuncout = 0U;
            goto __Vlabel742;
        }
        __Vlabel742: ;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req 
        = ((0x1f7fU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req)) 
           | (0x1ff80U & ((((((0x3fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x38U] 
                                        >> 0x14U)) 
                              == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__rs3_iro_sb)) 
                             << 7U) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x3bU] 
                                       >> 0xfU)) & 
                           (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x36U] 
                            >> 0xcU)) & (((1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x3bU] 
                                                 >> 0x15U)) 
                                          == (IData)(vlSelf->__Vfunc_is_imm_fpr__81__Vfuncout)) 
                                         << 7U))));
    __Vfunc_is_imm_fpr__84__op = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                           >> 0xcU));
    {
        if (((((0x59U <= (IData)(__Vfunc_is_imm_fpr__84__op)) 
               & (0x5aU >= (IData)(__Vfunc_is_imm_fpr__84__op))) 
              | ((0x5fU <= (IData)(__Vfunc_is_imm_fpr__84__op)) 
                 & (0x62U >= (IData)(__Vfunc_is_imm_fpr__84__op)))) 
             | ((0x76U <= (IData)(__Vfunc_is_imm_fpr__84__op)) 
                & (0x79U >= (IData)(__Vfunc_is_imm_fpr__84__op))))) {
            vlSelf->__Vfunc_is_imm_fpr__84__Vfuncout = 1U;
            goto __Vlabel743;
        } else {
            vlSelf->__Vfunc_is_imm_fpr__84__Vfuncout = 0U;
            goto __Vlabel743;
        }
        __Vlabel743: ;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req 
        = ((0x1effU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req)) 
           | (0x1fff00U & ((((((0x3fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x4cU] 
                                         >> 0x11U)) 
                               == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__rs3_iro_sb)) 
                              << 8U) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x4fU] 
                                        >> 0xbU)) & 
                            (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x4aU] 
                             >> 8U)) & (((1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x4fU] 
                                                >> 0x12U)) 
                                         == (IData)(vlSelf->__Vfunc_is_imm_fpr__84__Vfuncout)) 
                                        << 8U))));
    __Vfunc_is_imm_fpr__87__op = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                           >> 0xcU));
    {
        if (((((0x59U <= (IData)(__Vfunc_is_imm_fpr__87__op)) 
               & (0x5aU >= (IData)(__Vfunc_is_imm_fpr__87__op))) 
              | ((0x5fU <= (IData)(__Vfunc_is_imm_fpr__87__op)) 
                 & (0x62U >= (IData)(__Vfunc_is_imm_fpr__87__op)))) 
             | ((0x76U <= (IData)(__Vfunc_is_imm_fpr__87__op)) 
                & (0x79U >= (IData)(__Vfunc_is_imm_fpr__87__op))))) {
            vlSelf->__Vfunc_is_imm_fpr__87__Vfuncout = 1U;
            goto __Vlabel744;
        } else {
            vlSelf->__Vfunc_is_imm_fpr__87__Vfuncout = 0U;
            goto __Vlabel744;
        }
        __Vlabel744: ;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req 
        = ((0x1dffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req)) 
           | (0x1fffe00U & ((((((0x3fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x60U] 
                                          >> 0xeU)) 
                                == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__rs3_iro_sb)) 
                               << 9U) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x63U] 
                                         >> 7U)) & 
                             (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x5eU] 
                              >> 4U)) & (((1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x63U] 
                                                 >> 0xfU)) 
                                          == (IData)(vlSelf->__Vfunc_is_imm_fpr__87__Vfuncout)) 
                                         << 9U))));
    __Vfunc_is_imm_fpr__90__op = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                           >> 0xcU));
    {
        if (((((0x59U <= (IData)(__Vfunc_is_imm_fpr__90__op)) 
               & (0x5aU >= (IData)(__Vfunc_is_imm_fpr__90__op))) 
              | ((0x5fU <= (IData)(__Vfunc_is_imm_fpr__90__op)) 
                 & (0x62U >= (IData)(__Vfunc_is_imm_fpr__90__op)))) 
             | ((0x76U <= (IData)(__Vfunc_is_imm_fpr__90__op)) 
                & (0x79U >= (IData)(__Vfunc_is_imm_fpr__90__op))))) {
            vlSelf->__Vfunc_is_imm_fpr__90__Vfuncout = 1U;
            goto __Vlabel745;
        } else {
            vlSelf->__Vfunc_is_imm_fpr__90__Vfuncout = 0U;
            goto __Vlabel745;
        }
        __Vlabel745: ;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req 
        = ((0x1bffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req)) 
           | (0x1ffffc00U & ((((((0x3fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x74U] 
                                           >> 0xbU)) 
                                 == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__rs3_iro_sb)) 
                                << 0xaU) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x77U] 
                                            >> 3U)) 
                              & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x72U]) 
                             & (((1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x77U] 
                                        >> 0xcU)) == (IData)(vlSelf->__Vfunc_is_imm_fpr__90__Vfuncout)) 
                                << 0xaU))));
    __Vfunc_is_imm_fpr__93__op = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                           >> 0xcU));
    {
        if (((((0x59U <= (IData)(__Vfunc_is_imm_fpr__93__op)) 
               & (0x5aU >= (IData)(__Vfunc_is_imm_fpr__93__op))) 
              | ((0x5fU <= (IData)(__Vfunc_is_imm_fpr__93__op)) 
                 & (0x62U >= (IData)(__Vfunc_is_imm_fpr__93__op)))) 
             | ((0x76U <= (IData)(__Vfunc_is_imm_fpr__93__op)) 
                & (0x79U >= (IData)(__Vfunc_is_imm_fpr__93__op))))) {
            vlSelf->__Vfunc_is_imm_fpr__93__Vfuncout = 1U;
            goto __Vlabel746;
        } else {
            vlSelf->__Vfunc_is_imm_fpr__93__Vfuncout = 0U;
            goto __Vlabel746;
        }
        __Vlabel746: ;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req 
        = ((0x17ffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req)) 
           | (0xfffff800U & ((((((0x3fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x88U] 
                                           >> 8U)) 
                                 == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__rs3_iro_sb)) 
                                << 0xbU) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x8bU] 
                                            << 1U)) 
                              & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x86U] 
                                 << 4U)) & (((1U & 
                                              (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x8bU] 
                                               >> 9U)) 
                                             == (IData)(vlSelf->__Vfunc_is_imm_fpr__93__Vfuncout)) 
                                            << 0xbU))));
    __Vfunc_is_imm_fpr__96__op = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                           >> 0xcU));
    {
        if (((((0x59U <= (IData)(__Vfunc_is_imm_fpr__96__op)) 
               & (0x5aU >= (IData)(__Vfunc_is_imm_fpr__96__op))) 
              | ((0x5fU <= (IData)(__Vfunc_is_imm_fpr__96__op)) 
                 & (0x62U >= (IData)(__Vfunc_is_imm_fpr__96__op)))) 
             | ((0x76U <= (IData)(__Vfunc_is_imm_fpr__96__op)) 
                & (0x79U >= (IData)(__Vfunc_is_imm_fpr__96__op))))) {
            vlSelf->__Vfunc_is_imm_fpr__96__Vfuncout = 1U;
            goto __Vlabel747;
        } else {
            vlSelf->__Vfunc_is_imm_fpr__96__Vfuncout = 0U;
            goto __Vlabel747;
        }
        __Vlabel747: ;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req 
        = ((0xfffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req)) 
           | (0xfffff000U & ((((((0x3fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x9cU] 
                                           >> 5U)) 
                                 == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__rs3_iro_sb)) 
                                << 0xcU) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x9fU] 
                                            << 5U)) 
                              & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x9aU] 
                                 << 8U)) & (((1U & 
                                              (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x9fU] 
                                               >> 6U)) 
                                             == (IData)(vlSelf->__Vfunc_is_imm_fpr__96__Vfuncout)) 
                                            << 0xcU))));
}

extern const VlWide<8>/*255:0*/ Vara_tb_verilator__ConstPool__CONST_h9e67c271_0;
extern const VlWide<10>/*319:0*/ Vara_tb_verilator__ConstPool__CONST_he350679e_0;

VL_INLINE_OPT void Vara_tb_verilator___024root___nba_comb__TOP__562(Vara_tb_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___nba_comb__TOP__562\n"); );
    // Init
    CData/*4:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_merged_slice__DOT__i_multifmt_slice__status_o;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_merged_slice__DOT__i_multifmt_slice__status_o = 0;
    QData/*63:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_merged_slice__DOT__i_multifmt_slice__result_o;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_merged_slice__DOT__i_multifmt_slice__result_o = 0;
    IData/*19:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_status;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_status = 0;
    QData/*63:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__local_result;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__local_result = 0;
    CData/*4:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__output_processing__DOT__temp_status;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__output_processing__DOT__temp_status = 0;
    VlWide<7>/*223:0*/ __Vtemp_h8abfabaf__0;
    VlWide<7>/*223:0*/ __Vtemp_ha8549b2d__0;
    VlWide<8>/*255:0*/ __Vtemp_h61b07f48__0;
    VlWide<8>/*255:0*/ __Vtemp_he1a73304__0;
    VlWide<9>/*287:0*/ __Vtemp_h7386fb8a__0;
    VlWide<9>/*287:0*/ __Vtemp_hf6231cbe__0;
    VlWide<10>/*319:0*/ __Vtemp_ha9f456e5__0;
    VlWide<10>/*319:0*/ __Vtemp_h5aedd816__0;
    VlWide<10>/*319:0*/ __Vtemp_hd6285355__0;
    // Body
    if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_valid_q))) {
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_status 
            = (0x1fU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_status_q));
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__local_result 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_result_q[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_divsqrt_multi__DOT__out_pipe_result_q[0U])));
    } else {
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_status = 0U;
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__local_result 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__local_result)) 
                << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__local_result)));
    }
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__output_processing__DOT__temp_status 
        = (0x1fU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_status 
                    & (- (IData)((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_masks))))));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__output_processing__DOT__temp_status 
        = (0x1fU & ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__output_processing__DOT__temp_status) 
                    | ((ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_status 
                        >> 5U) & (- (IData)((1U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_masks) 
                                                   >> 1U)))))));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__output_processing__DOT__temp_status 
        = (0x1fU & ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__output_processing__DOT__temp_status) 
                    | ((ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_status 
                        >> 0xaU) & (- (IData)((1U & 
                                               ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_masks) 
                                                >> 2U)))))));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__output_processing__DOT__temp_status 
        = (0x1fU & ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__output_processing__DOT__temp_status) 
                    | ((ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_status 
                        >> 0xfU) & (- (IData)((1U & 
                                               ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_masks) 
                                                >> 3U)))))));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_merged_slice__DOT__i_multifmt_slice__status_o 
        = ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__output_processing__DOT__temp_status;
    __Vtemp_h8abfabaf__0[6U] = ((0x800U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                           << 0xaU)) 
                                | ((0x400U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                              << 9U)) 
                                   | ((0x200U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                 << 8U)) 
                                      | ((0x180U & 
                                          ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                           << 7U)) 
                                         | ((0x40U 
                                             & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                << 6U)) 
                                            | ((0x20U 
                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                   << 5U)) 
                                               | ((0x10U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                      << 4U)) 
                                                  | ((8U 
                                                      & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                         << 3U)) 
                                                     | ((4U 
                                                         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit))))))))))));
    __Vtemp_ha8549b2d__0[6U] = ((0x1800000U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                               << 0x15U)) 
                                | ((0x400000U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                 << 0x14U)) 
                                   | ((0x200000U & 
                                       ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                        << 0x13U)) 
                                      | ((0x100000U 
                                          & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                             << 0x12U)) 
                                         | ((0x80000U 
                                             & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                << 0x11U)) 
                                            | ((0x40000U 
                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                   << 0x10U)) 
                                               | ((0x20000U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                      << 0xfU)) 
                                                  | ((0x18000U 
                                                      & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                         << 0xeU)) 
                                                     | ((0x4000U 
                                                         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                            << 0xdU)) 
                                                        | ((0x2000U 
                                                            & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                               << 0xcU)) 
                                                           | ((0x1000U 
                                                               & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                                  << 0xbU)) 
                                                              | __Vtemp_h8abfabaf__0[6U])))))))))));
    __Vtemp_h61b07f48__0[7U] = ((0x400U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                           << 0xaU)) 
                                | ((0x200U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                              << 9U)) 
                                   | ((0x100U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                 << 8U)) 
                                      | ((0x80U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                   << 7U)) 
                                         | ((0x40U 
                                             & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                << 6U)) 
                                            | ((0x20U 
                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                   << 5U)) 
                                               | ((0x10U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                      << 4U)) 
                                                  | ((8U 
                                                      & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                         << 3U)) 
                                                     | ((4U 
                                                         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit))))))))))));
    __Vtemp_he1a73304__0[7U] = ((0x200000U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                              << 0x15U)) 
                                | ((0x100000U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                 << 0x14U)) 
                                   | ((0x80000U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                   << 0x13U)) 
                                      | ((0x40000U 
                                          & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                             << 0x12U)) 
                                         | ((0x20000U 
                                             & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                << 0x11U)) 
                                            | ((0x10000U 
                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                   << 0x10U)) 
                                               | ((0x8000U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                      << 0xfU)) 
                                                  | ((0x4000U 
                                                      & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                         << 0xeU)) 
                                                     | ((0x2000U 
                                                         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                            << 0xdU)) 
                                                        | ((0x1000U 
                                                            & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                               << 0xcU)) 
                                                           | ((0x800U 
                                                               & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                                  << 0xbU)) 
                                                              | __Vtemp_h61b07f48__0[7U])))))))))));
    __Vtemp_h7386fb8a__0[8U] = ((0x400U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                           << 0xaU)) 
                                | ((0x200U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                              << 9U)) 
                                   | ((0x100U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                 << 8U)) 
                                      | ((0x80U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                   << 7U)) 
                                         | ((0x40U 
                                             & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                << 6U)) 
                                            | ((0x20U 
                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                   << 5U)) 
                                               | ((0x10U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                      << 4U)) 
                                                  | ((8U 
                                                      & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                         << 3U)) 
                                                     | ((4U 
                                                         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                            << 2U)) 
                                                        | ((2U 
                                                            & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit))))))))))));
    __Vtemp_hf6231cbe__0[8U] = ((0x400000U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                              << 0x15U)) 
                                | ((0x200000U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                 << 0x14U)) 
                                   | ((0x100000U & 
                                       ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                        << 0x13U)) 
                                      | ((0x80000U 
                                          & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                             << 0x12U)) 
                                         | ((0x40000U 
                                             & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                << 0x11U)) 
                                            | ((0x20000U 
                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                   << 0x10U)) 
                                               | ((0x18000U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                      << 0xfU)) 
                                                  | ((0x4000U 
                                                      & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                         << 0xeU)) 
                                                     | ((0x2000U 
                                                         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                            << 0xdU)) 
                                                        | ((0x1000U 
                                                            & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                               << 0xcU)) 
                                                           | ((0x800U 
                                                               & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                                  << 0xbU)) 
                                                              | __Vtemp_h7386fb8a__0[8U])))))))))));
    __Vtemp_ha9f456e5__0[9U] = ((0x400U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                           << 8U)) 
                                | ((0x200U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                              << 7U)) 
                                   | ((0x100U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                 << 6U)) 
                                      | ((0x80U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                   << 5U)) 
                                         | ((0x40U 
                                             & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                << 4U)) 
                                            | ((0x20U 
                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                   << 3U)) 
                                               | ((0x10U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                      << 2U)) 
                                                  | ((8U 
                                                      & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                         << 1U)) 
                                                     | ((4U 
                                                         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit)) 
                                                        | ((2U 
                                                            & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                               >> 1U)) 
                                                           | (1U 
                                                              & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                                 >> 2U))))))))))));
    __Vtemp_h5aedd816__0[9U] = ((0x400000U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                              << 0x13U)) 
                                | ((0x200000U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                 << 0x12U)) 
                                   | ((0x100000U & 
                                       ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                        << 0x11U)) 
                                      | ((0x80000U 
                                          & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                             << 0x10U)) 
                                         | ((0x40000U 
                                             & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                << 0xfU)) 
                                            | ((0x20000U 
                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                   << 0xeU)) 
                                               | ((0x18000U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                      << 0xdU)) 
                                                  | ((0x4000U 
                                                      & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                         << 0xcU)) 
                                                     | ((0x2000U 
                                                         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                            << 0xbU)) 
                                                        | ((0x1000U 
                                                            & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                               << 0xaU)) 
                                                           | ((0x800U 
                                                               & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                                  << 9U)) 
                                                              | __Vtemp_ha9f456e5__0[9U])))))))))));
    __Vtemp_hd6285355__0[0U] = (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__local_result);
    __Vtemp_hd6285355__0[1U] = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__1__KET____DOT__local_result;
    __Vtemp_hd6285355__0[2U] = (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__local_result);
    __Vtemp_hd6285355__0[3U] = (IData)((ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__local_result 
                                        >> 0x20U));
    __Vtemp_hd6285355__0[4U] = (IData)((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit)))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (((- (IData)(
                                                                       (1U 
                                                                        & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit)))) 
                                                            << 0x10U) 
                                                           | (0xffffU 
                                                              & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__local_result)))))));
    __Vtemp_hd6285355__0[5U] = (IData)(((((QData)((IData)(
                                                          (- (IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit)))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           (((- (IData)(
                                                                        (1U 
                                                                         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit)))) 
                                                             << 0x10U) 
                                                            | (0xffffU 
                                                               & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__local_result)))))) 
                                        >> 0x20U));
    __Vtemp_hd6285355__0[6U] = ((0x80000000U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                << 0x1cU)) 
                                | ((0x40000000U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                   << 0x1bU)) 
                                   | ((0x20000000U 
                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                          << 0x1aU)) 
                                      | ((0x10000000U 
                                          & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                             << 0x19U)) 
                                         | ((0x8000000U 
                                             & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                << 0x18U)) 
                                            | ((0x4000000U 
                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                   << 0x17U)) 
                                               | ((0x2000000U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                      << 0x16U)) 
                                                  | __Vtemp_ha8549b2d__0[6U])))))));
    __Vtemp_hd6285355__0[7U] = (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                 << 0x1fU) | ((0x40000000U 
                                               & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                  << 0x1eU)) 
                                              | ((0x20000000U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                     << 0x1dU)) 
                                                 | ((0x10000000U 
                                                     & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                        << 0x1cU)) 
                                                    | ((0x8000000U 
                                                        & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                           << 0x1bU)) 
                                                       | ((0x4000000U 
                                                           & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                              << 0x1aU)) 
                                                          | ((0x2000000U 
                                                              & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                                 << 0x19U)) 
                                                             | ((0x1000000U 
                                                                 & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                                    << 0x18U)) 
                                                                | ((0x800000U 
                                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                                       << 0x17U)) 
                                                                   | ((0x400000U 
                                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                                          << 0x16U)) 
                                                                      | __Vtemp_he1a73304__0[7U]))))))))));
    __Vtemp_hd6285355__0[8U] = ((0x80000000U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                << 0x1eU)) 
                                | ((0x40000000U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                   << 0x1dU)) 
                                   | ((0x20000000U 
                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                          << 0x1cU)) 
                                      | ((0x10000000U 
                                          & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                             << 0x1bU)) 
                                         | ((0x8000000U 
                                             & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                << 0x1aU)) 
                                            | ((0x4000000U 
                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                   << 0x19U)) 
                                               | ((0x2000000U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                      << 0x18U)) 
                                                  | ((0x1000000U 
                                                      & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                         << 0x17U)) 
                                                     | ((0x800000U 
                                                         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                            << 0x16U)) 
                                                        | __Vtemp_hf6231cbe__0[8U])))))))));
    __Vtemp_hd6285355__0[9U] = ((0x80000000U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                << 0x1cU)) 
                                | ((0x40000000U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                   << 0x1bU)) 
                                   | ((0x20000000U 
                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                          << 0x1aU)) 
                                      | ((0x10000000U 
                                          & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                             << 0x19U)) 
                                         | ((0x8000000U 
                                             & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                << 0x18U)) 
                                            | ((0x4000000U 
                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                   << 0x17U)) 
                                               | ((0x2000000U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                      << 0x16U)) 
                                                  | ((0x1000000U 
                                                      & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                         << 0x15U)) 
                                                     | ((0x800000U 
                                                         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                                            << 0x14U)) 
                                                        | __Vtemp_h5aedd816__0[9U])))))))));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_merged_slice__DOT__i_multifmt_slice__result_o 
        = ((0x10U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_aux)
            ? (((QData)((IData)(Vara_tb_verilator__ConstPool__CONST_h9e67c271_0[
                                (((IData)(0x3fU) + 
                                  (0xc0U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_aux 
                                            << 6U))) 
                                 >> 5U)])) << 0x20U) 
               | (QData)((IData)(Vara_tb_verilator__ConstPool__CONST_h9e67c271_0[
                                 (6U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_aux 
                                        << 1U))])))
            : ((0x13fU >= (0x1c0U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_aux 
                                     << 6U))) ? (((QData)((IData)(
                                                                  __Vtemp_hd6285355__0[
                                                                  (((IData)(0x3fU) 
                                                                    + 
                                                                    (0x1c0U 
                                                                     & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_aux 
                                                                        << 6U))) 
                                                                   >> 5U)])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   __Vtemp_hd6285355__0[
                                                                   (0xeU 
                                                                    & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_aux 
                                                                       << 1U))])))
                : 0ULL));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[0U] 
        = (((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_merged_slice__DOT__i_multifmt_slice__result_o) 
            << 9U) | (((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_merged_slice__DOT__i_multifmt_slice__status_o) 
                       << 4U) | ((8U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                        << 3U)) | (7U 
                                                   & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_tags)))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[1U] 
        = (((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_merged_slice__DOT__i_multifmt_slice__result_o) 
            >> 0x17U) | ((IData)((ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_merged_slice__DOT__i_multifmt_slice__result_o 
                                  >> 0x20U)) << 9U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[2U] 
        = ((Vara_tb_verilator__ConstPool__CONST_he350679e_0[0U] 
            << 9U) | ((IData)((ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_merged_slice__DOT__i_multifmt_slice__result_o 
                               >> 0x20U)) >> 0x17U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[3U] 
        = ((Vara_tb_verilator__ConstPool__CONST_he350679e_0[0U] 
            >> 0x17U) | (Vara_tb_verilator__ConstPool__CONST_he350679e_0[1U] 
                         << 9U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[4U] 
        = ((Vara_tb_verilator__ConstPool__CONST_he350679e_0[1U] 
            >> 0x17U) | (Vara_tb_verilator__ConstPool__CONST_he350679e_0[2U] 
                         << 9U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[5U] 
        = ((Vara_tb_verilator__ConstPool__CONST_he350679e_0[2U] 
            >> 0x17U) | (Vara_tb_verilator__ConstPool__CONST_he350679e_0[3U] 
                         << 9U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[6U] 
        = ((Vara_tb_verilator__ConstPool__CONST_he350679e_0[3U] 
            >> 0x17U) | (Vara_tb_verilator__ConstPool__CONST_he350679e_0[4U] 
                         << 9U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[7U] 
        = ((Vara_tb_verilator__ConstPool__CONST_he350679e_0[4U] 
            >> 0x17U) | (Vara_tb_verilator__ConstPool__CONST_he350679e_0[5U] 
                         << 9U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[8U] 
        = ((Vara_tb_verilator__ConstPool__CONST_he350679e_0[5U] 
            >> 0x17U) | (Vara_tb_verilator__ConstPool__CONST_he350679e_0[6U] 
                         << 9U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[9U] 
        = ((Vara_tb_verilator__ConstPool__CONST_he350679e_0[6U] 
            >> 0x17U) | (Vara_tb_verilator__ConstPool__CONST_he350679e_0[7U] 
                         << 9U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[0xaU] 
        = ((Vara_tb_verilator__ConstPool__CONST_he350679e_0[7U] 
            >> 0x17U) | (Vara_tb_verilator__ConstPool__CONST_he350679e_0[8U] 
                         << 9U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__1__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[0xbU] 
        = ((Vara_tb_verilator__ConstPool__CONST_he350679e_0[8U] 
            >> 0x17U) | (Vara_tb_verilator__ConstPool__CONST_he350679e_0[9U] 
                         << 9U));
}

VL_INLINE_OPT void Vara_tb_verilator___024root___nba_comb__TOP__572(Vara_tb_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___nba_comb__TOP__572\n"); );
    // Init
    IData/*19:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_status;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_status = 0;
    CData/*4:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__output_processing__DOT__temp_status;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__output_processing__DOT__temp_status = 0;
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_regular_status 
        = ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_src_is_int_q) 
             & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_before_round) 
                | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_after_round))) 
            << 4U) | ((((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_src_is_int_q)) 
                        & ((~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q) 
                               >> 4U)) & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_before_round) 
                                          | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_after_round)))) 
                       << 2U) | (((((4U >= (7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q))) 
                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fmt_uf_after_round) 
                                       >> (7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_fmt_q)))) 
                                   & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_regular_status)) 
                                  << 1U) | ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_src_is_int_q))
                                             ? (0U 
                                                != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_round_sticky_bits))
                                             : ((0U 
                                                 != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_round_sticky_bits)) 
                                                | ((~ 
                                                    ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q) 
                                                     >> 4U)) 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_before_round) 
                                                      | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__of_after_round))))))));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_status 
        = ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_valid_q))
            ? ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_dst_is_int_q))
                ? ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_result_is_special)
                    ? 0x10U : (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__int_round_sticky_bits)))
                : ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_result_is_special)
                    ? (0x10U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__mid_pipe_info_q) 
                                << 2U)) : (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__gen_num_lanes__BRA__0__KET____DOT__active_lane__DOT__lane_instance__DOT__i_fpnew_cast_multi__DOT__fp_regular_status)))
            : 0U);
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__output_processing__DOT__temp_status 
        = (0x1fU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_status 
                    & (- (IData)((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_masks))))));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__output_processing__DOT__temp_status 
        = (0x1fU & ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__output_processing__DOT__temp_status) 
                    | ((ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_status 
                        >> 5U) & (- (IData)((1U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_masks) 
                                                   >> 1U)))))));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__output_processing__DOT__temp_status 
        = (0x1fU & ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__output_processing__DOT__temp_status) 
                    | ((ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_status 
                        >> 0xaU) & (- (IData)((1U & 
                                               ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_masks) 
                                                >> 2U)))))));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__output_processing__DOT__temp_status 
        = (0x1fU & ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__output_processing__DOT__temp_status) 
                    | ((ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_status 
                        >> 0xfU) & (- (IData)((1U & 
                                               ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_masks) 
                                                >> 3U)))))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_merged_slice__DOT__i_multifmt_slice__status_o 
        = ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__output_processing__DOT__temp_status;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[0U] 
        = (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_merged_slice__DOT__i_multifmt_slice__result_o) 
            << 9U) | (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_merged_slice__DOT__i_multifmt_slice__status_o) 
                       << 4U) | ((8U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_ext_bit) 
                                        << 3U)) | (7U 
                                                   & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT__gen_merged_slice__DOT__i_multifmt_slice__DOT__lane_tags)))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[1U] 
        = (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_merged_slice__DOT__i_multifmt_slice__result_o) 
            >> 0x17U) | ((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_merged_slice__DOT__i_multifmt_slice__result_o 
                                  >> 0x20U)) << 9U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[2U] 
        = ((Vara_tb_verilator__ConstPool__CONST_he350679e_0[0U] 
            << 9U) | ((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT____Vcellout__gen_merged_slice__DOT__i_multifmt_slice__result_o 
                               >> 0x20U)) >> 0x17U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[3U] 
        = ((Vara_tb_verilator__ConstPool__CONST_he350679e_0[0U] 
            >> 0x17U) | (Vara_tb_verilator__ConstPool__CONST_he350679e_0[1U] 
                         << 9U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[4U] 
        = ((Vara_tb_verilator__ConstPool__CONST_he350679e_0[1U] 
            >> 0x17U) | (Vara_tb_verilator__ConstPool__CONST_he350679e_0[2U] 
                         << 9U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[5U] 
        = ((Vara_tb_verilator__ConstPool__CONST_he350679e_0[2U] 
            >> 0x17U) | (Vara_tb_verilator__ConstPool__CONST_he350679e_0[3U] 
                         << 9U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[6U] 
        = ((Vara_tb_verilator__ConstPool__CONST_he350679e_0[3U] 
            >> 0x17U) | (Vara_tb_verilator__ConstPool__CONST_he350679e_0[4U] 
                         << 9U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[7U] 
        = ((Vara_tb_verilator__ConstPool__CONST_he350679e_0[4U] 
            >> 0x17U) | (Vara_tb_verilator__ConstPool__CONST_he350679e_0[5U] 
                         << 9U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[8U] 
        = ((Vara_tb_verilator__ConstPool__CONST_he350679e_0[5U] 
            >> 0x17U) | (Vara_tb_verilator__ConstPool__CONST_he350679e_0[6U] 
                         << 9U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[9U] 
        = ((Vara_tb_verilator__ConstPool__CONST_he350679e_0[6U] 
            >> 0x17U) | (Vara_tb_verilator__ConstPool__CONST_he350679e_0[7U] 
                         << 9U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[0xaU] 
        = ((Vara_tb_verilator__ConstPool__CONST_he350679e_0[7U] 
            >> 0x17U) | (Vara_tb_verilator__ConstPool__CONST_he350679e_0[8U] 
                         << 9U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__fpu_gen__DOT__fpu_i__DOT__fpu_gen__DOT__i_fpnew_bulk__DOT__gen_operation_groups__BRA__3__KET____DOT__i_opgroup_block__DOT____Vcellinp__i_arbiter__data_i[0xbU] 
        = ((Vara_tb_verilator__ConstPool__CONST_he350679e_0[8U] 
            >> 0x17U) | (Vara_tb_verilator__ConstPool__CONST_he350679e_0[9U] 
                         << 9U));
}

VL_INLINE_OPT void Vara_tb_verilator___024root___nba_comb__TOP__586(Vara_tb_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___nba_comb__TOP__586\n"); );
    // Init
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__fetch_ready_id_if;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__fetch_ready_id_if = 0;
    CData/*1:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__pop_instr;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__pop_instr = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__pop_address;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__pop_address = 0;
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_ack_iro_sb = 0U;
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_valid_sb_iro) {
        if ((1U & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__stall)) 
                   & (~ ((0x800000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U])
                          ? (IData)(((0U == (0x600000U 
                                             & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U])) 
                                     & ((0x100000U 
                                         & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U])
                                         ? (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__x_issue_ready_ex_id))
                                         : (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__fpu_ready_ex_id)))))
                          : ((0x400000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U])
                              ? ((0x200000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U])
                                  ? ((0x100000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U])
                                      ? (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__fpu_ready_ex_id))
                                      : (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__flu_ready_ex_id)))
                                  : (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__flu_ready_ex_id)))
                              : ((0x200000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U])
                                  ? ((0x100000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U])
                                      ? (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__flu_ready_ex_id))
                                      : (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_bypass_i__DOT__status_cnt_q)))
                                  : ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                      >> 0x14U) & (0U 
                                                   != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_bypass_i__DOT__status_cnt_q)))))))))) {
            vlSelf->__Vfunc_is_rd_fpr__106__op = (0xffU 
                                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                                     >> 0xcU));
            {
                if (((((((((((0x51U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__106__op)) 
                             & (0x54U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__106__op))) 
                            | ((0x59U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__106__op)) 
                               & (0x62U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__106__op)))) 
                           | (0x64U == (IData)(vlSelf->__Vfunc_is_rd_fpr__106__op))) 
                          | (0x65U == (IData)(vlSelf->__Vfunc_is_rd_fpr__106__op))) 
                         | (0x66U == (IData)(vlSelf->__Vfunc_is_rd_fpr__106__op))) 
                        | (0x68U == (IData)(vlSelf->__Vfunc_is_rd_fpr__106__op))) 
                       | ((0x6bU <= (IData)(vlSelf->__Vfunc_is_rd_fpr__106__op)) 
                          & (0x6fU >= (IData)(vlSelf->__Vfunc_is_rd_fpr__106__op)))) 
                      | ((0x76U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__106__op)) 
                         & (0x79U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__106__op)))) 
                     | (0xa8U == (IData)(vlSelf->__Vfunc_is_rd_fpr__106__op)))) {
                    vlSelf->__Vfunc_is_rd_fpr__106__Vfuncout = 1U;
                    goto __Vlabel748;
                } else {
                    vlSelf->__Vfunc_is_rd_fpr__106__Vfuncout = 0U;
                    goto __Vlabel748;
                }
                __Vlabel748: ;
            }
            if (((IData)(vlSelf->__Vfunc_is_rd_fpr__106__Vfuncout)
                  ? (0U == (0xfU & (((0U == (0x1cU 
                                             & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x10U] 
                                                >> 0x18U)))
                                      ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellinp__i_issue_read_operands__rd_clobber_fpr_i[
                                              (((IData)(3U) 
                                                + (0xfcU 
                                                   & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x10U] 
                                                      >> 0x18U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1cU 
                                                   & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x10U] 
                                                      >> 0x18U))))) 
                                    | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellinp__i_issue_read_operands__rd_clobber_fpr_i[
                                       (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x10U] 
                                        >> 0x1dU)] 
                                       >> (0x1cU & 
                                           (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x10U] 
                                            >> 0x18U))))))
                  : (0U == (0xfU & (((0U == (0x1cU 
                                             & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x10U] 
                                                >> 0x18U)))
                                      ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellinp__i_issue_read_operands__rd_clobber_gpr_i[
                                              (((IData)(3U) 
                                                + (0xfcU 
                                                   & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x10U] 
                                                      >> 0x18U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1cU 
                                                   & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x10U] 
                                                      >> 0x18U))))) 
                                    | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellinp__i_issue_read_operands__rd_clobber_gpr_i[
                                       (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x10U] 
                                        >> 0x1dU)] 
                                       >> (0x1cU & 
                                           (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x10U] 
                                            >> 0x18U)))))))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_ack_iro_sb = 1U;
            }
            vlSelf->__Vfunc_is_rd_fpr__107__op = (0xffU 
                                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                                     >> 0xcU));
            {
                if (((((((((((0x51U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__107__op)) 
                             & (0x54U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__107__op))) 
                            | ((0x59U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__107__op)) 
                               & (0x62U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__107__op)))) 
                           | (0x64U == (IData)(vlSelf->__Vfunc_is_rd_fpr__107__op))) 
                          | (0x65U == (IData)(vlSelf->__Vfunc_is_rd_fpr__107__op))) 
                         | (0x66U == (IData)(vlSelf->__Vfunc_is_rd_fpr__107__op))) 
                        | (0x68U == (IData)(vlSelf->__Vfunc_is_rd_fpr__107__op))) 
                       | ((0x6bU <= (IData)(vlSelf->__Vfunc_is_rd_fpr__107__op)) 
                          & (0x6fU >= (IData)(vlSelf->__Vfunc_is_rd_fpr__107__op)))) 
                      | ((0x76U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__107__op)) 
                         & (0x79U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__107__op)))) 
                     | (0xa8U == (IData)(vlSelf->__Vfunc_is_rd_fpr__107__op)))) {
                    vlSelf->__Vfunc_is_rd_fpr__107__Vfuncout = 1U;
                    goto __Vlabel749;
                } else {
                    vlSelf->__Vfunc_is_rd_fpr__107__Vfuncout = 0U;
                    goto __Vlabel749;
                }
                __Vlabel749: ;
            }
            if (((IData)(vlSelf->__Vfunc_is_rd_fpr__107__Vfuncout)
                  ? ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__we_fpr_commit_id) 
                     & ((0x1fU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellinp__i_issue_read_operands__waddr_i)) 
                        == (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x10U] 
                            >> 0x1aU))) : ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__we_gpr_commit_id) 
                                           & ((0x1fU 
                                               & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellinp__i_issue_read_operands__waddr_i)) 
                                              == (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x10U] 
                                                  >> 0x1aU))))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_ack_iro_sb = 1U;
            }
            vlSelf->__Vfunc_is_rd_fpr__107__op = (0xffU 
                                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                                     >> 0xcU));
            {
                if (((((((((((0x51U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__107__op)) 
                             & (0x54U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__107__op))) 
                            | ((0x59U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__107__op)) 
                               & (0x62U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__107__op)))) 
                           | (0x64U == (IData)(vlSelf->__Vfunc_is_rd_fpr__107__op))) 
                          | (0x65U == (IData)(vlSelf->__Vfunc_is_rd_fpr__107__op))) 
                         | (0x66U == (IData)(vlSelf->__Vfunc_is_rd_fpr__107__op))) 
                        | (0x68U == (IData)(vlSelf->__Vfunc_is_rd_fpr__107__op))) 
                       | ((0x6bU <= (IData)(vlSelf->__Vfunc_is_rd_fpr__107__op)) 
                          & (0x6fU >= (IData)(vlSelf->__Vfunc_is_rd_fpr__107__op)))) 
                      | ((0x76U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__107__op)) 
                         & (0x79U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__107__op)))) 
                     | (0xa8U == (IData)(vlSelf->__Vfunc_is_rd_fpr__107__op)))) {
                    vlSelf->__Vfunc_is_rd_fpr__107__Vfuncout = 1U;
                    goto __Vlabel750;
                } else {
                    vlSelf->__Vfunc_is_rd_fpr__107__Vfuncout = 0U;
                    goto __Vlabel750;
                }
                __Vlabel750: ;
            }
            if (((IData)(vlSelf->__Vfunc_is_rd_fpr__107__Vfuncout)
                  ? (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__we_fpr_commit_id) 
                      >> 1U) & ((0x1fU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellinp__i_issue_read_operands__waddr_i) 
                                          >> 5U)) == 
                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x10U] 
                                 >> 0x1aU))) : (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__we_gpr_commit_id) 
                                                 >> 1U) 
                                                & ((0x1fU 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT____Vcellinp__i_issue_read_operands__waddr_i) 
                                                       >> 5U)) 
                                                   == 
                                                   (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x10U] 
                                                    >> 0x1aU))))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_ack_iro_sb = 1U;
            }
        }
        if ((0x200000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0xaU])) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_ack_iro_sb = 1U;
        }
        if ((0U == (0xfU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                            >> 0x14U)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_ack_iro_sb = 1U;
        }
    }
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__mult_valid_q) 
         & (((3U == (0xfU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                             >> 0x14U))) | (4U == (0xfU 
                                                   & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                                      >> 0x14U)))) 
            | (6U == (0xfU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                              >> 0x14U)))))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_ack_iro_sb = 0U;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_valid_d 
        = ((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0xaU] 
               >> 0x15U)) & (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_ack_iro_sb) 
                              & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_valid_sb_iro)) 
                             & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__flush_unissued_instr_ctrl_id)) 
                                & (0xa00000U == (0xf00000U 
                                                 & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U])))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_ack_sb_rename 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_ack_iro_sb) 
           & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__issue_cnt_q) 
                 >> 3U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_spec_loads__DOT__i_counter__DOT__counter_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_spec_loads__DOT__i_counter__DOT__counter_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_spec_stores__DOT__i_counter__DOT__counter_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_spec_stores__DOT__i_counter__DOT__counter_q;
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__flush_ctrl_ex) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_spec_loads__DOT__i_counter__DOT__counter_d = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_spec_stores__DOT__i_counter__DOT__counter_d = 0U;
    } else {
        if ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_valid_d) 
              & (0xa9000U == (0xff000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U]))) 
             ^ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_ld_disp))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_spec_loads__DOT__i_counter__DOT__counter_d 
                = (0xfU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_ld_disp)
                            ? ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_spec_loads__DOT__i_counter__DOT__counter_q) 
                               - (IData)(1U)) : ((IData)(1U) 
                                                 + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_spec_loads__DOT__i_counter__DOT__counter_q))));
        }
        if ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_valid_d) 
              & (0xaa000U == (0xff000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U]))) 
             ^ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_st_disp))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_spec_stores__DOT__i_counter__DOT__counter_d 
                = (0xfU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__acc_st_disp)
                            ? ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_spec_stores__DOT__i_counter__DOT__counter_q) 
                               - (IData)(1U)) : ((IData)(1U) 
                                                 + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__gen_accelerator__DOT__i_acc_dispatcher__DOT__i_acc_spec_stores__DOT__i_counter__DOT__counter_q))));
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_n[0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_n[1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_n[2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_n[3U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[3U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_n[4U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[4U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_n[5U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[5U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_n[6U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[6U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_n[7U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[7U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_n[8U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[8U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_n[9U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[9U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_n[0xaU] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[0xaU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_n[0xbU] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[0xbU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_n[0xcU] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[0xcU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_n[0xdU] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[0xdU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_n[0xeU] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[0xeU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_n[0xfU] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[0xfU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_n[0x10U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[0x10U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_n[0x11U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[0x11U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_n[0x12U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[0x12U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_n[0x13U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[0x13U];
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_ack_sb_rename) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_n[0x13U] 
            = (0xfffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_n[0x13U]);
    }
    if ((1U & (((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[0x13U] 
                    >> 0x1cU)) | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_ack_sb_rename)) 
               & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__gen_perf_counter__DOT__perf_counters_i__if_empty_i))))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_n[0U] 
            = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__decoded_instruction[0U] 
                << 1U) | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__is_control_flow_instr));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_n[1U] 
            = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__decoded_instruction[0U] 
                >> 0x1fU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__decoded_instruction[1U] 
                             << 1U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_n[2U] 
            = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__decoded_instruction[1U] 
                >> 0x1fU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__decoded_instruction[2U] 
                             << 1U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_n[3U] 
            = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__decoded_instruction[2U] 
                >> 0x1fU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__decoded_instruction[3U] 
                             << 1U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_n[4U] 
            = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__decoded_instruction[3U] 
                >> 0x1fU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__decoded_instruction[4U] 
                             << 1U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_n[5U] 
            = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__decoded_instruction[4U] 
                >> 0x1fU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__decoded_instruction[5U] 
                             << 1U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_n[6U] 
            = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__decoded_instruction[5U] 
                >> 0x1fU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__decoded_instruction[6U] 
                             << 1U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_n[7U] 
            = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__decoded_instruction[6U] 
                >> 0x1fU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__decoded_instruction[7U] 
                             << 1U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_n[8U] 
            = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__decoded_instruction[7U] 
                >> 0x1fU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__decoded_instruction[8U] 
                             << 1U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_n[9U] 
            = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__decoded_instruction[8U] 
                >> 0x1fU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__decoded_instruction[9U] 
                             << 1U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_n[0xaU] 
            = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__decoded_instruction[9U] 
                >> 0x1fU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__decoded_instruction[0xaU] 
                             << 1U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_n[0xbU] 
            = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__decoded_instruction[0xaU] 
                >> 0x1fU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__decoded_instruction[0xbU] 
                             << 1U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_n[0xcU] 
            = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__decoded_instruction[0xbU] 
                >> 0x1fU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__decoded_instruction[0xcU] 
                             << 1U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_n[0xdU] 
            = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__decoded_instruction[0xcU] 
                >> 0x1fU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__decoded_instruction[0xdU] 
                             << 1U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_n[0xeU] 
            = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__decoded_instruction[0xdU] 
                >> 0x1fU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__decoded_instruction[0xeU] 
                             << 1U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_n[0xfU] 
            = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__decoded_instruction[0xeU] 
                >> 0x1fU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__decoded_instruction[0xfU] 
                             << 1U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_n[0x10U] 
            = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__decoded_instruction[0xfU] 
                >> 0x1fU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__decoded_instruction[0x10U] 
                             << 1U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_n[0x11U] 
            = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__decoded_instruction[0x10U] 
                >> 0x1fU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__decoded_instruction[0x11U] 
                             << 1U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_n[0x12U] 
            = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__decoded_instruction[0x11U] 
                >> 0x1fU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__decoded_instruction[0x12U] 
                             << 1U));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_n[0x13U] 
            = (0x10000000U | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__decoded_instruction[0x12U] 
                               >> 0x1fU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__decoded_instruction[0x13U] 
                                            << 1U)));
    }
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__flush_ctrl_if) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_n[0x13U] 
            = (0xfffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_n[0x13U]);
    }
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__fetch_ready_id_if = 0U;
    if ((1U & (((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[0x13U] 
                    >> 0x1cU)) | (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_ack_sb_rename)) 
               & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__gen_perf_counter__DOT__perf_counters_i__if_empty_i))))) {
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__fetch_ready_id_if = 1U;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__idx_ds_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__idx_ds_q;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__pop_instr = 0U;
    if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__idx_ds_q))) {
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__pop_instr 
            = ((2U & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__pop_instr)) 
               | ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__gen_perf_counter__DOT__perf_counters_i__if_empty_i)) 
                  & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__fetch_ready_id_if)));
    }
    if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__idx_ds_q))) {
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__pop_instr 
            = ((1U & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__pop_instr)) 
               | (((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__gen_perf_counter__DOT__perf_counters_i__if_empty_i)) 
                   & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__fetch_ready_id_if)) 
                  << 1U));
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__0__KET____DOT__i_fifo_instr_data__DOT__read_pointer_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__0__KET____DOT__i_fifo_instr_data__DOT__read_pointer_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__0__KET____DOT__i_fifo_instr_data__DOT__status_cnt_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__0__KET____DOT__i_fifo_instr_data__DOT__status_cnt_q;
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT____Vcellinp__gen_instr_fifo__BRA__0__KET____DOT__i_fifo_instr_data__push_i) 
         & (4U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__0__KET____DOT__i_fifo_instr_data__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__0__KET____DOT__i_fifo_instr_data__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__0__KET____DOT__i_fifo_instr_data__DOT__status_cnt_q)));
    }
    if (((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__pop_instr) 
         & (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__0__KET____DOT__i_fifo_instr_data__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__0__KET____DOT__i_fifo_instr_data__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__0__KET____DOT__i_fifo_instr_data__DOT__read_pointer_q)));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__0__KET____DOT__i_fifo_instr_data__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__0__KET____DOT__i_fifo_instr_data__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT____Vcellinp__gen_instr_fifo__BRA__0__KET____DOT__i_fifo_instr_data__push_i) 
           & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__pop_instr)) 
          & (4U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__0__KET____DOT__i_fifo_instr_data__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__0__KET____DOT__i_fifo_instr_data__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__0__KET____DOT__i_fifo_instr_data__DOT__status_cnt_n 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__0__KET____DOT__i_fifo_instr_data__DOT__status_cnt_q;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__1__KET____DOT__i_fifo_instr_data__DOT__read_pointer_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__1__KET____DOT__i_fifo_instr_data__DOT__read_pointer_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__1__KET____DOT__i_fifo_instr_data__DOT__status_cnt_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__1__KET____DOT__i_fifo_instr_data__DOT__status_cnt_q;
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT____Vcellinp__gen_instr_fifo__BRA__1__KET____DOT__i_fifo_instr_data__push_i) 
         & (4U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__1__KET____DOT__i_fifo_instr_data__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__1__KET____DOT__i_fifo_instr_data__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__1__KET____DOT__i_fifo_instr_data__DOT__status_cnt_q)));
    }
    if ((((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__pop_instr) 
          >> 1U) & (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__1__KET____DOT__i_fifo_instr_data__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__1__KET____DOT__i_fifo_instr_data__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__1__KET____DOT__i_fifo_instr_data__DOT__read_pointer_q)));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__1__KET____DOT__i_fifo_instr_data__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__1__KET____DOT__i_fifo_instr_data__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT____Vcellinp__gen_instr_fifo__BRA__1__KET____DOT__i_fifo_instr_data__push_i) 
           & ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__pop_instr) 
              >> 1U)) & (4U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__1__KET____DOT__i_fifo_instr_data__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__1__KET____DOT__i_fifo_instr_data__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__1__KET____DOT__i_fifo_instr_data__DOT__status_cnt_n 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__gen_instr_fifo__BRA__1__KET____DOT__i_fifo_instr_data__DOT__status_cnt_q;
    }
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__pop_address 
        = ((0U != (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__fetch_entry_if_id[6U] 
                         >> 1U))) & (0U != (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__pop_instr)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__i_fifo_address__DOT__read_pointer_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__i_fifo_address__DOT__read_pointer_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__i_fifo_address__DOT__status_cnt_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__i_fifo_address__DOT__status_cnt_q;
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT____Vcellinp__i_fifo_address__push_i) 
         & (4U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__i_fifo_address__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__i_fifo_address__DOT__status_cnt_n 
            = (7U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__i_fifo_address__DOT__status_cnt_q)));
    }
    if (((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__pop_address) 
         & (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__i_fifo_address__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__i_fifo_address__DOT__read_pointer_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__i_fifo_address__DOT__read_pointer_q)));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__i_fifo_address__DOT__status_cnt_n 
            = (7U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__i_fifo_address__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT____Vcellinp__i_fifo_address__push_i) 
           & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__pop_address)) 
          & (4U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__i_fifo_address__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__i_fifo_address__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__i_fifo_address__DOT__status_cnt_n 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__i_fifo_address__DOT__status_cnt_q;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__pc_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__pc_q;
    if (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__fetch_ready_id_if) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__idx_ds_d 
            = ((2U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__idx_ds_q) 
                      << 1U)) | (1U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__idx_ds_q) 
                                       >> 1U)));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__pc_d 
            = (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__pc_q 
               + ((3U != (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__fetch_entry_if_id[6U] 
                                >> 4U))) ? 2ULL : 4ULL));
    }
    if (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__pop_address) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__pc_d 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT____Vcellout__i_fifo_address__data_o;
    }
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__instruction_valid) 
         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__reset_address_q))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT__i_instr_queue__DOT__pc_d 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_realign__addr_o[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__i_frontend__DOT____Vcellout__i_instr_realign__addr_o[0U])));
    }
}

VL_INLINE_OPT void Vara_tb_verilator___024root___nba_comb__TOP__588(Vara_tb_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___nba_comb__TOP__588\n"); );
    // Init
    CData/*7:0*/ __Vfunc_is_imm_fpr__60__op;
    __Vfunc_is_imm_fpr__60__op = 0;
    CData/*7:0*/ __Vfunc_is_imm_fpr__63__op;
    __Vfunc_is_imm_fpr__63__op = 0;
    CData/*7:0*/ __Vfunc_is_imm_fpr__66__op;
    __Vfunc_is_imm_fpr__66__op = 0;
    CData/*7:0*/ __Vfunc_is_imm_fpr__69__op;
    __Vfunc_is_imm_fpr__69__op = 0;
    CData/*7:0*/ __Vfunc_is_imm_fpr__72__op;
    __Vfunc_is_imm_fpr__72__op = 0;
    SData/*31:0*/ __Vtemp_hc4e040a5__0;
    // Body
    __Vfunc_is_imm_fpr__60__op = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                           >> 0xcU));
    {
        if (((((0x59U <= (IData)(__Vfunc_is_imm_fpr__60__op)) 
               & (0x5aU >= (IData)(__Vfunc_is_imm_fpr__60__op))) 
              | ((0x5fU <= (IData)(__Vfunc_is_imm_fpr__60__op)) 
                 & (0x62U >= (IData)(__Vfunc_is_imm_fpr__60__op)))) 
             | ((0x76U <= (IData)(__Vfunc_is_imm_fpr__60__op)) 
                & (0x79U >= (IData)(__Vfunc_is_imm_fpr__60__op))))) {
            vlSelf->__Vfunc_is_imm_fpr__60__Vfuncout = 1U;
            goto __Vlabel751;
        } else {
            vlSelf->__Vfunc_is_imm_fpr__60__Vfuncout = 0U;
            goto __Vlabel751;
        }
        __Vlabel751: ;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req 
        = ((0x1ffeU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req)) 
           | ((((((0x13e7U >= ((IData)(0x21aU) + (0x1fffU 
                                                  & ((IData)(0x27dU) 
                                                     * 
                                                     (7U 
                                                      & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i))))))
                   ? (0x3fU & (((0U == (0x1fU & ((IData)(0x21aU) 
                                                 + 
                                                 (0x1fffU 
                                                  & ((IData)(0x27dU) 
                                                     * 
                                                     (7U 
                                                      & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i)))))))
                                 ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                         (((IData)(0x21fU) 
                                           + (0x1fffU 
                                              & ((IData)(0x27dU) 
                                                 * 
                                                 (7U 
                                                  & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i))))) 
                                          >> 5U)] << 
                                         ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x21aU) 
                                                + (0x1fffU 
                                                   & ((IData)(0x27dU) 
                                                      * 
                                                      (7U 
                                                       & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i))))))))) 
                               | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                  (((IData)(0x21aU) 
                                    + (0x1fffU & ((IData)(0x27dU) 
                                                  * 
                                                  (7U 
                                                   & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i))))) 
                                   >> 5U)] >> (0x1fU 
                                               & ((IData)(0x21aU) 
                                                  + 
                                                  (0x1fffU 
                                                   & ((IData)(0x27dU) 
                                                      * 
                                                      (7U 
                                                       & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i)))))))))
                   : 0U) == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__rs3_iro_sb)) 
                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__wt_valid_ex_id)) 
               & (~ vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[0U])) 
              & (((0x13e7U >= ((IData)(0x27bU) + (0x1fffU 
                                                  & ((IData)(0x27dU) 
                                                     * 
                                                     (7U 
                                                      & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i)))))) 
                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                     (((IData)(0x27bU) + (0x1fffU & 
                                          ((IData)(0x27dU) 
                                           * (7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i))))) 
                      >> 5U)] >> (0x1fU & ((IData)(0x27bU) 
                                           + (0x1fffU 
                                              & ((IData)(0x27dU) 
                                                 * 
                                                 (7U 
                                                  & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i)))))))) 
                 == (IData)(vlSelf->__Vfunc_is_imm_fpr__60__Vfuncout))));
    __Vfunc_is_imm_fpr__63__op = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                           >> 0xcU));
    {
        if (((((0x59U <= (IData)(__Vfunc_is_imm_fpr__63__op)) 
               & (0x5aU >= (IData)(__Vfunc_is_imm_fpr__63__op))) 
              | ((0x5fU <= (IData)(__Vfunc_is_imm_fpr__63__op)) 
                 & (0x62U >= (IData)(__Vfunc_is_imm_fpr__63__op)))) 
             | ((0x76U <= (IData)(__Vfunc_is_imm_fpr__63__op)) 
                & (0x79U >= (IData)(__Vfunc_is_imm_fpr__63__op))))) {
            vlSelf->__Vfunc_is_imm_fpr__63__Vfuncout = 1U;
            goto __Vlabel752;
        } else {
            vlSelf->__Vfunc_is_imm_fpr__63__Vfuncout = 0U;
            goto __Vlabel752;
        }
        __Vlabel752: ;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req 
        = ((0x1ffdU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req)) 
           | (0xfffffffeU & (((((((0x13e7U >= ((IData)(0x21aU) 
                                               + (0x1fffU 
                                                  & ((IData)(0x27dU) 
                                                     * 
                                                     (7U 
                                                      & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                         >> 3U))))))
                                   ? (0x3fU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(0x21aU) 
                                                     + 
                                                     (0x1fffU 
                                                      & ((IData)(0x27dU) 
                                                         * 
                                                         (7U 
                                                          & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                             >> 3U)))))))
                                                 ? 0U
                                                 : 
                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                 (((IData)(0x21fU) 
                                                   + 
                                                   (0x1fffU 
                                                    & ((IData)(0x27dU) 
                                                       * 
                                                       (7U 
                                                        & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                           >> 3U))))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x21aU) 
                                                      + 
                                                      (0x1fffU 
                                                       & ((IData)(0x27dU) 
                                                          * 
                                                          (7U 
                                                           & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                              >> 3U))))))))) 
                                               | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                  (((IData)(0x21aU) 
                                                    + 
                                                    (0x1fffU 
                                                     & ((IData)(0x27dU) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                            >> 3U))))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x21aU) 
                                                      + 
                                                      (0x1fffU 
                                                       & ((IData)(0x27dU) 
                                                          * 
                                                          (7U 
                                                           & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                              >> 3U)))))))))
                                   : 0U) == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__rs3_iro_sb)) 
                                << 1U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__wt_valid_ex_id)) 
                              & ((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[4U] 
                                     >> 1U)) << 1U)) 
                             & ((((0x13e7U >= ((IData)(0x27bU) 
                                               + (0x1fffU 
                                                  & ((IData)(0x27dU) 
                                                     * 
                                                     (7U 
                                                      & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                         >> 3U)))))) 
                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                     (((IData)(0x27bU) 
                                       + (0x1fffU & 
                                          ((IData)(0x27dU) 
                                           * (7U & 
                                              ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                               >> 3U))))) 
                                      >> 5U)] >> (0x1fU 
                                                  & ((IData)(0x27bU) 
                                                     + 
                                                     (0x1fffU 
                                                      & ((IData)(0x27dU) 
                                                         * 
                                                         (7U 
                                                          & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                             >> 3U)))))))) 
                                 == (IData)(vlSelf->__Vfunc_is_imm_fpr__63__Vfuncout)) 
                                << 1U))));
    __Vfunc_is_imm_fpr__66__op = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                           >> 0xcU));
    {
        if (((((0x59U <= (IData)(__Vfunc_is_imm_fpr__66__op)) 
               & (0x5aU >= (IData)(__Vfunc_is_imm_fpr__66__op))) 
              | ((0x5fU <= (IData)(__Vfunc_is_imm_fpr__66__op)) 
                 & (0x62U >= (IData)(__Vfunc_is_imm_fpr__66__op)))) 
             | ((0x76U <= (IData)(__Vfunc_is_imm_fpr__66__op)) 
                & (0x79U >= (IData)(__Vfunc_is_imm_fpr__66__op))))) {
            vlSelf->__Vfunc_is_imm_fpr__66__Vfuncout = 1U;
            goto __Vlabel753;
        } else {
            vlSelf->__Vfunc_is_imm_fpr__66__Vfuncout = 0U;
            goto __Vlabel753;
        }
        __Vlabel753: ;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req 
        = ((0x1ffbU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req)) 
           | (0xfffffffcU & (((((((0x13e7U >= ((IData)(0x21aU) 
                                               + (0x1fffU 
                                                  & ((IData)(0x27dU) 
                                                     * 
                                                     (7U 
                                                      & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                         >> 6U))))))
                                   ? (0x3fU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(0x21aU) 
                                                     + 
                                                     (0x1fffU 
                                                      & ((IData)(0x27dU) 
                                                         * 
                                                         (7U 
                                                          & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                             >> 6U)))))))
                                                 ? 0U
                                                 : 
                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                 (((IData)(0x21fU) 
                                                   + 
                                                   (0x1fffU 
                                                    & ((IData)(0x27dU) 
                                                       * 
                                                       (7U 
                                                        & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                           >> 6U))))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x21aU) 
                                                      + 
                                                      (0x1fffU 
                                                       & ((IData)(0x27dU) 
                                                          * 
                                                          (7U 
                                                           & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                              >> 6U))))))))) 
                                               | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                  (((IData)(0x21aU) 
                                                    + 
                                                    (0x1fffU 
                                                     & ((IData)(0x27dU) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                            >> 6U))))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x21aU) 
                                                      + 
                                                      (0x1fffU 
                                                       & ((IData)(0x27dU) 
                                                          * 
                                                          (7U 
                                                           & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                              >> 6U)))))))))
                                   : 0U) == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__rs3_iro_sb)) 
                                << 2U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__wt_valid_ex_id)) 
                              & ((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[8U] 
                                     >> 2U)) << 2U)) 
                             & ((((0x13e7U >= ((IData)(0x27bU) 
                                               + (0x1fffU 
                                                  & ((IData)(0x27dU) 
                                                     * 
                                                     (7U 
                                                      & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                         >> 6U)))))) 
                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                     (((IData)(0x27bU) 
                                       + (0x1fffU & 
                                          ((IData)(0x27dU) 
                                           * (7U & 
                                              ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                               >> 6U))))) 
                                      >> 5U)] >> (0x1fU 
                                                  & ((IData)(0x27bU) 
                                                     + 
                                                     (0x1fffU 
                                                      & ((IData)(0x27dU) 
                                                         * 
                                                         (7U 
                                                          & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                             >> 6U)))))))) 
                                 == (IData)(vlSelf->__Vfunc_is_imm_fpr__66__Vfuncout)) 
                                << 2U))));
    __Vfunc_is_imm_fpr__69__op = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                           >> 0xcU));
    {
        if (((((0x59U <= (IData)(__Vfunc_is_imm_fpr__69__op)) 
               & (0x5aU >= (IData)(__Vfunc_is_imm_fpr__69__op))) 
              | ((0x5fU <= (IData)(__Vfunc_is_imm_fpr__69__op)) 
                 & (0x62U >= (IData)(__Vfunc_is_imm_fpr__69__op)))) 
             | ((0x76U <= (IData)(__Vfunc_is_imm_fpr__69__op)) 
                & (0x79U >= (IData)(__Vfunc_is_imm_fpr__69__op))))) {
            vlSelf->__Vfunc_is_imm_fpr__69__Vfuncout = 1U;
            goto __Vlabel754;
        } else {
            vlSelf->__Vfunc_is_imm_fpr__69__Vfuncout = 0U;
            goto __Vlabel754;
        }
        __Vlabel754: ;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req 
        = ((0x1ff7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req)) 
           | (0xfffffff8U & (((((((0x13e7U >= ((IData)(0x21aU) 
                                               + (0x1fffU 
                                                  & ((IData)(0x27dU) 
                                                     * 
                                                     (7U 
                                                      & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                         >> 9U))))))
                                   ? (0x3fU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(0x21aU) 
                                                     + 
                                                     (0x1fffU 
                                                      & ((IData)(0x27dU) 
                                                         * 
                                                         (7U 
                                                          & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                             >> 9U)))))))
                                                 ? 0U
                                                 : 
                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                 (((IData)(0x21fU) 
                                                   + 
                                                   (0x1fffU 
                                                    & ((IData)(0x27dU) 
                                                       * 
                                                       (7U 
                                                        & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                           >> 9U))))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x21aU) 
                                                      + 
                                                      (0x1fffU 
                                                       & ((IData)(0x27dU) 
                                                          * 
                                                          (7U 
                                                           & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                              >> 9U))))))))) 
                                               | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                  (((IData)(0x21aU) 
                                                    + 
                                                    (0x1fffU 
                                                     & ((IData)(0x27dU) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                            >> 9U))))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x21aU) 
                                                      + 
                                                      (0x1fffU 
                                                       & ((IData)(0x27dU) 
                                                          * 
                                                          (7U 
                                                           & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                              >> 9U)))))))))
                                   : 0U) == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__rs3_iro_sb)) 
                                << 3U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__wt_valid_ex_id)) 
                              & ((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[0xcU] 
                                     >> 3U)) << 3U)) 
                             & ((((0x13e7U >= ((IData)(0x27bU) 
                                               + (0x1fffU 
                                                  & ((IData)(0x27dU) 
                                                     * 
                                                     (7U 
                                                      & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                         >> 9U)))))) 
                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                     (((IData)(0x27bU) 
                                       + (0x1fffU & 
                                          ((IData)(0x27dU) 
                                           * (7U & 
                                              ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                               >> 9U))))) 
                                      >> 5U)] >> (0x1fU 
                                                  & ((IData)(0x27bU) 
                                                     + 
                                                     (0x1fffU 
                                                      & ((IData)(0x27dU) 
                                                         * 
                                                         (7U 
                                                          & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                             >> 9U)))))))) 
                                 == (IData)(vlSelf->__Vfunc_is_imm_fpr__69__Vfuncout)) 
                                << 3U))));
    __Vfunc_is_imm_fpr__72__op = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                           >> 0xcU));
    {
        if (((((0x59U <= (IData)(__Vfunc_is_imm_fpr__72__op)) 
               & (0x5aU >= (IData)(__Vfunc_is_imm_fpr__72__op))) 
              | ((0x5fU <= (IData)(__Vfunc_is_imm_fpr__72__op)) 
                 & (0x62U >= (IData)(__Vfunc_is_imm_fpr__72__op)))) 
             | ((0x76U <= (IData)(__Vfunc_is_imm_fpr__72__op)) 
                & (0x79U >= (IData)(__Vfunc_is_imm_fpr__72__op))))) {
            vlSelf->__Vfunc_is_imm_fpr__72__Vfuncout = 1U;
            goto __Vlabel755;
        } else {
            vlSelf->__Vfunc_is_imm_fpr__72__Vfuncout = 0U;
            goto __Vlabel755;
        }
        __Vlabel755: ;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req 
        = ((0x1fefU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req)) 
           | (0xfffffff0U & (((((((0x13e7U >= ((IData)(0x21aU) 
                                               + (0x1fffU 
                                                  & ((IData)(0x27dU) 
                                                     * 
                                                     (7U 
                                                      & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                         >> 0xcU))))))
                                   ? (0x3fU & (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((IData)(0x21aU) 
                                                     + 
                                                     (0x1fffU 
                                                      & ((IData)(0x27dU) 
                                                         * 
                                                         (7U 
                                                          & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                             >> 0xcU)))))))
                                                 ? 0U
                                                 : 
                                                (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                 (((IData)(0x21fU) 
                                                   + 
                                                   (0x1fffU 
                                                    & ((IData)(0x27dU) 
                                                       * 
                                                       (7U 
                                                        & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                           >> 0xcU))))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x21aU) 
                                                      + 
                                                      (0x1fffU 
                                                       & ((IData)(0x27dU) 
                                                          * 
                                                          (7U 
                                                           & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                              >> 0xcU))))))))) 
                                               | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                  (((IData)(0x21aU) 
                                                    + 
                                                    (0x1fffU 
                                                     & ((IData)(0x27dU) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                            >> 0xcU))))) 
                                                   >> 5U)] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(0x21aU) 
                                                      + 
                                                      (0x1fffU 
                                                       & ((IData)(0x27dU) 
                                                          * 
                                                          (7U 
                                                           & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                              >> 0xcU)))))))))
                                   : 0U) == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__rs3_iro_sb)) 
                                << 4U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__wt_valid_ex_id)) 
                              & ((~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[0x10U] 
                                     >> 4U)) << 4U)) 
                             & ((((0x13e7U >= ((IData)(0x27bU) 
                                               + (0x1fffU 
                                                  & ((IData)(0x27dU) 
                                                     * 
                                                     (7U 
                                                      & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                         >> 0xcU)))))) 
                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                     (((IData)(0x27bU) 
                                       + (0x1fffU & 
                                          ((IData)(0x27dU) 
                                           * (7U & 
                                              ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                               >> 0xcU))))) 
                                      >> 5U)] >> (0x1fU 
                                                  & ((IData)(0x27bU) 
                                                     + 
                                                     (0x1fffU 
                                                      & ((IData)(0x27dU) 
                                                         * 
                                                         (7U 
                                                          & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                             >> 0xcU)))))))) 
                                 == (IData)(vlSelf->__Vfunc_is_imm_fpr__72__Vfuncout)) 
                                << 4U))));
    __Vtemp_hc4e040a5__0 = ((0x2000U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req) 
                                        << 1U)) | (
                                                   ((IData)(
                                                            (0U 
                                                             != 
                                                             (0xc00U 
                                                              & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req)))) 
                                                    << 0xcU) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0x300U 
                                                                 & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req)))) 
                                                       << 0xbU) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0xc0U 
                                                                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req)))) 
                                                          << 0xaU) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x30U 
                                                                       & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req)))) 
                                                             << 9U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0xcU 
                                                                          & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req)))) 
                                                                << 8U) 
                                                               | (((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (3U 
                                                                             & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__rs3_fwd_req)))) 
                                                                   << 7U) 
                                                                  | (((IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0x6000U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__i_sel_rs3__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                                      << 6U) 
                                                                     | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__i_sel_rs3__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                                         << 5U) 
                                                                        | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__i_sel_rs3__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                                            << 4U) 
                                                                           | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__i_sel_rs3__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                                               << 3U) 
                                                                              | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__i_sel_rs3__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__i_sel_rs3__DOT__gen_arbiter__DOT__req_nodes)))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__i_sel_rs3__DOT__gen_arbiter__DOT__req_nodes)))))))))))))))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__i_sel_rs3__DOT__gen_arbiter__DOT__req_nodes 
        = __Vtemp_hc4e040a5__0;
}

VL_INLINE_OPT void Vara_tb_verilator___024root___nba_comb__TOP__596(Vara_tb_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___nba_comb__TOP__596\n"); );
    // Init
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__w_cnt_dec;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__w_cnt_dec = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__w_cnt_gnt;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__w_cnt_gnt = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__w_cnt_err;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__w_cnt_err = 0;
    CData/*7:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__w_cnt_len;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__w_cnt_len = 0;
    VlWide<4>/*104:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_aw_chan__ax_o;
    VL_ZERO_W(105, ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_aw_chan__ax_o);
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_aw_chan__ax_ready_o;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_aw_chan__ax_ready_o = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__r_cnt_dec;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__r_cnt_dec = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__r_cnt_gnt;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__r_cnt_gnt = 0;
    CData/*7:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__r_cnt_len;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__r_cnt_len = 0;
    VlWide<4>/*98:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_ar_chan__ax_o;
    VL_ZERO_W(99, ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_ar_chan__ax_o);
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_ar_chan__ax_ready_o;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_ar_chan__ax_ready_o = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__aw_ready;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__aw_ready = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__atop_inject;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__atop_inject = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__w_cnt_down;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__w_cnt_down = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__ar_push;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__ar_push = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__ar_ready;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__ar_ready = 0;
    CData/*1:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask = 0;
    CData/*1:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask = 0;
    CData/*1:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask = 0;
    CData/*1:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__cnt_alloc_req;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__cnt_alloc_req = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__cnt_dec;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__cnt_dec = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__cnt_set;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__cnt_set = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__idq_inp_req;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__idq_inp_req = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__idq_oup_gnt;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__idq_oup_gnt = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__idq_oup_valid;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__idq_oup_valid = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__idq_oup_pop;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__idq_oup_pop = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT____Vcellout__i_idq__oup_data_o;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT____Vcellout__i_idq__oup_data_o = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT____Vlvbound_hbce4b179__0;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT____Vlvbound_hbce4b179__0 = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT____Vlvbound_hf05cf1d6__0;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT____Vlvbound_hf05cf1d6__0 = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__match_in_id_valid;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__match_in_id_valid = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__idx_matches_in_id;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__idx_matches_in_id = 0;
    CData/*4:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__match_in_id;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__match_in_id = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__cnt_alloc_req;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__cnt_alloc_req = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__cnt_dec;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__cnt_dec = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__cnt_set;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__cnt_set = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__idq_inp_req;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__idq_inp_req = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__idq_oup_gnt;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__idq_oup_gnt = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__idq_oup_valid;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__idq_oup_valid = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__idq_oup_pop;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__idq_oup_pop = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT____Vcellout__i_idq__oup_data_o;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT____Vcellout__i_idq__oup_data_o = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT____Vlvbound_hbce4b179__0;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT____Vlvbound_hbce4b179__0 = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT____Vlvbound_hf05cf1d6__0;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT____Vlvbound_hf05cf1d6__0 = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__match_in_id_valid;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__match_in_id_valid = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__idx_matches_in_id;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__idx_matches_in_id = 0;
    CData/*4:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__match_in_id;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__match_in_id = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__aw_push;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__aw_push = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__aw_pop;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__aw_pop = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__ar_push;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__ar_push = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__ar_pop;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__ar_pop = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT____VdfgTmp_hdb3c94e9__0;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT____VdfgTmp_hdb3c94e9__0 = 0;
    VlWide<7>/*210:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT____Vcellinp__i_axi_lite_regs__axi_req_i;
    VL_ZERO_W(211, ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT____Vcellinp__i_axi_lite_regs__axi_req_i);
    QData/*39:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__rd_active_o;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__rd_active_o = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__aw_dec_valid;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__aw_dec_valid = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__b_valid;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__b_valid = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__ar_dec_valid;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__ar_dec_valid = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_valid;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_valid = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vcellinp__i_b_spill_register__ready_i;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vcellinp__i_b_spill_register__ready_i = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vcellinp__i_r_spill_register__ready_i;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vcellinp__i_r_spill_register__ready_i = 0;
    CData/*6:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx = 0;
    IData/*31:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____VdfgExtracted_h61926f08__0;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____VdfgExtracted_h61926f08__0 = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____VdfgTmp_h925e6fb1__0;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____VdfgTmp_h925e6fb1__0 = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____VdfgTmp_h9154a601__0;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____VdfgTmp_h9154a601__0 = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____VdfgTmp_hcc98b241__0;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____VdfgTmp_hcc98b241__0 = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____VdfgTmp_h83011051__0;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____VdfgTmp_h83011051__0 = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____VdfgTmp_hd1ccf495__0;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____VdfgTmp_hd1ccf495__0 = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____VdfgTmp_hfe904795__0;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____VdfgTmp_hfe904795__0 = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____VdfgTmp_hc3608be4__0;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____VdfgTmp_hc3608be4__0 = 0;
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____VdfgTmp_h22427f3f__0;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____VdfgTmp_h22427f3f__0 = 0;
    CData/*2:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_aw_decode__DOT____Vcellout__i_addr_decode_dync__idx_o;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_aw_decode__DOT____Vcellout__i_addr_decode_dync__idx_o = 0;
    CData/*2:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_ar_decode__DOT____Vcellout__i_addr_decode_dync__idx_o;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_ar_decode__DOT____Vcellout__i_addr_decode_dync__idx_o = 0;
    VlWide<4>/*127:0*/ __Vtemp_h841d9fca__0;
    VlWide<4>/*127:0*/ __Vtemp_hd67fdfb2__0;
    QData/*63:0*/ __Vtemp_hcbcb4aaa__0;
    VlWide<4>/*127:0*/ __Vtemp_h08a175c9__0;
    VlWide<4>/*127:0*/ __Vtemp_h40cd4500__0;
    QData/*63:0*/ __Vtemp_h9a90314c__0;
    VlWide<4>/*127:0*/ __Vtemp_h61369444__0;
    VlWide<4>/*127:0*/ __Vtemp_hb729d82c__0;
    QData/*63:0*/ __Vtemp_hbc335e5e__0;
    VlWide<4>/*127:0*/ __Vtemp_h1ac4ba44__0;
    VlWide<4>/*127:0*/ __Vtemp_hf2a514c6__0;
    QData/*63:0*/ __Vtemp_h68b01e51__0;
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__num_beats_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__num_beats_q;
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__state_q) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__state_d = 1U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__num_beats_d 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__num_beats_q;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__state_d 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__state_q;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[0U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_q[0U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[1U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_q[1U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[2U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_q[2U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[3U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_q[3U];
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_aw_chan__ax_o[0U] = 0U;
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_aw_chan__ax_o[1U] = 0U;
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_aw_chan__ax_o[2U] = 0U;
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_aw_chan__ax_o[3U] = 0U;
        if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__state_q) {
            if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellinp__i_axi_burst_splitter_gran_aw_chan__ax_ready_i) {
                if ((1U < (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__num_beats_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__num_beats_d 
                        = (0x1ffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__num_beats_q) 
                                     - (IData)(1U)));
                    if ((1U == (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_q[0U] 
                                      >> 0x17U)))) {
                        vlSelf->__Vfunc_aligned_addr__28__size 
                            = (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_q[0U] 
                                     >> 0x19U));
                        vlSelf->__Vfunc_aligned_addr__28__addr[0U] 
                            = (IData)((((QData)((IData)(
                                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_q[3U])) 
                                        << 0x3cU) | 
                                       (((QData)((IData)(
                                                         vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_q[2U])) 
                                         << 0x1cU) 
                                        | ((QData)((IData)(
                                                           vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_q[1U])) 
                                           >> 4U))));
                        vlSelf->__Vfunc_aligned_addr__28__addr[1U] 
                            = (IData)(((((QData)((IData)(
                                                         vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_q[3U])) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(
                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_q[2U])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_q[1U])) 
                                              >> 4U))) 
                                       >> 0x20U));
                        vlSelf->__Vfunc_aligned_addr__28__addr[2U] = 0U;
                        vlSelf->__Vfunc_aligned_addr__28__addr[3U] = 0U;
                        VL_SHIFTR_WWI(128,128,3, __Vtemp_h841d9fca__0, vlSelf->__Vfunc_aligned_addr__28__addr, (IData)(vlSelf->__Vfunc_aligned_addr__28__size));
                        VL_SHIFTL_WWI(128,128,3, __Vtemp_hd67fdfb2__0, __Vtemp_h841d9fca__0, (IData)(vlSelf->__Vfunc_aligned_addr__28__size));
                        vlSelf->__Vfunc_aligned_addr__28__Vfuncout[0U] 
                            = __Vtemp_hd67fdfb2__0[0U];
                        vlSelf->__Vfunc_aligned_addr__28__Vfuncout[1U] 
                            = __Vtemp_hd67fdfb2__0[1U];
                        vlSelf->__Vfunc_aligned_addr__28__Vfuncout[2U] 
                            = __Vtemp_hd67fdfb2__0[2U];
                        vlSelf->__Vfunc_aligned_addr__28__Vfuncout[3U] 
                            = __Vtemp_hd67fdfb2__0[3U];
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[1U] 
                            = ((0xfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[1U]) 
                               | ((IData)((((QData)((IData)(
                                                            vlSelf->__Vfunc_aligned_addr__28__Vfuncout[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->__Vfunc_aligned_addr__28__Vfuncout[0U])))) 
                                  << 4U));
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[2U] 
                            = (((IData)((((QData)((IData)(
                                                          vlSelf->__Vfunc_aligned_addr__28__Vfuncout[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->__Vfunc_aligned_addr__28__Vfuncout[0U])))) 
                                >> 0x1cU) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        vlSelf->__Vfunc_aligned_addr__28__Vfuncout[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->__Vfunc_aligned_addr__28__Vfuncout[0U]))) 
                                                      >> 0x20U)) 
                                             << 4U));
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[3U] 
                            = ((0x1f0U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[3U]) 
                               | (0x1ffU & ((IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->__Vfunc_aligned_addr__28__Vfuncout[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->__Vfunc_aligned_addr__28__Vfuncout[0U]))) 
                                                     >> 0x20U)) 
                                            >> 0x1cU)));
                        __Vtemp_hcbcb4aaa__0 = ((((QData)((IData)(
                                                                  vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[3U])) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[2U])) 
                                                     << 0x1cU) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[1U])) 
                                                       >> 4U))) 
                                                + (1ULL 
                                                   << 
                                                   (7U 
                                                    & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_q[0U] 
                                                       >> 0x19U))));
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[1U] 
                            = ((0xfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[1U]) 
                               | ((IData)(((((QData)((IData)(
                                                             vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[3U])) 
                                             << 0x3cU) 
                                            | (((QData)((IData)(
                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[2U])) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[1U])) 
                                                  >> 4U))) 
                                           + (1ULL 
                                              << (7U 
                                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_q[0U] 
                                                     >> 0x19U))))) 
                                  << 4U));
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[2U] 
                            = (((IData)(__Vtemp_hcbcb4aaa__0) 
                                >> 0x1cU) | ((IData)(
                                                     (__Vtemp_hcbcb4aaa__0 
                                                      >> 0x20U)) 
                                             << 4U));
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[3U] 
                            = ((0x1f0U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[3U]) 
                               | (0x1ffU & ((IData)(
                                                    (__Vtemp_hcbcb4aaa__0 
                                                     >> 0x20U)) 
                                            >> 0x1cU)));
                    }
                }
                if ((1U >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__num_beats_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__state_d = 0U;
                }
            }
            ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_aw_chan__ax_o[0U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_q[0U];
            ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_aw_chan__ax_o[1U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_q[1U];
            ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_aw_chan__ax_o[2U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_q[2U];
            ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_aw_chan__ax_o[3U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_q[3U];
            ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_aw_chan__ax_o[0U] 
                = ((0xfffffffU & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_aw_chan__ax_o[0U]) 
                   | (((1U >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__num_beats_q))
                        ? (0xffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__num_beats_q) 
                                    - (IData)(1U)))
                        : 0U) << 0x1cU));
            ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_aw_chan__ax_o[1U] 
                = ((0xfffffff0U & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_aw_chan__ax_o[1U]) 
                   | (((1U >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__num_beats_q))
                        ? (0xffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__num_beats_q) 
                                    - (IData)(1U)))
                        : 0U) >> 4U));
        }
    } else {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__state_d = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__num_beats_d 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__num_beats_q;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__state_d 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__state_q;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[0U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_q[0U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[1U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_q[1U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[2U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_q[2U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[3U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_q[3U];
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_aw_chan__ax_o[0U] = 0U;
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_aw_chan__ax_o[1U] = 0U;
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_aw_chan__ax_o[2U] = 0U;
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_aw_chan__ax_o[3U] = 0U;
        if (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[5U] 
              >> 0x11U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__cnt_alloc_gnt))) {
            if ((0U < (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[6U] 
                                >> 0xeU)))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__num_beats_d 
                    = (0x1ffU & ((IData)(1U) + (0xffU 
                                                & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[6U] 
                                                   >> 0xeU))));
                if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellinp__i_axi_burst_splitter_gran_aw_chan__ax_ready_i) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__num_beats_d 
                        = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[6U] 
                                    >> 0xeU));
                }
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__state_d = 1U;
            }
            if ((0U >= (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[6U] 
                                 >> 0xeU)))) {
                ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_aw_chan__ax_o[0U] 
                    = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[6U] 
                        << 0xeU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[5U] 
                                    >> 0x12U));
                ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_aw_chan__ax_o[1U] 
                    = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[7U] 
                        << 0xeU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[6U] 
                                    >> 0x12U));
                ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_aw_chan__ax_o[2U] 
                    = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[8U] 
                        << 0xeU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[7U] 
                                    >> 0x12U));
                ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_aw_chan__ax_o[3U] 
                    = (0x1ffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[8U] 
                                 >> 0x12U));
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[0U] 
                    = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[6U] 
                        << 0xeU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[5U] 
                                    >> 0x12U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[1U] 
                    = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[7U] 
                        << 0xeU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[6U] 
                                    >> 0x12U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[2U] 
                    = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[8U] 
                        << 0xeU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[7U] 
                                    >> 0x12U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[3U] 
                    = (0x1ffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[8U] 
                                 >> 0x12U));
                ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_aw_chan__ax_o[0U] 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[0U];
                ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_aw_chan__ax_o[1U] 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[1U];
                ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_aw_chan__ax_o[2U] 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[2U];
                ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_aw_chan__ax_o[3U] 
                    = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[3U];
                ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_aw_chan__ax_o[0U] 
                    = (0xfffffffU & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_aw_chan__ax_o[0U]);
                ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_aw_chan__ax_o[1U] 
                    = (0xfffffff0U & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_aw_chan__ax_o[1U]);
                if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellinp__i_axi_burst_splitter_gran_aw_chan__ax_ready_i) {
                    if ((1U == (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[0U] 
                                      >> 0x17U)))) {
                        vlSelf->__Vfunc_aligned_addr__27__size 
                            = (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[0U] 
                                     >> 0x19U));
                        vlSelf->__Vfunc_aligned_addr__27__addr[0U] 
                            = (IData)((((QData)((IData)(
                                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[3U])) 
                                        << 0x3cU) | 
                                       (((QData)((IData)(
                                                         vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[2U])) 
                                         << 0x1cU) 
                                        | ((QData)((IData)(
                                                           vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[1U])) 
                                           >> 4U))));
                        vlSelf->__Vfunc_aligned_addr__27__addr[1U] 
                            = (IData)(((((QData)((IData)(
                                                         vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[3U])) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(
                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[2U])) 
                                            << 0x1cU) 
                                           | ((QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[1U])) 
                                              >> 4U))) 
                                       >> 0x20U));
                        vlSelf->__Vfunc_aligned_addr__27__addr[2U] = 0U;
                        vlSelf->__Vfunc_aligned_addr__27__addr[3U] = 0U;
                        VL_SHIFTR_WWI(128,128,3, __Vtemp_h08a175c9__0, vlSelf->__Vfunc_aligned_addr__27__addr, (IData)(vlSelf->__Vfunc_aligned_addr__27__size));
                        VL_SHIFTL_WWI(128,128,3, __Vtemp_h40cd4500__0, __Vtemp_h08a175c9__0, (IData)(vlSelf->__Vfunc_aligned_addr__27__size));
                        vlSelf->__Vfunc_aligned_addr__27__Vfuncout[0U] 
                            = __Vtemp_h40cd4500__0[0U];
                        vlSelf->__Vfunc_aligned_addr__27__Vfuncout[1U] 
                            = __Vtemp_h40cd4500__0[1U];
                        vlSelf->__Vfunc_aligned_addr__27__Vfuncout[2U] 
                            = __Vtemp_h40cd4500__0[2U];
                        vlSelf->__Vfunc_aligned_addr__27__Vfuncout[3U] 
                            = __Vtemp_h40cd4500__0[3U];
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[1U] 
                            = ((0xfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[1U]) 
                               | ((IData)((((QData)((IData)(
                                                            vlSelf->__Vfunc_aligned_addr__27__Vfuncout[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->__Vfunc_aligned_addr__27__Vfuncout[0U])))) 
                                  << 4U));
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[2U] 
                            = (((IData)((((QData)((IData)(
                                                          vlSelf->__Vfunc_aligned_addr__27__Vfuncout[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->__Vfunc_aligned_addr__27__Vfuncout[0U])))) 
                                >> 0x1cU) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        vlSelf->__Vfunc_aligned_addr__27__Vfuncout[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->__Vfunc_aligned_addr__27__Vfuncout[0U]))) 
                                                      >> 0x20U)) 
                                             << 4U));
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[3U] 
                            = ((0x1f0U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[3U]) 
                               | (0x1ffU & ((IData)(
                                                    ((((QData)((IData)(
                                                                       vlSelf->__Vfunc_aligned_addr__27__Vfuncout[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->__Vfunc_aligned_addr__27__Vfuncout[0U]))) 
                                                     >> 0x20U)) 
                                            >> 0x1cU)));
                        __Vtemp_h9a90314c__0 = ((((QData)((IData)(
                                                                  vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[3U])) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[2U])) 
                                                     << 0x1cU) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[1U])) 
                                                       >> 4U))) 
                                                + (1ULL 
                                                   << 
                                                   (7U 
                                                    & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[0U] 
                                                       >> 0x19U))));
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[1U] 
                            = ((0xfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[1U]) 
                               | ((IData)(((((QData)((IData)(
                                                             vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[3U])) 
                                             << 0x3cU) 
                                            | (((QData)((IData)(
                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[2U])) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[1U])) 
                                                  >> 4U))) 
                                           + (1ULL 
                                              << (7U 
                                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[0U] 
                                                     >> 0x19U))))) 
                                  << 4U));
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[2U] 
                            = (((IData)(__Vtemp_h9a90314c__0) 
                                >> 0x1cU) | ((IData)(
                                                     (__Vtemp_h9a90314c__0 
                                                      >> 0x20U)) 
                                             << 4U));
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[3U] 
                            = ((0x1f0U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__ax_d[3U]) 
                               | (0x1ffU & ((IData)(
                                                    (__Vtemp_h9a90314c__0 
                                                     >> 0x20U)) 
                                            >> 0x1cU)));
                    }
                }
            }
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_d[0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_q[0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_d[1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_q[1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_d[2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_q[2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_d[3U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_q[3U];
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_ar_chan__ax_o[0U] = 0U;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_ar_chan__ax_o[1U] = 0U;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_ar_chan__ax_o[2U] = 0U;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_ar_chan__ax_o[3U] = 0U;
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__state_q) {
        if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__state_q) {
            if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellinp__i_axi_burst_splitter_gran_ar_chan__ax_ready_i) {
                if ((1U < (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__num_beats_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__num_beats_d 
                        = (0x1ffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__num_beats_q) 
                                     - (IData)(1U)));
                    if ((1U == (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_q[0U] 
                                      >> 0x11U)))) {
                        vlSelf->__Vfunc_aligned_addr__30__size 
                            = (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_q[0U] 
                                     >> 0x13U));
                        vlSelf->__Vfunc_aligned_addr__30__addr[0U] 
                            = (IData)((((QData)((IData)(
                                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_q[2U])) 
                                        << 0x22U) | 
                                       (((QData)((IData)(
                                                         vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_q[1U])) 
                                         << 2U) | ((QData)((IData)(
                                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_q[0U])) 
                                                   >> 0x1eU))));
                        vlSelf->__Vfunc_aligned_addr__30__addr[1U] 
                            = (IData)(((((QData)((IData)(
                                                         vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_q[2U])) 
                                         << 0x22U) 
                                        | (((QData)((IData)(
                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_q[1U])) 
                                            << 2U) 
                                           | ((QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_q[0U])) 
                                              >> 0x1eU))) 
                                       >> 0x20U));
                        vlSelf->__Vfunc_aligned_addr__30__addr[2U] = 0U;
                        vlSelf->__Vfunc_aligned_addr__30__addr[3U] = 0U;
                        VL_SHIFTR_WWI(128,128,3, __Vtemp_h61369444__0, vlSelf->__Vfunc_aligned_addr__30__addr, (IData)(vlSelf->__Vfunc_aligned_addr__30__size));
                        VL_SHIFTL_WWI(128,128,3, __Vtemp_hb729d82c__0, __Vtemp_h61369444__0, (IData)(vlSelf->__Vfunc_aligned_addr__30__size));
                        vlSelf->__Vfunc_aligned_addr__30__Vfuncout[0U] 
                            = __Vtemp_hb729d82c__0[0U];
                        vlSelf->__Vfunc_aligned_addr__30__Vfuncout[1U] 
                            = __Vtemp_hb729d82c__0[1U];
                        vlSelf->__Vfunc_aligned_addr__30__Vfuncout[2U] 
                            = __Vtemp_hb729d82c__0[2U];
                        vlSelf->__Vfunc_aligned_addr__30__Vfuncout[3U] 
                            = __Vtemp_hb729d82c__0[3U];
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_d[0U] 
                            = ((0x3fffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_d[0U]) 
                               | ((IData)((((QData)((IData)(
                                                            vlSelf->__Vfunc_aligned_addr__30__Vfuncout[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->__Vfunc_aligned_addr__30__Vfuncout[0U])))) 
                                  << 0x1eU));
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_d[1U] 
                            = (((IData)((((QData)((IData)(
                                                          vlSelf->__Vfunc_aligned_addr__30__Vfuncout[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->__Vfunc_aligned_addr__30__Vfuncout[0U])))) 
                                >> 2U) | ((IData)((
                                                   (((QData)((IData)(
                                                                     vlSelf->__Vfunc_aligned_addr__30__Vfuncout[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->__Vfunc_aligned_addr__30__Vfuncout[0U]))) 
                                                   >> 0x20U)) 
                                          << 0x1eU));
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_d[2U] 
                            = ((0xc0000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_d[2U]) 
                               | ((IData)(((((QData)((IData)(
                                                             vlSelf->__Vfunc_aligned_addr__30__Vfuncout[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->__Vfunc_aligned_addr__30__Vfuncout[0U]))) 
                                           >> 0x20U)) 
                                  >> 2U));
                        __Vtemp_hbc335e5e__0 = ((((QData)((IData)(
                                                                  vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_d[2U])) 
                                                  << 0x22U) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_d[1U])) 
                                                     << 2U) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_d[0U])) 
                                                       >> 0x1eU))) 
                                                + (1ULL 
                                                   << 
                                                   (7U 
                                                    & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_q[0U] 
                                                       >> 0x13U))));
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_d[0U] 
                            = ((0x3fffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_d[0U]) 
                               | ((IData)(((((QData)((IData)(
                                                             vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_d[2U])) 
                                             << 0x22U) 
                                            | (((QData)((IData)(
                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_d[1U])) 
                                                << 2U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_d[0U])) 
                                                  >> 0x1eU))) 
                                           + (1ULL 
                                              << (7U 
                                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_q[0U] 
                                                     >> 0x13U))))) 
                                  << 0x1eU));
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_d[1U] 
                            = (((IData)(__Vtemp_hbc335e5e__0) 
                                >> 2U) | ((IData)((__Vtemp_hbc335e5e__0 
                                                   >> 0x20U)) 
                                          << 0x1eU));
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_d[2U] 
                            = ((0xc0000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_d[2U]) 
                               | ((IData)((__Vtemp_hbc335e5e__0 
                                           >> 0x20U)) 
                                  >> 2U));
                    }
                }
                if ((1U >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__num_beats_q))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__state_d = 0U;
                }
            }
            ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_ar_chan__ax_o[0U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_q[0U];
            ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_ar_chan__ax_o[1U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_q[1U];
            ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_ar_chan__ax_o[2U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_q[2U];
            ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_ar_chan__ax_o[3U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_q[3U];
            ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_ar_chan__ax_o[0U] 
                = ((0xc03fffffU & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_ar_chan__ax_o[0U]) 
                   | (((1U >= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__num_beats_q))
                        ? (0xffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__num_beats_q) 
                                    - (IData)(1U)))
                        : 0U) << 0x16U));
        }
    } else if (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[0U] 
                 >> 1U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__cnt_alloc_gnt))) {
        if ((0U < (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[0U] 
                   >> 0x18U))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__num_beats_d 
                = (0x1ffU & ((IData)(1U) + (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[0U] 
                                            >> 0x18U)));
            if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellinp__i_axi_burst_splitter_gran_ar_chan__ax_ready_i) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__num_beats_d 
                    = (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[0U] 
                       >> 0x18U);
            }
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__state_d = 1U;
        }
        if ((0U >= (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[0U] 
                    >> 0x18U))) {
            ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_ar_chan__ax_o[0U] 
                = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[1U] 
                    << 0x1eU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[0U] 
                                 >> 2U));
            ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_ar_chan__ax_o[1U] 
                = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[2U] 
                    << 0x1eU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[1U] 
                                 >> 2U));
            ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_ar_chan__ax_o[2U] 
                = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[3U] 
                    << 0x1eU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[2U] 
                                 >> 2U));
            ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_ar_chan__ax_o[3U] 
                = (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[3U] 
                         >> 2U));
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_d[0U] 
                = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[1U] 
                    << 0x1eU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[0U] 
                                 >> 2U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_d[1U] 
                = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[2U] 
                    << 0x1eU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[1U] 
                                 >> 2U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_d[2U] 
                = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[3U] 
                    << 0x1eU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[2U] 
                                 >> 2U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_d[3U] 
                = (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[3U] 
                         >> 2U));
            ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_ar_chan__ax_o[0U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_d[0U];
            ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_ar_chan__ax_o[1U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_d[1U];
            ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_ar_chan__ax_o[2U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_d[2U];
            ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_ar_chan__ax_o[3U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_d[3U];
            ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_ar_chan__ax_o[0U] 
                = (0xc03fffffU & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_ar_chan__ax_o[0U]);
            if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellinp__i_axi_burst_splitter_gran_ar_chan__ax_ready_i) {
                if ((1U == (3U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_d[0U] 
                                  >> 0x11U)))) {
                    vlSelf->__Vfunc_aligned_addr__29__size 
                        = (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_d[0U] 
                                 >> 0x13U));
                    vlSelf->__Vfunc_aligned_addr__29__addr[0U] 
                        = (IData)((((QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_d[2U])) 
                                    << 0x22U) | (((QData)((IData)(
                                                                  vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_d[1U])) 
                                                  << 2U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_d[0U])) 
                                                    >> 0x1eU))));
                    vlSelf->__Vfunc_aligned_addr__29__addr[1U] 
                        = (IData)(((((QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_d[2U])) 
                                     << 0x22U) | (((QData)((IData)(
                                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_d[1U])) 
                                                   << 2U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_d[0U])) 
                                                     >> 0x1eU))) 
                                   >> 0x20U));
                    vlSelf->__Vfunc_aligned_addr__29__addr[2U] = 0U;
                    vlSelf->__Vfunc_aligned_addr__29__addr[3U] = 0U;
                    VL_SHIFTR_WWI(128,128,3, __Vtemp_h1ac4ba44__0, vlSelf->__Vfunc_aligned_addr__29__addr, (IData)(vlSelf->__Vfunc_aligned_addr__29__size));
                    VL_SHIFTL_WWI(128,128,3, __Vtemp_hf2a514c6__0, __Vtemp_h1ac4ba44__0, (IData)(vlSelf->__Vfunc_aligned_addr__29__size));
                    vlSelf->__Vfunc_aligned_addr__29__Vfuncout[0U] 
                        = __Vtemp_hf2a514c6__0[0U];
                    vlSelf->__Vfunc_aligned_addr__29__Vfuncout[1U] 
                        = __Vtemp_hf2a514c6__0[1U];
                    vlSelf->__Vfunc_aligned_addr__29__Vfuncout[2U] 
                        = __Vtemp_hf2a514c6__0[2U];
                    vlSelf->__Vfunc_aligned_addr__29__Vfuncout[3U] 
                        = __Vtemp_hf2a514c6__0[3U];
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_d[0U] 
                        = ((0x3fffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_d[0U]) 
                           | ((IData)((((QData)((IData)(
                                                        vlSelf->__Vfunc_aligned_addr__29__Vfuncout[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->__Vfunc_aligned_addr__29__Vfuncout[0U])))) 
                              << 0x1eU));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_d[1U] 
                        = (((IData)((((QData)((IData)(
                                                      vlSelf->__Vfunc_aligned_addr__29__Vfuncout[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->__Vfunc_aligned_addr__29__Vfuncout[0U])))) 
                            >> 2U) | ((IData)(((((QData)((IData)(
                                                                 vlSelf->__Vfunc_aligned_addr__29__Vfuncout[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->__Vfunc_aligned_addr__29__Vfuncout[0U]))) 
                                               >> 0x20U)) 
                                      << 0x1eU));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_d[2U] 
                        = ((0xc0000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_d[2U]) 
                           | ((IData)(((((QData)((IData)(
                                                         vlSelf->__Vfunc_aligned_addr__29__Vfuncout[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->__Vfunc_aligned_addr__29__Vfuncout[0U]))) 
                                       >> 0x20U)) >> 2U));
                    __Vtemp_h68b01e51__0 = ((((QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_d[2U])) 
                                              << 0x22U) 
                                             | (((QData)((IData)(
                                                                 vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_d[1U])) 
                                                 << 2U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_d[0U])) 
                                                   >> 0x1eU))) 
                                            + (1ULL 
                                               << (7U 
                                                   & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_d[0U] 
                                                      >> 0x13U))));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_d[0U] 
                        = ((0x3fffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_d[0U]) 
                           | ((IData)(((((QData)((IData)(
                                                         vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_d[2U])) 
                                         << 0x22U) 
                                        | (((QData)((IData)(
                                                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_d[1U])) 
                                            << 2U) 
                                           | ((QData)((IData)(
                                                              vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_d[0U])) 
                                              >> 0x1eU))) 
                                       + (1ULL << (7U 
                                                   & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_d[0U] 
                                                      >> 0x13U))))) 
                              << 0x1eU));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_d[1U] 
                        = (((IData)(__Vtemp_h68b01e51__0) 
                            >> 2U) | ((IData)((__Vtemp_h68b01e51__0 
                                               >> 0x20U)) 
                                      << 0x1eU));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_d[2U] 
                        = ((0xc0000000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__ax_d[2U]) 
                           | ((IData)((__Vtemp_h68b01e51__0 
                                       >> 0x20U)) >> 2U));
                }
            }
        }
    }
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_aw_chan__ax_ready_o = 0U;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_ar_chan__ax_ready_o = 0U;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__cnt_alloc_req = 0U;
    if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__state_q)))) {
        if (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[0U] 
              >> 1U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__cnt_alloc_gnt))) {
            if ((0U >= (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[0U] 
                        >> 0x18U))) {
                if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellinp__i_axi_burst_splitter_gran_ar_chan__ax_ready_i) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_ar_chan__ax_ready_o = 1U;
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__cnt_alloc_req = 1U;
                }
            } else {
                ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_ar_chan__ax_ready_o = 1U;
                ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__cnt_alloc_req = 1U;
            }
        }
    }
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__cnt_alloc_req = 0U;
    if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__state_q)))) {
        if (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[5U] 
              >> 0x11U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__cnt_alloc_gnt))) {
            if ((0U >= (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[6U] 
                                 >> 0xeU)))) {
                if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellinp__i_axi_burst_splitter_gran_aw_chan__ax_ready_i) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_aw_chan__ax_ready_o = 1U;
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__cnt_alloc_req = 1U;
                }
            } else {
                ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_aw_chan__ax_ready_o = 1U;
                ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__cnt_alloc_req = 1U;
            }
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[5U] 
        = ((0x1ffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[5U]) 
           | ((ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_aw_chan__ax_o[0U] 
               << 0x12U) | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_aw_chan__ax_valid_o) 
                            << 0x11U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[6U] 
        = (((0x1ffffU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_aw_chan__ax_o[0U] 
                         >> 0xeU)) | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_aw_chan__ax_valid_o) 
                                      >> 0xfU)) | (
                                                   (0x20000U 
                                                    & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_aw_chan__ax_o[0U] 
                                                       >> 0xeU)) 
                                                   | (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_aw_chan__ax_o[1U] 
                                                      << 0x12U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[7U] 
        = ((0x1ffffU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_aw_chan__ax_o[1U] 
                        >> 0xeU)) | ((0x20000U & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_aw_chan__ax_o[1U] 
                                                  >> 0xeU)) 
                                     | (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_aw_chan__ax_o[2U] 
                                        << 0x12U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[8U] 
        = (0x7ffffffU & ((0x1ffffU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_aw_chan__ax_o[2U] 
                                      >> 0xeU)) | (
                                                   (0x20000U 
                                                    & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_aw_chan__ax_o[2U] 
                                                       >> 0xeU)) 
                                                   | (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_aw_chan__ax_o[3U] 
                                                      << 0x12U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[0U] 
        = ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[0U]) 
           | ((ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_ar_chan__ax_o[0U] 
               << 2U) | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_ar_chan__ax_valid_o) 
                         << 1U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[1U] 
        = (((1U & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_ar_chan__ax_o[0U] 
                   >> 0x1eU)) | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_ar_chan__ax_valid_o) 
                                 >> 0x1fU)) | ((2U 
                                                & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_ar_chan__ax_o[0U] 
                                                   >> 0x1eU)) 
                                               | (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_ar_chan__ax_o[1U] 
                                                  << 2U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[2U] 
        = ((1U & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_ar_chan__ax_o[1U] 
                  >> 0x1eU)) | ((2U & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_ar_chan__ax_o[1U] 
                                       >> 0x1eU)) | 
                                (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_ar_chan__ax_o[2U] 
                                 << 2U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[3U] 
        = ((0xffffffe0U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[3U]) 
           | ((1U & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_ar_chan__ax_o[2U] 
                     >> 0x1eU)) | ((2U & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_ar_chan__ax_o[2U] 
                                          >> 0x1eU)) 
                                   | (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_ar_chan__ax_o[3U] 
                                      << 2U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__act_resp[2U] 
        = ((0x7ffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__act_resp[2U]) 
           | (0x380000U & (((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_aw_chan__ax_ready_o) 
                            << 0x15U) | (((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_axi_burst_splitter_gran_ar_chan__ax_ready_o) 
                                          << 0x14U) 
                                         | (0x80000U 
                                            & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT____Vcellout__i_axi_lite_regs__axi_resp_o[2U] 
                                               << 0xcU))))));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__idq_inp_req 
        = ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__cnt_alloc_req) 
           & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__cnt_alloc_gnt));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__idq_inp_req 
        = ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__cnt_alloc_req) 
           & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__cnt_alloc_gnt));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__cnt_set = 0U;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT____Vlvbound_hf05cf1d6__0 
        = ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__idq_inp_req;
    if ((0U >= (0U != (0x1ffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__gen_cnt__BRA__0__KET____DOT__i_cnt__DOT__counter_q))))) {
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__cnt_set 
            = (((~ ((IData)(1U) << (0U != (0x1ffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__gen_cnt__BRA__0__KET____DOT__i_cnt__DOT__counter_q))))) 
                & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__cnt_set)) 
               | (1U & ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT____Vlvbound_hf05cf1d6__0) 
                        << (0U != (0x1ffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__gen_cnt__BRA__0__KET____DOT__i_cnt__DOT__counter_q))))));
    }
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__idq_oup_gnt = 0U;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__match_in_id_valid = 0U;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__match_in_id = 0U;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__cnt_set = 0U;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT____Vlvbound_hf05cf1d6__0 
        = ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__idq_inp_req;
    if ((0U >= (0U != (0x1ffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__gen_cnt__BRA__0__KET____DOT__i_cnt__DOT__counter_q))))) {
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__cnt_set 
            = (((~ ((IData)(1U) << (0U != (0x1ffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__gen_cnt__BRA__0__KET____DOT__i_cnt__DOT__counter_q))))) 
                & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__cnt_set)) 
               | (1U & ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT____Vlvbound_hf05cf1d6__0) 
                        << (0U != (0x1ffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__gen_cnt__BRA__0__KET____DOT__i_cnt__DOT__counter_q))))));
    }
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__idq_oup_gnt = 0U;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__match_in_id_valid = 0U;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__match_in_id = 0U;
    if (((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__idq_inp_req) 
         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__linked_data_q))) {
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__match_in_id_valid = 1U;
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__match_in_id 
            = (0x1fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[3U]);
    } else if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__r_cnt_req) {
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__match_in_id_valid = 1U;
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__match_in_id 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT____Vcellout__i_ar_id_fifo__data_o;
    }
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__idx_matches_in_id 
        = ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__match_in_id_valid) 
           & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__head_tail_q)) 
              & ((0x1fU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__head_tail_q) 
                           >> 3U)) == (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__match_in_id))));
    if (((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__idq_inp_req) 
         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__linked_data_q))) {
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__match_in_id_valid = 1U;
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__match_in_id 
            = (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[8U] 
                        >> 0x16U));
    } else if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__w_cnt_req) {
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__match_in_id_valid = 1U;
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__match_in_id 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT____Vcellout__i_aw_id_fifo__data_o;
    }
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__idx_matches_in_id 
        = ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__match_in_id_valid) 
           & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__head_tail_q)) 
              & ((0x1fU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__head_tail_q) 
                           >> 3U)) == (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__match_in_id))));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT____Vcellout__i_idq__oup_data_o = 0U;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__idq_oup_valid = 0U;
    if ((1U & (~ ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__idq_inp_req) 
                  & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__linked_data_q))))) {
        if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__r_cnt_req) {
            ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__idq_oup_gnt = 1U;
            if (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__idx_matches_in_id) {
                ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT____Vcellout__i_idq__oup_data_o 
                    = ((2U >= ((IData)(2U) + (3U & 
                                              ((IData)(3U) 
                                               * (1U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__head_tail_q) 
                                                     >> 2U)))))) 
                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__linked_data_q) 
                          >> ((IData)(2U) + (3U & ((IData)(3U) 
                                                   * 
                                                   (1U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__head_tail_q) 
                                                       >> 2U)))))));
                ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__idq_oup_valid = 1U;
            }
        }
    }
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT____Vcellout__i_idq__oup_data_o = 0U;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__idq_oup_valid = 0U;
    if ((1U & (~ ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__idq_inp_req) 
                  & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__linked_data_q))))) {
        if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__w_cnt_req) {
            ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__idq_oup_gnt = 1U;
            if (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__idx_matches_in_id) {
                ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT____Vcellout__i_idq__oup_data_o 
                    = ((2U >= ((IData)(2U) + (3U & 
                                              ((IData)(3U) 
                                               * (1U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__head_tail_q) 
                                                     >> 2U)))))) 
                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__linked_data_q) 
                          >> ((IData)(2U) + (3U & ((IData)(3U) 
                                                   * 
                                                   (1U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__head_tail_q) 
                                                       >> 2U)))))));
                ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__idq_oup_valid = 1U;
            }
        }
    }
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__r_cnt_len 
        = (0xffU & (((8U >= (0xfU & ((IData)(9U) * (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT____Vcellout__i_idq__oup_data_o))))
                      ? (0x1ffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__gen_cnt__BRA__0__KET____DOT__i_cnt__DOT__counter_q) 
                                   >> (0xfU & ((IData)(9U) 
                                               * (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT____Vcellout__i_idq__oup_data_o)))))
                      : 0U) - (IData)(1U)));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__r_cnt_gnt 
        = ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__idq_oup_gnt) 
           & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__idq_oup_valid));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__w_cnt_len 
        = (0xffU & (((8U >= (0xfU & ((IData)(9U) * (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT____Vcellout__i_idq__oup_data_o))))
                      ? (0x1ffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__gen_cnt__BRA__0__KET____DOT__i_cnt__DOT__counter_q) 
                                   >> (0xfU & ((IData)(9U) 
                                               * (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT____Vcellout__i_idq__oup_data_o)))))
                      : 0U) - (IData)(1U)));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__w_cnt_gnt 
        = ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__idq_oup_gnt) 
           & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__idq_oup_valid));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__r_state_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__r_state_q;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__r_cnt_dec = 0U;
    if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__r_state_q)))) {
        if ((0x200U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellinp__i_axi_burst_splitter_gran__mst_resp_i[2U])) {
            if ((2U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellinp__i_axi_burst_splitter_gran__mst_resp_i[0U])) {
                if (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__r_cnt_gnt) {
                    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__r_cnt_dec = 1U;
                }
            }
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[0U] 
        = (0xfffffffeU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[0U]);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__r_last_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__r_last_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__act_resp[0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellinp__i_axi_burst_splitter_gran__mst_resp_i[0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__act_resp[1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellinp__i_axi_burst_splitter_gran__mst_resp_i[1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__act_resp[2U] 
        = ((0x3ffe00U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__act_resp[2U]) 
           | (0x1ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellinp__i_axi_burst_splitter_gran__mst_resp_i[2U]));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__act_resp[0U] 
        = (0xfffffffdU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__act_resp[0U]);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__act_resp[2U] 
        = (0x3ffdffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__act_resp[2U]);
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__r_state_q) {
        if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__r_state_q) {
            if ((1U & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellinp__i_axi_burst_splitter_gran__mst_resp_i[2U] 
                        >> 9U) & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[0U]))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__r_state_d = 0U;
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[0U] 
                    = (1U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[0U]);
            }
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__act_resp[0U] 
                = ((0xfffffffdU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__act_resp[0U]) 
                   | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__r_last_q) 
                      << 1U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__act_resp[2U] 
                = ((0x3ffdffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__act_resp[2U]) 
                   | (0x200U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellinp__i_axi_burst_splitter_gran__mst_resp_i[2U]));
        }
    } else if ((0x200U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellinp__i_axi_burst_splitter_gran__mst_resp_i[2U])) {
        if ((2U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellinp__i_axi_burst_splitter_gran__mst_resp_i[0U])) {
            if (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__r_cnt_gnt) {
                if ((1U & (~ vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[0U]))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__r_state_d = 1U;
                }
                if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[0U])) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[0U] 
                        = (1U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[0U]);
                }
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__r_last_d 
                    = (1U > (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__r_cnt_len));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__act_resp[0U] 
                    = ((0xfffffffdU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__act_resp[0U]) 
                       | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__r_last_d) 
                          << 1U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__act_resp[2U] 
                    = (0x200U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__act_resp[2U]);
            }
        } else {
            if ((1U & (~ vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[0U]))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__r_state_d = 1U;
            }
            if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[0U])) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[0U] 
                    = (1U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[0U]);
            }
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__r_last_d = 0U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__act_resp[0U] 
                = (0xfffffffdU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__act_resp[0U]);
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__act_resp[2U] 
                = (0x200U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__act_resp[2U]);
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__b_state_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__b_state_q;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__w_cnt_dec = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[3U] 
        = (0xffffffdfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[3U]);
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__w_cnt_err 
        = ((0U >= (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT____Vcellout__i_idq__oup_data_o)) 
           & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__err_q) 
              >> (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT____Vcellout__i_idq__oup_data_o)));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__cnt_dec = 0U;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT____Vlvbound_hbce4b179__0 
        = (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__r_cnt_req) 
            & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__r_cnt_gnt)) 
           & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__r_cnt_dec));
    if ((0U >= (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT____Vcellout__i_idq__oup_data_o))) {
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__cnt_dec 
            = (((~ ((IData)(1U) << (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT____Vcellout__i_idq__oup_data_o))) 
                & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__cnt_dec)) 
               | (1U & ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT____Vlvbound_hbce4b179__0) 
                        << (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT____Vcellout__i_idq__oup_data_o))));
    }
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__idq_oup_pop 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__r_cnt_req) 
           & ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__r_cnt_gnt) 
              & ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__r_cnt_dec) 
                 & (1U > (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__r_cnt_len)))));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__cnt_dec = 0U;
    if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__b_state_q)))) {
        if ((0x40000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellinp__i_axi_burst_splitter_gran__mst_resp_i[2U])) {
            if (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__w_cnt_gnt) {
                ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__w_cnt_dec = 1U;
            }
        }
    }
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT____Vlvbound_hbce4b179__0 
        = (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__w_cnt_req) 
            & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__w_cnt_gnt)) 
           & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__w_cnt_dec));
    if ((0U >= (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT____Vcellout__i_idq__oup_data_o))) {
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__cnt_dec 
            = (((~ ((IData)(1U) << (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT____Vcellout__i_idq__oup_data_o))) 
                & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__cnt_dec)) 
               | (1U & ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT____Vlvbound_hbce4b179__0) 
                        << (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT____Vcellout__i_idq__oup_data_o))));
    }
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__idq_oup_pop 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__w_cnt_req) 
           & ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__w_cnt_gnt) 
              & ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__w_cnt_dec) 
                 & (1U > (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__w_cnt_len)))));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__ar_dec_valid = 0U;
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__b_state_q) {
        if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__b_state_q) {
            if ((1U & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellinp__i_axi_burst_splitter_gran__mst_resp_i[2U] 
                        >> 0x12U) & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[3U] 
                                     >> 5U)))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__b_state_d = 0U;
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[3U] 
                    = (0x20U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[3U]);
            }
        }
    } else if ((0x40000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellinp__i_axi_burst_splitter_gran__mst_resp_i[2U])) {
        if (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__w_cnt_gnt) {
            if ((1U > (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__w_cnt_len))) {
                if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[3U] 
                              >> 5U)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__b_state_d = 1U;
                }
                if ((0x20U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[3U])) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[3U] 
                        = (0x20U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[3U]);
                }
            } else {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[3U] 
                    = (0x20U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[3U]);
            }
        }
    }
    if ((8U > (0x7fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[1U]))) {
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__ar_dec_valid = 1U;
    }
    if (((8U <= (0x7fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[1U])) 
         & (0x10U > (0x7fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[1U])))) {
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__ar_dec_valid = 1U;
    }
    if (((0x10U <= (0x7fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[1U])) 
         & (0x18U > (0x7fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[1U])))) {
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__ar_dec_valid = 1U;
    }
    if (((0x18U <= (0x7fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[1U])) 
         & (0x20U > (0x7fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[1U])))) {
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__ar_dec_valid = 1U;
    }
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_ar_decode__DOT____Vcellout__i_addr_decode_dync__idx_o = 0U;
    if ((8U > (0x7fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[1U]))) {
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_ar_decode__DOT____Vcellout__i_addr_decode_dync__idx_o = 0U;
    }
    if (((8U <= (0x7fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[1U])) 
         & (0x10U > (0x7fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[1U])))) {
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_ar_decode__DOT____Vcellout__i_addr_decode_dync__idx_o = 1U;
    }
    if (((0x10U <= (0x7fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[1U])) 
         & (0x18U > (0x7fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[1U])))) {
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_ar_decode__DOT____Vcellout__i_addr_decode_dync__idx_o = 2U;
    }
    if (((0x18U <= (0x7fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[1U])) 
         & (0x20U > (0x7fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[1U])))) {
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_ar_decode__DOT____Vcellout__i_addr_decode_dync__idx_o = 3U;
    }
    if (((0x20U <= (0x7fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[1U])) 
         & (0x28U > (0x7fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[1U])))) {
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__ar_dec_valid = 1U;
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_ar_decode__DOT____Vcellout__i_addr_decode_dync__idx_o = 4U;
    }
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__aw_dec_valid = 0U;
    if ((8U > (0x7fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[6U] 
                        >> 0x16U)))) {
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__aw_dec_valid = 1U;
    }
    if (((8U <= (0x7fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[6U] 
                          >> 0x16U))) & (0x10U > (0x7fU 
                                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[6U] 
                                                     >> 0x16U))))) {
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__aw_dec_valid = 1U;
    }
    if (((0x10U <= (0x7fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[6U] 
                             >> 0x16U))) & (0x18U > 
                                            (0x7fU 
                                             & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[6U] 
                                                >> 0x16U))))) {
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__aw_dec_valid = 1U;
    }
    if (((0x18U <= (0x7fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[6U] 
                             >> 0x16U))) & (0x20U > 
                                            (0x7fU 
                                             & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[6U] 
                                                >> 0x16U))))) {
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__aw_dec_valid = 1U;
    }
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vcellinp__i_b_spill_register__ready_i 
        = ((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__status_cnt_q)) 
           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[3U] 
              >> 5U));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vcellinp__i_r_spill_register__ready_i 
        = ((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__status_cnt_q)) 
           & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[0U]);
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT____VdfgTmp_hdb3c94e9__0 
        = ((1U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__status_cnt_q)) 
           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[5U] 
              >> 0x11U));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_valid 
        = ((1U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__status_cnt_q)) 
           & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[0U] 
              >> 1U));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_aw_decode__DOT____Vcellout__i_addr_decode_dync__idx_o = 0U;
    if ((8U > (0x7fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[6U] 
                        >> 0x16U)))) {
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_aw_decode__DOT____Vcellout__i_addr_decode_dync__idx_o = 0U;
    }
    if (((8U <= (0x7fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[6U] 
                          >> 0x16U))) & (0x10U > (0x7fU 
                                                  & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[6U] 
                                                     >> 0x16U))))) {
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_aw_decode__DOT____Vcellout__i_addr_decode_dync__idx_o = 1U;
    }
    if (((0x10U <= (0x7fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[6U] 
                             >> 0x16U))) & (0x18U > 
                                            (0x7fU 
                                             & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[6U] 
                                                >> 0x16U))))) {
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_aw_decode__DOT____Vcellout__i_addr_decode_dync__idx_o = 2U;
    }
    if (((0x18U <= (0x7fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[6U] 
                             >> 0x16U))) & (0x20U > 
                                            (0x7fU 
                                             & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[6U] 
                                                >> 0x16U))))) {
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_aw_decode__DOT____Vcellout__i_addr_decode_dync__idx_o = 3U;
    }
    if (((0x20U <= (0x7fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[6U] 
                             >> 0x16U))) & (0x28U > 
                                            (0x7fU 
                                             & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[6U] 
                                                >> 0x16U))))) {
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__aw_dec_valid = 1U;
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_aw_decode__DOT____Vcellout__i_addr_decode_dync__idx_o = 4U;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__b_err_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__b_err_q;
    if ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__w_cnt_req) 
          & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__w_cnt_gnt)) 
         & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT____Vcellout__i_axi_lite_regs__axi_resp_o[2U] 
            >> 6U))) {
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__w_cnt_err = 1U;
    }
    if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__b_state_q)))) {
        if ((0x40000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellinp__i_axi_burst_splitter_gran__mst_resp_i[2U])) {
            if (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__w_cnt_gnt) {
                if ((1U > (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__w_cnt_len))) {
                    if ((1U & (~ (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[3U] 
                                  >> 5U)))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__b_err_d 
                            = ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__w_cnt_err;
                    }
                }
            }
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__act_resp[2U] 
        = (0x3803ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__act_resp[2U]);
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__b_state_q) {
        if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__b_state_q) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__act_resp[2U] 
                = ((0x3c03ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__act_resp[2U]) 
                   | (0x3fc00U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellinp__i_axi_burst_splitter_gran__mst_resp_i[2U]));
            if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__b_err_q) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__act_resp[2U] 
                    = (0x1000U | (0x3fe7ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__act_resp[2U]));
            }
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__act_resp[2U] 
                = (0x40000U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__act_resp[2U]);
        }
    } else if ((0x40000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellinp__i_axi_burst_splitter_gran__mst_resp_i[2U])) {
        if (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__w_cnt_gnt) {
            if ((1U > (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__w_cnt_len))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__act_resp[2U] 
                    = ((0x3c03ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__act_resp[2U]) 
                       | (0x3fc00U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellinp__i_axi_burst_splitter_gran__mst_resp_i[2U]));
                if (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__w_cnt_err) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__act_resp[2U] 
                        = (0x1000U | (0x3fe7ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__act_resp[2U]));
                }
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__act_resp[2U] 
                    = (0x40000U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__act_resp[2U]);
            }
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__gen_cnt__BRA__0__KET____DOT__i_cnt__DOT__counter_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__gen_cnt__BRA__0__KET____DOT__i_cnt__DOT__counter_q;
    if ((0x200U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__gen_cnt__BRA__0__KET____DOT__i_cnt__DOT__counter_q))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__gen_cnt__BRA__0__KET____DOT__i_cnt__DOT__counter_d = 0U;
    } else if (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__cnt_set) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__gen_cnt__BRA__0__KET____DOT__i_cnt__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[0U] 
                                        >> 0x18U)));
    } else if (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__cnt_dec) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__gen_cnt__BRA__0__KET____DOT__i_cnt__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__gen_cnt__BRA__0__KET____DOT__i_cnt__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__head_tail_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__head_tail_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__linked_data_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__linked_data_q;
    if (((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__idq_inp_req) 
         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__linked_data_q))) {
        if (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__idx_matches_in_id) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT____Vlvbound_hbb934158__0 
                = (1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__linked_data_q)));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__head_tail_d 
                = ((0xfdU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__head_tail_d)) 
                   | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT____Vlvbound_hbb934158__0) 
                      << 1U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT____Vlvbound_hcab6948a__0 
                = (1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__linked_data_q)));
            if ((2U >= ((IData)(1U) + (3U & ((IData)(3U) 
                                             * (1U 
                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__head_tail_q) 
                                                   >> 1U))))))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__linked_data_d 
                    = (((~ ((IData)(1U) << ((IData)(1U) 
                                            + (3U & 
                                               ((IData)(3U) 
                                                * (1U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__head_tail_q) 
                                                      >> 1U))))))) 
                        & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__linked_data_d)) 
                       | (7U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT____Vlvbound_hcab6948a__0) 
                                << ((IData)(1U) + (3U 
                                                   & ((IData)(3U) 
                                                      * 
                                                      (1U 
                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__head_tail_q) 
                                                          >> 1U))))))));
            }
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__head_tail_d 
                = ((0xffffff00U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__head_tail_d)) 
                   | (0xffU & ((0xf8U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[3U] 
                                         << 3U)) | 
                               ((4U & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__linked_data_q)) 
                                       << 2U)) | (2U 
                                                  & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__linked_data_q)) 
                                                     << 1U))))));
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT____Vlvbound_hd7c4efc9__0 
            = ((0U != (0x1ffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__gen_cnt__BRA__0__KET____DOT__i_cnt__DOT__counter_q))) 
               << 2U);
        if ((2U >= (3U & ((IData)(3U) * (1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__linked_data_q))))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__linked_data_d 
                = (((~ ((IData)(7U) << (3U & ((IData)(3U) 
                                              * (1U 
                                                 & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__linked_data_q))))))) 
                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__linked_data_d)) 
                   | (7U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT____Vlvbound_hd7c4efc9__0) 
                            << (3U & ((IData)(3U) * 
                                      (1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__linked_data_q))))))));
        }
    } else if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__r_cnt_req) {
        if (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__idx_matches_in_id) {
            if (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__idq_oup_pop) {
                if (((1U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__head_tail_q) 
                            >> 2U)) == (1U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__head_tail_q) 
                                              >> 1U)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__head_tail_d = 1U;
                } else {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT____Vlvbound_hbb8f580b__0 
                        = ((2U >= ((IData)(1U) + (3U 
                                                  & ((IData)(3U) 
                                                     * 
                                                     (1U 
                                                      & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__head_tail_q) 
                                                         >> 2U)))))) 
                           & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__linked_data_q) 
                              >> ((IData)(1U) + (3U 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (1U 
                                                     & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__head_tail_q) 
                                                        >> 2U)))))));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__head_tail_d 
                        = ((0xfbU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__head_tail_d)) 
                           | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT____Vlvbound_hbb8f580b__0) 
                              << 2U));
                }
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT____Vlvbound_h1ac22b0c__0 = 0U;
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT____Vlvbound_h091c9b30__0 = 1U;
                if ((2U >= (3U & ((IData)(3U) * (1U 
                                                 & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__head_tail_q) 
                                                    >> 2U)))))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__linked_data_d 
                        = (((~ ((IData)(7U) << (3U 
                                                & ((IData)(3U) 
                                                   * 
                                                   (1U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__head_tail_q) 
                                                       >> 2U)))))) 
                            & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__linked_data_d)) 
                           | (7U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT____Vlvbound_h1ac22b0c__0) 
                                    << (3U & ((IData)(3U) 
                                              * (1U 
                                                 & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__head_tail_q) 
                                                    >> 2U)))))));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__linked_data_d 
                        = (((~ ((IData)(1U) << (3U 
                                                & ((IData)(3U) 
                                                   * 
                                                   (1U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__head_tail_q) 
                                                       >> 2U)))))) 
                            & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__linked_data_d)) 
                           | (7U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT____Vlvbound_h091c9b30__0) 
                                    << (3U & ((IData)(3U) 
                                              * (1U 
                                                 & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_ar_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__head_tail_q) 
                                                    >> 2U)))))));
                }
            }
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__gen_cnt__BRA__0__KET____DOT__i_cnt__DOT__counter_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__gen_cnt__BRA__0__KET____DOT__i_cnt__DOT__counter_q;
    if ((0x200U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__gen_cnt__BRA__0__KET____DOT__i_cnt__DOT__counter_q))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__gen_cnt__BRA__0__KET____DOT__i_cnt__DOT__counter_d = 0U;
    } else if (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__cnt_set) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__gen_cnt__BRA__0__KET____DOT__i_cnt__DOT__counter_d 
            = (0x1ffU & ((IData)(1U) + (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[6U] 
                                                 >> 0xeU))));
    } else if (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__cnt_dec) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__gen_cnt__BRA__0__KET____DOT__i_cnt__DOT__counter_d 
            = (0x3ffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__gen_cnt__BRA__0__KET____DOT__i_cnt__DOT__counter_q) 
                         - (IData)(1U)));
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__head_tail_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__head_tail_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__linked_data_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__linked_data_q;
    if (((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__idq_inp_req) 
         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__linked_data_q))) {
        if (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__idx_matches_in_id) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT____Vlvbound_hbb934158__0 
                = (1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__linked_data_q)));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__head_tail_d 
                = ((0xfdU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__head_tail_d)) 
                   | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT____Vlvbound_hbb934158__0) 
                      << 1U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT____Vlvbound_hcab6948a__0 
                = (1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__linked_data_q)));
            if ((2U >= ((IData)(1U) + (3U & ((IData)(3U) 
                                             * (1U 
                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__head_tail_q) 
                                                   >> 1U))))))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__linked_data_d 
                    = (((~ ((IData)(1U) << ((IData)(1U) 
                                            + (3U & 
                                               ((IData)(3U) 
                                                * (1U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__head_tail_q) 
                                                      >> 1U))))))) 
                        & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__linked_data_d)) 
                       | (7U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT____Vlvbound_hcab6948a__0) 
                                << ((IData)(1U) + (3U 
                                                   & ((IData)(3U) 
                                                      * 
                                                      (1U 
                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__head_tail_q) 
                                                          >> 1U))))))));
            }
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__head_tail_d 
                = ((0xffffff00U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__head_tail_d)) 
                   | (0xffU & ((0xf8U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__mst_reqs_o[8U] 
                                         >> 0x13U)) 
                               | ((4U & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__linked_data_q)) 
                                         << 2U)) | 
                                  (2U & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__linked_data_q)) 
                                         << 1U))))));
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT____Vlvbound_hd7c4efc9__0 
            = ((0U != (0x1ffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__gen_cnt__BRA__0__KET____DOT__i_cnt__DOT__counter_q))) 
               << 2U);
        if ((2U >= (3U & ((IData)(3U) * (1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__linked_data_q))))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__linked_data_d 
                = (((~ ((IData)(7U) << (3U & ((IData)(3U) 
                                              * (1U 
                                                 & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__linked_data_q))))))) 
                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__linked_data_d)) 
                   | (7U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT____Vlvbound_hd7c4efc9__0) 
                            << (3U & ((IData)(3U) * 
                                      (1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__linked_data_q))))))));
        }
    } else if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__w_cnt_req) {
        if (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__idx_matches_in_id) {
            if (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__idq_oup_pop) {
                if (((1U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__head_tail_q) 
                            >> 2U)) == (1U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__head_tail_q) 
                                              >> 1U)))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__head_tail_d = 1U;
                } else {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT____Vlvbound_hbb8f580b__0 
                        = ((2U >= ((IData)(1U) + (3U 
                                                  & ((IData)(3U) 
                                                     * 
                                                     (1U 
                                                      & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__head_tail_q) 
                                                         >> 2U)))))) 
                           & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__linked_data_q) 
                              >> ((IData)(1U) + (3U 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (1U 
                                                     & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__head_tail_q) 
                                                        >> 2U)))))));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__head_tail_d 
                        = ((0xfbU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__head_tail_d)) 
                           | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT____Vlvbound_hbb8f580b__0) 
                              << 2U));
                }
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT____Vlvbound_h1ac22b0c__0 = 0U;
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT____Vlvbound_h091c9b30__0 = 1U;
                if ((2U >= (3U & ((IData)(3U) * (1U 
                                                 & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__head_tail_q) 
                                                    >> 2U)))))) {
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__linked_data_d 
                        = (((~ ((IData)(7U) << (3U 
                                                & ((IData)(3U) 
                                                   * 
                                                   (1U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__head_tail_q) 
                                                       >> 2U)))))) 
                            & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__linked_data_d)) 
                           | (7U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT____Vlvbound_h1ac22b0c__0) 
                                    << (3U & ((IData)(3U) 
                                              * (1U 
                                                 & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__head_tail_q) 
                                                    >> 2U)))))));
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__linked_data_d 
                        = (((~ ((IData)(1U) << (3U 
                                                & ((IData)(3U) 
                                                   * 
                                                   (1U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__head_tail_q) 
                                                       >> 2U)))))) 
                            & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__linked_data_d)) 
                           | (7U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT____Vlvbound_h091c9b30__0) 
                                    << (3U & ((IData)(3U) 
                                              * (1U 
                                                 & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__i_idq__DOT__head_tail_q) 
                                                    >> 2U)))))));
                }
            }
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vcellinp__i_b_spill_register__ready_i)) 
           & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vcellinp__i_b_spill_register__ready_i));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__aw_pop 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT____VdfgTmp_hb00f0519__0) 
           & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vcellinp__i_b_spill_register__ready_i));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_fill 
        = ((~ (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vcellinp__i_r_spill_register__ready_i)) 
           & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_drain));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_drain 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__b_full_q) 
           & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vcellinp__i_r_spill_register__ready_i));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__ar_pop 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT____VdfgTmp_h87610af7__0) 
           & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vcellinp__i_r_spill_register__ready_i));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__aw_push 
        = ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT____VdfgTmp_hdb3c94e9__0) 
           & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellinp__i_axi_burst_splitter_gran_aw_chan__ax_ready_i));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_r_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_valid) 
           & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_ready));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_chan[0U] = 0xe9787956U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_chan[1U] = 2U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_chan[2U] = 0U;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__rd_active_o = 0ULL;
    if (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__ar_dec_valid) {
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx 
            = ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_ar_decode__DOT____Vcellout__i_addr_decode_dync__idx_o) 
               << 3U);
        if ((0x28U > ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx)) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h9dc74400__0 
                = ((0x13fU >= (0x1ffU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx 
                                         << 3U))) ? 
                   (0xffU & (((0U == (0x1fU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx 
                                               << 3U)))
                               ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_q[
                                       (((IData)(7U) 
                                         + (0x1ffU 
                                            & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx 
                                               << 3U))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx 
                                            << 3U))))) 
                             | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_q[
                                (0xfU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx 
                                         >> 2U))] >> 
                                (0x1fU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx 
                                          << 3U)))))
                    : 0U);
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_chan[0U] 
                = ((0xfffffc03U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_chan[0U]) 
                   | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h9dc74400__0) 
                      << 2U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h1c55e87a__0 
                = ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_valid) 
                   & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_ready));
            if ((0x27U >= (0x3fU & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx))) {
                ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__rd_active_o 
                    = (((~ (1ULL << (0x3fU & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx))) 
                        & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__rd_active_o) 
                       | (0xffffffffffULL & ((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h1c55e87a__0)) 
                                             << (0x3fU 
                                                 & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx))));
            }
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_chan[0U] 
                = (0xfffffc03U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_chan[0U]);
        }
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx 
            = ((IData)(1U) + ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_ar_decode__DOT____Vcellout__i_addr_decode_dync__idx_o) 
                              << 3U));
        if ((0x28U > ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx)) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h9dc74400__0 
                = ((0x13fU >= (0x1ffU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx 
                                         << 3U))) ? 
                   (0xffU & (((0U == (0x1fU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx 
                                               << 3U)))
                               ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_q[
                                       (((IData)(7U) 
                                         + (0x1ffU 
                                            & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx 
                                               << 3U))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx 
                                            << 3U))))) 
                             | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_q[
                                (0xfU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx 
                                         >> 2U))] >> 
                                (0x1fU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx 
                                          << 3U)))))
                    : 0U);
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_chan[0U] 
                = ((0xfffc03ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_chan[0U]) 
                   | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h9dc74400__0) 
                      << 0xaU));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h1c55e87a__0 
                = ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_valid) 
                   & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_ready));
            if ((0x27U >= (0x3fU & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx))) {
                ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__rd_active_o 
                    = (((~ (1ULL << (0x3fU & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx))) 
                        & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__rd_active_o) 
                       | (0xffffffffffULL & ((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h1c55e87a__0)) 
                                             << (0x3fU 
                                                 & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx))));
            }
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_chan[0U] 
                = (0xfffc03ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_chan[0U]);
        }
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx 
            = ((IData)(2U) + ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_ar_decode__DOT____Vcellout__i_addr_decode_dync__idx_o) 
                              << 3U));
        if ((0x28U > ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx)) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h9dc74400__0 
                = ((0x13fU >= (0x1ffU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx 
                                         << 3U))) ? 
                   (0xffU & (((0U == (0x1fU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx 
                                               << 3U)))
                               ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_q[
                                       (((IData)(7U) 
                                         + (0x1ffU 
                                            & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx 
                                               << 3U))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx 
                                            << 3U))))) 
                             | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_q[
                                (0xfU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx 
                                         >> 2U))] >> 
                                (0x1fU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx 
                                          << 3U)))))
                    : 0U);
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_chan[0U] 
                = ((0xfc03ffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_chan[0U]) 
                   | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h9dc74400__0) 
                      << 0x12U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h1c55e87a__0 
                = ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_valid) 
                   & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_ready));
            if ((0x27U >= (0x3fU & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx))) {
                ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__rd_active_o 
                    = (((~ (1ULL << (0x3fU & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx))) 
                        & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__rd_active_o) 
                       | (0xffffffffffULL & ((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h1c55e87a__0)) 
                                             << (0x3fU 
                                                 & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx))));
            }
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_chan[0U] 
                = (0xfc03ffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_chan[0U]);
        }
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx 
            = ((IData)(3U) + ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_ar_decode__DOT____Vcellout__i_addr_decode_dync__idx_o) 
                              << 3U));
        if ((0x28U > ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx)) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h9dc74400__0 
                = ((0x13fU >= (0x1ffU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx 
                                         << 3U))) ? 
                   (0xffU & (((0U == (0x1fU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx 
                                               << 3U)))
                               ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_q[
                                       (((IData)(7U) 
                                         + (0x1ffU 
                                            & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx 
                                               << 3U))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx 
                                            << 3U))))) 
                             | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_q[
                                (0xfU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx 
                                         >> 2U))] >> 
                                (0x1fU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx 
                                          << 3U)))))
                    : 0U);
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_chan[0U] 
                = ((0x3ffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_chan[0U]) 
                   | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h9dc74400__0) 
                      << 0x1aU));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_chan[1U] 
                = ((0xfffffffcU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_chan[1U]) 
                   | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h9dc74400__0) 
                      >> 6U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h1c55e87a__0 
                = ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_valid) 
                   & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_ready));
            if ((0x27U >= (0x3fU & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx))) {
                ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__rd_active_o 
                    = (((~ (1ULL << (0x3fU & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx))) 
                        & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__rd_active_o) 
                       | (0xffffffffffULL & ((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h1c55e87a__0)) 
                                             << (0x3fU 
                                                 & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx))));
            }
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_chan[0U] 
                = (0x3ffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_chan[0U]);
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_chan[1U] 
                = (0xfffffffcU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_chan[1U]);
        }
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx 
            = ((IData)(4U) + ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_ar_decode__DOT____Vcellout__i_addr_decode_dync__idx_o) 
                              << 3U));
        if ((0x28U > ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx)) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h9dc74400__0 
                = ((0x13fU >= (0x1ffU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx 
                                         << 3U))) ? 
                   (0xffU & (((0U == (0x1fU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx 
                                               << 3U)))
                               ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_q[
                                       (((IData)(7U) 
                                         + (0x1ffU 
                                            & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx 
                                               << 3U))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx 
                                            << 3U))))) 
                             | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_q[
                                (0xfU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx 
                                         >> 2U))] >> 
                                (0x1fU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx 
                                          << 3U)))))
                    : 0U);
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_chan[1U] 
                = ((0xfffffc03U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_chan[1U]) 
                   | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h9dc74400__0) 
                      << 2U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h1c55e87a__0 
                = ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_valid) 
                   & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_ready));
            if ((0x27U >= (0x3fU & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx))) {
                ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__rd_active_o 
                    = (((~ (1ULL << (0x3fU & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx))) 
                        & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__rd_active_o) 
                       | (0xffffffffffULL & ((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h1c55e87a__0)) 
                                             << (0x3fU 
                                                 & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx))));
            }
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_chan[1U] 
                = (0xfffffc03U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_chan[1U]);
        }
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx 
            = ((IData)(5U) + ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_ar_decode__DOT____Vcellout__i_addr_decode_dync__idx_o) 
                              << 3U));
        if ((0x28U > ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx)) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h9dc74400__0 
                = ((0x13fU >= (0x1ffU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx 
                                         << 3U))) ? 
                   (0xffU & (((0U == (0x1fU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx 
                                               << 3U)))
                               ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_q[
                                       (((IData)(7U) 
                                         + (0x1ffU 
                                            & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx 
                                               << 3U))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx 
                                            << 3U))))) 
                             | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_q[
                                (0xfU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx 
                                         >> 2U))] >> 
                                (0x1fU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx 
                                          << 3U)))))
                    : 0U);
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_chan[1U] 
                = ((0xfffc03ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_chan[1U]) 
                   | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h9dc74400__0) 
                      << 0xaU));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h1c55e87a__0 
                = ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_valid) 
                   & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_ready));
            if ((0x27U >= (0x3fU & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx))) {
                ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__rd_active_o 
                    = (((~ (1ULL << (0x3fU & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx))) 
                        & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__rd_active_o) 
                       | (0xffffffffffULL & ((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h1c55e87a__0)) 
                                             << (0x3fU 
                                                 & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx))));
            }
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_chan[1U] 
                = (0xfffc03ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_chan[1U]);
        }
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx 
            = ((IData)(6U) + ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_ar_decode__DOT____Vcellout__i_addr_decode_dync__idx_o) 
                              << 3U));
        if ((0x28U > ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx)) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h9dc74400__0 
                = ((0x13fU >= (0x1ffU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx 
                                         << 3U))) ? 
                   (0xffU & (((0U == (0x1fU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx 
                                               << 3U)))
                               ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_q[
                                       (((IData)(7U) 
                                         + (0x1ffU 
                                            & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx 
                                               << 3U))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx 
                                            << 3U))))) 
                             | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_q[
                                (0xfU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx 
                                         >> 2U))] >> 
                                (0x1fU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx 
                                          << 3U)))))
                    : 0U);
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_chan[1U] 
                = ((0xfc03ffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_chan[1U]) 
                   | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h9dc74400__0) 
                      << 0x12U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h1c55e87a__0 
                = ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_valid) 
                   & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_ready));
            if ((0x27U >= (0x3fU & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx))) {
                ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__rd_active_o 
                    = (((~ (1ULL << (0x3fU & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx))) 
                        & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__rd_active_o) 
                       | (0xffffffffffULL & ((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h1c55e87a__0)) 
                                             << (0x3fU 
                                                 & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx))));
            }
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_chan[1U] 
                = (0xfc03ffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_chan[1U]);
        }
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx 
            = ((IData)(7U) + ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_ar_decode__DOT____Vcellout__i_addr_decode_dync__idx_o) 
                              << 3U));
        if ((0x28U > ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx)) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h9dc74400__0 
                = ((0x13fU >= (0x1ffU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx 
                                         << 3U))) ? 
                   (0xffU & (((0U == (0x1fU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx 
                                               << 3U)))
                               ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_q[
                                       (((IData)(7U) 
                                         + (0x1ffU 
                                            & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx 
                                               << 3U))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx 
                                            << 3U))))) 
                             | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_q[
                                (0xfU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx 
                                         >> 2U))] >> 
                                (0x1fU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx 
                                          << 3U)))))
                    : 0U);
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_chan[1U] 
                = ((0x3ffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_chan[1U]) 
                   | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h9dc74400__0) 
                      << 0x1aU));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_chan[2U] 
                = (3U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h9dc74400__0) 
                         >> 6U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h1c55e87a__0 
                = ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_valid) 
                   & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_ready));
            if ((0x27U >= (0x3fU & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx))) {
                ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__rd_active_o 
                    = (((~ (1ULL << (0x3fU & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx))) 
                        & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__rd_active_o) 
                       | (0xffffffffffULL & ((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h1c55e87a__0)) 
                                             << (0x3fU 
                                                 & ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk4__DOT__reg_byte_idx))));
            }
        } else {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_chan[1U] 
                = (0x3ffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_chan[1U]);
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_chan[2U] = 0U;
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_chan[0U] 
            = (0xfffffffcU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_chan[0U]);
    }
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__ar_push 
        = ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_valid) 
           & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellinp__i_axi_burst_splitter_gran_ar_chan__ax_ready_i));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT____Vcellinp__i_axi_lite_regs__axi_req_i[0U] 
        = (((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[2U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[1U])))) 
            << 5U) | ((0x1cU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[0U] 
                                >> 9U)) | (((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__r_valid) 
                                            << 1U) 
                                           | (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vcellinp__i_r_spill_register__ready_i))));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT____Vcellinp__i_axi_lite_regs__axi_req_i[1U] 
        = (((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[2U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[1U])))) 
            >> 0x1bU) | ((IData)(((((QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[2U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[1U]))) 
                                  >> 0x20U)) << 5U));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT____Vcellinp__i_axi_lite_regs__axi_req_i[2U] 
        = (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[4U] 
             << 0x1eU) | (0x3fffff80U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[3U] 
                                         >> 2U))) | 
           ((0x40U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[3U]) 
            | (((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vcellinp__i_b_spill_register__ready_i) 
                << 5U) | ((IData)(((((QData)((IData)(
                                                     vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[2U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[1U]))) 
                                   >> 0x20U)) >> 0x1bU))));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT____Vcellinp__i_axi_lite_regs__axi_req_i[3U] 
        = ((0x7fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[4U] 
                     >> 2U)) | ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[5U] 
                                 << 0x1eU) | (0x3fffff80U 
                                              & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[4U] 
                                                 >> 2U))));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT____Vcellinp__i_axi_lite_regs__axi_req_i[4U] 
        = (((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[8U])) 
                      << 0x2aU) | (((QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[7U])) 
                                    << 0xaU) | ((QData)((IData)(
                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[6U])) 
                                                >> 0x16U)))) 
            << 0x13U) | ((0x70000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[6U] 
                                      << 0xfU)) | (
                                                   ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT____VdfgTmp_hdb3c94e9__0) 
                                                    << 0xfU) 
                                                   | ((0x7fU 
                                                       & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[5U] 
                                                          >> 2U)) 
                                                      | (0x7f80U 
                                                         & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[5U] 
                                                            >> 2U))))));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT____Vcellinp__i_axi_lite_regs__axi_req_i[5U] 
        = (((IData)((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[8U])) 
                      << 0x2aU) | (((QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[7U])) 
                                    << 0xaU) | ((QData)((IData)(
                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[6U])) 
                                                >> 0x16U)))) 
            >> 0xdU) | ((IData)(((((QData)((IData)(
                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[8U])) 
                                   << 0x2aU) | (((QData)((IData)(
                                                                 vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[7U])) 
                                                 << 0xaU) 
                                                | ((QData)((IData)(
                                                                   vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[6U])) 
                                                   >> 0x16U))) 
                                 >> 0x20U)) << 0x13U));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT____Vcellinp__i_axi_lite_regs__axi_req_i[6U] 
        = ((IData)(((((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[8U])) 
                      << 0x2aU) | (((QData)((IData)(
                                                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[7U])) 
                                    << 0xaU) | ((QData)((IData)(
                                                                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[6U])) 
                                                >> 0x16U))) 
                    >> 0x20U)) >> 0xdU);
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____VdfgTmp_h925e6fb1__0 
        = ((0x27U >= (0x3fU & ((IData)(7U) + (0x7fU 
                                              & ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_aw_decode__DOT____Vcellout__i_addr_decode_dync__idx_o) 
                                                 << 3U))))) 
           & (IData)((0xffff00ULL >> (0x3fU & ((IData)(7U) 
                                               + (0x7fU 
                                                  & ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_aw_decode__DOT____Vcellout__i_addr_decode_dync__idx_o) 
                                                     << 3U)))))));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____VdfgTmp_h9154a601__0 
        = ((0x27U >= (0x3fU & ((IData)(6U) + (0x7fU 
                                              & ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_aw_decode__DOT____Vcellout__i_addr_decode_dync__idx_o) 
                                                 << 3U))))) 
           & (IData)((0xffff00ULL >> (0x3fU & ((IData)(6U) 
                                               + (0x7fU 
                                                  & ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_aw_decode__DOT____Vcellout__i_addr_decode_dync__idx_o) 
                                                     << 3U)))))));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____VdfgTmp_hcc98b241__0 
        = ((0x27U >= (0x3fU & ((IData)(5U) + (0x7fU 
                                              & ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_aw_decode__DOT____Vcellout__i_addr_decode_dync__idx_o) 
                                                 << 3U))))) 
           & (IData)((0xffff00ULL >> (0x3fU & ((IData)(5U) 
                                               + (0x7fU 
                                                  & ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_aw_decode__DOT____Vcellout__i_addr_decode_dync__idx_o) 
                                                     << 3U)))))));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____VdfgTmp_h83011051__0 
        = ((0x27U >= (0x3fU & ((IData)(4U) + (0x7fU 
                                              & ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_aw_decode__DOT____Vcellout__i_addr_decode_dync__idx_o) 
                                                 << 3U))))) 
           & (IData)((0xffff00ULL >> (0x3fU & ((IData)(4U) 
                                               + (0x7fU 
                                                  & ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_aw_decode__DOT____Vcellout__i_addr_decode_dync__idx_o) 
                                                     << 3U)))))));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____VdfgTmp_hd1ccf495__0 
        = ((0x27U >= (0x3fU & ((IData)(3U) + (0x7fU 
                                              & ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_aw_decode__DOT____Vcellout__i_addr_decode_dync__idx_o) 
                                                 << 3U))))) 
           & (IData)((0xffff00ULL >> (0x3fU & ((IData)(3U) 
                                               + (0x7fU 
                                                  & ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_aw_decode__DOT____Vcellout__i_addr_decode_dync__idx_o) 
                                                     << 3U)))))));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____VdfgTmp_hfe904795__0 
        = ((0x27U >= (0x3fU & ((IData)(2U) + (0x7fU 
                                              & ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_aw_decode__DOT____Vcellout__i_addr_decode_dync__idx_o) 
                                                 << 3U))))) 
           & (IData)((0xffff00ULL >> (0x3fU & ((IData)(2U) 
                                               + (0x7fU 
                                                  & ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_aw_decode__DOT____Vcellout__i_addr_decode_dync__idx_o) 
                                                     << 3U)))))));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____VdfgTmp_hc3608be4__0 
        = ((0x27U >= (0x3fU & ((IData)(1U) + (0x7fU 
                                              & ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_aw_decode__DOT____Vcellout__i_addr_decode_dync__idx_o) 
                                                 << 3U))))) 
           & (IData)((0xffff00ULL >> (0x3fU & ((IData)(1U) 
                                               + (0x7fU 
                                                  & ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_aw_decode__DOT____Vcellout__i_addr_decode_dync__idx_o) 
                                                     << 3U)))))));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____VdfgTmp_h22427f3f__0 
        = ((0x27U >= (0x3fU & ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_aw_decode__DOT____Vcellout__i_addr_decode_dync__idx_o) 
                               << 3U))) & (IData)((0xffff00ULL 
                                                   >> 
                                                   (0x3fU 
                                                    & ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_aw_decode__DOT____Vcellout__i_addr_decode_dync__idx_o) 
                                                       << 3U)))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : ((2U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_err_slv__DOT__err_resp[2U] 
                      >> 0x11U)) | (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__act_resp[2U] 
                                          >> 0x12U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__lock_q)
            ? (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_lock__DOT__req_q)
            : ((2U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_err_slv__DOT__err_resp[2U] 
                      >> 8U)) | (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__act_resp[2U] 
                                       >> 9U))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellinp__i_demux_supported_vs_unsupported__mst_resps_i[0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__act_resp[0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellinp__i_demux_supported_vs_unsupported__mst_resps_i[1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__act_resp[1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellinp__i_demux_supported_vs_unsupported__mst_resps_i[2U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_err_slv__DOT__err_resp[0U] 
            << 0x16U) | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__act_resp[2U]);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellinp__i_demux_supported_vs_unsupported__mst_resps_i[3U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_err_slv__DOT__err_resp[0U] 
            >> 0xaU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_err_slv__DOT__err_resp[1U] 
                        << 0x16U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellinp__i_demux_supported_vs_unsupported__mst_resps_i[4U] 
        = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_err_slv__DOT__err_resp[1U] 
            >> 0xaU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_err_slv__DOT__err_resp[2U] 
                        << 0x16U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellinp__i_demux_supported_vs_unsupported__mst_resps_i[5U] 
        = (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_err_slv__DOT__err_resp[2U] 
           >> 0xaU);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__read_pointer_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__read_pointer_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__read_pointer_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__read_pointer_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__gate_clock = 1U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__write_pointer_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__write_pointer_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__status_cnt_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__status_cnt_q;
    if (((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__aw_pop) 
         & (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__read_pointer_n 
            = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__read_pointer_n) 
               & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__read_pointer_q)));
    }
    if (((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__aw_push) 
         & (1U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__gate_clock = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__write_pointer_n 
            = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__write_pointer_q) 
               & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__write_pointer_q)));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__aw_pop) 
         & (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__aw_push) 
           & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__aw_pop)) 
          & (1U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__status_cnt_n 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__status_cnt_q;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__mem_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__mem_q;
    if (((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__aw_push) 
         & (1U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT____Vlvbound_h7882bb24__0 
            = (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[8U] 
                        >> 0x16U));
        if ((4U >= (7U & ((IData)(5U) * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__write_pointer_q))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__mem_n 
                = (((~ ((IData)(0x1fU) << (7U & ((IData)(5U) 
                                                 * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__write_pointer_q))))) 
                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__mem_n)) 
                   | (0x1fU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT____Vlvbound_h7882bb24__0) 
                               << (7U & ((IData)(5U) 
                                         * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_aw_id_fifo__DOT__write_pointer_q))))));
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__gate_clock = 1U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__write_pointer_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__write_pointer_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__status_cnt_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__status_cnt_q;
    if (((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__ar_pop) 
         & (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__read_pointer_n 
            = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__read_pointer_n) 
               & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__read_pointer_q)));
    }
    if (((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__ar_push) 
         & (1U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__gate_clock = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__write_pointer_n 
            = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__write_pointer_q) 
               & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__write_pointer_q)));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(1U) + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__status_cnt_q)));
    }
    if (((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__ar_pop) 
         & (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__status_cnt_n 
            = (3U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__status_cnt_q) 
                     - (IData)(1U)));
    }
    if (((((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__ar_push) 
           & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__ar_pop)) 
          & (1U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__status_cnt_q))) 
         & (0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__status_cnt_n 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__status_cnt_q;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__mem_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__mem_q;
    if (((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__ar_push) 
         & (1U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__status_cnt_q)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT____Vlvbound_h7882bb24__0 
            = (0x1fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT____Vcellout__i_axi_burst_splitter_gran__mst_req_o[3U]);
        if ((4U >= (7U & ((IData)(5U) * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__write_pointer_q))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__mem_n 
                = (((~ ((IData)(0x1fU) << (7U & ((IData)(5U) 
                                                 * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__write_pointer_q))))) 
                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__mem_n)) 
                   | (0x1fU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT____Vlvbound_h7882bb24__0) 
                               << (7U & ((IData)(5U) 
                                         * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_to_axi_lite_id_reflect__DOT__i_ar_id_fifo__DOT__write_pointer_q))))));
        }
    }
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____VdfgExtracted_h61926f08__0 = 1U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__genblk1__DOT__i_b_mux__req_o 
        = (IData)((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d)));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffffffeU & (((1U <= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)) 
                            << 1U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d))) 
           | (1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d)));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = (0xfffffffeU & (((1U > (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)) 
                           << 1U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__req_d)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__genblk1__DOT__i_r_mux__req_o 
        = (IData)((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d)));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask 
        = ((0xfffffffeU & (((1U <= (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)) 
                            << 1U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d))) 
           | (1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d)));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask 
        = (0xfffffffeU & (((1U > (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)) 
                           << 1U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__req_d)));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__w_cnt_down = 0U;
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__w_select_valid) 
         & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__w_select)))) {
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__w_cnt_down 
            = (1U & (IData)(((0x140U == (0x140U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT____Vcellout__i_axi_atop_filter__mst_req_o[3U])) 
                             & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellinp__i_demux_supported_vs_unsupported__mst_resps_i[2U] 
                                >> 0x13U))));
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__slv_resp_o[2U] 
        = (0x37ffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__slv_resp_o[2U]);
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__w_select_valid) 
         & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__w_select)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__slv_resp_o[2U] 
            = ((0x37ffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__slv_resp_o[2U]) 
               | (0x80000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellinp__i_demux_supported_vs_unsupported__mst_resps_i[2U]));
    }
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__w_select_valid) 
         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__w_select))) {
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__w_cnt_down 
            = (1U & (IData)(((0x140U == (0x140U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT____Vcellout__i_axi_atop_filter__mst_req_o[3U])) 
                             & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellinp__i_demux_supported_vs_unsupported__mst_resps_i[5U] 
                                >> 9U))));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__slv_resp_o[2U] 
            = ((0x37ffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__slv_resp_o[2U]) 
               | (0x80000U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellinp__i_demux_supported_vs_unsupported__mst_resps_i[5U] 
                              << 0xaU)));
    }
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__ar_ready 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__ar_valid) 
           & ((0xabU >= ((IData)(0x54U) + (0xffU & 
                                           ((IData)(0x56U) 
                                            * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__sel_ar_unsupported))))) 
              & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellinp__i_demux_supported_vs_unsupported__mst_resps_i[
                 (((IData)(0x54U) + (0xffU & ((IData)(0x56U) 
                                              * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__sel_ar_unsupported)))) 
                  >> 5U)] >> (0x1fU & ((IData)(0x54U) 
                                       + (0xffU & ((IData)(0x56U) 
                                                   * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__sel_ar_unsupported))))))));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__aw_ready 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__aw_valid) 
           & ((0xabU >= ((IData)(0x55U) + (0xffU & 
                                           ((IData)(0x56U) 
                                            * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__sel_aw_unsupported))))) 
              & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellinp__i_demux_supported_vs_unsupported__mst_resps_i[
                 (((IData)(0x55U) + (0xffU & ((IData)(0x56U) 
                                              * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__sel_aw_unsupported)))) 
                  >> 5U)] >> (0x1fU & ((IData)(0x55U) 
                                       + (0xffU & ((IData)(0x56U) 
                                                   * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__sel_aw_unsupported))))))));
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__b_valid = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__b_chan = 2U;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_d[0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_q[0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_d[1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_q[1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_d[2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_q[2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_d[3U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_q[3U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_d[4U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_q[4U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_d[5U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_q[5U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_d[6U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_q[6U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_d[7U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_q[7U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_d[8U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_q[8U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_d[9U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_q[9U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_update = 0ULL;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__wr_active_d = 0ULL;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT____Vcellout__i_axi_lite_regs__axi_resp_o[2U] 
        = (0x7fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT____Vcellout__i_axi_lite_regs__axi_resp_o[2U]);
    if ((((ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT____Vcellinp__i_axi_lite_regs__axi_req_i[4U] 
           >> 0xfU) & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT____Vcellinp__i_axi_lite_regs__axi_req_i[2U] 
                       >> 6U)) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__b_ready))) {
        if (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__aw_dec_valid) {
            if (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____VdfgExtracted_h61926f08__0) {
                ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__b_valid = 1U;
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__b_chan 
                    = ((((0x28U <= (0x7fU & ((IData)(7U) 
                                             + ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_aw_decode__DOT____Vcellout__i_addr_decode_dync__idx_o) 
                                                << 3U)))) 
                         | (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____VdfgTmp_h925e6fb1__0)) 
                        & (((0x28U <= (0x7fU & ((IData)(6U) 
                                                + ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_aw_decode__DOT____Vcellout__i_addr_decode_dync__idx_o) 
                                                   << 3U)))) 
                            | (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____VdfgTmp_h9154a601__0)) 
                           & (((0x28U <= (0x7fU & ((IData)(5U) 
                                                   + 
                                                   ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_aw_decode__DOT____Vcellout__i_addr_decode_dync__idx_o) 
                                                    << 3U)))) 
                               | (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____VdfgTmp_hcc98b241__0)) 
                              & (((0x28U <= (0x7fU 
                                             & ((IData)(4U) 
                                                + ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_aw_decode__DOT____Vcellout__i_addr_decode_dync__idx_o) 
                                                   << 3U)))) 
                                  | (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____VdfgTmp_h83011051__0)) 
                                 & (((0x28U <= (0x7fU 
                                                & ((IData)(3U) 
                                                   + 
                                                   ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_aw_decode__DOT____Vcellout__i_addr_decode_dync__idx_o) 
                                                    << 3U)))) 
                                     | (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____VdfgTmp_hd1ccf495__0)) 
                                    & (((0x28U <= (0x7fU 
                                                   & ((IData)(2U) 
                                                      + 
                                                      ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_aw_decode__DOT____Vcellout__i_addr_decode_dync__idx_o) 
                                                       << 3U)))) 
                                        | (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____VdfgTmp_hfe904795__0)) 
                                       & (((0x28U <= 
                                            (0x7fU 
                                             & ((IData)(1U) 
                                                + ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_aw_decode__DOT____Vcellout__i_addr_decode_dync__idx_o) 
                                                   << 3U)))) 
                                           | (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____VdfgTmp_hc3608be4__0)) 
                                          & ((0x28U 
                                              <= (0x7fU 
                                                  & ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_aw_decode__DOT____Vcellout__i_addr_decode_dync__idx_o) 
                                                     << 3U))) 
                                             | (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____VdfgTmp_h22427f3f__0)))))))))
                        ? 2U : 0U);
                ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx 
                    = (0x7fU & ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_aw_decode__DOT____Vcellout__i_addr_decode_dync__idx_o) 
                                << 3U));
                if ((0x28U > (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx))) {
                    if ((1U & ((~ ((0x27U >= (0x3fU 
                                              & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx))) 
                                   & (IData)((0xffff00ULL 
                                              >> (0x3fU 
                                                  & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx)))))) 
                               & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT____Vcellinp__i_axi_lite_regs__axi_req_i[2U] 
                                  >> 7U)))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h878bc60b__0 
                            = (0xffU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT____Vcellinp__i_axi_lite_regs__axi_req_i[2U] 
                                        >> 0xfU));
                        if ((0x13fU >= (0x1ffU & ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx) 
                                                  << 3U)))) {
                            VL_ASSIGNSEL_WI(320,8,(0x1ffU 
                                                   & ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx) 
                                                      << 3U)), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_d, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h878bc60b__0);
                        }
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h15845fb2__0 = 1U;
                        if ((0x27U >= (0x3fU & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx)))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_update 
                                = (((~ (1ULL << (0x3fU 
                                                 & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx)))) 
                                    & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_update) 
                                   | (0xffffffffffULL 
                                      & ((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h15845fb2__0)) 
                                         << (0x3fU 
                                             & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx)))));
                        }
                    }
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_ha3d7a122__0 
                        = (1U & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT____Vcellinp__i_axi_lite_regs__axi_req_i[2U] 
                                 >> 7U));
                    if ((0x27U >= (0x3fU & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx)))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__wr_active_d 
                            = (((~ (1ULL << (0x3fU 
                                             & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx)))) 
                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__wr_active_d) 
                               | (0xffffffffffULL & 
                                  ((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_ha3d7a122__0)) 
                                   << (0x3fU & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx)))));
                    }
                }
                ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx 
                    = (0x7fU & ((IData)(1U) + ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_aw_decode__DOT____Vcellout__i_addr_decode_dync__idx_o) 
                                               << 3U)));
                if ((0x28U > (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx))) {
                    if ((1U & ((~ ((0x27U >= (0x3fU 
                                              & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx))) 
                                   & (IData)((0xffff00ULL 
                                              >> (0x3fU 
                                                  & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx)))))) 
                               & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT____Vcellinp__i_axi_lite_regs__axi_req_i[2U] 
                                  >> 8U)))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h878bc60b__0 
                            = (0xffU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT____Vcellinp__i_axi_lite_regs__axi_req_i[2U] 
                                        >> 0x17U));
                        if ((0x13fU >= (0x1ffU & ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx) 
                                                  << 3U)))) {
                            VL_ASSIGNSEL_WI(320,8,(0x1ffU 
                                                   & ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx) 
                                                      << 3U)), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_d, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h878bc60b__0);
                        }
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h15845fb2__0 = 1U;
                        if ((0x27U >= (0x3fU & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx)))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_update 
                                = (((~ (1ULL << (0x3fU 
                                                 & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx)))) 
                                    & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_update) 
                                   | (0xffffffffffULL 
                                      & ((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h15845fb2__0)) 
                                         << (0x3fU 
                                             & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx)))));
                        }
                    }
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_ha3d7a122__0 
                        = (1U & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT____Vcellinp__i_axi_lite_regs__axi_req_i[2U] 
                                 >> 8U));
                    if ((0x27U >= (0x3fU & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx)))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__wr_active_d 
                            = (((~ (1ULL << (0x3fU 
                                             & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx)))) 
                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__wr_active_d) 
                               | (0xffffffffffULL & 
                                  ((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_ha3d7a122__0)) 
                                   << (0x3fU & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx)))));
                    }
                }
                ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx 
                    = (0x7fU & ((IData)(2U) + ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_aw_decode__DOT____Vcellout__i_addr_decode_dync__idx_o) 
                                               << 3U)));
                if ((0x28U > (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx))) {
                    if ((1U & ((~ ((0x27U >= (0x3fU 
                                              & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx))) 
                                   & (IData)((0xffff00ULL 
                                              >> (0x3fU 
                                                  & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx)))))) 
                               & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT____Vcellinp__i_axi_lite_regs__axi_req_i[2U] 
                                  >> 9U)))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h878bc60b__0 
                            = (0xffU & ((ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT____Vcellinp__i_axi_lite_regs__axi_req_i[3U] 
                                         << 1U) | (
                                                   ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT____Vcellinp__i_axi_lite_regs__axi_req_i[2U] 
                                                   >> 0x1fU)));
                        if ((0x13fU >= (0x1ffU & ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx) 
                                                  << 3U)))) {
                            VL_ASSIGNSEL_WI(320,8,(0x1ffU 
                                                   & ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx) 
                                                      << 3U)), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_d, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h878bc60b__0);
                        }
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h15845fb2__0 = 1U;
                        if ((0x27U >= (0x3fU & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx)))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_update 
                                = (((~ (1ULL << (0x3fU 
                                                 & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx)))) 
                                    & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_update) 
                                   | (0xffffffffffULL 
                                      & ((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h15845fb2__0)) 
                                         << (0x3fU 
                                             & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx)))));
                        }
                    }
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_ha3d7a122__0 
                        = (1U & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT____Vcellinp__i_axi_lite_regs__axi_req_i[2U] 
                                 >> 9U));
                    if ((0x27U >= (0x3fU & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx)))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__wr_active_d 
                            = (((~ (1ULL << (0x3fU 
                                             & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx)))) 
                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__wr_active_d) 
                               | (0xffffffffffULL & 
                                  ((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_ha3d7a122__0)) 
                                   << (0x3fU & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx)))));
                    }
                }
                ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx 
                    = (0x7fU & ((IData)(3U) + ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_aw_decode__DOT____Vcellout__i_addr_decode_dync__idx_o) 
                                               << 3U)));
                if ((0x28U > (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx))) {
                    if ((1U & ((~ ((0x27U >= (0x3fU 
                                              & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx))) 
                                   & (IData)((0xffff00ULL 
                                              >> (0x3fU 
                                                  & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx)))))) 
                               & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT____Vcellinp__i_axi_lite_regs__axi_req_i[2U] 
                                  >> 0xaU)))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h878bc60b__0 
                            = (0xffU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT____Vcellinp__i_axi_lite_regs__axi_req_i[3U] 
                                        >> 7U));
                        if ((0x13fU >= (0x1ffU & ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx) 
                                                  << 3U)))) {
                            VL_ASSIGNSEL_WI(320,8,(0x1ffU 
                                                   & ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx) 
                                                      << 3U)), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_d, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h878bc60b__0);
                        }
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h15845fb2__0 = 1U;
                        if ((0x27U >= (0x3fU & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx)))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_update 
                                = (((~ (1ULL << (0x3fU 
                                                 & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx)))) 
                                    & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_update) 
                                   | (0xffffffffffULL 
                                      & ((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h15845fb2__0)) 
                                         << (0x3fU 
                                             & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx)))));
                        }
                    }
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_ha3d7a122__0 
                        = (1U & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT____Vcellinp__i_axi_lite_regs__axi_req_i[2U] 
                                 >> 0xaU));
                    if ((0x27U >= (0x3fU & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx)))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__wr_active_d 
                            = (((~ (1ULL << (0x3fU 
                                             & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx)))) 
                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__wr_active_d) 
                               | (0xffffffffffULL & 
                                  ((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_ha3d7a122__0)) 
                                   << (0x3fU & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx)))));
                    }
                }
                ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx 
                    = (0x7fU & ((IData)(4U) + ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_aw_decode__DOT____Vcellout__i_addr_decode_dync__idx_o) 
                                               << 3U)));
                if ((0x28U > (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx))) {
                    if ((1U & ((~ ((0x27U >= (0x3fU 
                                              & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx))) 
                                   & (IData)((0xffff00ULL 
                                              >> (0x3fU 
                                                  & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx)))))) 
                               & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT____Vcellinp__i_axi_lite_regs__axi_req_i[2U] 
                                  >> 0xbU)))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h878bc60b__0 
                            = (0xffU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT____Vcellinp__i_axi_lite_regs__axi_req_i[3U] 
                                        >> 0xfU));
                        if ((0x13fU >= (0x1ffU & ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx) 
                                                  << 3U)))) {
                            VL_ASSIGNSEL_WI(320,8,(0x1ffU 
                                                   & ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx) 
                                                      << 3U)), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_d, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h878bc60b__0);
                        }
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h15845fb2__0 = 1U;
                        if ((0x27U >= (0x3fU & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx)))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_update 
                                = (((~ (1ULL << (0x3fU 
                                                 & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx)))) 
                                    & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_update) 
                                   | (0xffffffffffULL 
                                      & ((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h15845fb2__0)) 
                                         << (0x3fU 
                                             & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx)))));
                        }
                    }
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_ha3d7a122__0 
                        = (1U & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT____Vcellinp__i_axi_lite_regs__axi_req_i[2U] 
                                 >> 0xbU));
                    if ((0x27U >= (0x3fU & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx)))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__wr_active_d 
                            = (((~ (1ULL << (0x3fU 
                                             & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx)))) 
                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__wr_active_d) 
                               | (0xffffffffffULL & 
                                  ((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_ha3d7a122__0)) 
                                   << (0x3fU & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx)))));
                    }
                }
                ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx 
                    = (0x7fU & ((IData)(5U) + ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_aw_decode__DOT____Vcellout__i_addr_decode_dync__idx_o) 
                                               << 3U)));
                if ((0x28U > (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx))) {
                    if ((1U & ((~ ((0x27U >= (0x3fU 
                                              & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx))) 
                                   & (IData)((0xffff00ULL 
                                              >> (0x3fU 
                                                  & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx)))))) 
                               & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT____Vcellinp__i_axi_lite_regs__axi_req_i[2U] 
                                  >> 0xcU)))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h878bc60b__0 
                            = (0xffU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT____Vcellinp__i_axi_lite_regs__axi_req_i[3U] 
                                        >> 0x17U));
                        if ((0x13fU >= (0x1ffU & ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx) 
                                                  << 3U)))) {
                            VL_ASSIGNSEL_WI(320,8,(0x1ffU 
                                                   & ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx) 
                                                      << 3U)), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_d, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h878bc60b__0);
                        }
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h15845fb2__0 = 1U;
                        if ((0x27U >= (0x3fU & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx)))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_update 
                                = (((~ (1ULL << (0x3fU 
                                                 & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx)))) 
                                    & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_update) 
                                   | (0xffffffffffULL 
                                      & ((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h15845fb2__0)) 
                                         << (0x3fU 
                                             & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx)))));
                        }
                    }
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_ha3d7a122__0 
                        = (1U & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT____Vcellinp__i_axi_lite_regs__axi_req_i[2U] 
                                 >> 0xcU));
                    if ((0x27U >= (0x3fU & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx)))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__wr_active_d 
                            = (((~ (1ULL << (0x3fU 
                                             & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx)))) 
                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__wr_active_d) 
                               | (0xffffffffffULL & 
                                  ((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_ha3d7a122__0)) 
                                   << (0x3fU & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx)))));
                    }
                }
                ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx 
                    = (0x7fU & ((IData)(6U) + ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_aw_decode__DOT____Vcellout__i_addr_decode_dync__idx_o) 
                                               << 3U)));
                if ((0x28U > (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx))) {
                    if ((1U & ((~ ((0x27U >= (0x3fU 
                                              & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx))) 
                                   & (IData)((0xffff00ULL 
                                              >> (0x3fU 
                                                  & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx)))))) 
                               & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT____Vcellinp__i_axi_lite_regs__axi_req_i[2U] 
                                  >> 0xdU)))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h878bc60b__0 
                            = (0xffU & ((ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT____Vcellinp__i_axi_lite_regs__axi_req_i[4U] 
                                         << 1U) | (
                                                   ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT____Vcellinp__i_axi_lite_regs__axi_req_i[3U] 
                                                   >> 0x1fU)));
                        if ((0x13fU >= (0x1ffU & ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx) 
                                                  << 3U)))) {
                            VL_ASSIGNSEL_WI(320,8,(0x1ffU 
                                                   & ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx) 
                                                      << 3U)), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_d, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h878bc60b__0);
                        }
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h15845fb2__0 = 1U;
                        if ((0x27U >= (0x3fU & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx)))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_update 
                                = (((~ (1ULL << (0x3fU 
                                                 & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx)))) 
                                    & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_update) 
                                   | (0xffffffffffULL 
                                      & ((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h15845fb2__0)) 
                                         << (0x3fU 
                                             & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx)))));
                        }
                    }
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_ha3d7a122__0 
                        = (1U & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT____Vcellinp__i_axi_lite_regs__axi_req_i[2U] 
                                 >> 0xdU));
                    if ((0x27U >= (0x3fU & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx)))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__wr_active_d 
                            = (((~ (1ULL << (0x3fU 
                                             & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx)))) 
                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__wr_active_d) 
                               | (0xffffffffffULL & 
                                  ((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_ha3d7a122__0)) 
                                   << (0x3fU & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx)))));
                    }
                }
                ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx 
                    = (0x7fU & ((IData)(7U) + ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_aw_decode__DOT____Vcellout__i_addr_decode_dync__idx_o) 
                                               << 3U)));
                if ((0x28U > (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx))) {
                    if ((1U & ((~ ((0x27U >= (0x3fU 
                                              & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx))) 
                                   & (IData)((0xffff00ULL 
                                              >> (0x3fU 
                                                  & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx)))))) 
                               & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT____Vcellinp__i_axi_lite_regs__axi_req_i[2U] 
                                  >> 0xeU)))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h878bc60b__0 
                            = (0xffU & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT____Vcellinp__i_axi_lite_regs__axi_req_i[4U] 
                                        >> 7U));
                        if ((0x13fU >= (0x1ffU & ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx) 
                                                  << 3U)))) {
                            VL_ASSIGNSEL_WI(320,8,(0x1ffU 
                                                   & ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx) 
                                                      << 3U)), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_d, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h878bc60b__0);
                        }
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h15845fb2__0 = 1U;
                        if ((0x27U >= (0x3fU & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx)))) {
                            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_update 
                                = (((~ (1ULL << (0x3fU 
                                                 & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx)))) 
                                    & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__reg_update) 
                                   | (0xffffffffffULL 
                                      & ((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_h15845fb2__0)) 
                                         << (0x3fU 
                                             & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx)))));
                        }
                    }
                    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_ha3d7a122__0 
                        = (1U & (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT____Vcellinp__i_axi_lite_regs__axi_req_i[2U] 
                                 >> 0xeU));
                    if ((0x27U >= (0x3fU & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx)))) {
                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__wr_active_d 
                            = (((~ (1ULL << (0x3fU 
                                             & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx)))) 
                                & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__wr_active_d) 
                               | (0xffffffffffULL & 
                                  ((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT____Vlvbound_ha3d7a122__0)) 
                                   << (0x3fU & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__unnamedblk1__DOT__reg_byte_idx)))));
                    }
                }
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT____Vcellout__i_axi_lite_regs__axi_resp_o[2U] 
                    = (0x180U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT____Vcellout__i_axi_lite_regs__axi_resp_o[2U]);
            }
        } else {
            ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__b_valid = 1U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT____Vcellout__i_axi_lite_regs__axi_resp_o[2U] 
                = (0x180U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT____Vcellout__i_axi_lite_regs__axi_resp_o[2U]);
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (1U & (~ (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (1U & (~ (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | (IData)((0U != (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes 
        = ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)) 
           | (1U & (~ (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes 
        = ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)) 
           | (1U & (~ (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes 
        = ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)) 
           | (IData)((0U != (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q;
    if (((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__w_cnt_down) 
         ^ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__w_cnt_up))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_d 
            = (3U & ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__w_cnt_down)
                      ? ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q) 
                         - (IData)(1U)) : ((IData)(1U) 
                                           + (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q))));
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__lock_ar_valid_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__lock_ar_valid_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__load_ar_lock = 0U;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__ar_push = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__slv_resp_o[2U] 
        = (0x2fffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__slv_resp_o[2U]);
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__lock_ar_valid_q) {
        if (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__ar_ready) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__lock_ar_valid_d = 0U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__load_ar_lock = 1U;
            ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__ar_push = 1U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__slv_resp_o[2U] 
                = (0x100000U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__slv_resp_o[2U]);
        }
    } else if ((1U & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__ar_id_cnt_full)))) {
        if ((1U & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT____Vcellout__i_axi_atop_filter__mst_req_o[0U] 
                    >> 1U) & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__ar_select_occupied)) 
                              | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__sel_ar_unsupported) 
                                 == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__lookup_ar_select)))))) {
            if ((1U & (~ (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__ar_ready)))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__lock_ar_valid_d = 1U;
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__load_ar_lock = 1U;
            }
            if (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__ar_ready) {
                ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__ar_push = 1U;
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__slv_resp_o[2U] 
                    = (0x100000U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__slv_resp_o[2U]);
            }
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__lock_aw_valid_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__lock_aw_valid_q;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__load_aw_lock = 0U;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__atop_inject = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__slv_resp_o[2U] 
        = (0x1fffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__slv_resp_o[2U]);
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__lock_aw_valid_q) {
        if (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__aw_ready) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__lock_aw_valid_d = 0U;
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__load_aw_lock = 1U;
            ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__atop_inject 
                = (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT____Vcellout__i_axi_atop_filter__mst_req_o[5U] 
                         >> 0x18U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__slv_resp_o[2U] 
                = (0x200000U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__slv_resp_o[2U]);
        }
    } else if ((1U & (((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__aw_id_cnt_full)) 
                       & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q))) 
                      & (~ ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__ar_id_cnt_full) 
                            & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT____Vcellout__i_axi_atop_filter__mst_req_o[5U] 
                               >> 0x18U)))))) {
        if ((1U & (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT____Vcellout__i_axi_atop_filter__mst_req_o[5U] 
                     >> 0x11U) & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_counter_open_w__DOT__i_counter__DOT__counter_q)) 
                                  | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__w_select) 
                                     == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__sel_aw_unsupported)))) 
                   & ((~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__aw_select_occupied)) 
                      | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__sel_aw_unsupported) 
                         == (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__lookup_aw_select)))))) {
            if ((1U & (~ (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__aw_ready)))) {
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__lock_aw_valid_d = 1U;
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__load_aw_lock = 1U;
            }
            if (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__aw_ready) {
                ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__atop_inject 
                    = (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT____Vcellout__i_axi_atop_filter__mst_req_o[5U] 
                             >> 0x18U));
                vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__slv_resp_o[2U] 
                    = (0x200000U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT____Vcellout__i_demux_supported_vs_unsupported__slv_resp_o[2U]);
            }
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__i_b_spill_register__DOT__spill_register_flushable_i__DOT__gen_spill_reg__DOT__a_fill 
        = ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__b_valid) 
           & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT__i_axi_lite_regs__DOT__b_ready));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__err_d 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__err_q;
    if ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__w_cnt_req) 
          & (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__w_cnt_gnt)) 
         & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_ctrl_registers__DOT____Vcellout__i_axi_lite_regs__axi_resp_o[2U] 
            >> 6U))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT____Vlvbound_hc8464f51__0 = 1U;
        if ((0U >= (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT____Vcellout__i_idq__oup_data_o))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__err_d 
                = (((~ ((IData)(1U) << (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT____Vcellout__i_idq__oup_data_o))) 
                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__err_d)) 
                   | (1U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT____Vlvbound_hc8464f51__0) 
                            << (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT____Vcellout__i_idq__oup_data_o))));
        }
    }
    if (ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__idq_inp_req) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT____Vlvbound_hce723241__0 = 0U;
        if ((0U >= (0U != (0x1ffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__gen_cnt__BRA__0__KET____DOT__i_cnt__DOT__counter_q))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__err_d 
                = (((~ ((IData)(1U) << (0U != (0x1ffU 
                                               & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__gen_cnt__BRA__0__KET____DOT__i_cnt__DOT__counter_q))))) 
                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__err_d)) 
                   | (1U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT____Vlvbound_hce723241__0) 
                            << (0U != (0x1ffU & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_axi_burst_splitter_gran_aw_chan__DOT__i_axi_burst_splitter_gran_counters__DOT__gen_cnt__BRA__0__KET____DOT__i_cnt__DOT__counter_q))))));
        }
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (1U & (((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT____Vcellout__i_axi_atop_filter__mst_req_o[3U] 
                   >> 5U) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__genblk1__DOT__i_b_mux__req_o))
                  ? ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                      : (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                  : (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_b_mux__DOT__gen_arbiter__DOT__rr_q)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d 
        = (1U & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT____Vcellout__i_axi_atop_filter__mst_req_o[0U] 
                  & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT____Vcellout__genblk1__DOT__i_r_mux__req_o))
                  ? ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                      ? (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                      : (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                  : (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__i_r_mux__DOT__gen_arbiter__DOT__rr_q)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__push_en 
        = ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__ar_push)
            ? ((IData)(1U) << (0x1fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT____Vcellout__i_axi_atop_filter__mst_req_o[3U]))
            : 0U);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__gen_ar_id_counter__DOT__i_ar_id_counter__DOT__inject_en 
        = ((IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT__i_axi_burst_splitter__DOT__i_axi_burst_splitter_gran__DOT__i_demux_supported_vs_unsupported__DOT__genblk1__DOT__atop_inject)
            ? ((IData)(1U) << (0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_axi_to_axi_lite__DOT____Vcellout__i_axi_atop_filter__mst_req_o[8U] 
                                        >> 0x16U)))
            : 0U);
}

VL_INLINE_OPT void Vara_tb_verilator___024root___nba_comb__TOP__608(Vara_tb_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___nba_comb__TOP__608\n"); );
    // Init
    CData/*7:0*/ __Vfunc_is_imm_fpr__104__op;
    __Vfunc_is_imm_fpr__104__op = 0;
    CData/*7:0*/ __Vfunc_is_rs2_fpr__105__op;
    __Vfunc_is_rs2_fpr__105__op = 0;
    // Body
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__operand_a_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__operand_a_regfile;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__operand_b_n 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__operand_b_regfile;
    __Vfunc_is_imm_fpr__104__op = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                            >> 0xcU));
    {
        if (((((0x59U <= (IData)(__Vfunc_is_imm_fpr__104__op)) 
               & (0x5aU >= (IData)(__Vfunc_is_imm_fpr__104__op))) 
              | ((0x5fU <= (IData)(__Vfunc_is_imm_fpr__104__op)) 
                 & (0x62U >= (IData)(__Vfunc_is_imm_fpr__104__op)))) 
             | ((0x76U <= (IData)(__Vfunc_is_imm_fpr__104__op)) 
                & (0x79U >= (IData)(__Vfunc_is_imm_fpr__104__op))))) {
            vlSelf->__Vfunc_is_imm_fpr__104__Vfuncout = 1U;
            goto __Vlabel756;
        } else {
            vlSelf->__Vfunc_is_imm_fpr__104__Vfuncout = 0U;
            goto __Vlabel756;
        }
        __Vlabel756: ;
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__imm_n 
        = ((IData)(vlSelf->__Vfunc_is_imm_fpr__104__Vfuncout)
            ? vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__operand_c_regfile
            : (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x10U])) 
                << 0x26U) | (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0xfU])) 
                              << 6U) | ((QData)((IData)(
                                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0xeU])) 
                                        >> 0x1aU))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__trans_id_n 
        = (7U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                 >> 0x18U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__fu_n 
        = (0xfU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                   >> 0x14U));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__operator_n 
        = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                    >> 0xcU));
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__forward_rs1) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__operand_a_n 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__i_sel_rs1__DOT__gen_arbiter__DOT__data_nodes[0U])));
    }
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__forward_rs2) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__operand_b_n 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__i_sel_rs2__DOT__gen_arbiter__DOT__data_nodes[0U])));
    }
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__forward_rs3) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__imm_n 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__i_sel_rs3__DOT__gen_arbiter__DOT__data_nodes[0U])));
    }
    if ((0x400000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0xeU])) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__operand_a_n 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x13U])) 
                << 0x25U) | (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x12U])) 
                              << 5U) | ((QData)((IData)(
                                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U])) 
                                        >> 0x1bU)));
    }
    if ((0x800000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0xeU])) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__operand_a_n 
            = (QData)((IData)((0x1fU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                        >> 6U))));
    }
    __Vfunc_is_rs2_fpr__105__op = (0xffU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                            >> 0xcU));
    {
        if (((((((((0x55U <= (IData)(__Vfunc_is_rs2_fpr__105__op)) 
                   & (0x58U >= (IData)(__Vfunc_is_rs2_fpr__105__op))) 
                  | ((0x59U <= (IData)(__Vfunc_is_rs2_fpr__105__op)) 
                     & (0x5dU >= (IData)(__Vfunc_is_rs2_fpr__105__op)))) 
                 | ((0x5fU <= (IData)(__Vfunc_is_rs2_fpr__105__op)) 
                    & (0x62U >= (IData)(__Vfunc_is_rs2_fpr__105__op)))) 
                | (0x65U == (IData)(__Vfunc_is_rs2_fpr__105__op))) 
               | ((0x66U <= (IData)(__Vfunc_is_rs2_fpr__105__op)) 
                  & (0x67U >= (IData)(__Vfunc_is_rs2_fpr__105__op)))) 
              | (0x69U == (IData)(__Vfunc_is_rs2_fpr__105__op))) 
             | ((0x6bU <= (IData)(__Vfunc_is_rs2_fpr__105__op)) 
                & (0x79U >= (IData)(__Vfunc_is_rs2_fpr__105__op))))) {
            vlSelf->__Vfunc_is_rs2_fpr__105__Vfuncout = 1U;
            goto __Vlabel757;
        } else {
            vlSelf->__Vfunc_is_rs2_fpr__105__Vfuncout = 0U;
            goto __Vlabel757;
        }
        __Vlabel757: ;
    }
    if ((((((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0xeU] 
             >> 0x18U) & (2U != (0xfU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                         >> 0x14U)))) 
           & (4U != (0xfU & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                             >> 0x14U)))) & (0xaU != 
                                             (0xfU 
                                              & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x11U] 
                                                 >> 0x14U)))) 
         & (~ (IData)(vlSelf->__Vfunc_is_rs2_fpr__105__Vfuncout)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__operand_b_n 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0x10U])) 
                << 0x26U) | (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0xfU])) 
                              << 6U) | ((QData)((IData)(
                                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_sb_iro[0xeU])) 
                                        >> 0x1aU)));
    }
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__decoded_instr[0U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_rename_sb[0U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__decoded_instr[1U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_rename_sb[1U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__decoded_instr[2U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_rename_sb[2U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__decoded_instr[3U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_rename_sb[3U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__decoded_instr[4U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_rename_sb[4U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__decoded_instr[5U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_rename_sb[5U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__decoded_instr[6U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_rename_sb[6U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__decoded_instr[7U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_rename_sb[7U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__decoded_instr[8U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_rename_sb[8U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__decoded_instr[9U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_rename_sb[9U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__decoded_instr[0xaU] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_rename_sb[0xaU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__decoded_instr[0xbU] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_rename_sb[0xbU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__decoded_instr[0xcU] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_rename_sb[0xcU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__decoded_instr[0xdU] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_rename_sb[0xdU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__decoded_instr[0xeU] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_rename_sb[0xeU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__decoded_instr[0xfU] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_rename_sb[0xfU];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__decoded_instr[0x10U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_rename_sb[0x10U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__decoded_instr[0x11U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_rename_sb[0x11U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__decoded_instr[0x12U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_rename_sb[0x12U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__decoded_instr[0x13U] 
        = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_rename_sb[0x13U];
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__decoded_instr[2U] 
        = (0x1ffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__decoded_instr[2U]);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__decoded_instr[3U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__decoded_instr[4U] 
        = ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__operand_b_n) 
           << 0x11U);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__decoded_instr[5U] 
        = ((0x1ffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__operand_b_n) 
                      >> 0xfU)) | ((0x1fe00U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__operand_b_n) 
                                                >> 0xfU)) 
                                   | ((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__operand_b_n 
                                               >> 0x20U)) 
                                      << 0x11U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__decoded_instr[6U] 
        = ((0x1ffU & ((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__operand_b_n 
                               >> 0x20U)) >> 0xfU)) 
           | ((0x1fe00U & ((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__operand_b_n 
                                    >> 0x20U)) >> 0xfU)) 
              | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__operand_a_n) 
                 << 0x11U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__decoded_instr[7U] 
        = ((0x1ffU & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__operand_a_n) 
                      >> 0xfU)) | ((0x1fe00U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__operand_a_n) 
                                                >> 0xfU)) 
                                   | ((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__operand_a_n 
                                               >> 0x20U)) 
                                      << 0x11U)));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__decoded_instr[8U] 
        = ((0xfffe0000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__decoded_instr[8U]) 
           | ((0x1ffU & ((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__operand_a_n 
                                  >> 0x20U)) >> 0xfU)) 
              | (0x1fe00U & ((IData)((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_issue_read_operands__DOT__operand_a_n 
                                      >> 0x20U)) >> 0xfU))));
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__decoded_instr[0U] 
        = (1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__decoded_instr[0U]);
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__decoded_instr[1U] = 0U;
    vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__decoded_instr[2U] 
        = (0xfffffe00U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__decoded_instr[2U]);
}

VL_INLINE_OPT void Vara_tb_verilator___024root___nba_comb__TOP__620(Vara_tb_verilator___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vara_tb_verilator___024root___nba_comb__TOP__620\n"); );
    // Init
    CData/*0:0*/ ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__issue_en;
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__issue_en = 0;
    // Body
    VL_ASSIGN_W(5096,vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q);
    ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__issue_en = 0U;
    if ((((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__id_stage_i__DOT__issue_q[0x13U] 
           >> 0x1cU) & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_ack_sb_rename)) 
         & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__flush_unissued_instr_ctrl_id)))) {
        ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__issue_en = 1U;
        vlSelf->__Vfunc_is_rd_fpr__57__op = (0xffU 
                                             & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__issue_instr_rename_sb[0x11U] 
                                                >> 0xcU));
        {
            if (((((((((((0x51U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__57__op)) 
                         & (0x54U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__57__op))) 
                        | ((0x59U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__57__op)) 
                           & (0x62U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__57__op)))) 
                       | (0x64U == (IData)(vlSelf->__Vfunc_is_rd_fpr__57__op))) 
                      | (0x65U == (IData)(vlSelf->__Vfunc_is_rd_fpr__57__op))) 
                     | (0x66U == (IData)(vlSelf->__Vfunc_is_rd_fpr__57__op))) 
                    | (0x68U == (IData)(vlSelf->__Vfunc_is_rd_fpr__57__op))) 
                   | ((0x6bU <= (IData)(vlSelf->__Vfunc_is_rd_fpr__57__op)) 
                      & (0x6fU >= (IData)(vlSelf->__Vfunc_is_rd_fpr__57__op)))) 
                  | ((0x76U <= (IData)(vlSelf->__Vfunc_is_rd_fpr__57__op)) 
                     & (0x79U >= (IData)(vlSelf->__Vfunc_is_rd_fpr__57__op)))) 
                 | (0xa8U == (IData)(vlSelf->__Vfunc_is_rd_fpr__57__op)))) {
                vlSelf->__Vfunc_is_rd_fpr__57__Vfuncout = 1U;
                goto __Vlabel758;
            } else {
                vlSelf->__Vfunc_is_rd_fpr__57__Vfuncout = 0U;
                goto __Vlabel758;
            }
            __Vlabel758: ;
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h9fe7328c__0[0U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__decoded_instr[0U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h9fe7328c__0[1U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__decoded_instr[1U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h9fe7328c__0[2U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__decoded_instr[2U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h9fe7328c__0[3U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__decoded_instr[3U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h9fe7328c__0[4U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__decoded_instr[4U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h9fe7328c__0[5U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__decoded_instr[5U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h9fe7328c__0[6U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__decoded_instr[6U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h9fe7328c__0[7U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__decoded_instr[7U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h9fe7328c__0[8U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__decoded_instr[8U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h9fe7328c__0[9U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__decoded_instr[9U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h9fe7328c__0[0xaU] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__decoded_instr[0xaU];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h9fe7328c__0[0xbU] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__decoded_instr[0xbU];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h9fe7328c__0[0xcU] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__decoded_instr[0xcU];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h9fe7328c__0[0xdU] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__decoded_instr[0xdU];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h9fe7328c__0[0xeU] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__decoded_instr[0xeU];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h9fe7328c__0[0xfU] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__decoded_instr[0xfU];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h9fe7328c__0[0x10U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__decoded_instr[0x10U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h9fe7328c__0[0x11U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__decoded_instr[0x11U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h9fe7328c__0[0x12U] 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__decoded_instr[0x12U];
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h9fe7328c__0[0x13U] 
            = (0x10000000U | (((IData)(vlSelf->__Vfunc_is_rd_fpr__57__Vfuncout) 
                               << 0x1bU) | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__decoded_instr[0x13U]));
        if (VL_LIKELY((0x13e7U >= (0x1fffU & ((IData)(0x27dU) 
                                              * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__issue_pointer_q)))))) {
            VL_ASSIGNSEL_WW(5096,637,(0x1fffU & ((IData)(0x27dU) 
                                                 * (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__issue_pointer_q))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h9fe7328c__0);
        }
    }
    if ((IData)(((0U == (0xf00000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x11U])) 
                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x13U] 
                    >> 0x1cU)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0xeU] 
            = (0x2000000U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0xeU]);
    }
    if ((IData)(((0U == (0x1e0000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x25U])) 
                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x27U] 
                    >> 0x19U)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x22U] 
            = (0x400000U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x22U]);
    }
    if ((IData)(((0U == (0x3c000U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x39U])) 
                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x3bU] 
                    >> 0x16U)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x36U] 
            = (0x80000U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x36U]);
    }
    if ((IData)(((0U == (0x7800U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x4dU])) 
                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x4fU] 
                    >> 0x13U)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x4aU] 
            = (0x10000U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x4aU]);
    }
    if ((IData)(((0U == (0xf00U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x61U])) 
                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x63U] 
                    >> 0x10U)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x5eU] 
            = (0x2000U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x5eU]);
    }
    if ((IData)(((0U == (0x1e0U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x75U])) 
                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x77U] 
                    >> 0xdU)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x72U] 
            = (0x400U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x72U]);
    }
    if ((IData)(((0U == (0x3cU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x89U])) 
                 & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x8bU] 
                    >> 0xaU)))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x86U] 
            = (0x80U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x86U]);
    }
    if (((0U == (0xfU & ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x9dU] 
                          << 1U) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x9cU] 
                                    >> 0x1fU)))) & 
         (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[0x9fU] 
          >> 7U))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x9aU] 
            = (0x10U | vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x9aU]);
    }
    if ((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__lsu_rmask))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_he7557ac2__0 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[4U])) 
                << 0x28U) | (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[3U])) 
                              << 8U) | ((QData)((IData)(
                                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[2U])) 
                                        >> 0x18U)));
        if (VL_LIKELY((0x13e7U >= ((IData)(0x51U) + 
                                   (0x1fffU & ((IData)(0x27dU) 
                                               * (7U 
                                                  & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U]))))))) {
            VL_ASSIGNSEL_WQ(5096,64,((IData)(0x51U) 
                                     + (0x1fffU & ((IData)(0x27dU) 
                                                   * 
                                                   (7U 
                                                    & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U])))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_he7557ac2__0);
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h261340b8__0 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__lsu_rmask;
        if (VL_LIKELY((0x13e7U >= ((IData)(0x49U) + 
                                   (0x1fffU & ((IData)(0x27dU) 
                                               * (7U 
                                                  & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U]))))))) {
            VL_ASSIGNSEL_WI(5096,8,((IData)(0x49U) 
                                    + (0x1fffU & ((IData)(0x27dU) 
                                                  * 
                                                  (7U 
                                                   & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U])))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h261340b8__0);
        }
    } else if ((0U != (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__lsu_wmask))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_he7557ac2__1 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[4U])) 
                << 0x28U) | (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[3U])) 
                              << 8U) | ((QData)((IData)(
                                                        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[2U])) 
                                        >> 0x18U)));
        if (VL_LIKELY((0x13e7U >= ((IData)(0x51U) + 
                                   (0x1fffU & ((IData)(0x27dU) 
                                               * (7U 
                                                  & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U]))))))) {
            VL_ASSIGNSEL_WQ(5096,64,((IData)(0x51U) 
                                     + (0x1fffU & ((IData)(0x27dU) 
                                                   * 
                                                   (7U 
                                                    & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U])))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_he7557ac2__1);
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h1b81130b__0 
            = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__lsu_wmask;
        if (VL_LIKELY((0x13e7U >= ((IData)(0x41U) + 
                                   (0x1fffU & ((IData)(0x27dU) 
                                               * (7U 
                                                  & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U]))))))) {
            VL_ASSIGNSEL_WI(5096,8,((IData)(0x41U) 
                                    + (0x1fffU & ((IData)(0x27dU) 
                                                  * 
                                                  (7U 
                                                   & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U])))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h1b81130b__0);
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h8482d042__0 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__wbdata_i[3U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__wbdata_i[2U])));
        if (VL_LIKELY((0x13e7U >= ((IData)(1U) + (0x1fffU 
                                                  & ((IData)(0x27dU) 
                                                     * 
                                                     (7U 
                                                      & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U]))))))) {
            VL_ASSIGNSEL_WQ(5096,64,((IData)(1U) + 
                                     (0x1fffU & ((IData)(0x27dU) 
                                                 * 
                                                 (7U 
                                                  & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__ex_stage_i__DOT__lsu_i__DOT__lsu_ctrl[0U])))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h8482d042__0);
        }
    }
    if (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__wt_valid_ex_id) 
         & ((0x13e7U >= ((IData)(0x27cU) + (0x1fffU 
                                            & ((IData)(0x27dU) 
                                               * (7U 
                                                  & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i)))))) 
            & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
               (((IData)(0x27cU) + (0x1fffU & ((IData)(0x27dU) 
                                               * (7U 
                                                  & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i))))) 
                >> 5U)] >> (0x1fU & ((IData)(0x27cU) 
                                     + (0x1fffU & ((IData)(0x27dU) 
                                                   * 
                                                   (7U 
                                                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i)))))))))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h3be3a689__0 = 1U;
        if (VL_LIKELY((0x13e7U >= ((IData)(0x1d9U) 
                                   + (0x1fffU & ((IData)(0x27dU) 
                                                 * 
                                                 (7U 
                                                  & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i)))))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[(
                                                                                ((IData)(0x1d9U) 
                                                                                + 
                                                                                (0x1fffU 
                                                                                & ((IData)(0x27dU) 
                                                                                * 
                                                                                (7U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i))))) 
                                                                                >> 5U)] 
                = (((~ ((IData)(1U) << (0x1fU & ((IData)(0x1d9U) 
                                                 + 
                                                 (0x1fffU 
                                                  & ((IData)(0x27dU) 
                                                     * 
                                                     (7U 
                                                      & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i)))))))) 
                    & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                    (((IData)(0x1d9U) + (0x1fffU & 
                                         ((IData)(0x27dU) 
                                          * (7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i))))) 
                     >> 5U)]) | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h3be3a689__0) 
                                 << (0x1fU & ((IData)(0x1d9U) 
                                              + (0x1fffU 
                                                 & ((IData)(0x27dU) 
                                                    * 
                                                    (7U 
                                                     & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i))))))));
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h8584f5b6__0 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__wbdata_i[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__wbdata_i[0U])));
        if (VL_LIKELY((0x13e7U >= ((IData)(0x1daU) 
                                   + (0x1fffU & ((IData)(0x27dU) 
                                                 * 
                                                 (7U 
                                                  & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i)))))))) {
            VL_ASSIGNSEL_WQ(5096,64,((IData)(0x1daU) 
                                     + (0x1fffU & ((IData)(0x27dU) 
                                                   * 
                                                   (7U 
                                                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h8584f5b6__0);
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hea10ca8a__0 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[2U])) 
                << 0x3bU) | (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[1U])) 
                              << 0x1bU) | ((QData)((IData)(
                                                           vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[0U])) 
                                           >> 5U)));
        if (VL_LIKELY((0x13e7U >= ((IData)(0x112U) 
                                   + (0x1fffU & ((IData)(0x27dU) 
                                                 * 
                                                 (7U 
                                                  & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i)))))))) {
            VL_ASSIGNSEL_WQ(5096,64,((IData)(0x112U) 
                                     + (0x1fffU & ((IData)(0x27dU) 
                                                   * 
                                                   (7U 
                                                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hea10ca8a__0);
        }
        if (((9U == ((0x13e7U >= ((IData)(0x234U) + 
                                  (0x1fffU & ((IData)(0x27dU) 
                                              * (7U 
                                                 & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i))))))
                      ? (0xfU & (((0U == (0x1fU & ((IData)(0x234U) 
                                                   + 
                                                   (0x1fffU 
                                                    & ((IData)(0x27dU) 
                                                       * 
                                                       (7U 
                                                        & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i)))))))
                                   ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                                           (((IData)(0x237U) 
                                             + (0x1fffU 
                                                & ((IData)(0x27dU) 
                                                   * 
                                                   (7U 
                                                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i))))) 
                                            >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(0x234U) 
                                                     + 
                                                     (0x1fffU 
                                                      & ((IData)(0x27dU) 
                                                         * 
                                                         (7U 
                                                          & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i))))))))) 
                                 | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                                    (((IData)(0x234U) 
                                      + (0x1fffU & 
                                         ((IData)(0x27dU) 
                                          * (7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i))))) 
                                     >> 5U)] >> (0x1fU 
                                                 & ((IData)(0x234U) 
                                                    + 
                                                    (0x1fffU 
                                                     & ((IData)(0x27dU) 
                                                        * 
                                                        (7U 
                                                         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i)))))))))
                      : 0U)) & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__x_we_ex_id)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h09ce7116__0 = 0U;
            if (VL_LIKELY((0x13e7U >= ((IData)(0x21aU) 
                                       + (0x1fffU & 
                                          ((IData)(0x27dU) 
                                           * (7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i)))))))) {
                VL_ASSIGNSEL_WI(5096,6,((IData)(0x21aU) 
                                        + (0x1fffU 
                                           & ((IData)(0x27dU) 
                                              * (7U 
                                                 & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h09ce7116__0);
            }
        }
        if ((1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[0U])) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h7db8035b__0[0U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[0U];
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h7db8035b__0[1U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[1U];
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h7db8035b__0[2U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[2U];
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h7db8035b__0[3U] 
                = vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[3U];
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h7db8035b__0[4U] 
                = (1U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[4U]);
            if (VL_LIKELY((0x13e7U >= ((IData)(0x155U) 
                                       + (0x1fffU & 
                                          ((IData)(0x27dU) 
                                           * (7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i)))))))) {
                VL_ASSIGNSEL_WW(5096,129,((IData)(0x155U) 
                                          + (0x1fffU 
                                             & ((IData)(0x27dU) 
                                                * (7U 
                                                   & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h7db8035b__0);
            }
        } else if (((7U == ((0x13e7U >= ((IData)(0x234U) 
                                         + (0x1fffU 
                                            & ((IData)(0x27dU) 
                                               * (7U 
                                                  & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i))))))
                             ? (0xfU & (((0U == (0x1fU 
                                                 & ((IData)(0x234U) 
                                                    + 
                                                    (0x1fffU 
                                                     & ((IData)(0x27dU) 
                                                        * 
                                                        (7U 
                                                         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i)))))))
                                          ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                  (((IData)(0x237U) 
                                                    + 
                                                    (0x1fffU 
                                                     & ((IData)(0x27dU) 
                                                        * 
                                                        (7U 
                                                         & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i))))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x234U) 
                                                       + 
                                                       (0x1fffU 
                                                        & ((IData)(0x27dU) 
                                                           * 
                                                           (7U 
                                                            & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i))))))))) 
                                        | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                           (((IData)(0x234U) 
                                             + (0x1fffU 
                                                & ((IData)(0x27dU) 
                                                   * 
                                                   (7U 
                                                    & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i))))) 
                                            >> 5U)] 
                                           >> (0x1fU 
                                               & ((IData)(0x234U) 
                                                  + 
                                                  (0x1fffU 
                                                   & ((IData)(0x27dU) 
                                                      * 
                                                      (7U 
                                                       & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i)))))))))
                             : 0U)) | (8U == ((0x13e7U 
                                               >= ((IData)(0x234U) 
                                                   + 
                                                   (0x1fffU 
                                                    & ((IData)(0x27dU) 
                                                       * 
                                                       (7U 
                                                        & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i))))))
                                               ? (0xfU 
                                                  & (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x234U) 
                                                           + 
                                                           (0x1fffU 
                                                            & ((IData)(0x27dU) 
                                                               * 
                                                               (7U 
                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i)))))))
                                                       ? 0U
                                                       : 
                                                      (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                       (((IData)(0x237U) 
                                                         + 
                                                         (0x1fffU 
                                                          & ((IData)(0x27dU) 
                                                             * 
                                                             (7U 
                                                              & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i))))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x234U) 
                                                            + 
                                                            (0x1fffU 
                                                             & ((IData)(0x27dU) 
                                                                * 
                                                                (7U 
                                                                 & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i))))))))) 
                                                     | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                        (((IData)(0x234U) 
                                                          + 
                                                          (0x1fffU 
                                                           & ((IData)(0x27dU) 
                                                              * 
                                                              (7U 
                                                               & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i))))) 
                                                         >> 5U)] 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x234U) 
                                                            + 
                                                            (0x1fffU 
                                                             & ((IData)(0x27dU) 
                                                                * 
                                                                (7U 
                                                                 & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i)))))))))
                                               : 0U)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hdfd56d46__0 
                = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[4U])) 
                    << 0x3fU) | (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[3U])) 
                                  << 0x1fU) | ((QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[2U])) 
                                               >> 1U)));
            if (VL_LIKELY((0x13e7U >= ((IData)(0x196U) 
                                       + (0x1fffU & 
                                          ((IData)(0x27dU) 
                                           * (7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i)))))))) {
                VL_ASSIGNSEL_WQ(5096,64,((IData)(0x196U) 
                                         + (0x1fffU 
                                            & ((IData)(0x27dU) 
                                               * (7U 
                                                  & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hdfd56d46__0);
            }
        }
    }
    if ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__wt_valid_ex_id) 
          >> 1U) & ((0x13e7U >= ((IData)(0x27cU) + 
                                 (0x1fffU & ((IData)(0x27dU) 
                                             * (7U 
                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                   >> 3U)))))) 
                    & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                       (((IData)(0x27cU) + (0x1fffU 
                                            & ((IData)(0x27dU) 
                                               * (7U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                     >> 3U))))) 
                        >> 5U)] >> (0x1fU & ((IData)(0x27cU) 
                                             + (0x1fffU 
                                                & ((IData)(0x27dU) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                       >> 3U)))))))))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h3be3a689__0 = 1U;
        if (VL_LIKELY((0x13e7U >= ((IData)(0x1d9U) 
                                   + (0x1fffU & ((IData)(0x27dU) 
                                                 * 
                                                 (7U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                     >> 3U)))))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[(
                                                                                ((IData)(0x1d9U) 
                                                                                + 
                                                                                (0x1fffU 
                                                                                & ((IData)(0x27dU) 
                                                                                * 
                                                                                (7U 
                                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                                                >> 3U))))) 
                                                                                >> 5U)] 
                = (((~ ((IData)(1U) << (0x1fU & ((IData)(0x1d9U) 
                                                 + 
                                                 (0x1fffU 
                                                  & ((IData)(0x27dU) 
                                                     * 
                                                     (7U 
                                                      & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                         >> 3U)))))))) 
                    & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                    (((IData)(0x1d9U) + (0x1fffU & 
                                         ((IData)(0x27dU) 
                                          * (7U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                   >> 3U))))) 
                     >> 5U)]) | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h3be3a689__0) 
                                 << (0x1fU & ((IData)(0x1d9U) 
                                              + (0x1fffU 
                                                 & ((IData)(0x27dU) 
                                                    * 
                                                    (7U 
                                                     & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                        >> 3U))))))));
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h8584f5b6__0 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__wbdata_i[3U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__wbdata_i[2U])));
        if (VL_LIKELY((0x13e7U >= ((IData)(0x1daU) 
                                   + (0x1fffU & ((IData)(0x27dU) 
                                                 * 
                                                 (7U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                     >> 3U)))))))) {
            VL_ASSIGNSEL_WQ(5096,64,((IData)(0x1daU) 
                                     + (0x1fffU & ((IData)(0x27dU) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                       >> 3U))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h8584f5b6__0);
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hea10ca8a__0 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[2U])) 
                << 0x3bU) | (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[1U])) 
                              << 0x1bU) | ((QData)((IData)(
                                                           vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[0U])) 
                                           >> 5U)));
        if (VL_LIKELY((0x13e7U >= ((IData)(0x112U) 
                                   + (0x1fffU & ((IData)(0x27dU) 
                                                 * 
                                                 (7U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                     >> 3U)))))))) {
            VL_ASSIGNSEL_WQ(5096,64,((IData)(0x112U) 
                                     + (0x1fffU & ((IData)(0x27dU) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                       >> 3U))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hea10ca8a__0);
        }
        if (((9U == ((0x13e7U >= ((IData)(0x234U) + 
                                  (0x1fffU & ((IData)(0x27dU) 
                                              * (7U 
                                                 & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                    >> 3U))))))
                      ? (0xfU & (((0U == (0x1fU & ((IData)(0x234U) 
                                                   + 
                                                   (0x1fffU 
                                                    & ((IData)(0x27dU) 
                                                       * 
                                                       (7U 
                                                        & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                           >> 3U)))))))
                                   ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                                           (((IData)(0x237U) 
                                             + (0x1fffU 
                                                & ((IData)(0x27dU) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                       >> 3U))))) 
                                            >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(0x234U) 
                                                     + 
                                                     (0x1fffU 
                                                      & ((IData)(0x27dU) 
                                                         * 
                                                         (7U 
                                                          & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                             >> 3U))))))))) 
                                 | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                                    (((IData)(0x234U) 
                                      + (0x1fffU & 
                                         ((IData)(0x27dU) 
                                          * (7U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                   >> 3U))))) 
                                     >> 5U)] >> (0x1fU 
                                                 & ((IData)(0x234U) 
                                                    + 
                                                    (0x1fffU 
                                                     & ((IData)(0x27dU) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                            >> 3U)))))))))
                      : 0U)) & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__x_we_ex_id)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h09ce7116__0 = 0U;
            if (VL_LIKELY((0x13e7U >= ((IData)(0x21aU) 
                                       + (0x1fffU & 
                                          ((IData)(0x27dU) 
                                           * (7U & 
                                              ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                               >> 3U)))))))) {
                VL_ASSIGNSEL_WI(5096,6,((IData)(0x21aU) 
                                        + (0x1fffU 
                                           & ((IData)(0x27dU) 
                                              * (7U 
                                                 & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                    >> 3U))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h09ce7116__0);
            }
        }
        if ((2U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[4U])) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h7db8035b__0[0U] 
                = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[5U] 
                    << 0x1fU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[4U] 
                                 >> 1U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h7db8035b__0[1U] 
                = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[6U] 
                    << 0x1fU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[5U] 
                                 >> 1U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h7db8035b__0[2U] 
                = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[7U] 
                    << 0x1fU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[6U] 
                                 >> 1U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h7db8035b__0[3U] 
                = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[8U] 
                    << 0x1fU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[7U] 
                                 >> 1U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h7db8035b__0[4U] 
                = (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[8U] 
                         >> 1U));
            if (VL_LIKELY((0x13e7U >= ((IData)(0x155U) 
                                       + (0x1fffU & 
                                          ((IData)(0x27dU) 
                                           * (7U & 
                                              ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                               >> 3U)))))))) {
                VL_ASSIGNSEL_WW(5096,129,((IData)(0x155U) 
                                          + (0x1fffU 
                                             & ((IData)(0x27dU) 
                                                * (7U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                      >> 3U))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h7db8035b__0);
            }
        } else if (((7U == ((0x13e7U >= ((IData)(0x234U) 
                                         + (0x1fffU 
                                            & ((IData)(0x27dU) 
                                               * (7U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                     >> 3U))))))
                             ? (0xfU & (((0U == (0x1fU 
                                                 & ((IData)(0x234U) 
                                                    + 
                                                    (0x1fffU 
                                                     & ((IData)(0x27dU) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                            >> 3U)))))))
                                          ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                  (((IData)(0x237U) 
                                                    + 
                                                    (0x1fffU 
                                                     & ((IData)(0x27dU) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                            >> 3U))))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x234U) 
                                                       + 
                                                       (0x1fffU 
                                                        & ((IData)(0x27dU) 
                                                           * 
                                                           (7U 
                                                            & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                               >> 3U))))))))) 
                                        | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                           (((IData)(0x234U) 
                                             + (0x1fffU 
                                                & ((IData)(0x27dU) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                       >> 3U))))) 
                                            >> 5U)] 
                                           >> (0x1fU 
                                               & ((IData)(0x234U) 
                                                  + 
                                                  (0x1fffU 
                                                   & ((IData)(0x27dU) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                          >> 3U)))))))))
                             : 0U)) | (8U == ((0x13e7U 
                                               >= ((IData)(0x234U) 
                                                   + 
                                                   (0x1fffU 
                                                    & ((IData)(0x27dU) 
                                                       * 
                                                       (7U 
                                                        & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                           >> 3U))))))
                                               ? (0xfU 
                                                  & (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x234U) 
                                                           + 
                                                           (0x1fffU 
                                                            & ((IData)(0x27dU) 
                                                               * 
                                                               (7U 
                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                                   >> 3U)))))))
                                                       ? 0U
                                                       : 
                                                      (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                       (((IData)(0x237U) 
                                                         + 
                                                         (0x1fffU 
                                                          & ((IData)(0x27dU) 
                                                             * 
                                                             (7U 
                                                              & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                                 >> 3U))))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x234U) 
                                                            + 
                                                            (0x1fffU 
                                                             & ((IData)(0x27dU) 
                                                                * 
                                                                (7U 
                                                                 & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                                    >> 3U))))))))) 
                                                     | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                        (((IData)(0x234U) 
                                                          + 
                                                          (0x1fffU 
                                                           & ((IData)(0x27dU) 
                                                              * 
                                                              (7U 
                                                               & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                                  >> 3U))))) 
                                                         >> 5U)] 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x234U) 
                                                            + 
                                                            (0x1fffU 
                                                             & ((IData)(0x27dU) 
                                                                * 
                                                                (7U 
                                                                 & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                                    >> 3U)))))))))
                                               : 0U)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hdfd56d46__0 
                = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[8U])) 
                    << 0x3eU) | (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[7U])) 
                                  << 0x1eU) | ((QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[6U])) 
                                               >> 2U)));
            if (VL_LIKELY((0x13e7U >= ((IData)(0x196U) 
                                       + (0x1fffU & 
                                          ((IData)(0x27dU) 
                                           * (7U & 
                                              ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                               >> 3U)))))))) {
                VL_ASSIGNSEL_WQ(5096,64,((IData)(0x196U) 
                                         + (0x1fffU 
                                            & ((IData)(0x27dU) 
                                               * (7U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                     >> 3U))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hdfd56d46__0);
            }
        }
    }
    if ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__wt_valid_ex_id) 
          >> 2U) & ((0x13e7U >= ((IData)(0x27cU) + 
                                 (0x1fffU & ((IData)(0x27dU) 
                                             * (7U 
                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                   >> 6U)))))) 
                    & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                       (((IData)(0x27cU) + (0x1fffU 
                                            & ((IData)(0x27dU) 
                                               * (7U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                     >> 6U))))) 
                        >> 5U)] >> (0x1fU & ((IData)(0x27cU) 
                                             + (0x1fffU 
                                                & ((IData)(0x27dU) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                       >> 6U)))))))))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h3be3a689__0 = 1U;
        if (VL_LIKELY((0x13e7U >= ((IData)(0x1d9U) 
                                   + (0x1fffU & ((IData)(0x27dU) 
                                                 * 
                                                 (7U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                     >> 6U)))))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[(
                                                                                ((IData)(0x1d9U) 
                                                                                + 
                                                                                (0x1fffU 
                                                                                & ((IData)(0x27dU) 
                                                                                * 
                                                                                (7U 
                                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                                                >> 6U))))) 
                                                                                >> 5U)] 
                = (((~ ((IData)(1U) << (0x1fU & ((IData)(0x1d9U) 
                                                 + 
                                                 (0x1fffU 
                                                  & ((IData)(0x27dU) 
                                                     * 
                                                     (7U 
                                                      & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                         >> 6U)))))))) 
                    & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                    (((IData)(0x1d9U) + (0x1fffU & 
                                         ((IData)(0x27dU) 
                                          * (7U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                   >> 6U))))) 
                     >> 5U)]) | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h3be3a689__0) 
                                 << (0x1fU & ((IData)(0x1d9U) 
                                              + (0x1fffU 
                                                 & ((IData)(0x27dU) 
                                                    * 
                                                    (7U 
                                                     & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                        >> 6U))))))));
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h8584f5b6__0 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__wbdata_i[5U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__wbdata_i[4U])));
        if (VL_LIKELY((0x13e7U >= ((IData)(0x1daU) 
                                   + (0x1fffU & ((IData)(0x27dU) 
                                                 * 
                                                 (7U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                     >> 6U)))))))) {
            VL_ASSIGNSEL_WQ(5096,64,((IData)(0x1daU) 
                                     + (0x1fffU & ((IData)(0x27dU) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                       >> 6U))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h8584f5b6__0);
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hea10ca8a__0 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[2U])) 
                << 0x3bU) | (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[1U])) 
                              << 0x1bU) | ((QData)((IData)(
                                                           vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[0U])) 
                                           >> 5U)));
        if (VL_LIKELY((0x13e7U >= ((IData)(0x112U) 
                                   + (0x1fffU & ((IData)(0x27dU) 
                                                 * 
                                                 (7U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                     >> 6U)))))))) {
            VL_ASSIGNSEL_WQ(5096,64,((IData)(0x112U) 
                                     + (0x1fffU & ((IData)(0x27dU) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                       >> 6U))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hea10ca8a__0);
        }
        if (((9U == ((0x13e7U >= ((IData)(0x234U) + 
                                  (0x1fffU & ((IData)(0x27dU) 
                                              * (7U 
                                                 & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                    >> 6U))))))
                      ? (0xfU & (((0U == (0x1fU & ((IData)(0x234U) 
                                                   + 
                                                   (0x1fffU 
                                                    & ((IData)(0x27dU) 
                                                       * 
                                                       (7U 
                                                        & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                           >> 6U)))))))
                                   ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                                           (((IData)(0x237U) 
                                             + (0x1fffU 
                                                & ((IData)(0x27dU) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                       >> 6U))))) 
                                            >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(0x234U) 
                                                     + 
                                                     (0x1fffU 
                                                      & ((IData)(0x27dU) 
                                                         * 
                                                         (7U 
                                                          & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                             >> 6U))))))))) 
                                 | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                                    (((IData)(0x234U) 
                                      + (0x1fffU & 
                                         ((IData)(0x27dU) 
                                          * (7U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                   >> 6U))))) 
                                     >> 5U)] >> (0x1fU 
                                                 & ((IData)(0x234U) 
                                                    + 
                                                    (0x1fffU 
                                                     & ((IData)(0x27dU) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                            >> 6U)))))))))
                      : 0U)) & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__x_we_ex_id)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h09ce7116__0 = 0U;
            if (VL_LIKELY((0x13e7U >= ((IData)(0x21aU) 
                                       + (0x1fffU & 
                                          ((IData)(0x27dU) 
                                           * (7U & 
                                              ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                               >> 6U)))))))) {
                VL_ASSIGNSEL_WI(5096,6,((IData)(0x21aU) 
                                        + (0x1fffU 
                                           & ((IData)(0x27dU) 
                                              * (7U 
                                                 & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                    >> 6U))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h09ce7116__0);
            }
        }
        if ((4U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[8U])) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h7db8035b__0[0U] 
                = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[9U] 
                    << 0x1eU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[8U] 
                                 >> 2U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h7db8035b__0[1U] 
                = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[0xaU] 
                    << 0x1eU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[9U] 
                                 >> 2U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h7db8035b__0[2U] 
                = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[0xbU] 
                    << 0x1eU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[0xaU] 
                                 >> 2U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h7db8035b__0[3U] 
                = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[0xcU] 
                    << 0x1eU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[0xbU] 
                                 >> 2U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h7db8035b__0[4U] 
                = (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[0xcU] 
                         >> 2U));
            if (VL_LIKELY((0x13e7U >= ((IData)(0x155U) 
                                       + (0x1fffU & 
                                          ((IData)(0x27dU) 
                                           * (7U & 
                                              ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                               >> 6U)))))))) {
                VL_ASSIGNSEL_WW(5096,129,((IData)(0x155U) 
                                          + (0x1fffU 
                                             & ((IData)(0x27dU) 
                                                * (7U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                      >> 6U))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h7db8035b__0);
            }
        } else if (((7U == ((0x13e7U >= ((IData)(0x234U) 
                                         + (0x1fffU 
                                            & ((IData)(0x27dU) 
                                               * (7U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                     >> 6U))))))
                             ? (0xfU & (((0U == (0x1fU 
                                                 & ((IData)(0x234U) 
                                                    + 
                                                    (0x1fffU 
                                                     & ((IData)(0x27dU) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                            >> 6U)))))))
                                          ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                  (((IData)(0x237U) 
                                                    + 
                                                    (0x1fffU 
                                                     & ((IData)(0x27dU) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                            >> 6U))))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x234U) 
                                                       + 
                                                       (0x1fffU 
                                                        & ((IData)(0x27dU) 
                                                           * 
                                                           (7U 
                                                            & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                               >> 6U))))))))) 
                                        | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                           (((IData)(0x234U) 
                                             + (0x1fffU 
                                                & ((IData)(0x27dU) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                       >> 6U))))) 
                                            >> 5U)] 
                                           >> (0x1fU 
                                               & ((IData)(0x234U) 
                                                  + 
                                                  (0x1fffU 
                                                   & ((IData)(0x27dU) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                          >> 6U)))))))))
                             : 0U)) | (8U == ((0x13e7U 
                                               >= ((IData)(0x234U) 
                                                   + 
                                                   (0x1fffU 
                                                    & ((IData)(0x27dU) 
                                                       * 
                                                       (7U 
                                                        & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                           >> 6U))))))
                                               ? (0xfU 
                                                  & (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x234U) 
                                                           + 
                                                           (0x1fffU 
                                                            & ((IData)(0x27dU) 
                                                               * 
                                                               (7U 
                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                                   >> 6U)))))))
                                                       ? 0U
                                                       : 
                                                      (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                       (((IData)(0x237U) 
                                                         + 
                                                         (0x1fffU 
                                                          & ((IData)(0x27dU) 
                                                             * 
                                                             (7U 
                                                              & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                                 >> 6U))))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x234U) 
                                                            + 
                                                            (0x1fffU 
                                                             & ((IData)(0x27dU) 
                                                                * 
                                                                (7U 
                                                                 & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                                    >> 6U))))))))) 
                                                     | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                        (((IData)(0x234U) 
                                                          + 
                                                          (0x1fffU 
                                                           & ((IData)(0x27dU) 
                                                              * 
                                                              (7U 
                                                               & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                                  >> 6U))))) 
                                                         >> 5U)] 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x234U) 
                                                            + 
                                                            (0x1fffU 
                                                             & ((IData)(0x27dU) 
                                                                * 
                                                                (7U 
                                                                 & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                                    >> 6U)))))))))
                                               : 0U)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hdfd56d46__0 
                = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[0xcU])) 
                    << 0x3dU) | (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[0xbU])) 
                                  << 0x1dU) | ((QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[0xaU])) 
                                               >> 3U)));
            if (VL_LIKELY((0x13e7U >= ((IData)(0x196U) 
                                       + (0x1fffU & 
                                          ((IData)(0x27dU) 
                                           * (7U & 
                                              ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                               >> 6U)))))))) {
                VL_ASSIGNSEL_WQ(5096,64,((IData)(0x196U) 
                                         + (0x1fffU 
                                            & ((IData)(0x27dU) 
                                               * (7U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                     >> 6U))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hdfd56d46__0);
            }
        }
    }
    if ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__wt_valid_ex_id) 
          >> 3U) & ((0x13e7U >= ((IData)(0x27cU) + 
                                 (0x1fffU & ((IData)(0x27dU) 
                                             * (7U 
                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                   >> 9U)))))) 
                    & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                       (((IData)(0x27cU) + (0x1fffU 
                                            & ((IData)(0x27dU) 
                                               * (7U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                     >> 9U))))) 
                        >> 5U)] >> (0x1fU & ((IData)(0x27cU) 
                                             + (0x1fffU 
                                                & ((IData)(0x27dU) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                       >> 9U)))))))))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h3be3a689__0 = 1U;
        if (VL_LIKELY((0x13e7U >= ((IData)(0x1d9U) 
                                   + (0x1fffU & ((IData)(0x27dU) 
                                                 * 
                                                 (7U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                     >> 9U)))))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[(
                                                                                ((IData)(0x1d9U) 
                                                                                + 
                                                                                (0x1fffU 
                                                                                & ((IData)(0x27dU) 
                                                                                * 
                                                                                (7U 
                                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                                                >> 9U))))) 
                                                                                >> 5U)] 
                = (((~ ((IData)(1U) << (0x1fU & ((IData)(0x1d9U) 
                                                 + 
                                                 (0x1fffU 
                                                  & ((IData)(0x27dU) 
                                                     * 
                                                     (7U 
                                                      & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                         >> 9U)))))))) 
                    & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                    (((IData)(0x1d9U) + (0x1fffU & 
                                         ((IData)(0x27dU) 
                                          * (7U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                   >> 9U))))) 
                     >> 5U)]) | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h3be3a689__0) 
                                 << (0x1fU & ((IData)(0x1d9U) 
                                              + (0x1fffU 
                                                 & ((IData)(0x27dU) 
                                                    * 
                                                    (7U 
                                                     & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                        >> 9U))))))));
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h8584f5b6__0 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__wbdata_i[7U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__wbdata_i[6U])));
        if (VL_LIKELY((0x13e7U >= ((IData)(0x1daU) 
                                   + (0x1fffU & ((IData)(0x27dU) 
                                                 * 
                                                 (7U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                     >> 9U)))))))) {
            VL_ASSIGNSEL_WQ(5096,64,((IData)(0x1daU) 
                                     + (0x1fffU & ((IData)(0x27dU) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                       >> 9U))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h8584f5b6__0);
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hea10ca8a__0 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[2U])) 
                << 0x3bU) | (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[1U])) 
                              << 0x1bU) | ((QData)((IData)(
                                                           vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[0U])) 
                                           >> 5U)));
        if (VL_LIKELY((0x13e7U >= ((IData)(0x112U) 
                                   + (0x1fffU & ((IData)(0x27dU) 
                                                 * 
                                                 (7U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                     >> 9U)))))))) {
            VL_ASSIGNSEL_WQ(5096,64,((IData)(0x112U) 
                                     + (0x1fffU & ((IData)(0x27dU) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                       >> 9U))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hea10ca8a__0);
        }
        if (((9U == ((0x13e7U >= ((IData)(0x234U) + 
                                  (0x1fffU & ((IData)(0x27dU) 
                                              * (7U 
                                                 & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                    >> 9U))))))
                      ? (0xfU & (((0U == (0x1fU & ((IData)(0x234U) 
                                                   + 
                                                   (0x1fffU 
                                                    & ((IData)(0x27dU) 
                                                       * 
                                                       (7U 
                                                        & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                           >> 9U)))))))
                                   ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                                           (((IData)(0x237U) 
                                             + (0x1fffU 
                                                & ((IData)(0x27dU) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                       >> 9U))))) 
                                            >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(0x234U) 
                                                     + 
                                                     (0x1fffU 
                                                      & ((IData)(0x27dU) 
                                                         * 
                                                         (7U 
                                                          & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                             >> 9U))))))))) 
                                 | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                                    (((IData)(0x234U) 
                                      + (0x1fffU & 
                                         ((IData)(0x27dU) 
                                          * (7U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                   >> 9U))))) 
                                     >> 5U)] >> (0x1fU 
                                                 & ((IData)(0x234U) 
                                                    + 
                                                    (0x1fffU 
                                                     & ((IData)(0x27dU) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                            >> 9U)))))))))
                      : 0U)) & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__x_we_ex_id)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h09ce7116__0 = 0U;
            if (VL_LIKELY((0x13e7U >= ((IData)(0x21aU) 
                                       + (0x1fffU & 
                                          ((IData)(0x27dU) 
                                           * (7U & 
                                              ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                               >> 9U)))))))) {
                VL_ASSIGNSEL_WI(5096,6,((IData)(0x21aU) 
                                        + (0x1fffU 
                                           & ((IData)(0x27dU) 
                                              * (7U 
                                                 & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                    >> 9U))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h09ce7116__0);
            }
        }
        if ((8U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[0xcU])) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h7db8035b__0[0U] 
                = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[0xdU] 
                    << 0x1dU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[0xcU] 
                                 >> 3U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h7db8035b__0[1U] 
                = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[0xeU] 
                    << 0x1dU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[0xdU] 
                                 >> 3U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h7db8035b__0[2U] 
                = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[0xfU] 
                    << 0x1dU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[0xeU] 
                                 >> 3U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h7db8035b__0[3U] 
                = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[0x10U] 
                    << 0x1dU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[0xfU] 
                                 >> 3U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h7db8035b__0[4U] 
                = (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[0x10U] 
                         >> 3U));
            if (VL_LIKELY((0x13e7U >= ((IData)(0x155U) 
                                       + (0x1fffU & 
                                          ((IData)(0x27dU) 
                                           * (7U & 
                                              ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                               >> 9U)))))))) {
                VL_ASSIGNSEL_WW(5096,129,((IData)(0x155U) 
                                          + (0x1fffU 
                                             & ((IData)(0x27dU) 
                                                * (7U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                      >> 9U))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h7db8035b__0);
            }
        } else if (((7U == ((0x13e7U >= ((IData)(0x234U) 
                                         + (0x1fffU 
                                            & ((IData)(0x27dU) 
                                               * (7U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                     >> 9U))))))
                             ? (0xfU & (((0U == (0x1fU 
                                                 & ((IData)(0x234U) 
                                                    + 
                                                    (0x1fffU 
                                                     & ((IData)(0x27dU) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                            >> 9U)))))))
                                          ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                  (((IData)(0x237U) 
                                                    + 
                                                    (0x1fffU 
                                                     & ((IData)(0x27dU) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                            >> 9U))))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x234U) 
                                                       + 
                                                       (0x1fffU 
                                                        & ((IData)(0x27dU) 
                                                           * 
                                                           (7U 
                                                            & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                               >> 9U))))))))) 
                                        | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                           (((IData)(0x234U) 
                                             + (0x1fffU 
                                                & ((IData)(0x27dU) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                       >> 9U))))) 
                                            >> 5U)] 
                                           >> (0x1fU 
                                               & ((IData)(0x234U) 
                                                  + 
                                                  (0x1fffU 
                                                   & ((IData)(0x27dU) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                          >> 9U)))))))))
                             : 0U)) | (8U == ((0x13e7U 
                                               >= ((IData)(0x234U) 
                                                   + 
                                                   (0x1fffU 
                                                    & ((IData)(0x27dU) 
                                                       * 
                                                       (7U 
                                                        & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                           >> 9U))))))
                                               ? (0xfU 
                                                  & (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x234U) 
                                                           + 
                                                           (0x1fffU 
                                                            & ((IData)(0x27dU) 
                                                               * 
                                                               (7U 
                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                                   >> 9U)))))))
                                                       ? 0U
                                                       : 
                                                      (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                       (((IData)(0x237U) 
                                                         + 
                                                         (0x1fffU 
                                                          & ((IData)(0x27dU) 
                                                             * 
                                                             (7U 
                                                              & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                                 >> 9U))))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x234U) 
                                                            + 
                                                            (0x1fffU 
                                                             & ((IData)(0x27dU) 
                                                                * 
                                                                (7U 
                                                                 & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                                    >> 9U))))))))) 
                                                     | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                        (((IData)(0x234U) 
                                                          + 
                                                          (0x1fffU 
                                                           & ((IData)(0x27dU) 
                                                              * 
                                                              (7U 
                                                               & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                                  >> 9U))))) 
                                                         >> 5U)] 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x234U) 
                                                            + 
                                                            (0x1fffU 
                                                             & ((IData)(0x27dU) 
                                                                * 
                                                                (7U 
                                                                 & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                                    >> 9U)))))))))
                                               : 0U)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hdfd56d46__0 
                = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[0x10U])) 
                    << 0x3cU) | (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[0xfU])) 
                                  << 0x1cU) | ((QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[0xeU])) 
                                               >> 4U)));
            if (VL_LIKELY((0x13e7U >= ((IData)(0x196U) 
                                       + (0x1fffU & 
                                          ((IData)(0x27dU) 
                                           * (7U & 
                                              ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                               >> 9U)))))))) {
                VL_ASSIGNSEL_WQ(5096,64,((IData)(0x196U) 
                                         + (0x1fffU 
                                            & ((IData)(0x27dU) 
                                               * (7U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                     >> 9U))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hdfd56d46__0);
            }
        }
    }
    if ((((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__wt_valid_ex_id) 
          >> 4U) & ((0x13e7U >= ((IData)(0x27cU) + 
                                 (0x1fffU & ((IData)(0x27dU) 
                                             * (7U 
                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                   >> 0xcU)))))) 
                    & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                       (((IData)(0x27cU) + (0x1fffU 
                                            & ((IData)(0x27dU) 
                                               * (7U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                     >> 0xcU))))) 
                        >> 5U)] >> (0x1fU & ((IData)(0x27cU) 
                                             + (0x1fffU 
                                                & ((IData)(0x27dU) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                       >> 0xcU)))))))))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h3be3a689__0 = 1U;
        if (VL_LIKELY((0x13e7U >= ((IData)(0x1d9U) 
                                   + (0x1fffU & ((IData)(0x27dU) 
                                                 * 
                                                 (7U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                     >> 0xcU)))))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[(
                                                                                ((IData)(0x1d9U) 
                                                                                + 
                                                                                (0x1fffU 
                                                                                & ((IData)(0x27dU) 
                                                                                * 
                                                                                (7U 
                                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                                                >> 0xcU))))) 
                                                                                >> 5U)] 
                = (((~ ((IData)(1U) << (0x1fU & ((IData)(0x1d9U) 
                                                 + 
                                                 (0x1fffU 
                                                  & ((IData)(0x27dU) 
                                                     * 
                                                     (7U 
                                                      & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                         >> 0xcU)))))))) 
                    & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                    (((IData)(0x1d9U) + (0x1fffU & 
                                         ((IData)(0x27dU) 
                                          * (7U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                   >> 0xcU))))) 
                     >> 5U)]) | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h3be3a689__0) 
                                 << (0x1fU & ((IData)(0x1d9U) 
                                              + (0x1fffU 
                                                 & ((IData)(0x27dU) 
                                                    * 
                                                    (7U 
                                                     & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                        >> 0xcU))))))));
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h8584f5b6__0 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__wbdata_i[9U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__wbdata_i[8U])));
        if (VL_LIKELY((0x13e7U >= ((IData)(0x1daU) 
                                   + (0x1fffU & ((IData)(0x27dU) 
                                                 * 
                                                 (7U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                     >> 0xcU)))))))) {
            VL_ASSIGNSEL_WQ(5096,64,((IData)(0x1daU) 
                                     + (0x1fffU & ((IData)(0x27dU) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                       >> 0xcU))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h8584f5b6__0);
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hea10ca8a__0 
            = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[2U])) 
                << 0x3bU) | (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[1U])) 
                              << 0x1bU) | ((QData)((IData)(
                                                           vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__resolved_branch[0U])) 
                                           >> 5U)));
        if (VL_LIKELY((0x13e7U >= ((IData)(0x112U) 
                                   + (0x1fffU & ((IData)(0x27dU) 
                                                 * 
                                                 (7U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                     >> 0xcU)))))))) {
            VL_ASSIGNSEL_WQ(5096,64,((IData)(0x112U) 
                                     + (0x1fffU & ((IData)(0x27dU) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                       >> 0xcU))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hea10ca8a__0);
        }
        if (((9U == ((0x13e7U >= ((IData)(0x234U) + 
                                  (0x1fffU & ((IData)(0x27dU) 
                                              * (7U 
                                                 & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                    >> 0xcU))))))
                      ? (0xfU & (((0U == (0x1fU & ((IData)(0x234U) 
                                                   + 
                                                   (0x1fffU 
                                                    & ((IData)(0x27dU) 
                                                       * 
                                                       (7U 
                                                        & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                           >> 0xcU)))))))
                                   ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                                           (((IData)(0x237U) 
                                             + (0x1fffU 
                                                & ((IData)(0x27dU) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                       >> 0xcU))))) 
                                            >> 5U)] 
                                           << ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(0x234U) 
                                                     + 
                                                     (0x1fffU 
                                                      & ((IData)(0x27dU) 
                                                         * 
                                                         (7U 
                                                          & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                             >> 0xcU))))))))) 
                                 | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                                    (((IData)(0x234U) 
                                      + (0x1fffU & 
                                         ((IData)(0x27dU) 
                                          * (7U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                   >> 0xcU))))) 
                                     >> 5U)] >> (0x1fU 
                                                 & ((IData)(0x234U) 
                                                    + 
                                                    (0x1fffU 
                                                     & ((IData)(0x27dU) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                            >> 0xcU)))))))))
                      : 0U)) & (~ (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__x_we_ex_id)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h09ce7116__0 = 0U;
            if (VL_LIKELY((0x13e7U >= ((IData)(0x21aU) 
                                       + (0x1fffU & 
                                          ((IData)(0x27dU) 
                                           * (7U & 
                                              ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                               >> 0xcU)))))))) {
                VL_ASSIGNSEL_WI(5096,6,((IData)(0x21aU) 
                                        + (0x1fffU 
                                           & ((IData)(0x27dU) 
                                              * (7U 
                                                 & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                    >> 0xcU))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h09ce7116__0);
            }
        }
        if ((0x10U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[0x10U])) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h7db8035b__0[0U] 
                = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[0x11U] 
                    << 0x1cU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[0x10U] 
                                 >> 4U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h7db8035b__0[1U] 
                = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[0x12U] 
                    << 0x1cU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[0x11U] 
                                 >> 4U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h7db8035b__0[2U] 
                = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[0x13U] 
                    << 0x1cU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[0x12U] 
                                 >> 4U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h7db8035b__0[3U] 
                = ((vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[0x14U] 
                    << 0x1cU) | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[0x13U] 
                                 >> 4U));
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h7db8035b__0[4U] 
                = (1U & (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[0x14U] 
                         >> 4U));
            if (VL_LIKELY((0x13e7U >= ((IData)(0x155U) 
                                       + (0x1fffU & 
                                          ((IData)(0x27dU) 
                                           * (7U & 
                                              ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                               >> 0xcU)))))))) {
                VL_ASSIGNSEL_WW(5096,129,((IData)(0x155U) 
                                          + (0x1fffU 
                                             & ((IData)(0x27dU) 
                                                * (7U 
                                                   & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                      >> 0xcU))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_h7db8035b__0);
            }
        } else if (((7U == ((0x13e7U >= ((IData)(0x234U) 
                                         + (0x1fffU 
                                            & ((IData)(0x27dU) 
                                               * (7U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                     >> 0xcU))))))
                             ? (0xfU & (((0U == (0x1fU 
                                                 & ((IData)(0x234U) 
                                                    + 
                                                    (0x1fffU 
                                                     & ((IData)(0x27dU) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                            >> 0xcU)))))))
                                          ? 0U : (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                  (((IData)(0x237U) 
                                                    + 
                                                    (0x1fffU 
                                                     & ((IData)(0x27dU) 
                                                        * 
                                                        (7U 
                                                         & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                            >> 0xcU))))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(0x234U) 
                                                       + 
                                                       (0x1fffU 
                                                        & ((IData)(0x27dU) 
                                                           * 
                                                           (7U 
                                                            & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                               >> 0xcU))))))))) 
                                        | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                           (((IData)(0x234U) 
                                             + (0x1fffU 
                                                & ((IData)(0x27dU) 
                                                   * 
                                                   (7U 
                                                    & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                       >> 0xcU))))) 
                                            >> 5U)] 
                                           >> (0x1fU 
                                               & ((IData)(0x234U) 
                                                  + 
                                                  (0x1fffU 
                                                   & ((IData)(0x27dU) 
                                                      * 
                                                      (7U 
                                                       & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                          >> 0xcU)))))))))
                             : 0U)) | (8U == ((0x13e7U 
                                               >= ((IData)(0x234U) 
                                                   + 
                                                   (0x1fffU 
                                                    & ((IData)(0x27dU) 
                                                       * 
                                                       (7U 
                                                        & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                           >> 0xcU))))))
                                               ? (0xfU 
                                                  & (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x234U) 
                                                           + 
                                                           (0x1fffU 
                                                            & ((IData)(0x27dU) 
                                                               * 
                                                               (7U 
                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                                   >> 0xcU)))))))
                                                       ? 0U
                                                       : 
                                                      (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                       (((IData)(0x237U) 
                                                         + 
                                                         (0x1fffU 
                                                          & ((IData)(0x27dU) 
                                                             * 
                                                             (7U 
                                                              & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                                 >> 0xcU))))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x234U) 
                                                            + 
                                                            (0x1fffU 
                                                             & ((IData)(0x27dU) 
                                                                * 
                                                                (7U 
                                                                 & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                                    >> 0xcU))))))))) 
                                                     | (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_q[
                                                        (((IData)(0x234U) 
                                                          + 
                                                          (0x1fffU 
                                                           & ((IData)(0x27dU) 
                                                              * 
                                                              (7U 
                                                               & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                                  >> 0xcU))))) 
                                                         >> 5U)] 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x234U) 
                                                            + 
                                                            (0x1fffU 
                                                             & ((IData)(0x27dU) 
                                                                * 
                                                                (7U 
                                                                 & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                                    >> 0xcU)))))))))
                                               : 0U)))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hdfd56d46__0 
                = (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[0x14U])) 
                    << 0x3bU) | (((QData)((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[0x13U])) 
                                  << 0x1bU) | ((QData)((IData)(
                                                               vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__ex_ex_i[0x12U])) 
                                               >> 5U)));
            if (VL_LIKELY((0x13e7U >= ((IData)(0x196U) 
                                       + (0x1fffU & 
                                          ((IData)(0x27dU) 
                                           * (7U & 
                                              ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                               >> 0xcU)))))))) {
                VL_ASSIGNSEL_WQ(5096,64,((IData)(0x196U) 
                                         + (0x1fffU 
                                            & ((IData)(0x27dU) 
                                               * (7U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT____Vcellinp__issue_stage_i__trans_id_i) 
                                                     >> 0xcU))))), vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n, vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hdfd56d46__0);
            }
        }
    }
    if ((1U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__commit_ack))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hc58affc7__0 = 0U;
        if (VL_LIKELY((0x13e7U >= ((IData)(0x27cU) 
                                   + (0x1fffU & ((IData)(0x27dU) 
                                                 * 
                                                 (7U 
                                                  & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q)))))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[(
                                                                                ((IData)(0x27cU) 
                                                                                + 
                                                                                (0x1fffU 
                                                                                & ((IData)(0x27dU) 
                                                                                * 
                                                                                (7U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q))))) 
                                                                                >> 5U)] 
                = (((~ ((IData)(1U) << (0x1fU & ((IData)(0x27cU) 
                                                 + 
                                                 (0x1fffU 
                                                  & ((IData)(0x27dU) 
                                                     * 
                                                     (7U 
                                                      & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q)))))))) 
                    & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                    (((IData)(0x27cU) + (0x1fffU & 
                                         ((IData)(0x27dU) 
                                          * (7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q))))) 
                     >> 5U)]) | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hc58affc7__0) 
                                 << (0x1fU & ((IData)(0x27cU) 
                                              + (0x1fffU 
                                                 & ((IData)(0x27dU) 
                                                    * 
                                                    (7U 
                                                     & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q))))))));
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hc60b58cf__0 = 0U;
        if (VL_LIKELY((0x13e7U >= ((IData)(0x1d9U) 
                                   + (0x1fffU & ((IData)(0x27dU) 
                                                 * 
                                                 (7U 
                                                  & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q)))))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[(
                                                                                ((IData)(0x1d9U) 
                                                                                + 
                                                                                (0x1fffU 
                                                                                & ((IData)(0x27dU) 
                                                                                * 
                                                                                (7U 
                                                                                & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q))))) 
                                                                                >> 5U)] 
                = (((~ ((IData)(1U) << (0x1fU & ((IData)(0x1d9U) 
                                                 + 
                                                 (0x1fffU 
                                                  & ((IData)(0x27dU) 
                                                     * 
                                                     (7U 
                                                      & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q)))))))) 
                    & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                    (((IData)(0x1d9U) + (0x1fffU & 
                                         ((IData)(0x27dU) 
                                          * (7U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q))))) 
                     >> 5U)]) | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hc60b58cf__0) 
                                 << (0x1fU & ((IData)(0x1d9U) 
                                              + (0x1fffU 
                                                 & ((IData)(0x27dU) 
                                                    * 
                                                    (7U 
                                                     & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q))))))));
        }
    }
    if ((2U & (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__commit_ack))) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hc58affc7__0 = 0U;
        if (VL_LIKELY((0x13e7U >= ((IData)(0x27cU) 
                                   + (0x1fffU & ((IData)(0x27dU) 
                                                 * 
                                                 (7U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q) 
                                                     >> 3U)))))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[(
                                                                                ((IData)(0x27cU) 
                                                                                + 
                                                                                (0x1fffU 
                                                                                & ((IData)(0x27dU) 
                                                                                * 
                                                                                (7U 
                                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q) 
                                                                                >> 3U))))) 
                                                                                >> 5U)] 
                = (((~ ((IData)(1U) << (0x1fU & ((IData)(0x27cU) 
                                                 + 
                                                 (0x1fffU 
                                                  & ((IData)(0x27dU) 
                                                     * 
                                                     (7U 
                                                      & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q) 
                                                         >> 3U)))))))) 
                    & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                    (((IData)(0x27cU) + (0x1fffU & 
                                         ((IData)(0x27dU) 
                                          * (7U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q) 
                                                   >> 3U))))) 
                     >> 5U)]) | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hc58affc7__0) 
                                 << (0x1fU & ((IData)(0x27cU) 
                                              + (0x1fffU 
                                                 & ((IData)(0x27dU) 
                                                    * 
                                                    (7U 
                                                     & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q) 
                                                        >> 3U))))))));
        }
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hc60b58cf__0 = 0U;
        if (VL_LIKELY((0x13e7U >= ((IData)(0x1d9U) 
                                   + (0x1fffU & ((IData)(0x27dU) 
                                                 * 
                                                 (7U 
                                                  & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q) 
                                                     >> 3U)))))))) {
            vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[(
                                                                                ((IData)(0x1d9U) 
                                                                                + 
                                                                                (0x1fffU 
                                                                                & ((IData)(0x27dU) 
                                                                                * 
                                                                                (7U 
                                                                                & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q) 
                                                                                >> 3U))))) 
                                                                                >> 5U)] 
                = (((~ ((IData)(1U) << (0x1fU & ((IData)(0x1d9U) 
                                                 + 
                                                 (0x1fffU 
                                                  & ((IData)(0x27dU) 
                                                     * 
                                                     (7U 
                                                      & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q) 
                                                         >> 3U)))))))) 
                    & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[
                    (((IData)(0x1d9U) + (0x1fffU & 
                                         ((IData)(0x27dU) 
                                          * (7U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q) 
                                                   >> 3U))))) 
                     >> 5U)]) | ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT____Vlvbound_hc60b58cf__0) 
                                 << (0x1fU & ((IData)(0x1d9U) 
                                              + (0x1fffU 
                                                 & ((IData)(0x27dU) 
                                                    * 
                                                    (7U 
                                                     & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__commit_pointer_q) 
                                                        >> 3U))))))));
        }
    }
    if (vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__flush_ctrl_id) {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x13U] 
            = (0xefffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x13U]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0xeU] 
            = (0xfdffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0xeU]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0xaU] 
            = (0xffdfffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0xaU]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x27U] 
            = (0xfdffffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x27U]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x22U] 
            = (0xffbfffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x22U]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x1eU] 
            = (0xfffbffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x1eU]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x3bU] 
            = (0xffbfffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x3bU]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x36U] 
            = (0xfff7ffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x36U]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x32U] 
            = (0xffff7fffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x32U]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x4fU] 
            = (0xfff7ffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x4fU]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x4aU] 
            = (0xfffeffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x4aU]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x46U] 
            = (0xffffefffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x46U]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x63U] 
            = (0xfffeffffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x63U]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x5eU] 
            = (0xffffdfffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x5eU]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x5aU] 
            = (0xfffffdffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x5aU]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x77U] 
            = (0xffffdfffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x77U]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x72U] 
            = (0xfffffbffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x72U]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x6eU] 
            = (0xffffffbfU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x6eU]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x8bU] 
            = (0xfffffbffU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x8bU]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x86U] 
            = (0xffffff7fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x86U]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x82U] 
            = (0xfffffff7U & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x82U]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x9fU] 
            = (0x7fU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x9fU]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x9aU] 
            = (0xffffffefU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x9aU]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x96U] 
            = (0xfffffffeU & vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__mem_n[0x96U]);
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__issue_pointer_n = 0U;
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__issue_cnt_n = 0U;
    } else {
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__issue_pointer_n 
            = (7U & ((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__issue_pointer_q) 
                     + (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__issue_en)));
        vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__issue_cnt_n 
            = (0xfU & (((IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__issue_cnt_q) 
                        - (IData)(vlSelf->ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__num_commit)) 
                       + (IData)(ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ariane__DOT__issue_stage_i__DOT__i_scoreboard__DOT__issue_en)));
    }
}
