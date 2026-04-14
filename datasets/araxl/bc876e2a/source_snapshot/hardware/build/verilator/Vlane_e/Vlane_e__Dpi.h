// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VLANE_E__DPI_H_
#define VERILATED_VLANE_E__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI EXPORTS
    // DPI export at /home/yongfu/proj/score/tools/araxl/hardware/deps/tech_cells_generic/src/rtl/tc_sram.sv:310:16
    extern int simutil_get_mem(int index, svBitVecVal* val);
    // DPI export at /home/yongfu/proj/score/tools/araxl/hardware/deps/tech_cells_generic/src/rtl/tc_sram.sv:289:8
    extern void simutil_memload(const char* file);
    // DPI export at /home/yongfu/proj/score/tools/araxl/hardware/deps/tech_cells_generic/src/rtl/tc_sram.sv:297:16
    extern int simutil_set_mem(int index, const svBitVecVal* val);

    // DPI IMPORTS
    // DPI import at /home/yongfu/proj/score/tools/araxl/hardware/tb/ara_tb.sv:10:30
    extern char get_section(long long* address, long long* len);
    // DPI import at /home/yongfu/proj/score/tools/araxl/hardware/tb/ara_tb.sv:9:30
    extern void read_elf(const char* filename);
    // DPI import at /home/yongfu/proj/score/tools/araxl/hardware/tb/ara_tb.sv:11:38
    extern char read_section(long long address, const svOpenArrayHandle buffer);

#ifdef __cplusplus
}
#endif

#endif  // guard
