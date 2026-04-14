// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VLANE_E__SYMS_H_
#define VERILATED_VLANE_E__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vlane_e.h"

// INCLUDE MODULE CLASSES
#include "Vlane_e___024root.h"
#include "Vlane_e___024unit.h"
#include "Vlane_e_ara_pkg.h"

// DPI TYPES for DPI Export callbacks (Internal use)
using Vlane_e__Vcb_simutil_get_mem_t = void (*) (Vlane_e__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlWide<16>/*511:0*/ &val, IData/*31:0*/ &simutil_get_mem__Vfuncrtn);
using Vlane_e__Vcb_simutil_memload_t = void (*) (Vlane_e__Syms* __restrict vlSymsp, std::string file);
using Vlane_e__Vcb_simutil_set_mem_t = void (*) (Vlane_e__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlWide<16>/*511:0*/ val, IData/*31:0*/ &simutil_set_mem__Vfuncrtn);

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vlane_e__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vlane_e* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vlane_e___024root              TOP;
    Vlane_e___024unit              TOP____024unit;
    Vlane_e_ara_pkg                TOP__ara_pkg;

    // SCOPE NAMES
    VerilatedScope __Vscope_ara_pkg;
    VerilatedScope __Vscope_ara_pkg__shuffle_index;
    VerilatedScope __Vscope_lane_e__i_vrf__gen_banks__BRA__0__KET____data_sram;
    VerilatedScope __Vscope_lane_e__i_vrf__gen_banks__BRA__1__KET____data_sram;
    VerilatedScope __Vscope_lane_e__i_vrf__gen_banks__BRA__2__KET____data_sram;
    VerilatedScope __Vscope_lane_e__i_vrf__gen_banks__BRA__3__KET____data_sram;
    VerilatedScope __Vscope_lane_e__i_vrf__gen_banks__BRA__4__KET____data_sram;
    VerilatedScope __Vscope_lane_e__i_vrf__gen_banks__BRA__5__KET____data_sram;
    VerilatedScope __Vscope_lane_e__i_vrf__gen_banks__BRA__6__KET____data_sram;
    VerilatedScope __Vscope_lane_e__i_vrf__gen_banks__BRA__7__KET____data_sram;

    // CONSTRUCTORS
    Vlane_e__Syms(VerilatedContext* contextp, const char* namep, Vlane_e* modelp);
    ~Vlane_e__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
