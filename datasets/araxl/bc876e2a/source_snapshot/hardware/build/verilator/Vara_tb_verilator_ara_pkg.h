// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vara_tb_verilator.h for the primary calling header

#ifndef VERILATED_VARA_TB_VERILATOR_ARA_PKG_H_
#define VERILATED_VARA_TB_VERILATOR_ARA_PKG_H_  // guard

#include "verilated.h"


class Vara_tb_verilator__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vara_tb_verilator_ara_pkg final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    SData/*12:0*/ __Vlvbound_h48cb3c74__0;
    SData/*12:0*/ __Vlvbound_h849f9b11__0;
    SData/*12:0*/ __Vlvbound_h6c7febc3__0;
    SData/*12:0*/ __Vlvbound_hf9474514__0;
    SData/*12:0*/ __Vlvbound_h7cf32d13__0;
    SData/*12:0*/ __Vlvbound_h8c775a38__0;

    // INTERNAL VARIABLES
    Vara_tb_verilator__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vara_tb_verilator_ara_pkg(Vara_tb_verilator__Syms* symsp, const char* v__name);
    ~Vara_tb_verilator_ara_pkg();
    VL_UNCOPYABLE(Vara_tb_verilator_ara_pkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
