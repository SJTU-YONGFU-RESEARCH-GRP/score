// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vara_tb_verilator.h for the primary calling header

#include "Vara_tb_verilator__pch.h"
#include "Vara_tb_verilator__Syms.h"
#include "Vara_tb_verilator___024root.h"

// Parameter definitions for Vara_tb_verilator___024root
constexpr VlUnpacked<IData/*31:0*/, 7> Vara_tb_verilator___024root::ara_tb_verilator__DOT__dut__DOT__i_ara_soc__DOT__i_system__DOT__i_ara__DOT__i_sequencer__DOT__InsnQueueDepth;


void Vara_tb_verilator___024root___ctor_var_reset(Vara_tb_verilator___024root* vlSelf);

Vara_tb_verilator___024root::Vara_tb_verilator___024root(Vara_tb_verilator__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vara_tb_verilator___024root___ctor_var_reset(this);
}

void Vara_tb_verilator___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vara_tb_verilator___024root::~Vara_tb_verilator___024root() {
}
