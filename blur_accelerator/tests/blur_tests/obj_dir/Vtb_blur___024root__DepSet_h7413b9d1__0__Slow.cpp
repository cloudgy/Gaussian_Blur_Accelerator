// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_blur.h for the primary calling header

#include "Vtb_blur__pch.h"
#include "Vtb_blur___024root.h"

VL_ATTR_COLD void Vtb_blur___024root___eval_static(Vtb_blur___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_blur___024root___eval_static\n"); );
    Vtb_blur__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_blur___024root___eval_final(Vtb_blur___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_blur___024root___eval_final\n"); );
    Vtb_blur__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_blur___024root___dump_triggers__stl(Vtb_blur___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_blur___024root___eval_phase__stl(Vtb_blur___024root* vlSelf);

VL_ATTR_COLD void Vtb_blur___024root___eval_settle(Vtb_blur___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_blur___024root___eval_settle\n"); );
    Vtb_blur__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_blur___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb_blur.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_blur___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_blur___024root___dump_triggers__stl(Vtb_blur___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_blur___024root___dump_triggers__stl\n"); );
    Vtb_blur__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_blur___024root___stl_sequent__TOP__0(Vtb_blur___024root* vlSelf);
VL_ATTR_COLD void Vtb_blur___024root____Vm_traceActivitySetAll(Vtb_blur___024root* vlSelf);

VL_ATTR_COLD void Vtb_blur___024root___eval_stl(Vtb_blur___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_blur___024root___eval_stl\n"); );
    Vtb_blur__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_blur___024root___stl_sequent__TOP__0(vlSelf);
        Vtb_blur___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_blur___024root___stl_sequent__TOP__0(Vtb_blur___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_blur___024root___stl_sequent__TOP__0\n"); );
    Vtb_blur__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_blur__DOT__dut__DOT__mac_sum = (0xffffU 
                                                 & (vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift0
                                                    [2U] 
                                                    + 
                                                    (VL_SHIFTL_III(16,16,32, 
                                                                   vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift0
                                                                   [1U], 1U) 
                                                     + 
                                                     (vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift0
                                                      [0U] 
                                                      + 
                                                      (VL_SHIFTL_III(16,16,32, 
                                                                     vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift1
                                                                     [2U], 1U) 
                                                       + 
                                                       (VL_SHIFTL_III(16,16,32, 
                                                                      vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift1
                                                                      [1U], 2U) 
                                                        + 
                                                        (VL_SHIFTL_III(16,16,32, 
                                                                       vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift1
                                                                       [0U], 1U) 
                                                         + 
                                                         (vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift2
                                                          [2U] 
                                                          + 
                                                          (VL_SHIFTL_III(16,16,32, 
                                                                         vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift2
                                                                         [1U], 1U) 
                                                           + 
                                                           vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift2
                                                           [0U])))))))));
}

VL_ATTR_COLD void Vtb_blur___024root___eval_triggers__stl(Vtb_blur___024root* vlSelf);

VL_ATTR_COLD bool Vtb_blur___024root___eval_phase__stl(Vtb_blur___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_blur___024root___eval_phase__stl\n"); );
    Vtb_blur__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_blur___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_blur___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_blur___024root___dump_triggers__act(Vtb_blur___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_blur___024root___dump_triggers__act\n"); );
    Vtb_blur__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_blur.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb_blur.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @( tb_blur.pixel_in)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @( tb_blur.pixel_out)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @( tb_blur.pixel_vld)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @( tb_blur.pixel_vld_out)\n");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_blur___024root___dump_triggers__nba(Vtb_blur___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_blur___024root___dump_triggers__nba\n"); );
    Vtb_blur__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_blur.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb_blur.rst_n)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @( tb_blur.pixel_in)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @( tb_blur.pixel_out)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @( tb_blur.pixel_vld)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @( tb_blur.pixel_vld_out)\n");
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_blur___024root____Vm_traceActivitySetAll(Vtb_blur___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_blur___024root____Vm_traceActivitySetAll\n"); );
    Vtb_blur__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vtb_blur___024root___ctor_var_reset(Vtb_blur___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_blur___024root___ctor_var_reset\n"); );
    Vtb_blur__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_blur__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_blur__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_blur__DOT__pixel_in = VL_RAND_RESET_I(8);
    vlSelf->tb_blur__DOT__pixel_vld = VL_RAND_RESET_I(1);
    vlSelf->tb_blur__DOT__pixel_out = VL_RAND_RESET_I(8);
    vlSelf->tb_blur__DOT__pixel_vld_out = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 768; ++__Vi0) {
        vlSelf->tb_blur__DOT__img_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 768; ++__Vi0) {
        vlSelf->tb_blur__DOT__out_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_blur__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->tb_blur__DOT__o_idx = VL_RAND_RESET_I(32);
    vlSelf->tb_blur__DOT____Vlvbound_h988fae57__0 = VL_RAND_RESET_I(8);
    vlSelf->tb_blur__DOT__dut__DOT__mac_sum = VL_RAND_RESET_I(16);
    vlSelf->tb_blur__DOT__dut__DOT__vld_pipe = VL_RAND_RESET_I(2);
    vlSelf->tb_blur__DOT__dut__DOT__row0_pipe = VL_RAND_RESET_I(2);
    vlSelf->tb_blur__DOT__dut__DOT__col_cnt = VL_RAND_RESET_I(5);
    vlSelf->tb_blur__DOT__dut__DOT__row_cnt = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_blur__DOT__dut__DOT__win0__DOT__col = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_blur__DOT__dut__DOT__win0__DOT__shift2[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_blur__DOT__dut__DOT__win0__DOT__shift1[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_blur__DOT__dut__DOT__win0__DOT__shift0[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_blur__DOT__dut__DOT__win0__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->__Vdly__tb_blur__DOT__dut__DOT__vld_pipe = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__tb_blur__DOT__dut__DOT__row0_pipe = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__tb_blur__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_blur__DOT__rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_blur__DOT__pixel_in__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_blur__DOT__pixel_out__0 = VL_RAND_RESET_I(8);
    vlSelf->__Vtrigprevexpr___TOP__tb_blur__DOT__pixel_vld__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_blur__DOT__pixel_vld_out__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
