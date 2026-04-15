// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSTREAM_FIFO__SYMS_H_
#define VERILATED_VSTREAM_FIFO__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vstream_fifo.h"

// INCLUDE MODULE CLASSES
#include "Vstream_fifo___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vstream_fifo__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vstream_fifo* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vstream_fifo___024root         TOP;

    // CONSTRUCTORS
    Vstream_fifo__Syms(VerilatedContext* contextp, const char* namep, Vstream_fifo* modelp);
    ~Vstream_fifo__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
