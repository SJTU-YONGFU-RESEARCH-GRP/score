// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vlane_e.h for the primary calling header

#ifndef VERILATED_VLANE_E___024UNIT_H_
#define VERILATED_VLANE_E___024UNIT_H_  // guard

#include "verilated.h"


class Vlane_e__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vlane_e___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vlane_e__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vlane_e___024unit(Vlane_e__Syms* symsp, const char* v__name);
    ~Vlane_e___024unit();
    VL_UNCOPYABLE(Vlane_e___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
