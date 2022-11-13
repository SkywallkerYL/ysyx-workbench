// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

//==========


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(Vtop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtop___024root::~Vtop___024root() {
}

void Vtop___024root___initial__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__1\n"); );
    // Variables
    VlWide<6>/*191:0*/ __Vtemp1;
    // Body
    __Vtemp1[0U] = 0x2e747874U;
    __Vtemp1[1U] = 0x5f313030U;
    __Vtemp1[2U] = 0x5f313030U;
    __Vtemp1[3U] = 0x5f696d67U;
    __Vtemp1[4U] = 0x2f707265U;
    __Vtemp1[5U] = 0x737263U;
    VL_READMEM_N(true, 24, 10000, 0, VL_CVT_PACK_STR_NW(6, __Vtemp1)
                 ,  &(vlSelf->top__DOT__my_vmem__DOT__vga_mem)
                 , 0, ~0ULL);
}

void Vtop___024root___settle__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__3\n"); );
    // Variables
    CData/*0:0*/ top__DOT__my_vga_ctrl__DOT__h_valid;
    CData/*0:0*/ top__DOT__my_vga_ctrl__DOT__v_valid;
    SData/*9:0*/ top__DOT__h_addr;
    SData/*8:0*/ top__DOT__v_addr;
    IData/*23:0*/ top__DOT__vga_data;
    // Body
    vlSelf->VGA_CLK = vlSelf->clk;
    vlSelf->VGA_HSYNC = (0x60U < (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt));
    vlSelf->VGA_VSYNC = (2U < (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt));
    top__DOT__my_vga_ctrl__DOT__h_valid = ((0x90U < (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)) 
                                           & (0x310U 
                                              >= (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt)));
    top__DOT__my_vga_ctrl__DOT__v_valid = ((0x23U < (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)) 
                                           & (0x203U 
                                              >= (IData)(vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt)));
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

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vclklast__TOP__VGA_CLK = vlSelf->VGA_CLK;
}

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__3(vlSelf);
}

void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->VGA_CLK = 0;
    vlSelf->VGA_HSYNC = 0;
    vlSelf->VGA_VSYNC = 0;
    vlSelf->VGA_BLANK_N = 0;
    vlSelf->VGA_R = 0;
    vlSelf->VGA_G = 0;
    vlSelf->VGA_B = 0;
    vlSelf->realaddr = 0;
    vlSelf->top__DOT__rd_en = 0;
    vlSelf->top__DOT__nexth_addr = 0;
    vlSelf->top__DOT__nextv_addr = 0;
    vlSelf->top__DOT__rom_addr = 0;
    vlSelf->top__DOT__my_vga_ctrl__DOT__x_cnt = 0;
    vlSelf->top__DOT__my_vga_ctrl__DOT__y_cnt = 0;
    vlSelf->top__DOT__picmove_u__DOT__x_flag = 0;
    vlSelf->top__DOT__picmove_u__DOT__y_flag = 0;
    vlSelf->top__DOT__picmove_u__DOT__valid = 0;
    for (int __Vi0=0; __Vi0<10000; ++__Vi0) {
        vlSelf->top__DOT__my_vmem__DOT__vga_mem[__Vi0] = 0;
    }
}
