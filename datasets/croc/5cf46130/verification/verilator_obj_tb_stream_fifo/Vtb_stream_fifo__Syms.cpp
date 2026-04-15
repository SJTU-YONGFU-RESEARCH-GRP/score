// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_stream_fifo__pch.h"
#include "Vtb_stream_fifo.h"
#include "Vtb_stream_fifo___024root.h"

// FUNCTIONS
Vtb_stream_fifo__Syms::~Vtb_stream_fifo__Syms()
{
}

Vtb_stream_fifo__Syms::Vtb_stream_fifo__Syms(VerilatedContext* contextp, const char* namep, Vtb_stream_fifo* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(54);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_tb_stream_fifo.configure(this, name(), "tb_stream_fifo", "tb_stream_fifo", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_stream_fifo__pop_expect.configure(this, name(), "tb_stream_fifo.pop_expect", "pop_expect", -9, VerilatedScope::SCOPE_OTHER);
}
