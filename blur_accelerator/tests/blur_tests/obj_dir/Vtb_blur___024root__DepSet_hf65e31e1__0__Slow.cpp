// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_blur.h for the primary calling header

#include "Vtb_blur__pch.h"
#include "Vtb_blur__Syms.h"
#include "Vtb_blur___024root.h"

VL_ATTR_COLD void Vtb_blur___024root___eval_initial__TOP(Vtb_blur___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_blur___024root___eval_initial__TOP\n"); );
    Vtb_blur__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_WRITEF_NX("Time(ns) \t vld_in -> in  \t| vld_out -> out\n",0);
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_blur___024root___dump_triggers__stl(Vtb_blur___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_blur___024root___eval_triggers__stl(Vtb_blur___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_blur___024root___eval_triggers__stl\n"); );
    Vtb_blur__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_blur___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
