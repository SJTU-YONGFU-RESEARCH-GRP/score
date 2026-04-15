// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vstream_fifo__pch.h"

//============================================================
// Constructors

Vstream_fifo::Vstream_fifo(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vstream_fifo__Syms(contextp(), _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , rst_ni{vlSymsp->TOP.rst_ni}
    , flush_i{vlSymsp->TOP.flush_i}
    , testmode_i{vlSymsp->TOP.testmode_i}
    , usage_o{vlSymsp->TOP.usage_o}
    , valid_i{vlSymsp->TOP.valid_i}
    , ready_o{vlSymsp->TOP.ready_o}
    , valid_o{vlSymsp->TOP.valid_o}
    , ready_i{vlSymsp->TOP.ready_i}
    , data_i{vlSymsp->TOP.data_i}
    , data_o{vlSymsp->TOP.data_o}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vstream_fifo::Vstream_fifo(const char* _vcname__)
    : Vstream_fifo(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vstream_fifo::~Vstream_fifo() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vstream_fifo___024root___eval_debug_assertions(Vstream_fifo___024root* vlSelf);
#endif  // VL_DEBUG
void Vstream_fifo___024root___eval_static(Vstream_fifo___024root* vlSelf);
void Vstream_fifo___024root___eval_initial(Vstream_fifo___024root* vlSelf);
void Vstream_fifo___024root___eval_settle(Vstream_fifo___024root* vlSelf);
void Vstream_fifo___024root___eval(Vstream_fifo___024root* vlSelf);

void Vstream_fifo::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vstream_fifo::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vstream_fifo___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vstream_fifo___024root___eval_static(&(vlSymsp->TOP));
        Vstream_fifo___024root___eval_initial(&(vlSymsp->TOP));
        Vstream_fifo___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vstream_fifo___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vstream_fifo::eventsPending() { return false; }

uint64_t Vstream_fifo::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vstream_fifo::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vstream_fifo___024root___eval_final(Vstream_fifo___024root* vlSelf);

VL_ATTR_COLD void Vstream_fifo::final() {
    Vstream_fifo___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vstream_fifo::hierName() const { return vlSymsp->name(); }
const char* Vstream_fifo::modelName() const { return "Vstream_fifo"; }
unsigned Vstream_fifo::threads() const { return 1; }
void Vstream_fifo::prepareClone() const { contextp()->prepareClone(); }
void Vstream_fifo::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vstream_fifo::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vstream_fifo::trace()' called on model that was Verilated without --trace option");
}
