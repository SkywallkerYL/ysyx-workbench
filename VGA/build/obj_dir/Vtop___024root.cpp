// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

//==========

VL_INLINE_OPT void Vtop___024root___combo__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__2\n"); );
    // Body
    vlSelf->VGA_CLK = vlSelf->clk;
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__4\n"); );
    // Variables
    CData/*0:0*/ top__DOT__my_vga_ctrl__DOT__h_valid;
    CData/*0:0*/ top__DOT__my_vga_ctrl__DOT__v_valid;
    SData/*9:0*/ top__DOT__h_addr;
    SData/*8:0*/ top__DOT__v_addr;
    SData/*13:0*/ __Vdly__top__DOT__rom_addr;
    SData/*9:0*/ __Vdly__top__DOT__my_vga_ctrl__DOT__x_cnt;
    SData/*9:0*/ __Vdly__top__DOT__my_vga_ctrl__DOT__y_cnt;
    SData/*9:0*/ __Vdly__top__DOT__nexth_addr;
    SData/*8:0*/ __Vdly__top__DOT__nextv_addr;
    IData/*23:0*/ top__DOT__vga_data;
    // Body
    __Vdly__top__DOT__rom_addr = vlSelf->top__DOT__rom_addr;
    __Vdly__top__DOT__nextv_addr = vlSelf->top__DOT__nextv_addr;
    __Vdly__top__DOT__nexth_addr = vlSelf->top__DOT__nexth_addr;
    __Vdly__top__DOT__my_vga_ctrl__DOT__y_cnt = vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt;
    __Vdly__top__DOT__my_vga_ctrl__DOT__x_cnt = vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt;
    if (vlSelf->rst) {
        __Vdly__top__DOT__rom_addr = 0U;
    } else if (((IData)(vlSelf->top__DOT__rd_en) & (IData)(vlSelf->VGA_BLANK_N))) {
        __Vdly__top__DOT__rom_addr = ((0x270fU == (IData)(vlSelf->top__DOT__rom_addr))
                                       ? 0U : (0x3fffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->top__DOT__rom_addr))));
    }
    if (vlSelf->rst) {
        __Vdly__top__DOT__nextv_addr = 0xbeU;
    } else if (vlSelf->top__DOT__picmove_u__DOT__valid) {
        if (vlSelf->top__DOT__picmove_u__DOT__y_flag) {
            if (vlSelf->top__DOT__picmove_u__DOT__y_flag) {
                __Vdly__top__DOT__nextv_addr = (0x1ffU 
                                                & ((IData)(vlSelf->top__DOT__nextv_addr) 
                                                   - (IData)(1U)));
            }
        } else {
            __Vdly__top__DOT__nextv_addr = (0x1ffU 
                                            & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__nextv_addr)));
        }
    }
    if (vlSelf->rst) {
        __Vdly__top__DOT__nexth_addr = 0x10eU;
    } else if (vlSelf->top__DOT__picmove_u__DOT__valid) {
        if (vlSelf->top__DOT__picmove_u__DOT__x_flag) {
            if (vlSelf->top__DOT__picmove_u__DOT__x_flag) {
                __Vdly__top__DOT__nexth_addr = (0x3ffU 
                                                & ((IData)(vlSelf->top__DOT__nexth_addr) 
                                                   - (IData)(1U)));
            }
        } else {
            __Vdly__top__DOT__nexth_addr = (0x3ffU 
                                            & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__nexth_addr)));
        }
    }
    if (vlSelf->rst) {
        __Vdly__top__DOT__my_vga_ctrl__DOT__x_cnt = 1U;
        __Vdly__top__DOT__my_vga_ctrl__DOT__y_cnt = 1U;
    } else if ((0x320U == (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt))) {
        __Vdly__top__DOT__my_vga_ctrl__DOT__y_cnt = 
            ((0x20dU == (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt))
              ? 1U : (0x3ffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt))));
        __Vdly__top__DOT__my_vga_ctrl__DOT__x_cnt = 1U;
    } else {
        __Vdly__top__DOT__my_vga_ctrl__DOT__x_cnt = 
            (0x3ffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    }
    vlSelf->top__DOT__rom_addr = __Vdly__top__DOT__rom_addr;
    vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt = __Vdly__top__DOT__my_vga_ctrl__DOT__x_cnt;
    vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt = __Vdly__top__DOT__my_vga_ctrl__DOT__y_cnt;
    if (vlSelf->rst) {
        vlSelf->top__DOT__picmove_u__DOT__y_flag = 0U;
    } else if (vlSelf->top__DOT__picmove_u__DOT__valid) {
        if (((0U == (IData)(vlSelf->top__DOT__nextv_addr)) 
             | (1U == (IData)(vlSelf->top__DOT__nextv_addr)))) {
            vlSelf->top__DOT__picmove_u__DOT__y_flag = 0U;
        } else if ((0x17bU == (IData)(vlSelf->top__DOT__nextv_addr))) {
            vlSelf->top__DOT__picmove_u__DOT__y_flag = 1U;
        }
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__picmove_u__DOT__x_flag = 0U;
    } else if (vlSelf->top__DOT__picmove_u__DOT__valid) {
        if (((0U == (IData)(vlSelf->top__DOT__nexth_addr)) 
             | (1U == (IData)(vlSelf->top__DOT__nexth_addr)))) {
            vlSelf->top__DOT__picmove_u__DOT__x_flag = 0U;
        } else if ((0x21bU == (IData)(vlSelf->top__DOT__nexth_addr))) {
            vlSelf->top__DOT__picmove_u__DOT__x_flag = 1U;
        }
    }
    vlSelf->VGA_HSYNC = (0x60U < (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt));
    top__DOT__my_vga_ctrl__DOT__h_valid = ((0x90U < (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)) 
                                           & (0x310U 
                                              >= (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    vlSelf->VGA_VSYNC = (2U < (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt));
    top__DOT__my_vga_ctrl__DOT__v_valid = ((0x23U < (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)) 
                                           & (0x203U 
                                              >= (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
    vlSelf->top__DOT__nextv_addr = __Vdly__top__DOT__nextv_addr;
    vlSelf->top__DOT__nexth_addr = __Vdly__top__DOT__nexth_addr;
    if (top__DOT__my_vga_ctrl__DOT__h_valid) {
        top__DOT__h_addr = (0x3ffU & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt) 
                                      - (IData)(0x91U)));
        vlSelf->VGA_BLANK_N = ((IData)(top__DOT__my_vga_ctrl__DOT__v_valid) 
                               & 1U);
    } else {
        top__DOT__h_addr = 0U;
        vlSelf->VGA_BLANK_N = 0U;
    }
    top__DOT__v_addr = ((IData)(top__DOT__my_vga_ctrl__DOT__v_valid)
                         ? (0x1ffU & ((IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt) 
                                      - (IData)(0x24U)))
                         : 0U);
    vlSelf->top__DOT__picmove_u__DOT__valid = ((0x27fU 
                                                == (IData)(top__DOT__h_addr)) 
                                               & (0x1dfU 
                                                  == (IData)(top__DOT__v_addr)));
    vlSelf->top__DOT__rd_en = ((((IData)(top__DOT__h_addr) 
                                 >= (IData)(vlSelf->top__DOT__nexth_addr)) 
                                & ((IData)(top__DOT__h_addr) 
                                   < ((IData)(0x64U) 
                                      + (IData)(vlSelf->top__DOT__nexth_addr)))) 
                               & (((IData)(top__DOT__v_addr) 
                                   >= (IData)(vlSelf->top__DOT__nextv_addr)) 
                                  & ((IData)(top__DOT__v_addr) 
                                     < ((IData)(0x64U) 
                                        + (IData)(vlSelf->top__DOT__nextv_addr)))));
    top__DOT__vga_data = (((IData)(vlSelf->top__DOT__rd_en) 
                           & (IData)(vlSelf->VGA_BLANK_N))
                           ? ((IData)(vlSelf->top__DOT__rd_en)
                               ? ((0x270fU >= (IData)(vlSelf->top__DOT__rom_addr))
                                   ? vlSelf->top__DOT__my_vmem__DOT__vga_mem
                                  [vlSelf->top__DOT__rom_addr]
                                   : 0U) : 0U) : 0xffeeddU);
    vlSelf->VGA_R = (0xffU & (top__DOT__vga_data >> 0x10U));
    vlSelf->VGA_G = (0xffU & (top__DOT__vga_data >> 8U));
    vlSelf->VGA_B = (0xffU & top__DOT__vga_data);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    Vtop___024root___combo__TOP__2(vlSelf);
    if (((IData)(vlSelf->VGA_CLK) & (~ (IData)(vlSelf->__Vclklast__TOP__VGA_CLK)))) {
        Vtop___024root___sequent__TOP__4(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__VGA_CLK = vlSelf->VGA_CLK;
}

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
