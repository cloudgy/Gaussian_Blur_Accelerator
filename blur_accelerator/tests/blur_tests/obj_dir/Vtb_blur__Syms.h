// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_BLUR__SYMS_H_
#define VERILATED_VTB_BLUR__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_blur.h"

// INCLUDE MODULE CLASSES
#include "Vtb_blur___024root.h"
#include "Vtb_blur___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_blur__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_blur* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_blur___024root             TOP;
    Vtb_blur___024unit             TOP____024unit;

    // CONSTRUCTORS
    Vtb_blur__Syms(VerilatedContext* contextp, const char* namep, Vtb_blur* modelp);
    ~Vtb_blur__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
