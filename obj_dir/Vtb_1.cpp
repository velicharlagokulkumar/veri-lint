// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_1__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vtb_1::Vtb_1(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_1__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_1::Vtb_1(const char* _vcname__)
    : Vtb_1(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_1::~Vtb_1() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_1___024root___eval_debug_assertions(Vtb_1___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_1___024root___eval_static(Vtb_1___024root* vlSelf);
void Vtb_1___024root___eval_initial(Vtb_1___024root* vlSelf);
void Vtb_1___024root___eval_settle(Vtb_1___024root* vlSelf);
void Vtb_1___024root___eval(Vtb_1___024root* vlSelf);

void Vtb_1::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_1::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_1___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_1___024root___eval_static(&(vlSymsp->TOP));
        Vtb_1___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_1___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_1___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_1::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_1::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_1::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_1___024root___eval_final(Vtb_1___024root* vlSelf);

VL_ATTR_COLD void Vtb_1::final() {
    Vtb_1___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_1::hierName() const { return vlSymsp->name(); }
const char* Vtb_1::modelName() const { return "Vtb_1"; }
unsigned Vtb_1::threads() const { return 1; }
void Vtb_1::prepareClone() const { contextp()->prepareClone(); }
void Vtb_1::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtb_1::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtb_1___024root__trace_decl_types(VerilatedFst* tracep);

void Vtb_1___024root__trace_init_top(Vtb_1___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtb_1___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_1___024root*>(voidSelf);
    Vtb_1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_1___024root__trace_decl_types(tracep);
    Vtb_1___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_1___024root__trace_register(Vtb_1___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vtb_1::trace(VerilatedFstC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb_1::trace()' shall not be called after 'VerilatedFstC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtb_1___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
