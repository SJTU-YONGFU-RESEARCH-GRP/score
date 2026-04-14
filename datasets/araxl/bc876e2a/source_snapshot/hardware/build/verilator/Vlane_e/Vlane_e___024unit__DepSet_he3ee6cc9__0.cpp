// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlane_e.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vlane_e__Syms.h"
#include "Vlane_e__Syms.h"
#include "Vlane_e___024unit.h"

extern "C" void read_elf(const char* filename);

VL_INLINE_OPT void Vlane_e___024unit____Vdpiimwrap_read_elf_TOP____024unit(std::string filename) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vlane_e___024unit____Vdpiimwrap_read_elf_TOP____024unit\n"); );
    // Body
    const char* filename__Vcvt;
    for (size_t filename__Vidx = 0; filename__Vidx < 1; ++filename__Vidx) filename__Vcvt = filename.c_str();
    read_elf(filename__Vcvt);
}

extern "C" char get_section(long long* address, long long* len);

VL_INLINE_OPT void Vlane_e___024unit____Vdpiimwrap_get_section_TOP____024unit(QData/*63:0*/ &address, QData/*63:0*/ &len, CData/*7:0*/ &get_section__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vlane_e___024unit____Vdpiimwrap_get_section_TOP____024unit\n"); );
    // Body
    long long address__Vcvt;
    long long len__Vcvt;
    char get_section__Vfuncrtn__Vcvt;
    get_section__Vfuncrtn__Vcvt = get_section(&address__Vcvt, &len__Vcvt);
    address = address__Vcvt;
    len = len__Vcvt;
    get_section__Vfuncrtn = (0xffU & get_section__Vfuncrtn__Vcvt);
}
