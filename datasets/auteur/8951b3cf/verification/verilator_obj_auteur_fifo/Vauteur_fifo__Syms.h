// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VAUTEUR_FIFO__SYMS_H_
#define VERILATED_VAUTEUR_FIFO__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vauteur_fifo.h"

// INCLUDE MODULE CLASSES
#include "Vauteur_fifo___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vauteur_fifo__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vauteur_fifo* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vauteur_fifo___024root         TOP;

    // CONSTRUCTORS
    Vauteur_fifo__Syms(VerilatedContext* contextp, const char* namep, Vauteur_fifo* modelp);
    ~Vauteur_fifo__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
