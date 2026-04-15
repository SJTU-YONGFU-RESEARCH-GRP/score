// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vrv_tracer_smoke_top__pch.h"

//============================================================
// Constructors

Vrv_tracer_smoke_top::Vrv_tracer_smoke_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vrv_tracer_smoke_top__Syms(contextp(), _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , rst_ni{vlSymsp->TOP.rst_ni}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vrv_tracer_smoke_top::Vrv_tracer_smoke_top(const char* _vcname__)
    : Vrv_tracer_smoke_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vrv_tracer_smoke_top::~Vrv_tracer_smoke_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vrv_tracer_smoke_top___024root___eval_debug_assertions(Vrv_tracer_smoke_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vrv_tracer_smoke_top___024root___eval_static(Vrv_tracer_smoke_top___024root* vlSelf);
void Vrv_tracer_smoke_top___024root___eval_initial(Vrv_tracer_smoke_top___024root* vlSelf);
void Vrv_tracer_smoke_top___024root___eval_settle(Vrv_tracer_smoke_top___024root* vlSelf);
void Vrv_tracer_smoke_top___024root___eval(Vrv_tracer_smoke_top___024root* vlSelf);

void Vrv_tracer_smoke_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vrv_tracer_smoke_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vrv_tracer_smoke_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vrv_tracer_smoke_top___024root___eval_static(&(vlSymsp->TOP));
        Vrv_tracer_smoke_top___024root___eval_initial(&(vlSymsp->TOP));
        Vrv_tracer_smoke_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vrv_tracer_smoke_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vrv_tracer_smoke_top::eventsPending() { return false; }

uint64_t Vrv_tracer_smoke_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vrv_tracer_smoke_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vrv_tracer_smoke_top___024root___eval_final(Vrv_tracer_smoke_top___024root* vlSelf);

VL_ATTR_COLD void Vrv_tracer_smoke_top::final() {
    Vrv_tracer_smoke_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vrv_tracer_smoke_top::hierName() const { return vlSymsp->name(); }
const char* Vrv_tracer_smoke_top::modelName() const { return "Vrv_tracer_smoke_top"; }
unsigned Vrv_tracer_smoke_top::threads() const { return 1; }
void Vrv_tracer_smoke_top::prepareClone() const { contextp()->prepareClone(); }
void Vrv_tracer_smoke_top::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vrv_tracer_smoke_top::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vrv_tracer_smoke_top::trace()' called on model that was Verilated without --trace option");
}
