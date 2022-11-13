// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop__Syms;

//----------

VL_MODULE(Vtop___024root) {
  public:

    // PORTS
    VL_OUT8(VGA_CLK,0,0);
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(VGA_HSYNC,0,0);
    VL_OUT8(VGA_VSYNC,0,0);
    VL_OUT8(VGA_BLANK_N,0,0);
    VL_OUT8(VGA_R,7,0);
    VL_OUT8(VGA_G,7,0);
    VL_OUT8(VGA_B,7,0);
    VL_OUT(realaddr,18,0);

    // LOCAL SIGNALS
    CData/*0:0*/ top__DOT__rd_en;
    CData/*0:0*/ top__DOT__picmove_u__DOT__x_flag;
    CData/*0:0*/ top__DOT__picmove_u__DOT__y_flag;
    CData/*0:0*/ top__DOT__picmove_u__DOT__valid;
    SData/*9:0*/ top__DOT__nexth_addr;
    SData/*8:0*/ top__DOT__nextv_addr;
    SData/*13:0*/ top__DOT__rom_addr;
    SData/*9:0*/ top__DOT__my_vga_ctrl__DOT__x_cnt;
    SData/*9:0*/ top__DOT__my_vga_ctrl__DOT__y_cnt;
    VlUnpacked<IData/*23:0*/, 10000> top__DOT__my_vmem__DOT__vga_mem;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__VGA_CLK;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop___024root);  ///< Copying not allowed
  public:
    Vtop___024root(const char* name);
    ~Vtop___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
