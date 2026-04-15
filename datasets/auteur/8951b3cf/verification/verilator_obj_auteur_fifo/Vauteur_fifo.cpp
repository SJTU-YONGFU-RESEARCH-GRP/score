// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vauteur_fifo__pch.h"

//============================================================
// Constructors

Vauteur_fifo::Vauteur_fifo(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vauteur_fifo__Syms(contextp(), _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , rst_ni{vlSymsp->TOP.rst_ni}
    , flush_i{vlSymsp->TOP.flush_i}
    , data_i{vlSymsp->TOP.data_i}
    , push_i{vlSymsp->TOP.push_i}
    , data_o{vlSymsp->TOP.data_o}
    , pop_i{vlSymsp->TOP.pop_i}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vauteur_fifo::Vauteur_fifo(const char* _vcname__)
    : Vauteur_fifo(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vauteur_fifo::~Vauteur_fifo() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vauteur_fifo___024root___eval_debug_assertions(Vauteur_fifo___024root* vlSelf);
#endif  // VL_DEBUG
void Vauteur_fifo___024root___eval_static(Vauteur_fifo___024root* vlSelf);
void Vauteur_fifo___024root___eval_initial(Vauteur_fifo___024root* vlSelf);
void Vauteur_fifo___024root___eval_settle(Vauteur_fifo___024root* vlSelf);
void Vauteur_fifo___024root___eval(Vauteur_fifo___024root* vlSelf);

void Vauteur_fifo::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vauteur_fifo::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vauteur_fifo___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vauteur_fifo___024root___eval_static(&(vlSymsp->TOP));
        Vauteur_fifo___024root___eval_initial(&(vlSymsp->TOP));
        Vauteur_fifo___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vauteur_fifo___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vauteur_fifo::eventsPending() { return false; }

uint64_t Vauteur_fifo::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vauteur_fifo::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vauteur_fifo___024root___eval_final(Vauteur_fifo___024root* vlSelf);

VL_ATTR_COLD void Vauteur_fifo::final() {
    Vauteur_fifo___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vauteur_fifo::hierName() const { return vlSymsp->name(); }
const char* Vauteur_fifo::modelName() const { return "Vauteur_fifo"; }
unsigned Vauteur_fifo::threads() const { return 1; }
void Vauteur_fifo::prepareClone() const { contextp()->prepareClone(); }
void Vauteur_fifo::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vauteur_fifo::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vauteur_fifo::trace()' called on model that was Verilated without --trace option");
}
