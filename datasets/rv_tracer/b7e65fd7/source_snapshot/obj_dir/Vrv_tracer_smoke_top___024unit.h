// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrv_tracer_smoke_top.h for the primary calling header

#ifndef VERILATED_VRV_TRACER_SMOKE_TOP___024UNIT_H_
#define VERILATED_VRV_TRACER_SMOKE_TOP___024UNIT_H_  // guard

#include "verilated.h"


class Vrv_tracer_smoke_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrv_tracer_smoke_top___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vrv_tracer_smoke_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrv_tracer_smoke_top___024unit(Vrv_tracer_smoke_top__Syms* symsp, const char* v__name);
    ~Vrv_tracer_smoke_top___024unit();
    VL_UNCOPYABLE(Vrv_tracer_smoke_top___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
