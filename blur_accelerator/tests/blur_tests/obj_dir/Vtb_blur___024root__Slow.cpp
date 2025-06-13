// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_blur.h for the primary calling header

#include "Vtb_blur__pch.h"
#include "Vtb_blur__Syms.h"
#include "Vtb_blur___024root.h"

void Vtb_blur___024root___ctor_var_reset(Vtb_blur___024root* vlSelf);

Vtb_blur___024root::Vtb_blur___024root(Vtb_blur__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_blur___024root___ctor_var_reset(this);
}

void Vtb_blur___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_blur___024root::~Vtb_blur___024root() {
}
