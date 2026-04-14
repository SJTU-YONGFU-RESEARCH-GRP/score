// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vlane_e.h"
#include "Vlane_e__Syms.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vlane_e::Vlane_e(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vlane_e__Syms(contextp(), _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , rst_ni{vlSymsp->TOP.rst_ni}
    , scan_enable_i{vlSymsp->TOP.scan_enable_i}
    , scan_data_i{vlSymsp->TOP.scan_data_i}
    , scan_data_o{vlSymsp->TOP.scan_data_o}
    , lane_id_i{vlSymsp->TOP.lane_id_i}
    , cluster_id_i{vlSymsp->TOP.cluster_id_i}
    , num_clusters_i{vlSymsp->TOP.num_clusters_i}
    , vxsat_flag_o{vlSymsp->TOP.vxsat_flag_o}
    , alu_vxrm_i{vlSymsp->TOP.alu_vxrm_i}
    , fflags_ex_o{vlSymsp->TOP.fflags_ex_o}
    , fflags_ex_valid_o{vlSymsp->TOP.fflags_ex_valid_o}
    , pe_req_i{vlSymsp->TOP.pe_req_i}
    , pe_req_valid_i{vlSymsp->TOP.pe_req_valid_i}
    , pe_vinsn_running_i{vlSymsp->TOP.pe_vinsn_running_i}
    , pe_req_ready_o{vlSymsp->TOP.pe_req_ready_o}
    , pe_resp_o{vlSymsp->TOP.pe_resp_o}
    , alu_vinsn_done_o{vlSymsp->TOP.alu_vinsn_done_o}
    , mfpu_vinsn_done_o{vlSymsp->TOP.mfpu_vinsn_done_o}
    , global_hazard_table_i{vlSymsp->TOP.global_hazard_table_i}
    , stu_operand_o{vlSymsp->TOP.stu_operand_o}
    , stu_operand_valid_o{vlSymsp->TOP.stu_operand_valid_o}
    , stu_operand_ready_i{vlSymsp->TOP.stu_operand_ready_i}
    , sldu_addrgen_operand_o{vlSymsp->TOP.sldu_addrgen_operand_o}
    , sldu_operand_o{vlSymsp->TOP.sldu_operand_o}
    , sldu_addrgen_operand_valid_o{vlSymsp->TOP.sldu_addrgen_operand_valid_o}
    , sldu_red_operand_valid_o{vlSymsp->TOP.sldu_red_operand_valid_o}
    , sldu_addrgen_operand_target_fu_o{vlSymsp->TOP.sldu_addrgen_operand_target_fu_o}
    , sldu_operand_ready_i{vlSymsp->TOP.sldu_operand_ready_i}
    , sldu_issue_mux_sel_i{vlSymsp->TOP.sldu_issue_mux_sel_i}
    , sldu_commit_mux_sel_i{vlSymsp->TOP.sldu_commit_mux_sel_i}
    , addrgen_operand_ready_i{vlSymsp->TOP.addrgen_operand_ready_i}
    , sldu_result_req_i{vlSymsp->TOP.sldu_result_req_i}
    , sldu_result_id_i{vlSymsp->TOP.sldu_result_id_i}
    , sldu_result_addr_i{vlSymsp->TOP.sldu_result_addr_i}
    , sldu_result_wdata_i{vlSymsp->TOP.sldu_result_wdata_i}
    , sldu_result_be_i{vlSymsp->TOP.sldu_result_be_i}
    , sldu_result_gnt_o{vlSymsp->TOP.sldu_result_gnt_o}
    , sldu_red_valid_i{vlSymsp->TOP.sldu_red_valid_i}
    , sldu_red_pending_i{vlSymsp->TOP.sldu_red_pending_i}
    , sldu_red_completed_i{vlSymsp->TOP.sldu_red_completed_i}
    , sldu_result_final_gnt_o{vlSymsp->TOP.sldu_result_final_gnt_o}
    , ldu_result_req_i{vlSymsp->TOP.ldu_result_req_i}
    , ldu_result_id_i{vlSymsp->TOP.ldu_result_id_i}
    , ldu_result_addr_i{vlSymsp->TOP.ldu_result_addr_i}
    , ldu_result_wdata_i{vlSymsp->TOP.ldu_result_wdata_i}
    , ldu_result_be_i{vlSymsp->TOP.ldu_result_be_i}
    , ldu_result_gnt_o{vlSymsp->TOP.ldu_result_gnt_o}
    , ldu_result_final_gnt_o{vlSymsp->TOP.ldu_result_final_gnt_o}
    , mask_operand_o{vlSymsp->TOP.mask_operand_o}
    , mask_operand_valid_o{vlSymsp->TOP.mask_operand_valid_o}
    , mask_operand_ready_i{vlSymsp->TOP.mask_operand_ready_i}
    , masku_result_req_i{vlSymsp->TOP.masku_result_req_i}
    , masku_result_id_i{vlSymsp->TOP.masku_result_id_i}
    , masku_result_addr_i{vlSymsp->TOP.masku_result_addr_i}
    , masku_result_wdata_i{vlSymsp->TOP.masku_result_wdata_i}
    , masku_result_be_i{vlSymsp->TOP.masku_result_be_i}
    , masku_result_gnt_o{vlSymsp->TOP.masku_result_gnt_o}
    , masku_result_final_gnt_o{vlSymsp->TOP.masku_result_final_gnt_o}
    , mask_i{vlSymsp->TOP.mask_i}
    , mask_valid_i{vlSymsp->TOP.mask_valid_i}
    , mask_ready_o{vlSymsp->TOP.mask_ready_o}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , __PVT__ara_pkg{vlSymsp->TOP.__PVT__ara_pkg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vlane_e::Vlane_e(const char* _vcname__)
    : Vlane_e(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vlane_e::~Vlane_e() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vlane_e___024root___eval_debug_assertions(Vlane_e___024root* vlSelf);
#endif  // VL_DEBUG
void Vlane_e___024root___eval_static(Vlane_e___024root* vlSelf);
void Vlane_e___024root___eval_initial(Vlane_e___024root* vlSelf);
void Vlane_e___024root___eval_settle(Vlane_e___024root* vlSelf);
void Vlane_e___024root___eval(Vlane_e___024root* vlSelf);

void Vlane_e::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vlane_e::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vlane_e___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vlane_e___024root___eval_static(&(vlSymsp->TOP));
        Vlane_e___024root___eval_initial(&(vlSymsp->TOP));
        Vlane_e___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vlane_e___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vlane_e::eventsPending() { return false; }

uint64_t Vlane_e::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vlane_e::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vlane_e___024root___eval_final(Vlane_e___024root* vlSelf);

VL_ATTR_COLD void Vlane_e::final() {
    Vlane_e___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vlane_e::hierName() const { return vlSymsp->name(); }
const char* Vlane_e::modelName() const { return "Vlane_e"; }
unsigned Vlane_e::threads() const { return 1; }
