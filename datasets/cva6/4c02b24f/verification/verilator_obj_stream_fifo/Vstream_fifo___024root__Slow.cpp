// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstream_fifo.h for the primary calling header

#include "Vstream_fifo__pch.h"
#include "Vstream_fifo__Syms.h"
#include "Vstream_fifo___024root.h"

void Vstream_fifo___024root___ctor_var_reset(Vstream_fifo___024root* vlSelf);

Vstream_fifo___024root::Vstream_fifo___024root(Vstream_fifo__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vstream_fifo___024root___ctor_var_reset(this);
}

void Vstream_fifo___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vstream_fifo___024root::~Vstream_fifo___024root() {
}
