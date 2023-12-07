// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


//======================

void Vtop::trace(VerilatedFstC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vtop::traceInit(void* userp, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vtop::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vtop::traceInitTop(void* userp, VerilatedFst* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vtop::traceInitSub0(void* userp, VerilatedFst* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+19,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+20,"RES_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+21,"WRT_EN_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+22,"WRT_DEST_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+23,"WRT_DATA_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+24,"READ_ADDR1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+25,"READ_ADDR2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+26,"RD_DATA1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+27,"RD_DATA2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+19,"top clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+20,"top RES_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+21,"top WRT_EN_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+22,"top WRT_DEST_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+23,"top WRT_DATA_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+24,"top READ_ADDR1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+25,"top READ_ADDR2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+26,"top RD_DATA1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+27,"top RD_DATA2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBit(c+19,"top REGFILE CLK_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+20,"top REGFILE RES_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+21,"top REGFILE WRT_EN_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+22,"top REGFILE WRT_DEST_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+23,"top REGFILE WRT_DATA_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+24,"top REGFILE READ_ADDR1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+25,"top REGFILE READ_ADDR2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+26,"top REGFILE RD_DATA1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+27,"top REGFILE RD_DATA2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+1,"top REGFILE reg_sel_wire",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+2+i*1,"top REGFILE reg_data_wire",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);}}
        tracep->declBus(c+22,"top REGFILE DECODER_3To8 A_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBit(c+21,"top REGFILE DECODER_3To8 EN_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBus(c+1,"top REGFILE DECODER_3To8 Sel_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+10,"top REGFILE DECODER_3To8 Sel_wire",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
        tracep->declBus(c+24,"top REGFILE RD_DATA1 RD_ADDR_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+11,"top REGFILE RD_DATA1 REG_DATA0_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+12,"top REGFILE RD_DATA1 REG_DATA1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+13,"top REGFILE RD_DATA1 REG_DATA2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+14,"top REGFILE RD_DATA1 REG_DATA3_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+15,"top REGFILE RD_DATA1 REG_DATA4_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+16,"top REGFILE RD_DATA1 REG_DATA5_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+17,"top REGFILE RD_DATA1 REG_DATA6_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+18,"top REGFILE RD_DATA1 REG_DATA7_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+26,"top REGFILE RD_DATA1 RD_DATA_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+25,"top REGFILE RD_DATA2 RD_ADDR_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
        tracep->declBus(c+11,"top REGFILE RD_DATA2 REG_DATA0_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+12,"top REGFILE RD_DATA2 REG_DATA1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+13,"top REGFILE RD_DATA2 REG_DATA2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+14,"top REGFILE RD_DATA2 REG_DATA3_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+15,"top REGFILE RD_DATA2 REG_DATA4_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+16,"top REGFILE RD_DATA2 REG_DATA5_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+17,"top REGFILE RD_DATA2 REG_DATA6_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+18,"top REGFILE RD_DATA2 REG_DATA7_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
        tracep->declBus(c+27,"top REGFILE RD_DATA2 RD_DATA_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    }
}

void Vtop::traceRegister(VerilatedFst* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vtop::traceFullTop0(void* userp, VerilatedFst* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vtop::traceFullSub0(void* userp, VerilatedFst* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlTOPp->top__DOT__REGFILE__DOT__reg_sel_wire),8);
        tracep->fullCData(oldp+2,(vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire[0]),8);
        tracep->fullCData(oldp+3,(vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire[1]),8);
        tracep->fullCData(oldp+4,(vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire[2]),8);
        tracep->fullCData(oldp+5,(vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire[3]),8);
        tracep->fullCData(oldp+6,(vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire[4]),8);
        tracep->fullCData(oldp+7,(vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire[5]),8);
        tracep->fullCData(oldp+8,(vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire[6]),8);
        tracep->fullCData(oldp+9,(vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire[7]),8);
        tracep->fullCData(oldp+10,(vlTOPp->top__DOT__REGFILE__DOT__DECODER_3To8__DOT__Sel_wire),8);
        tracep->fullCData(oldp+11,(vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire
                                   [0U]),8);
        tracep->fullCData(oldp+12,(vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire
                                   [1U]),8);
        tracep->fullCData(oldp+13,(vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire
                                   [2U]),8);
        tracep->fullCData(oldp+14,(vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire
                                   [3U]),8);
        tracep->fullCData(oldp+15,(vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire
                                   [4U]),8);
        tracep->fullCData(oldp+16,(vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire
                                   [5U]),8);
        tracep->fullCData(oldp+17,(vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire
                                   [6U]),8);
        tracep->fullCData(oldp+18,(vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire
                                   [7U]),8);
        tracep->fullBit(oldp+19,(vlTOPp->clk_i));
        tracep->fullBit(oldp+20,(vlTOPp->RES_ni));
        tracep->fullBit(oldp+21,(vlTOPp->WRT_EN_i));
        tracep->fullCData(oldp+22,(vlTOPp->WRT_DEST_i),3);
        tracep->fullCData(oldp+23,(vlTOPp->WRT_DATA_i),8);
        tracep->fullCData(oldp+24,(vlTOPp->READ_ADDR1_i),3);
        tracep->fullCData(oldp+25,(vlTOPp->READ_ADDR2_i),3);
        tracep->fullCData(oldp+26,(vlTOPp->RD_DATA1_o),8);
        tracep->fullCData(oldp+27,(vlTOPp->RD_DATA2_o),8);
    }
}
