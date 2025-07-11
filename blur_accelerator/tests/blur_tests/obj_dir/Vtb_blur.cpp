// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_blur__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtb_blur::Vtb_blur(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_blur__Syms(contextp(), _vcname__, this)}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vtb_blur::Vtb_blur(const char* _vcname__)
    : Vtb_blur(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_blur::~Vtb_blur() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_blur___024root___eval_debug_assertions(Vtb_blur___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_blur___024root___eval_static(Vtb_blur___024root* vlSelf);
void Vtb_blur___024root___eval_initial(Vtb_blur___024root* vlSelf);
void Vtb_blur___024root___eval_settle(Vtb_blur___024root* vlSelf);
void Vtb_blur___024root___eval(Vtb_blur___024root* vlSelf);

void Vtb_blur::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_blur::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_blur___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_blur___024root___eval_static(&(vlSymsp->TOP));
        Vtb_blur___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_blur___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_blur___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_blur::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_blur::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_blur::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_blur___024root___eval_final(Vtb_blur___024root* vlSelf);

VL_ATTR_COLD void Vtb_blur::final() {
    Vtb_blur___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_blur::hierName() const { return vlSymsp->name(); }
const char* Vtb_blur::modelName() const { return "Vtb_blur"; }
unsigned Vtb_blur::threads() const { return 1; }
void Vtb_blur::prepareClone() const { contextp()->prepareClone(); }
void Vtb_blur::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtb_blur::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtb_blur___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtb_blur___024root__trace_init_top(Vtb_blur___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtb_blur___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_blur___024root*>(voidSelf);
    Vtb_blur__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_blur___024root__trace_decl_types(tracep);
    Vtb_blur___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_blur___024root__trace_register(Vtb_blur___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_blur::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb_blur::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtb_blur___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
