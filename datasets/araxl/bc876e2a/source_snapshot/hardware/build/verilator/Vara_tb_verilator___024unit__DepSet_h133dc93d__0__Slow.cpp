// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vara_tb_verilator.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vara_tb_verilator__Syms.h"
#include "Vara_tb_verilator___024unit.h"

VL_ATTR_COLD void Vara_tb_verilator___024unit___ctor_var_reset(Vara_tb_verilator___024unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vara_tb_verilator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vara_tb_verilator___024unit___ctor_var_reset\n"); );
    // Body
    for (int __Vi = 0; __Vi < 8; ++__Vi) {
        vlSelf->__Venumtab_enum_next0[__Vi] = 0U;
    }
    vlSelf->__Venumtab_enum_next0[0] = 1U;
    vlSelf->__Venumtab_enum_next0[1] = 2U;
    vlSelf->__Venumtab_enum_next0[2] = 3U;
    vlSelf->__Venumtab_enum_next0[3] = 4U;
    vlSelf->__Venumtab_enum_next0[4] = 5U;
    vlSelf->__Venumtab_enum_next0[5] = 6U;
    vlSelf->__Venumtab_enum_next0[6] = 7U;
    vlSelf->__Venumtab_enum_next0[7] = 0U;
    for (int __Vi = 0; __Vi < 8; ++__Vi) {
        vlSelf->__Venumtab_enum_next1[__Vi] = 0U;
    }
    vlSelf->__Venumtab_enum_next1[0] = 1U;
    vlSelf->__Venumtab_enum_next1[1] = 2U;
    vlSelf->__Venumtab_enum_next1[2] = 3U;
    vlSelf->__Venumtab_enum_next1[3] = 4U;
    vlSelf->__Venumtab_enum_next1[4] = 5U;
    vlSelf->__Venumtab_enum_next1[5] = 6U;
    vlSelf->__Venumtab_enum_next1[6] = 7U;
    vlSelf->__Venumtab_enum_next1[7] = 0U;
    for (int __Vi = 0; __Vi < 8; ++__Vi) {
        vlSelf->__Venumtab_enum_prev2[__Vi] = 0U;
    }
    vlSelf->__Venumtab_enum_prev2[0] = 7U;
    vlSelf->__Venumtab_enum_prev2[1] = 0U;
    vlSelf->__Venumtab_enum_prev2[2] = 1U;
    vlSelf->__Venumtab_enum_prev2[3] = 2U;
    vlSelf->__Venumtab_enum_prev2[4] = 3U;
    vlSelf->__Venumtab_enum_prev2[5] = 4U;
    vlSelf->__Venumtab_enum_prev2[6] = 5U;
    vlSelf->__Venumtab_enum_prev2[7] = 6U;
}
