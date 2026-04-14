// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vara_tb_verilator.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vara_tb_verilator__Syms.h"
#include "Vara_tb_verilator_ara_pkg.h"

VL_ATTR_COLD void Vara_tb_verilator_ara_pkg___ctor_var_reset(Vara_tb_verilator_ara_pkg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                            Vara_tb_verilator_ara_pkg___ctor_var_reset\n"); );
    // Body
    vlSelf->__Vlvbound_h48cb3c74__0 = VL_RAND_RESET_I(13);
    vlSelf->__Vlvbound_h849f9b11__0 = VL_RAND_RESET_I(13);
    vlSelf->__Vlvbound_h6c7febc3__0 = VL_RAND_RESET_I(13);
    vlSelf->__Vlvbound_hf9474514__0 = VL_RAND_RESET_I(13);
    vlSelf->__Vlvbound_h7cf32d13__0 = VL_RAND_RESET_I(13);
    vlSelf->__Vlvbound_h8c775a38__0 = VL_RAND_RESET_I(13);
}
