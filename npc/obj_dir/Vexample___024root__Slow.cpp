// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vexample.h for the primary calling header

#include "Vexample___024root.h"
#include "Vexample__Syms.h"

//==========


void Vexample___024root___ctor_var_reset(Vexample___024root* vlSelf);

Vexample___024root::Vexample___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vexample___024root___ctor_var_reset(this);
}

void Vexample___024root___configure_coverage(Vexample___024root* vlSelf, bool first);

void Vexample___024root::__Vconfigure(Vexample__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
    Vexample___024root___configure_coverage(this, first);
}

Vexample___024root::~Vexample___024root() {
}

// Coverage
void Vexample___024root::__vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
    const char* hierp, const char* pagep, const char* commentp, const char* linescovp) {
    uint32_t* count32p = countp;
    static uint32_t fake_zero_count = 0;
    if (!enable) count32p = &fake_zero_count;
    *count32p = 0;
    VL_COVER_INSERT(vlSymsp->_vm_contextp__->coveragep(), count32p,  "filename",filenamep,  "lineno",lineno,  "column",column,
        "hier",std::string(name())+hierp,  "page",pagep,  "comment",commentp,  (linescovp[0] ? "linescov" : ""), linescovp);
}

void Vexample___024root___eval_initial(Vexample___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vexample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexample___024root___eval_initial\n"); );
}

void Vexample___024root___combo__TOP__1(Vexample___024root* vlSelf);

void Vexample___024root___eval_settle(Vexample___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vexample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexample___024root___eval_settle\n"); );
    // Body
    Vexample___024root___combo__TOP__1(vlSelf);
}

void Vexample___024root___final(Vexample___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vexample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexample___024root___final\n"); );
}

void Vexample___024root___ctor_var_reset(Vexample___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vexample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexample___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_I(1);
    vlSelf->b = VL_RAND_RESET_I(1);
    vlSelf->f = VL_RAND_RESET_I(1);
    vlSelf->example__DOT____Vtogcov__a = VL_RAND_RESET_I(1);
    vlSelf->example__DOT____Vtogcov__b = VL_RAND_RESET_I(1);
    vlSelf->example__DOT____Vtogcov__f = VL_RAND_RESET_I(1);
}

void Vexample___024root___configure_coverage(Vexample___024root* vlSelf, bool first) {
    if (false && vlSelf) {}  // Prevent unused
    Vexample__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vexample___024root___configure_coverage\n"); );
    // Body
    if (false && first) {}  // Prevent unused
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[0]), first, "vsrc/example.v", 2, 8, ".example", "v_toggle/example", "a", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[1]), first, "vsrc/example.v", 3, 8, ".example", "v_toggle/example", "b", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "vsrc/example.v", 4, 9, ".example", "v_toggle/example", "f", "");
}
