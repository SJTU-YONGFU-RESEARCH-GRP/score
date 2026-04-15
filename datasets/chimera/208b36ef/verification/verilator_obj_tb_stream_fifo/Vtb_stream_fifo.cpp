// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_stream_fifo__pch.h"

//============================================================
// Constructors

Vtb_stream_fifo::Vtb_stream_fifo(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_stream_fifo__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_stream_fifo::Vtb_stream_fifo(const char* _vcname__)
    : Vtb_stream_fifo(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_stream_fifo::~Vtb_stream_fifo() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_stream_fifo___024root___eval_debug_assertions(Vtb_stream_fifo___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_stream_fifo___024root___eval_static(Vtb_stream_fifo___024root* vlSelf);
void Vtb_stream_fifo___024root___eval_initial(Vtb_stream_fifo___024root* vlSelf);
void Vtb_stream_fifo___024root___eval_settle(Vtb_stream_fifo___024root* vlSelf);
void Vtb_stream_fifo___024root___eval(Vtb_stream_fifo___024root* vlSelf);

void Vtb_stream_fifo::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_stream_fifo::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_stream_fifo___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_stream_fifo___024root___eval_static(&(vlSymsp->TOP));
        Vtb_stream_fifo___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_stream_fifo___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_stream_fifo___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_stream_fifo::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_stream_fifo::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_stream_fifo::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_stream_fifo___024root___eval_final(Vtb_stream_fifo___024root* vlSelf);

VL_ATTR_COLD void Vtb_stream_fifo::final() {
    Vtb_stream_fifo___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_stream_fifo::hierName() const { return vlSymsp->name(); }
const char* Vtb_stream_fifo::modelName() const { return "Vtb_stream_fifo"; }
unsigned Vtb_stream_fifo::threads() const { return 1; }
void Vtb_stream_fifo::prepareClone() const { contextp()->prepareClone(); }
void Vtb_stream_fifo::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vtb_stream_fifo::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb_stream_fifo::trace()' called on model that was Verilated without --trace option");
}
