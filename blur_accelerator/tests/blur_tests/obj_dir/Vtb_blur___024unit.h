// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_blur.h for the primary calling header

#ifndef VERILATED_VTB_BLUR___024UNIT_H_
#define VERILATED_VTB_BLUR___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_blur__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_blur___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;
    QData/*63:0*/ __VmonitorNum;

    // INTERNAL VARIABLES
    Vtb_blur__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_blur___024unit(Vtb_blur__Syms* symsp, const char* v__name);
    ~Vtb_blur___024unit();
    VL_UNCOPYABLE(Vtb_blur___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
