// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

//==========
CData/*7:0*/ Vtop::__Vtable1_top__DOT__REGFILE__DOT__DECODER_3To8__DOT__Sel_wire[8];

VL_CTOR_IMP(Vtop) {
    Vtop__Syms* __restrict vlSymsp = __VlSymsp = new Vtop__Syms(this, name());
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vtop::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vtop::~Vtop() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vtop::_settle__TOP__2(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_settle__TOP__2\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vtableidx1 = vlTOPp->WRT_DEST_i;
    vlTOPp->top__DOT__REGFILE__DOT__DECODER_3To8__DOT__Sel_wire 
        = vlTOPp->__Vtable1_top__DOT__REGFILE__DOT__DECODER_3To8__DOT__Sel_wire
        [vlTOPp->__Vtableidx1];
    if (vlTOPp->RES_ni) {
        vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire[0U] 
            = (0xffU & (IData)(vlTOPp->top__DOT__REGFILE__DOT___REGISTER___BRA__0__KET____DOT__REG_COM__DOT__READ_DATA_reg));
        vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire[1U] 
            = (0xffU & (IData)(vlTOPp->top__DOT__REGFILE__DOT___REGISTER___BRA__1__KET____DOT__REG_COM__DOT__READ_DATA_reg));
        vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire[2U] 
            = (0xffU & (IData)(vlTOPp->top__DOT__REGFILE__DOT___REGISTER___BRA__2__KET____DOT__REG_COM__DOT__READ_DATA_reg));
        vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire[3U] 
            = (0xffU & (IData)(vlTOPp->top__DOT__REGFILE__DOT___REGISTER___BRA__3__KET____DOT__REG_COM__DOT__READ_DATA_reg));
        vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire[4U] 
            = (0xffU & (IData)(vlTOPp->top__DOT__REGFILE__DOT___REGISTER___BRA__4__KET____DOT__REG_COM__DOT__READ_DATA_reg));
        vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire[5U] 
            = (0xffU & (IData)(vlTOPp->top__DOT__REGFILE__DOT___REGISTER___BRA__5__KET____DOT__REG_COM__DOT__READ_DATA_reg));
        vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire[6U] 
            = (0xffU & (IData)(vlTOPp->top__DOT__REGFILE__DOT___REGISTER___BRA__6__KET____DOT__REG_COM__DOT__READ_DATA_reg));
        vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire[7U] 
            = (0xffU & (IData)(vlTOPp->top__DOT__REGFILE__DOT___REGISTER___BRA__7__KET____DOT__REG_COM__DOT__READ_DATA_reg));
    } else {
        vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire[0U] = 0U;
        vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire[1U] = 0U;
        vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire[2U] = 0U;
        vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire[3U] = 0U;
        vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire[4U] = 0U;
        vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire[5U] = 0U;
        vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire[6U] = 0U;
        vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire[7U] = 0U;
    }
    vlTOPp->top__DOT__REGFILE__DOT__reg_sel_wire = 
        ((IData)(vlTOPp->WRT_EN_i) ? (0xffU & (IData)(vlTOPp->top__DOT__REGFILE__DOT__DECODER_3To8__DOT__Sel_wire))
          : 0U);
    vlTOPp->RD_DATA1_o = ((4U & (IData)(vlTOPp->READ_ADDR1_i))
                           ? ((2U & (IData)(vlTOPp->READ_ADDR1_i))
                               ? ((1U & (IData)(vlTOPp->READ_ADDR1_i))
                                   ? vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire
                                  [7U] : vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire
                                  [6U]) : ((1U & (IData)(vlTOPp->READ_ADDR1_i))
                                            ? vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire
                                           [5U] : vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire
                                           [4U])) : 
                          ((2U & (IData)(vlTOPp->READ_ADDR1_i))
                            ? ((1U & (IData)(vlTOPp->READ_ADDR1_i))
                                ? vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire
                               [3U] : vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire
                               [2U]) : ((1U & (IData)(vlTOPp->READ_ADDR1_i))
                                         ? vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire
                                        [1U] : vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire
                                        [0U])));
    vlTOPp->RD_DATA2_o = ((4U & (IData)(vlTOPp->READ_ADDR2_i))
                           ? ((2U & (IData)(vlTOPp->READ_ADDR2_i))
                               ? ((1U & (IData)(vlTOPp->READ_ADDR2_i))
                                   ? vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire
                                  [7U] : vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire
                                  [6U]) : ((1U & (IData)(vlTOPp->READ_ADDR2_i))
                                            ? vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire
                                           [5U] : vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire
                                           [4U])) : 
                          ((2U & (IData)(vlTOPp->READ_ADDR2_i))
                            ? ((1U & (IData)(vlTOPp->READ_ADDR2_i))
                                ? vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire
                               [3U] : vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire
                               [2U]) : ((1U & (IData)(vlTOPp->READ_ADDR2_i))
                                         ? vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire
                                        [1U] : vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire
                                        [0U])));
}

void Vtop::_eval_initial(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_initial\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk_i = vlTOPp->clk_i;
}

void Vtop::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::final\n"); );
    // Variables
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vtop::_eval_settle(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_settle\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void Vtop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_ctor_var_reset\n"); );
    // Body
    clk_i = VL_RAND_RESET_I(1);
    RES_ni = VL_RAND_RESET_I(1);
    WRT_EN_i = VL_RAND_RESET_I(1);
    WRT_DEST_i = VL_RAND_RESET_I(3);
    WRT_DATA_i = VL_RAND_RESET_I(8);
    READ_ADDR1_i = VL_RAND_RESET_I(3);
    READ_ADDR2_i = VL_RAND_RESET_I(3);
    RD_DATA1_o = VL_RAND_RESET_I(8);
    RD_DATA2_o = VL_RAND_RESET_I(8);
    top__DOT__REGFILE__DOT__reg_sel_wire = VL_RAND_RESET_I(8);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            top__DOT__REGFILE__DOT__reg_data_wire[__Vi0] = VL_RAND_RESET_I(8);
    }}
    top__DOT__REGFILE__DOT__DECODER_3To8__DOT__Sel_wire = VL_RAND_RESET_I(8);
    top__DOT__REGFILE__DOT___REGISTER___BRA__0__KET____DOT__REG_COM__DOT__READ_DATA_reg = VL_RAND_RESET_I(8);
    top__DOT__REGFILE__DOT___REGISTER___BRA__1__KET____DOT__REG_COM__DOT__READ_DATA_reg = VL_RAND_RESET_I(8);
    top__DOT__REGFILE__DOT___REGISTER___BRA__2__KET____DOT__REG_COM__DOT__READ_DATA_reg = VL_RAND_RESET_I(8);
    top__DOT__REGFILE__DOT___REGISTER___BRA__3__KET____DOT__REG_COM__DOT__READ_DATA_reg = VL_RAND_RESET_I(8);
    top__DOT__REGFILE__DOT___REGISTER___BRA__4__KET____DOT__REG_COM__DOT__READ_DATA_reg = VL_RAND_RESET_I(8);
    top__DOT__REGFILE__DOT___REGISTER___BRA__5__KET____DOT__REG_COM__DOT__READ_DATA_reg = VL_RAND_RESET_I(8);
    top__DOT__REGFILE__DOT___REGISTER___BRA__6__KET____DOT__REG_COM__DOT__READ_DATA_reg = VL_RAND_RESET_I(8);
    top__DOT__REGFILE__DOT___REGISTER___BRA__7__KET____DOT__REG_COM__DOT__READ_DATA_reg = VL_RAND_RESET_I(8);
    __Vtableidx1 = 0;
    __Vtable1_top__DOT__REGFILE__DOT__DECODER_3To8__DOT__Sel_wire[0] = 1U;
    __Vtable1_top__DOT__REGFILE__DOT__DECODER_3To8__DOT__Sel_wire[1] = 2U;
    __Vtable1_top__DOT__REGFILE__DOT__DECODER_3To8__DOT__Sel_wire[2] = 4U;
    __Vtable1_top__DOT__REGFILE__DOT__DECODER_3To8__DOT__Sel_wire[3] = 8U;
    __Vtable1_top__DOT__REGFILE__DOT__DECODER_3To8__DOT__Sel_wire[4] = 0x10U;
    __Vtable1_top__DOT__REGFILE__DOT__DECODER_3To8__DOT__Sel_wire[5] = 0x20U;
    __Vtable1_top__DOT__REGFILE__DOT__DECODER_3To8__DOT__Sel_wire[6] = 0x40U;
    __Vtable1_top__DOT__REGFILE__DOT__DECODER_3To8__DOT__Sel_wire[7] = 0x80U;
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
