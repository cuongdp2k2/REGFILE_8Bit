// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

//==========

void Vtop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop::eval\n"); );
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("top.sv", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vtop::_eval_initial_loop(Vtop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("top.sv", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vtop::_combo__TOP__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_combo__TOP__1\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vtableidx1 = vlTOPp->WRT_DEST_i;
    vlTOPp->top__DOT__REGFILE__DOT__DECODER_3To8__DOT__Sel_wire 
        = vlTOPp->__Vtable1_top__DOT__REGFILE__DOT__DECODER_3To8__DOT__Sel_wire
        [vlTOPp->__Vtableidx1];
}

VL_INLINE_OPT void Vtop::_sequent__TOP__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__3\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((0x80U & (IData)(vlTOPp->top__DOT__REGFILE__DOT__reg_sel_wire))) {
        vlTOPp->top__DOT__REGFILE__DOT___REGISTER___BRA__7__KET____DOT__REG_COM__DOT__READ_DATA_reg 
            = ((IData)(vlTOPp->RES_ni) ? (0xffU & (IData)(vlTOPp->WRT_DATA_i))
                : 0U);
    }
    if ((0x40U & (IData)(vlTOPp->top__DOT__REGFILE__DOT__reg_sel_wire))) {
        vlTOPp->top__DOT__REGFILE__DOT___REGISTER___BRA__6__KET____DOT__REG_COM__DOT__READ_DATA_reg 
            = ((IData)(vlTOPp->RES_ni) ? (0xffU & (IData)(vlTOPp->WRT_DATA_i))
                : 0U);
    }
    if ((0x20U & (IData)(vlTOPp->top__DOT__REGFILE__DOT__reg_sel_wire))) {
        vlTOPp->top__DOT__REGFILE__DOT___REGISTER___BRA__5__KET____DOT__REG_COM__DOT__READ_DATA_reg 
            = ((IData)(vlTOPp->RES_ni) ? (0xffU & (IData)(vlTOPp->WRT_DATA_i))
                : 0U);
    }
    if ((0x10U & (IData)(vlTOPp->top__DOT__REGFILE__DOT__reg_sel_wire))) {
        vlTOPp->top__DOT__REGFILE__DOT___REGISTER___BRA__4__KET____DOT__REG_COM__DOT__READ_DATA_reg 
            = ((IData)(vlTOPp->RES_ni) ? (0xffU & (IData)(vlTOPp->WRT_DATA_i))
                : 0U);
    }
    if ((8U & (IData)(vlTOPp->top__DOT__REGFILE__DOT__reg_sel_wire))) {
        vlTOPp->top__DOT__REGFILE__DOT___REGISTER___BRA__3__KET____DOT__REG_COM__DOT__READ_DATA_reg 
            = ((IData)(vlTOPp->RES_ni) ? (0xffU & (IData)(vlTOPp->WRT_DATA_i))
                : 0U);
    }
    if ((4U & (IData)(vlTOPp->top__DOT__REGFILE__DOT__reg_sel_wire))) {
        vlTOPp->top__DOT__REGFILE__DOT___REGISTER___BRA__2__KET____DOT__REG_COM__DOT__READ_DATA_reg 
            = ((IData)(vlTOPp->RES_ni) ? (0xffU & (IData)(vlTOPp->WRT_DATA_i))
                : 0U);
    }
    if ((2U & (IData)(vlTOPp->top__DOT__REGFILE__DOT__reg_sel_wire))) {
        vlTOPp->top__DOT__REGFILE__DOT___REGISTER___BRA__1__KET____DOT__REG_COM__DOT__READ_DATA_reg 
            = ((IData)(vlTOPp->RES_ni) ? (0xffU & (IData)(vlTOPp->WRT_DATA_i))
                : 0U);
    }
    if ((1U & (IData)(vlTOPp->top__DOT__REGFILE__DOT__reg_sel_wire))) {
        vlTOPp->top__DOT__REGFILE__DOT___REGISTER___BRA__0__KET____DOT__REG_COM__DOT__READ_DATA_reg 
            = ((IData)(vlTOPp->RES_ni) ? (0xffU & (IData)(vlTOPp->WRT_DATA_i))
                : 0U);
    }
}

VL_INLINE_OPT void Vtop::_combo__TOP__4(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_combo__TOP__4\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->top__DOT__REGFILE__DOT__reg_sel_wire = 
        ((IData)(vlTOPp->WRT_EN_i) ? (0xffU & (IData)(vlTOPp->top__DOT__REGFILE__DOT__DECODER_3To8__DOT__Sel_wire))
          : 0U);
    if (vlTOPp->RES_ni) {
        vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire[7U] 
            = (0xffU & (IData)(vlTOPp->top__DOT__REGFILE__DOT___REGISTER___BRA__7__KET____DOT__REG_COM__DOT__READ_DATA_reg));
        vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire[6U] 
            = (0xffU & (IData)(vlTOPp->top__DOT__REGFILE__DOT___REGISTER___BRA__6__KET____DOT__REG_COM__DOT__READ_DATA_reg));
        vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire[5U] 
            = (0xffU & (IData)(vlTOPp->top__DOT__REGFILE__DOT___REGISTER___BRA__5__KET____DOT__REG_COM__DOT__READ_DATA_reg));
        vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire[4U] 
            = (0xffU & (IData)(vlTOPp->top__DOT__REGFILE__DOT___REGISTER___BRA__4__KET____DOT__REG_COM__DOT__READ_DATA_reg));
        vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire[3U] 
            = (0xffU & (IData)(vlTOPp->top__DOT__REGFILE__DOT___REGISTER___BRA__3__KET____DOT__REG_COM__DOT__READ_DATA_reg));
        vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire[2U] 
            = (0xffU & (IData)(vlTOPp->top__DOT__REGFILE__DOT___REGISTER___BRA__2__KET____DOT__REG_COM__DOT__READ_DATA_reg));
        vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire[1U] 
            = (0xffU & (IData)(vlTOPp->top__DOT__REGFILE__DOT___REGISTER___BRA__1__KET____DOT__REG_COM__DOT__READ_DATA_reg));
        vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire[0U] 
            = (0xffU & (IData)(vlTOPp->top__DOT__REGFILE__DOT___REGISTER___BRA__0__KET____DOT__REG_COM__DOT__READ_DATA_reg));
    } else {
        vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire[7U] = 0U;
        vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire[6U] = 0U;
        vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire[5U] = 0U;
        vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire[4U] = 0U;
        vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire[3U] = 0U;
        vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire[2U] = 0U;
        vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire[1U] = 0U;
        vlTOPp->top__DOT__REGFILE__DOT__reg_data_wire[0U] = 0U;
    }
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

void Vtop::_eval(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i)))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    vlTOPp->_combo__TOP__4(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk_i = vlTOPp->clk_i;
}

VL_INLINE_OPT QData Vtop::_change_request(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_change_request\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vtop::_change_request_1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_change_request_1\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((RES_ni & 0xfeU))) {
        Verilated::overWidthError("RES_ni");}
    if (VL_UNLIKELY((WRT_EN_i & 0xfeU))) {
        Verilated::overWidthError("WRT_EN_i");}
    if (VL_UNLIKELY((WRT_DEST_i & 0xf8U))) {
        Verilated::overWidthError("WRT_DEST_i");}
    if (VL_UNLIKELY((READ_ADDR1_i & 0xf8U))) {
        Verilated::overWidthError("READ_ADDR1_i");}
    if (VL_UNLIKELY((READ_ADDR2_i & 0xf8U))) {
        Verilated::overWidthError("READ_ADDR2_i");}
}
#endif  // VL_DEBUG
