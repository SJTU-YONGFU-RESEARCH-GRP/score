// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrv_tracer_smoke_top.h for the primary calling header

#include "Vrv_tracer_smoke_top__pch.h"
#include "Vrv_tracer_smoke_top__Syms.h"
#include "Vrv_tracer_smoke_top___024unit.h"

void Vrv_tracer_smoke_top___024unit___ctor_var_reset(Vrv_tracer_smoke_top___024unit* vlSelf);

Vrv_tracer_smoke_top___024unit::Vrv_tracer_smoke_top___024unit(Vrv_tracer_smoke_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vrv_tracer_smoke_top___024unit___ctor_var_reset(this);
}

void Vrv_tracer_smoke_top___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vrv_tracer_smoke_top___024unit::~Vrv_tracer_smoke_top___024unit() {
}
