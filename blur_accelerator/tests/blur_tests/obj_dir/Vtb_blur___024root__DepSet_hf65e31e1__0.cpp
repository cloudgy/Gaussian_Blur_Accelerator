// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_blur.h for the primary calling header

#include "Vtb_blur__pch.h"
#include "Vtb_blur__Syms.h"
#include "Vtb_blur___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_blur___024root___dump_triggers__act(Vtb_blur___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_blur___024root___eval_triggers__act(Vtb_blur___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_blur___024root___eval_triggers__act\n"); );
    Vtb_blur__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tb_blur__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_blur__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((~ (IData)(vlSelfRef.tb_blur__DOT__rst_n)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_blur__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSelfRef.tb_blur__DOT__pixel_in) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_blur__DOT__pixel_in__0)));
    vlSelfRef.__VactTriggered.set(3U, ((IData)(vlSelfRef.tb_blur__DOT__pixel_out) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_blur__DOT__pixel_out__0)));
    vlSelfRef.__VactTriggered.set(4U, ((IData)(vlSelfRef.tb_blur__DOT__pixel_vld) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_blur__DOT__pixel_vld__0)));
    vlSelfRef.__VactTriggered.set(5U, ((IData)(vlSelfRef.tb_blur__DOT__pixel_vld_out) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_blur__DOT__pixel_vld_out__0)));
    vlSelfRef.__VactTriggered.set(6U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_blur__DOT__clk__0 
        = vlSelfRef.tb_blur__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_blur__DOT__rst_n__0 
        = vlSelfRef.tb_blur__DOT__rst_n;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_blur__DOT__pixel_in__0 
        = vlSelfRef.tb_blur__DOT__pixel_in;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_blur__DOT__pixel_out__0 
        = vlSelfRef.tb_blur__DOT__pixel_out;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_blur__DOT__pixel_vld__0 
        = vlSelfRef.tb_blur__DOT__pixel_vld;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_blur__DOT__pixel_vld_out__0 
        = vlSelfRef.tb_blur__DOT__pixel_vld_out;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(2U, 1U);
        vlSelfRef.__VactTriggered.set(3U, 1U);
        vlSelfRef.__VactTriggered.set(4U, 1U);
        vlSelfRef.__VactTriggered.set(5U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_blur___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_blur___024root___nba_sequent__TOP__1(Vtb_blur___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_blur___024root___nba_sequent__TOP__1\n"); );
    Vtb_blur__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                      & (1U == vlSymsp->TOP____024unit.__VmonitorNum))))) {
        VL_WRITEF_NX("%0t \t %b -> %x  | %b -> %x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,1,
                     (IData)(vlSelfRef.tb_blur__DOT__pixel_vld),
                     8,vlSelfRef.tb_blur__DOT__pixel_in,
                     1,(IData)(vlSelfRef.tb_blur__DOT__pixel_vld_out),
                     8,vlSelfRef.tb_blur__DOT__pixel_out);
    }
}
