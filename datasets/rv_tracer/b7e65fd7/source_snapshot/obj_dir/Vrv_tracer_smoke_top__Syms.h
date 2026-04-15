// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VRV_TRACER_SMOKE_TOP__SYMS_H_
#define VERILATED_VRV_TRACER_SMOKE_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vrv_tracer_smoke_top.h"

// INCLUDE MODULE CLASSES
#include "Vrv_tracer_smoke_top___024root.h"
#include "Vrv_tracer_smoke_top___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vrv_tracer_smoke_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vrv_tracer_smoke_top* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vrv_tracer_smoke_top___024root TOP;

    // CONSTRUCTORS
    Vrv_tracer_smoke_top__Syms(VerilatedContext* contextp, const char* namep, Vrv_tracer_smoke_top* modelp);
    ~Vrv_tracer_smoke_top__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
