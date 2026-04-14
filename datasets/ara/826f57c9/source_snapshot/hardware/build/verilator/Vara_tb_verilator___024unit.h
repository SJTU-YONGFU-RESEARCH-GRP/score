// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vara_tb_verilator.h for the primary calling header

#ifndef VERILATED_VARA_TB_VERILATOR___024UNIT_H_
#define VERILATED_VARA_TB_VERILATOR___024UNIT_H_  // guard

#include "verilated.h"


class Vara_tb_verilator__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vara_tb_verilator___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    static VlUnpacked<CData/*2:0*/, 8> __Venumtab_enum_next0;
    static VlUnpacked<CData/*2:0*/, 8> __Venumtab_enum_next1;
    static VlUnpacked<CData/*2:0*/, 8> __Venumtab_enum_prev2;

    // INTERNAL VARIABLES
    Vara_tb_verilator__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vara_tb_verilator___024unit(Vara_tb_verilator__Syms* symsp, const char* v__name);
    ~Vara_tb_verilator___024unit();
    VL_UNCOPYABLE(Vara_tb_verilator___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
