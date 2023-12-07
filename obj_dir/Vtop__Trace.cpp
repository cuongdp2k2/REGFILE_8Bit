// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop::traceChgTop0(void* userp, VerilatedFst* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vtop::traceChgSub0(void* userp, VerilatedFst* tracep) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgCData(oldp+0,(vlTOPp->top__DOT__REGFILE__DOT__reg_sel_wire),8);
            tracep->chgCData(oldp+1,(vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire[0]),8);
            tracep->chgCData(oldp+2,(vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire[1]),8);
            tracep->chgCData(oldp+3,(vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire[2]),8);
            tracep->chgCData(oldp+4,(vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire[3]),8);
            tracep->chgCData(oldp+5,(vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire[4]),8);
            tracep->chgCData(oldp+6,(vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire[5]),8);
            tracep->chgCData(oldp+7,(vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire[6]),8);
            tracep->chgCData(oldp+8,(vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire[7]),8);
            tracep->chgCData(oldp+9,(vlTOPp->top__DOT__REGFILE__DOT__DECODER_3To8__DOT__Sel_wire),8);
            tracep->chgCData(oldp+10,(vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire
                                      [0U]),8);
            tracep->chgCData(oldp+11,(vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire
                                      [1U]),8);
            tracep->chgCData(oldp+12,(vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire
                                      [2U]),8);
            tracep->chgCData(oldp+13,(vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire
                                      [3U]),8);
            tracep->chgCData(oldp+14,(vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire
                                      [4U]),8);
            tracep->chgCData(oldp+15,(vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire
                                      [5U]),8);
            tracep->chgCData(oldp+16,(vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire
                                      [6U]),8);
            tracep->chgCData(oldp+17,(vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire
                                      [7U]),8);
        }
        tracep->chgBit(oldp+18,(vlTOPp->clk_i));
        tracep->chgBit(oldp+19,(vlTOPp->RES_ni));
        tracep->chgBit(oldp+20,(vlTOPp->WRT_EN_i));
        tracep->chgCData(oldp+21,(vlTOPp->WRT_DEST_i),3);
        tracep->chgCData(oldp+22,(vlTOPp->WRT_DATA_i),8);
        tracep->chgCData(oldp+23,(vlTOPp->READ_ADDR1_i),3);
        tracep->chgCData(oldp+24,(vlTOPp->READ_ADDR2_i),3);
        tracep->chgCData(oldp+25,(vlTOPp->RD_DATA1_o),8);
        tracep->chgCData(oldp+26,(vlTOPp->RD_DATA2_o),8);
    }
}

void Vtop::traceCleanup(void* userp, VerilatedFst* /*unused*/) {
    Vtop__Syms* __restrict vlSymsp = static_cast<Vtop__Syms*>(userp);
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
