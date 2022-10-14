// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vexample.h for the primary calling header

#include "Vexample___024root.h"
#include "Vexample__Syms.h"

//==========

VL_INLINE_OPT void Vexample___024root___combo__TOP__1(Vexample___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vexample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexample___024root___combo__TOP__1\n"); );
    // Body
    if (((IData)(vlSelf->a) ^ (IData)(vlSelf->example__DOT____Vtogcov__a))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->example__DOT____Vtogcov__a = vlSelf->a;
    }
    if (((IData)(vlSelf->b) ^ (IData)(vlSelf->example__DOT____Vtogcov__b))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->example__DOT____Vtogcov__b = vlSelf->b;
    }
    vlSelf->f = ((IData)(vlSelf->a) ^ (IData)(vlSelf->b));
    if (((IData)(vlSelf->f) ^ (IData)(vlSelf->example__DOT____Vtogcov__f))) {
        ++(vlSymsp->__Vcoverage[2]);
        vlSelf->example__DOT____Vtogcov__f = vlSelf->f;
    }
}

void Vexample___024root___eval(Vexample___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vexample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexample___024root___eval\n"); );
    // Body
    Vexample___024root___combo__TOP__1(vlSelf);
}

QData Vexample___024root___change_request_1(Vexample___024root* vlSelf);

VL_INLINE_OPT QData Vexample___024root___change_request(Vexample___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vexample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexample___024root___change_request\n"); );
    // Body
    return (Vexample___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vexample___024root___change_request_1(Vexample___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vexample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexample___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vexample___024root___eval_debug_assertions(Vexample___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vexample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexample___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->a & 0xfeU))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((vlSelf->b & 0xfeU))) {
        Verilated::overWidthError("b");}
}
#endif  // VL_DEBUG
