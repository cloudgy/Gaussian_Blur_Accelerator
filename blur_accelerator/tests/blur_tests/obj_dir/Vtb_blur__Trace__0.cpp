// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_blur__Syms.h"


void Vtb_blur___024root__trace_chg_0_sub_0(Vtb_blur___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_blur___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_blur___024root__trace_chg_0\n"); );
    // Init
    Vtb_blur___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_blur___024root*>(voidSelf);
    Vtb_blur__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_blur___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_blur___024root__trace_chg_0_sub_0(Vtb_blur___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_blur___024root__trace_chg_0_sub_0\n"); );
    Vtb_blur__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift0
                               [2U]),8);
        bufp->chgCData(oldp+1,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift0
                               [1U]),8);
        bufp->chgCData(oldp+2,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift0
                               [0U]),8);
        bufp->chgCData(oldp+3,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift1
                               [2U]),8);
        bufp->chgCData(oldp+4,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift1
                               [1U]),8);
        bufp->chgCData(oldp+5,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift1
                               [0U]),8);
        bufp->chgCData(oldp+6,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift2
                               [2U]),8);
        bufp->chgCData(oldp+7,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift2
                               [1U]),8);
        bufp->chgCData(oldp+8,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift2
                               [0U]),8);
        bufp->chgCData(oldp+9,(vlSelfRef.tb_blur__DOT__dut__DOT__col_cnt),5);
        bufp->chgCData(oldp+10,(vlSelfRef.tb_blur__DOT__dut__DOT__row_cnt),5);
        bufp->chgCData(oldp+11,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[0]),8);
        bufp->chgCData(oldp+12,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[1]),8);
        bufp->chgCData(oldp+13,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[2]),8);
        bufp->chgCData(oldp+14,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[3]),8);
        bufp->chgCData(oldp+15,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[4]),8);
        bufp->chgCData(oldp+16,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[5]),8);
        bufp->chgCData(oldp+17,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[6]),8);
        bufp->chgCData(oldp+18,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[7]),8);
        bufp->chgCData(oldp+19,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[8]),8);
        bufp->chgCData(oldp+20,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[9]),8);
        bufp->chgCData(oldp+21,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[10]),8);
        bufp->chgCData(oldp+22,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[11]),8);
        bufp->chgCData(oldp+23,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[12]),8);
        bufp->chgCData(oldp+24,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[13]),8);
        bufp->chgCData(oldp+25,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[14]),8);
        bufp->chgCData(oldp+26,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[15]),8);
        bufp->chgCData(oldp+27,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[16]),8);
        bufp->chgCData(oldp+28,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[17]),8);
        bufp->chgCData(oldp+29,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[18]),8);
        bufp->chgCData(oldp+30,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[19]),8);
        bufp->chgCData(oldp+31,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[20]),8);
        bufp->chgCData(oldp+32,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[21]),8);
        bufp->chgCData(oldp+33,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[22]),8);
        bufp->chgCData(oldp+34,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[23]),8);
        bufp->chgCData(oldp+35,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[24]),8);
        bufp->chgCData(oldp+36,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[25]),8);
        bufp->chgCData(oldp+37,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[26]),8);
        bufp->chgCData(oldp+38,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[27]),8);
        bufp->chgCData(oldp+39,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[28]),8);
        bufp->chgCData(oldp+40,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[29]),8);
        bufp->chgCData(oldp+41,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[30]),8);
        bufp->chgCData(oldp+42,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[31]),8);
        bufp->chgCData(oldp+43,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[0]),8);
        bufp->chgCData(oldp+44,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[1]),8);
        bufp->chgCData(oldp+45,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[2]),8);
        bufp->chgCData(oldp+46,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[3]),8);
        bufp->chgCData(oldp+47,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[4]),8);
        bufp->chgCData(oldp+48,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[5]),8);
        bufp->chgCData(oldp+49,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[6]),8);
        bufp->chgCData(oldp+50,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[7]),8);
        bufp->chgCData(oldp+51,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[8]),8);
        bufp->chgCData(oldp+52,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[9]),8);
        bufp->chgCData(oldp+53,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[10]),8);
        bufp->chgCData(oldp+54,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[11]),8);
        bufp->chgCData(oldp+55,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[12]),8);
        bufp->chgCData(oldp+56,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[13]),8);
        bufp->chgCData(oldp+57,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[14]),8);
        bufp->chgCData(oldp+58,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[15]),8);
        bufp->chgCData(oldp+59,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[16]),8);
        bufp->chgCData(oldp+60,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[17]),8);
        bufp->chgCData(oldp+61,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[18]),8);
        bufp->chgCData(oldp+62,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[19]),8);
        bufp->chgCData(oldp+63,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[20]),8);
        bufp->chgCData(oldp+64,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[21]),8);
        bufp->chgCData(oldp+65,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[22]),8);
        bufp->chgCData(oldp+66,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[23]),8);
        bufp->chgCData(oldp+67,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[24]),8);
        bufp->chgCData(oldp+68,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[25]),8);
        bufp->chgCData(oldp+69,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[26]),8);
        bufp->chgCData(oldp+70,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[27]),8);
        bufp->chgCData(oldp+71,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[28]),8);
        bufp->chgCData(oldp+72,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[29]),8);
        bufp->chgCData(oldp+73,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[30]),8);
        bufp->chgCData(oldp+74,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[31]),8);
        bufp->chgCData(oldp+75,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__col),5);
        bufp->chgCData(oldp+76,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift2[0]),8);
        bufp->chgCData(oldp+77,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift2[1]),8);
        bufp->chgCData(oldp+78,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift2[2]),8);
        bufp->chgCData(oldp+79,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift1[0]),8);
        bufp->chgCData(oldp+80,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift1[1]),8);
        bufp->chgCData(oldp+81,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift1[2]),8);
        bufp->chgCData(oldp+82,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift0[0]),8);
        bufp->chgCData(oldp+83,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift0[1]),8);
        bufp->chgCData(oldp+84,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift0[2]),8);
        bufp->chgIData(oldp+85,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+86,(vlSelfRef.tb_blur__DOT__pixel_out),8);
        bufp->chgBit(oldp+87,(vlSelfRef.tb_blur__DOT__pixel_vld_out));
        bufp->chgSData(oldp+88,(vlSelfRef.tb_blur__DOT__dut__DOT__mac_sum),16);
        bufp->chgCData(oldp+89,(vlSelfRef.tb_blur__DOT__dut__DOT__vld_pipe),2);
        bufp->chgCData(oldp+90,(vlSelfRef.tb_blur__DOT__dut__DOT__row0_pipe),2);
    }
    bufp->chgBit(oldp+91,(vlSelfRef.tb_blur__DOT__clk));
    bufp->chgBit(oldp+92,(vlSelfRef.tb_blur__DOT__rst_n));
    bufp->chgCData(oldp+93,(vlSelfRef.tb_blur__DOT__pixel_in),8);
    bufp->chgBit(oldp+94,(vlSelfRef.tb_blur__DOT__pixel_vld));
    bufp->chgIData(oldp+95,(vlSelfRef.tb_blur__DOT__i),32);
    bufp->chgIData(oldp+96,(vlSelfRef.tb_blur__DOT__o_idx),32);
}

void Vtb_blur___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_blur___024root__trace_cleanup\n"); );
    // Init
    Vtb_blur___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_blur___024root*>(voidSelf);
    Vtb_blur__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
