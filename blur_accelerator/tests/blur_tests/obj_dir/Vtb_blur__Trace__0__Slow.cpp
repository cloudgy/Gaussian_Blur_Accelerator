// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_blur__Syms.h"


VL_ATTR_COLD void Vtb_blur___024root__trace_init_sub__TOP__0(Vtb_blur___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_blur___024root__trace_init_sub__TOP__0\n"); );
    Vtb_blur__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_blur", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+98,0,"CLK_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"IMG_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+100,0,"IMG_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"NUM_PIXELS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+92,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+94,0,"pixel_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+95,0,"pixel_vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+87,0,"pixel_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+88,0,"pixel_vld_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+96,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+97,0,"o_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+92,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+94,0,"pixel_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+95,0,"pixel_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+87,0,"pixel_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+88,0,"pixel_vld_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+102,0,"IMG_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+103,0,"IMG_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1,0,"w00",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2,0,"w01",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+3,0,"w02",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+4,0,"w10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+5,0,"w11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+6,0,"w12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+7,0,"w20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+8,0,"w21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+9,0,"w22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+89,0,"mac_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+90,0,"vld_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+91,0,"row0_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+10,0,"col_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+11,0,"row_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("win0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+104,0,"DATA_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+102,0,"IMG_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+92,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"pixel_vld",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+94,0,"pixel_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1,0,"w00",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+2,0,"w01",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+3,0,"w02",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+4,0,"w10",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+5,0,"w11",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+6,0,"w12",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+7,0,"w20",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+8,0,"w21",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+9,0,"w22",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("linebuf1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+12+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("linebuf2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+44+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+76,0,"col",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("shift2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+77+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("shift1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+80+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("shift0", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+83+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+86,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_blur___024root__trace_init_top(Vtb_blur___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_blur___024root__trace_init_top\n"); );
    Vtb_blur__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_blur___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_blur___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_blur___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_blur___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_blur___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_blur___024root__trace_register(Vtb_blur___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_blur___024root__trace_register\n"); );
    Vtb_blur__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_blur___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_blur___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_blur___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_blur___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_blur___024root__trace_const_0_sub_0(Vtb_blur___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_blur___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_blur___024root__trace_const_0\n"); );
    // Init
    Vtb_blur___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_blur___024root*>(voidSelf);
    Vtb_blur__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_blur___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_blur___024root__trace_const_0_sub_0(Vtb_blur___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_blur___024root__trace_const_0_sub_0\n"); );
    Vtb_blur__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+98,(0xaU),32);
    bufp->fullIData(oldp+99,(0x20U),32);
    bufp->fullIData(oldp+100,(0x18U),32);
    bufp->fullIData(oldp+101,(0x300U),32);
    bufp->fullIData(oldp+102,(0x20U),32);
    bufp->fullIData(oldp+103,(0x18U),32);
    bufp->fullIData(oldp+104,(8U),32);
}

VL_ATTR_COLD void Vtb_blur___024root__trace_full_0_sub_0(Vtb_blur___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_blur___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_blur___024root__trace_full_0\n"); );
    // Init
    Vtb_blur___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_blur___024root*>(voidSelf);
    Vtb_blur__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_blur___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_blur___024root__trace_full_0_sub_0(Vtb_blur___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_blur___024root__trace_full_0_sub_0\n"); );
    Vtb_blur__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift0
                            [2U]),8);
    bufp->fullCData(oldp+2,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift0
                            [1U]),8);
    bufp->fullCData(oldp+3,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift0
                            [0U]),8);
    bufp->fullCData(oldp+4,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift1
                            [2U]),8);
    bufp->fullCData(oldp+5,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift1
                            [1U]),8);
    bufp->fullCData(oldp+6,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift1
                            [0U]),8);
    bufp->fullCData(oldp+7,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift2
                            [2U]),8);
    bufp->fullCData(oldp+8,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift2
                            [1U]),8);
    bufp->fullCData(oldp+9,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift2
                            [0U]),8);
    bufp->fullCData(oldp+10,(vlSelfRef.tb_blur__DOT__dut__DOT__col_cnt),5);
    bufp->fullCData(oldp+11,(vlSelfRef.tb_blur__DOT__dut__DOT__row_cnt),5);
    bufp->fullCData(oldp+12,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[0]),8);
    bufp->fullCData(oldp+13,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[1]),8);
    bufp->fullCData(oldp+14,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[2]),8);
    bufp->fullCData(oldp+15,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[3]),8);
    bufp->fullCData(oldp+16,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[4]),8);
    bufp->fullCData(oldp+17,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[5]),8);
    bufp->fullCData(oldp+18,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[6]),8);
    bufp->fullCData(oldp+19,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[7]),8);
    bufp->fullCData(oldp+20,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[8]),8);
    bufp->fullCData(oldp+21,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[9]),8);
    bufp->fullCData(oldp+22,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[10]),8);
    bufp->fullCData(oldp+23,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[11]),8);
    bufp->fullCData(oldp+24,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[12]),8);
    bufp->fullCData(oldp+25,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[13]),8);
    bufp->fullCData(oldp+26,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[14]),8);
    bufp->fullCData(oldp+27,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[15]),8);
    bufp->fullCData(oldp+28,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[16]),8);
    bufp->fullCData(oldp+29,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[17]),8);
    bufp->fullCData(oldp+30,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[18]),8);
    bufp->fullCData(oldp+31,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[19]),8);
    bufp->fullCData(oldp+32,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[20]),8);
    bufp->fullCData(oldp+33,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[21]),8);
    bufp->fullCData(oldp+34,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[22]),8);
    bufp->fullCData(oldp+35,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[23]),8);
    bufp->fullCData(oldp+36,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[24]),8);
    bufp->fullCData(oldp+37,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[25]),8);
    bufp->fullCData(oldp+38,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[26]),8);
    bufp->fullCData(oldp+39,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[27]),8);
    bufp->fullCData(oldp+40,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[28]),8);
    bufp->fullCData(oldp+41,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[29]),8);
    bufp->fullCData(oldp+42,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[30]),8);
    bufp->fullCData(oldp+43,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf1[31]),8);
    bufp->fullCData(oldp+44,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[0]),8);
    bufp->fullCData(oldp+45,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[1]),8);
    bufp->fullCData(oldp+46,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[2]),8);
    bufp->fullCData(oldp+47,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[3]),8);
    bufp->fullCData(oldp+48,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[4]),8);
    bufp->fullCData(oldp+49,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[5]),8);
    bufp->fullCData(oldp+50,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[6]),8);
    bufp->fullCData(oldp+51,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[7]),8);
    bufp->fullCData(oldp+52,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[8]),8);
    bufp->fullCData(oldp+53,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[9]),8);
    bufp->fullCData(oldp+54,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[10]),8);
    bufp->fullCData(oldp+55,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[11]),8);
    bufp->fullCData(oldp+56,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[12]),8);
    bufp->fullCData(oldp+57,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[13]),8);
    bufp->fullCData(oldp+58,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[14]),8);
    bufp->fullCData(oldp+59,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[15]),8);
    bufp->fullCData(oldp+60,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[16]),8);
    bufp->fullCData(oldp+61,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[17]),8);
    bufp->fullCData(oldp+62,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[18]),8);
    bufp->fullCData(oldp+63,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[19]),8);
    bufp->fullCData(oldp+64,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[20]),8);
    bufp->fullCData(oldp+65,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[21]),8);
    bufp->fullCData(oldp+66,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[22]),8);
    bufp->fullCData(oldp+67,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[23]),8);
    bufp->fullCData(oldp+68,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[24]),8);
    bufp->fullCData(oldp+69,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[25]),8);
    bufp->fullCData(oldp+70,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[26]),8);
    bufp->fullCData(oldp+71,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[27]),8);
    bufp->fullCData(oldp+72,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[28]),8);
    bufp->fullCData(oldp+73,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[29]),8);
    bufp->fullCData(oldp+74,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[30]),8);
    bufp->fullCData(oldp+75,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__linebuf2[31]),8);
    bufp->fullCData(oldp+76,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__col),5);
    bufp->fullCData(oldp+77,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift2[0]),8);
    bufp->fullCData(oldp+78,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift2[1]),8);
    bufp->fullCData(oldp+79,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift2[2]),8);
    bufp->fullCData(oldp+80,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift1[0]),8);
    bufp->fullCData(oldp+81,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift1[1]),8);
    bufp->fullCData(oldp+82,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift1[2]),8);
    bufp->fullCData(oldp+83,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift0[0]),8);
    bufp->fullCData(oldp+84,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift0[1]),8);
    bufp->fullCData(oldp+85,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__shift0[2]),8);
    bufp->fullIData(oldp+86,(vlSelfRef.tb_blur__DOT__dut__DOT__win0__DOT__unnamedblk1__DOT__i),32);
    bufp->fullCData(oldp+87,(vlSelfRef.tb_blur__DOT__pixel_out),8);
    bufp->fullBit(oldp+88,(vlSelfRef.tb_blur__DOT__pixel_vld_out));
    bufp->fullSData(oldp+89,(vlSelfRef.tb_blur__DOT__dut__DOT__mac_sum),16);
    bufp->fullCData(oldp+90,(vlSelfRef.tb_blur__DOT__dut__DOT__vld_pipe),2);
    bufp->fullCData(oldp+91,(vlSelfRef.tb_blur__DOT__dut__DOT__row0_pipe),2);
    bufp->fullBit(oldp+92,(vlSelfRef.tb_blur__DOT__clk));
    bufp->fullBit(oldp+93,(vlSelfRef.tb_blur__DOT__rst_n));
    bufp->fullCData(oldp+94,(vlSelfRef.tb_blur__DOT__pixel_in),8);
    bufp->fullBit(oldp+95,(vlSelfRef.tb_blur__DOT__pixel_vld));
    bufp->fullIData(oldp+96,(vlSelfRef.tb_blur__DOT__i),32);
    bufp->fullIData(oldp+97,(vlSelfRef.tb_blur__DOT__o_idx),32);
}
