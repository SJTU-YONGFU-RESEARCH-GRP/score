// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_AUTEUR_FIFO__SYMS_H_
#define VERILATED_VTB_AUTEUR_FIFO__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_auteur_fifo.h"

// INCLUDE MODULE CLASSES
#include "Vtb_auteur_fifo___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_auteur_fifo__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_auteur_fifo* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_auteur_fifo___024root      TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_tb_auteur_fifo;

    // CONSTRUCTORS
    Vtb_auteur_fifo__Syms(VerilatedContext* contextp, const char* namep, Vtb_auteur_fifo* modelp);
    ~Vtb_auteur_fifo__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
