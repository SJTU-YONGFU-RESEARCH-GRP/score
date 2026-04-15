// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vauteur_fifo.h for the primary calling header

#include "Vauteur_fifo__pch.h"
#include "Vauteur_fifo__Syms.h"
#include "Vauteur_fifo___024root.h"

void Vauteur_fifo___024root___ctor_var_reset(Vauteur_fifo___024root* vlSelf);

Vauteur_fifo___024root::Vauteur_fifo___024root(Vauteur_fifo__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vauteur_fifo___024root___ctor_var_reset(this);
}

void Vauteur_fifo___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vauteur_fifo___024root::~Vauteur_fifo___024root() {
}
