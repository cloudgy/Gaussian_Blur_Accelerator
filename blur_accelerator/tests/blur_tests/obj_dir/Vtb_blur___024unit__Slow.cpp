// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_blur.h for the primary calling header

#include "Vtb_blur__pch.h"
#include "Vtb_blur__Syms.h"
#include "Vtb_blur___024unit.h"

void Vtb_blur___024unit___ctor_var_reset(Vtb_blur___024unit* vlSelf);

Vtb_blur___024unit::Vtb_blur___024unit(Vtb_blur__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_blur___024unit___ctor_var_reset(this);
}

void Vtb_blur___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_blur___024unit::~Vtb_blur___024unit() {
}
