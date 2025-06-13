// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_blur.h for the primary calling header

#include "Vtb_blur__pch.h"
#include "Vtb_blur___024root.h"

VL_ATTR_COLD void Vtb_blur___024root___eval_initial__TOP(Vtb_blur___024root* vlSelf);
VlCoroutine Vtb_blur___024root___eval_initial__TOP__Vtiming__0(Vtb_blur___024root* vlSelf);
VlCoroutine Vtb_blur___024root___eval_initial__TOP__Vtiming__1(Vtb_blur___024root* vlSelf);

void Vtb_blur___024root___eval_initial(Vtb_blur___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_blur___024root___eval_initial\n"); );
    Vtb_blur__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_blur___024root___eval_initial__TOP(vlSelf);
    Vtb_blur___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_blur___024root___eval_initial__TOP__Vtiming__1(vlSelf);
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
}

VL_INLINE_OPT VlCoroutine Vtb_blur___024root___eval_initial__TOP__Vtiming__0(Vtb_blur___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_blur___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_blur__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_blur__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "tb_blur.sv", 
                                             38);
        vlSelfRef.tb_blur__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_blur__DOT__clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vtb_blur___024root___eval_initial__TOP__Vtiming__1(Vtb_blur___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_blur___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_blur__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_3;
    // Body
    __Vtemp_1[0U] = 0x2e6d656dU;
    __Vtemp_1[1U] = 0x6d616765U;
    __Vtemp_1[2U] = 0x69U;
    VL_READMEM_N(true, 8, 768, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_1)
                 ,  &(vlSelfRef.tb_blur__DOT__img_mem)
                 , 0, ~0ULL);
    vlSelfRef.tb_blur__DOT__rst_n = 0U;
    vlSelfRef.tb_blur__DOT__pixel_in = 0U;
    vlSelfRef.tb_blur__DOT__pixel_vld = 0U;
    vlSelfRef.tb_blur__DOT__o_idx = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb_blur.sv", 
                                         53);
    vlSelfRef.tb_blur__DOT__rst_n = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb_blur.sv", 
                                         55);
    vlSelfRef.tb_blur__DOT__i = 0U;
    while (VL_GTS_III(32, 0x300U, vlSelfRef.tb_blur__DOT__i)) {
        vlSelfRef.tb_blur__DOT__pixel_in = ((0x2ffU 
                                             >= (0x3ffU 
                                                 & vlSelfRef.tb_blur__DOT__i))
                                             ? vlSelfRef.tb_blur__DOT__img_mem
                                            [(0x3ffU 
                                              & vlSelfRef.tb_blur__DOT__i)]
                                             : 0U);
        vlSelfRef.tb_blur__DOT__pixel_vld = 1U;
        co_await vlSelfRef.__VtrigSched_hd27b514d__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_blur.clk)", 
                                                             "tb_blur.sv", 
                                                             61);
        vlSelfRef.tb_blur__DOT__i = ((IData)(1U) + vlSelfRef.tb_blur__DOT__i);
    }
    vlSelfRef.tb_blur__DOT__pixel_vld = 0U;
    vlSelfRef.tb_blur__DOT__pixel_in = 0U;
    co_await vlSelfRef.__VtrigSched_hd27b514d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_blur.clk)", 
                                                         "tb_blur.sv", 
                                                         69);
    co_await vlSelfRef.__VtrigSched_hd27b514d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_blur.clk)", 
                                                         "tb_blur.sv", 
                                                         69);
    co_await vlSelfRef.__VtrigSched_hd27b514d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_blur.clk)", 
                                                         "tb_blur.sv", 
                                                         69);
    co_await vlSelfRef.__VtrigSched_hd27b514d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_blur.clk)", 
                                                         "tb_blur.sv", 
                                                         69);
    co_await vlSelfRef.__VtrigSched_hd27b514d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_blur.clk)", 
                                                         "tb_blur.sv", 
                                                         69);
    __Vtemp_3[0U] = 0x2e6d656dU;
    __Vtemp_3[1U] = 0x6d616765U;
    __Vtemp_3[2U] = 0x75745f69U;
    __Vtemp_3[3U] = 0x6fU;
    VL_WRITEMEM_N(true, 8, 768, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_3)
                  ,  &(vlSelfRef.tb_blur__DOT__out_mem)
                  , 0, ~0ULL);
    VL_FINISH_MT("tb_blur.sv", 74, "");
}

void Vtb_blur___024root___eval_act(Vtb_blur___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_blur___024root___eval_act\n"); );
    Vtb_blur__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_blur___024root___nba_sequent__TOP__0(Vtb_blur___024root* vlSelf);
void Vtb_blur___024root___nba_sequent__TOP__1(Vtb_blur___024root* vlSelf);
void Vtb_blur___024root___nba_sequent__TOP__2(Vtb_blur___024root* vlSelf);

void Vtb_blur___024root___eval_nba(Vtb_blur___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_blur___024root___eval_nba\n"); );
    Vtb_blur__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_blur___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((0x3cULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_blur___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_blur___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_blur___024root___nba_sequent__TOP__0(Vtb_blur___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_blur___024root___nba_sequent__TOP__0\n"); );
    Vtb_blur__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vdly__tb_blur__DOT__dut__DOT__col_cnt;
    __Vdly__tb_blur__DOT__dut__DOT__col_cnt = 0;
    CData/*7:0*/ __VdlyVal__tb_blur__DOT__out_mem__v0;
    __VdlyVal__tb_blur__DOT__out_mem__v0 = 0;
    SData/*9:0*/ __VdlyDim0__tb_blur__DOT__out_mem__v0;
    __VdlyDim0__tb_blur__DOT__out_mem__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_blur__DOT__out_mem__v0;
    __VdlySet__tb_blur__DOT__out_mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_blur__DOT__dut__DOT__win0__DOT__shift2__v0;
    __VdlyVal__tb_blur__DOT__dut__DOT__win0__DOT__shift2__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_blur__DOT__dut__DOT__win0__DOT__shift2__v0;
    __VdlySet__tb_blur__DOT__dut__DOT__win0__DOT__shift2__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_blur__DOT__dut__DOT__win0__DOT__shift2__v1;
    __VdlyVal__tb_blur__DOT__dut__DOT__win0__DOT__shift2__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_blur__DOT__dut__DOT__win0__DOT__shift2__v2;
    __VdlyVal__tb_blur__DOT__dut__DOT__win0__DOT__shift2__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_blur__DOT__dut__DOT__win0__DOT__shift2__v3;
    __VdlySet__tb_blur__DOT__dut__DOT__win0__DOT__shift2__v3 = 0;
    CData/*7:0*/ __VdlyVal__tb_blur__DOT__dut__DOT__win0__DOT__shift1__v0;
    __VdlyVal__tb_blur__DOT__dut__DOT__win0__DOT__shift1__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_blur__DOT__dut__DOT__win0__DOT__shift1__v0;
    __VdlySet__tb_blur__DOT__dut__DOT__win0__DOT__shift1__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_blur__DOT__dut__DOT__win0__DOT__shift1__v1;
    __VdlyVal__tb_blur__DOT__dut__DOT__win0__DOT__shift1__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_blur__DOT__dut__DOT__win0__DOT__shift1__v2;
    __VdlyVal__tb_blur__DOT__dut__DOT__win0__DOT__shift1__v2 = 0;
    CData/*7:0*/ __VdlyVal__tb_blur__DOT__dut__DOT__win0__DOT__shift0__v0;
    __VdlyVal__tb_blur__DOT__dut__DOT__win0__DOT__shift0__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_blur__DOT__dut__DOT__win0__DOT__shift0__v1;
    __VdlyVal__tb_blur__DOT__dut__DOT__win0__DOT__shift0__v1 = 0;
    CData/*7:0*/ __VdlyVal__tb_blur__DOT__dut__DOT__win0__DOT__shift0__v2;
    __VdlyVal__tb_blur__DOT__dut__DOT__win0__DOT__shift0__v2 = 0;
    CData/*7:0*/ __VdlyVal__tb_blur__DOT__dut__DOT__win0__DOT__linebuf2__v0;
    __VdlyVal__tb_blur__DOT__dut__DOT__win0__DOT__linebuf2__v0 = 0;
    CData/*4:0*/ __VdlyDim0__tb_blur__DOT__dut__DOT__win0__DOT__linebuf2__v0;
    __VdlyDim0__tb_blur__DOT__dut__DOT__win0__DOT__linebuf2__v0 = 0;
    CData/*7:0*/ __VdlyVal__tb_blur__DOT__dut__DOT__win0__DOT__linebuf1__v0;
    __VdlyVal__tb_blur__DOT__dut__DOT__win0__DOT__linebuf1__v0 = 0;
    CData/*4:0*/ __VdlyDim0__tb_blur__DOT__dut__DOT__win0__DOT__linebuf1__v0;
    __VdlyDim0__tb_blur__DOT__dut__DOT__win0__DOT__linebuf1__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_blur__DOT__dut__DOT__win0__DOT__shift1__v3;
    __VdlySet__tb_blur__DOT__dut__DOT__win0__DOT__shift1__v3 = 0;
    // Body
    vlSelfRef.__Vdly__tb_blur__DOT__dut__DOT__row0_pipe 
        = vlSelfRef.tb_blur__DOT__dut__DOT__row0_pipe;
    vlSelfRef.__Vdly__tb_blur__DOT__dut__DOT__vld_pipe 
        = vlSelfRef.tb_blur__DOT__dut__DOT__vld_pipe;
    __Vdly__tb_blur__DOT__dut__DOT__col_cnt = vlSelfRef.tb_blur__DOT__dut__DOT__col_cnt;
    __VdlySet__tb_blur__DOT__dut__DOT__win0__DOT__shift2__v0 = 0U;
    __VdlySet__tb_blur__DOT__dut__DOT__win0__DOT__shift2__v3 = 0U;
    __VdlySet__tb_blur__DOT__out_mem__v0 = 0U;
    __VdlySet__tb_blur__DOT__dut__DOT__win0__DOT__shift1__v0 = 0U;
    __VdlySet__tb_blur__DOT__dut__DOT__win0__DOT__shift1__v3 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.tb_blur__DOT__rst_n)))) {
        vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__unnamedblk1__DOT__i = 3U;
    }
    if (vlSelfRef.tb_blur__DOT__rst_n) {
        vlSelfRef.__Vdly__tb_blur__DOT__dut__DOT__row0_pipe 
            = ((2U & ((IData)(vlSelfRef.tb_blur__DOT__dut__DOT__row0_pipe) 
                      << 1U)) | (0U == (IData)(vlSelfRef.tb_blur__DOT__dut__DOT__row_cnt)));
        vlSelfRef.__Vdly__tb_blur__DOT__dut__DOT__vld_pipe 
            = ((2U & ((IData)(vlSelfRef.tb_blur__DOT__dut__DOT__vld_pipe) 
                      << 1U)) | (IData)(vlSelfRef.tb_blur__DOT__pixel_vld));
        if (vlSelfRef.tb_blur__DOT__pixel_vld) {
            if ((0x1fU == (IData)(vlSelfRef.tb_blur__DOT__dut__DOT__col_cnt))) {
                vlSelfRef.tb_blur__DOT__dut__DOT__row_cnt 
                    = ((0x17U == (IData)(vlSelfRef.tb_blur__DOT__dut__DOT__row_cnt))
                        ? 0U : (0x1fU & ((IData)(1U) 
                                         + (IData)(vlSelfRef.tb_blur__DOT__dut__DOT__row_cnt))));
                __Vdly__tb_blur__DOT__dut__DOT__col_cnt = 0U;
            } else {
                __Vdly__tb_blur__DOT__dut__DOT__col_cnt 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.tb_blur__DOT__dut__DOT__col_cnt)));
            }
            __VdlyVal__tb_blur__DOT__dut__DOT__win0__DOT__shift2__v0 
                = vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift2
                [1U];
            __VdlySet__tb_blur__DOT__dut__DOT__win0__DOT__shift2__v0 = 1U;
            __VdlyVal__tb_blur__DOT__dut__DOT__win0__DOT__shift2__v1 
                = vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift2
                [0U];
            __VdlyVal__tb_blur__DOT__dut__DOT__win0__DOT__shift2__v2 
                = vlSelfRef.tb_blur__DOT__pixel_in;
            __VdlyVal__tb_blur__DOT__dut__DOT__win0__DOT__shift1__v0 
                = vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift1
                [1U];
            __VdlySet__tb_blur__DOT__dut__DOT__win0__DOT__shift1__v0 = 1U;
            __VdlyVal__tb_blur__DOT__dut__DOT__win0__DOT__shift1__v1 
                = vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift1
                [0U];
            __VdlyVal__tb_blur__DOT__dut__DOT__win0__DOT__shift1__v2 
                = vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1
                [vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__col];
            __VdlyVal__tb_blur__DOT__dut__DOT__win0__DOT__shift0__v0 
                = vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift0
                [1U];
            __VdlyVal__tb_blur__DOT__dut__DOT__win0__DOT__shift0__v1 
                = vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift0
                [0U];
            __VdlyVal__tb_blur__DOT__dut__DOT__win0__DOT__shift0__v2 
                = vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2
                [vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__col];
            __VdlyVal__tb_blur__DOT__dut__DOT__win0__DOT__linebuf2__v0 
                = vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1
                [vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__col];
            __VdlyDim0__tb_blur__DOT__dut__DOT__win0__DOT__linebuf2__v0 
                = vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__col;
            __VdlyVal__tb_blur__DOT__dut__DOT__win0__DOT__linebuf1__v0 
                = vlSelfRef.tb_blur__DOT__pixel_in;
            __VdlyDim0__tb_blur__DOT__dut__DOT__win0__DOT__linebuf1__v0 
                = vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__col;
            vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__col 
                = ((0x1fU == (IData)(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__col))
                    ? 0U : (0x1fU & ((IData)(1U) + (IData)(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__col))));
        }
        if (vlSelfRef.tb_blur__DOT__pixel_vld_out) {
            vlSelfRef.tb_blur__DOT____Vlvbound_h988fae57__0 
                = vlSelfRef.tb_blur__DOT__pixel_out;
            if ((0x2ffU >= (0x3ffU & vlSelfRef.tb_blur__DOT__o_idx))) {
                __VdlyVal__tb_blur__DOT__out_mem__v0 
                    = vlSelfRef.tb_blur__DOT____Vlvbound_h988fae57__0;
                __VdlyDim0__tb_blur__DOT__out_mem__v0 
                    = (0x3ffU & vlSelfRef.tb_blur__DOT__o_idx);
                __VdlySet__tb_blur__DOT__out_mem__v0 = 1U;
            }
            vlSelfRef.tb_blur__DOT__o_idx = ((IData)(1U) 
                                             + vlSelfRef.tb_blur__DOT__o_idx);
        }
    } else {
        vlSelfRef.__Vdly__tb_blur__DOT__dut__DOT__row0_pipe = 0U;
        vlSelfRef.__Vdly__tb_blur__DOT__dut__DOT__vld_pipe = 0U;
        vlSelfRef.tb_blur__DOT__dut__DOT__row_cnt = 0U;
        __Vdly__tb_blur__DOT__dut__DOT__col_cnt = 0U;
        __VdlySet__tb_blur__DOT__dut__DOT__win0__DOT__shift2__v3 = 1U;
        vlSelfRef.tb_blur__DOT__o_idx = 0U;
        vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__col = 0U;
        __VdlySet__tb_blur__DOT__dut__DOT__win0__DOT__shift1__v3 = 1U;
    }
    vlSelfRef.tb_blur__DOT__dut__DOT__col_cnt = __Vdly__tb_blur__DOT__dut__DOT__col_cnt;
    if (__VdlySet__tb_blur__DOT__dut__DOT__win0__DOT__shift2__v0) {
        vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift2[2U] 
            = __VdlyVal__tb_blur__DOT__dut__DOT__win0__DOT__shift2__v0;
        vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift2[1U] 
            = __VdlyVal__tb_blur__DOT__dut__DOT__win0__DOT__shift2__v1;
        vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift2[0U] 
            = __VdlyVal__tb_blur__DOT__dut__DOT__win0__DOT__shift2__v2;
    }
    if (__VdlySet__tb_blur__DOT__dut__DOT__win0__DOT__shift2__v3) {
        vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift2[0U] = 0U;
        vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift2[1U] = 0U;
        vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift2[2U] = 0U;
    }
    if (__VdlySet__tb_blur__DOT__out_mem__v0) {
        vlSelfRef.tb_blur__DOT__out_mem[__VdlyDim0__tb_blur__DOT__out_mem__v0] 
            = __VdlyVal__tb_blur__DOT__out_mem__v0;
    }
    if (__VdlySet__tb_blur__DOT__dut__DOT__win0__DOT__shift1__v0) {
        vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift1[2U] 
            = __VdlyVal__tb_blur__DOT__dut__DOT__win0__DOT__shift1__v0;
        vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift1[1U] 
            = __VdlyVal__tb_blur__DOT__dut__DOT__win0__DOT__shift1__v1;
        vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift1[0U] 
            = __VdlyVal__tb_blur__DOT__dut__DOT__win0__DOT__shift1__v2;
        vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift0[2U] 
            = __VdlyVal__tb_blur__DOT__dut__DOT__win0__DOT__shift0__v0;
        vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift0[1U] 
            = __VdlyVal__tb_blur__DOT__dut__DOT__win0__DOT__shift0__v1;
        vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift0[0U] 
            = __VdlyVal__tb_blur__DOT__dut__DOT__win0__DOT__shift0__v2;
        vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[__VdlyDim0__tb_blur__DOT__dut__DOT__win0__DOT__linebuf2__v0] 
            = __VdlyVal__tb_blur__DOT__dut__DOT__win0__DOT__linebuf2__v0;
        vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[__VdlyDim0__tb_blur__DOT__dut__DOT__win0__DOT__linebuf1__v0] 
            = __VdlyVal__tb_blur__DOT__dut__DOT__win0__DOT__linebuf1__v0;
    }
    if (__VdlySet__tb_blur__DOT__dut__DOT__win0__DOT__shift1__v3) {
        vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift1[0U] = 0U;
        vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift0[0U] = 0U;
        vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift1[1U] = 0U;
        vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift0[1U] = 0U;
        vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift1[2U] = 0U;
        vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift0[2U] = 0U;
    }
}

VL_INLINE_OPT void Vtb_blur___024root___nba_sequent__TOP__2(Vtb_blur___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_blur___024root___nba_sequent__TOP__2\n"); );
    Vtb_blur__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_blur__DOT__pixel_vld_out = ((IData)(vlSelfRef.tb_blur__DOT__rst_n) 
                                             && (1U 
                                                 & ((IData)(vlSelfRef.tb_blur__DOT__dut__DOT__vld_pipe) 
                                                    >> 1U)));
    vlSelfRef.tb_blur__DOT__pixel_out = ((IData)(vlSelfRef.tb_blur__DOT__rst_n)
                                          ? (0xffU 
                                             & ((2U 
                                                 & (IData)(vlSelfRef.tb_blur__DOT__dut__DOT__row0_pipe))
                                                 ? 
                                                ((IData)(vlSelfRef.tb_blur__DOT__dut__DOT__mac_sum) 
                                                 >> 2U)
                                                 : 
                                                ((IData)(vlSelfRef.tb_blur__DOT__dut__DOT__mac_sum) 
                                                 >> 4U)))
                                          : 0U);
    vlSelfRef.tb_blur__DOT__dut__DOT__vld_pipe = vlSelfRef.__Vdly__tb_blur__DOT__dut__DOT__vld_pipe;
    vlSelfRef.tb_blur__DOT__dut__DOT__row0_pipe = vlSelfRef.__Vdly__tb_blur__DOT__dut__DOT__row0_pipe;
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

void Vtb_blur___024root___timing_resume(Vtb_blur___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_blur___024root___timing_resume\n"); );
    Vtb_blur__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hd27b514d__0.resume(
                                                   "@(posedge tb_blur.clk)");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_blur___024root___timing_commit(Vtb_blur___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_blur___024root___timing_commit\n"); );
    Vtb_blur__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hd27b514d__0.commit(
                                                   "@(posedge tb_blur.clk)");
    }
}

void Vtb_blur___024root___eval_triggers__act(Vtb_blur___024root* vlSelf);

bool Vtb_blur___024root___eval_phase__act(Vtb_blur___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_blur___024root___eval_phase__act\n"); );
    Vtb_blur__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<7> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_blur___024root___eval_triggers__act(vlSelf);
    Vtb_blur___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_blur___024root___timing_resume(vlSelf);
        Vtb_blur___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_blur___024root___eval_phase__nba(Vtb_blur___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_blur___024root___eval_phase__nba\n"); );
    Vtb_blur__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_blur___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_blur___024root___dump_triggers__nba(Vtb_blur___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_blur___024root___dump_triggers__act(Vtb_blur___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_blur___024root___eval(Vtb_blur___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_blur___024root___eval\n"); );
    Vtb_blur__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_blur___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_blur.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_blur___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_blur.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_blur___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_blur___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_blur___024root___eval_debug_assertions(Vtb_blur___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_blur___024root___eval_debug_assertions\n"); );
    Vtb_blur__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
