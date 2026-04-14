// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlane_e.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vlane_e__Syms.h"
#include "Vlane_e__Syms.h"
#include "Vlane_e___024root.h"

void Vlane_e___024root___ctor_var_reset(Vlane_e___024root* vlSelf);

Vlane_e___024root::Vlane_e___024root(Vlane_e__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vlane_e___024root___ctor_var_reset(this);
}

void Vlane_e___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vlane_e___024root::~Vlane_e___024root() {
}
