// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vara_tb_verilator.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vara_tb_verilator__Syms.h"
#include "Vara_tb_verilator__Syms.h"
#include "Vara_tb_verilator_ara_pkg.h"

void Vara_tb_verilator_ara_pkg___ctor_var_reset(Vara_tb_verilator_ara_pkg* vlSelf);

Vara_tb_verilator_ara_pkg::Vara_tb_verilator_ara_pkg(Vara_tb_verilator__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vara_tb_verilator_ara_pkg___ctor_var_reset(this);
}

void Vara_tb_verilator_ara_pkg::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vara_tb_verilator_ara_pkg::~Vara_tb_verilator_ara_pkg() {
}
