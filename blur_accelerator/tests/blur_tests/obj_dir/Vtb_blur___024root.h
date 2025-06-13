// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_blur.h for the primary calling header

#ifndef VERILATED_VTB_BLUR___024ROOT_H_
#define VERILATED_VTB_BLUR___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_blur___024unit;


class Vtb_blur__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_blur___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtb_blur___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_blur__DOT__clk;
    CData/*0:0*/ tb_blur__DOT__rst_n;
    CData/*0:0*/ tb_blur__DOT__pixel_vld;
    CData/*0:0*/ tb_blur__DOT__pixel_vld_out;
    CData/*7:0*/ tb_blur__DOT__pixel_in;
    CData/*7:0*/ tb_blur__DOT__pixel_out;
    CData/*7:0*/ tb_blur__DOT____Vlvbound_h988fae57__0;
    CData/*1:0*/ tb_blur__DOT__dut__DOT__vld_pipe;
    CData/*1:0*/ tb_blur__DOT__dut__DOT__row0_pipe;
    CData/*4:0*/ tb_blur__DOT__dut__DOT__col_cnt;
    CData/*4:0*/ tb_blur__DOT__dut__DOT__row_cnt;
    CData/*4:0*/ tb_blur__DOT__dut__DOT__win0__DOT__col;
    CData/*1:0*/ __Vdly__tb_blur__DOT__dut__DOT__vld_pipe;
    CData/*1:0*/ __Vdly__tb_blur__DOT__dut__DOT__row0_pipe;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_blur__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_blur__DOT__rst_n__0;
    CData/*7:0*/ __Vtrigprevexpr___TOP__tb_blur__DOT__pixel_in__0;
    CData/*7:0*/ __Vtrigprevexpr___TOP__tb_blur__DOT__pixel_out__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_blur__DOT__pixel_vld__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_blur__DOT__pixel_vld_out__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ tb_blur__DOT__dut__DOT__mac_sum;
    IData/*31:0*/ tb_blur__DOT__i;
    IData/*31:0*/ tb_blur__DOT__o_idx;
    IData/*31:0*/ tb_blur__DOT__dut__DOT__win0__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 768> tb_blur__DOT__img_mem;
    VlUnpacked<CData/*7:0*/, 768> tb_blur__DOT__out_mem;
    VlUnpacked<CData/*7:0*/, 32> tb_blur__DOT__dut__DOT__win0__DOT__linebuf1;
    VlUnpacked<CData/*7:0*/, 32> tb_blur__DOT__dut__DOT__win0__DOT__linebuf2;
    VlUnpacked<CData/*7:0*/, 3> tb_blur__DOT__dut__DOT__win0__DOT__shift2;
    VlUnpacked<CData/*7:0*/, 3> tb_blur__DOT__dut__DOT__win0__DOT__shift1;
    VlUnpacked<CData/*7:0*/, 3> tb_blur__DOT__dut__DOT__win0__DOT__shift0;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hd27b514d__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<7> __VactTriggered;
    VlTriggerVec<7> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_blur__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_blur___024root(Vtb_blur__Syms* symsp, const char* v__name);
    ~Vtb_blur___024root();
    VL_UNCOPYABLE(Vtb_blur___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
