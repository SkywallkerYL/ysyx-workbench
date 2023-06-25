// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull___024root.h"

extern const VlWide<8>/*255:0*/ VysyxSoCFull__ConstPool__CONST_h57168600_0;
extern const VlWide<16>/*511:0*/ VysyxSoCFull__ConstPool__CONST_hffd88623_0;

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__9(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__9\n"); );
    // Init
    VlWide<16>/*511:0*/ __Vtemp_hcaf0abb2__0;
    VlWide<16>/*511:0*/ __Vtemp_hcaf0abb2__1;
    VlWide<16>/*511:0*/ __Vtemp_hda1fa4b6__0;
    VlWide<16>/*511:0*/ __Vtemp_hda1fa4b6__1;
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:95694: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 95694, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:95718: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 95718, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                          >> 3U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                             >> 3U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                                >> 3U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                                   >> 3U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                                   >> 3U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                                      >> 3U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                                   >> 3U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                                     >> 3U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                          >> 3U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                             >> 3U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                                >> 3U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                                   >> 3U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                                   >> 3U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                                      >> 3U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                                   >> 3U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                                     >> 3U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:95742: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 95742, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:95766: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 95766, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:95790: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 95790, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:95814: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 95814, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_denied)) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_denied)) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:95838: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 95838, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                          >> 3U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                             >> 3U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                                >> 3U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                                   >> 3U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                                   >> 3U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                                      >> 3U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                                   >> 3U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                                     >> 3U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                          >> 3U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                             >> 3U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                                >> 3U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                                   >> 3U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                                   >> 3U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                                      >> 3U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                                   >> 3U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                                     >> 3U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:95862: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 95862, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:95886: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 95886, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:95910: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 95910, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                          >> 3U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                             >> 3U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                                >> 3U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                                   >> 3U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                                   >> 3U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                                      >> 3U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                                   >> 3U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                                     >> 3U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                          >> 3U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                             >> 3U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                                >> 3U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                                   >> 3U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                                   >> 3U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                                      >> 3U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                                   >> 3U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                                     >> 3U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:95934: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 95934, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:95958: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 95958, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_denied)) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_denied)) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:95982: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 95982, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                          >> 3U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                             >> 3U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                                >> 3U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                                   >> 3U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                                   >> 3U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                                      >> 3U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                                   >> 3U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                                     >> 3U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                          >> 3U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                             >> 3U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                                >> 3U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                                   >> 3U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                                   >> 3U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                                      >> 3U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                                   >> 3U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                                     >> 3U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:96006: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 96006, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:96030: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 96030, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:96054: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 96054, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_opcode))) 
                     & (~ (((0U == (0x80000000U & (0x80000000U 
                                                   ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address))) 
                            | ((0U == (0xc0000000U 
                                       & (0x40000000U 
                                          ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address))) 
                               | (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries unmanaged address (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_opcode))) 
                     & (~ (((0U == (0x80000000U & (0x80000000U 
                                                   ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address))) 
                            | ((0U == (0xc0000000U 
                                       & (0x40000000U 
                                          ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address))) 
                               | (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:96078: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 96078, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck smaller than a beat (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:96126: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 96126, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck address not aligned to size (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:96150: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 96150, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid report param (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:96174: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 96174, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_opcode))) 
                     & (~ (((0U == (0x80000000U & (0x80000000U 
                                                   ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address))) 
                            | ((0U == (0xc0000000U 
                                       & (0x40000000U 
                                          ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address))) 
                               | (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries unmanaged address (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_opcode))) 
                     & (~ (((0U == (0x80000000U & (0x80000000U 
                                                   ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address))) 
                            | ((0U == (0xc0000000U 
                                       & (0x40000000U 
                                          ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address))) 
                               | (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:96198: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 96198, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData smaller than a beat (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:96246: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 96246, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData address not aligned to size (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:96270: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 96270, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries invalid report param (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:96294: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 96294, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_opcode))) 
                     & (~ (((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_size)) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_size)) 
                               & (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release type unsupported by manager (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_opcode))) 
                     & (~ (((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_size)) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_size)) 
                               & (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:96318: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 96318, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_size)) 
                            & ((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_size)) 
                               & ((0U == (0xfffff000U 
                                          & (0x1000U 
                                             ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address))) 
                                  | ((0U == (0xc0000000U 
                                             & (0x40000000U 
                                                ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address))) 
                                     | (0U == (0x80000000U 
                                               & (0x80000000U 
                                                  ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_size)) 
                            & ((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_size)) 
                               & ((0U == (0xfffff000U 
                                          & (0x1000U 
                                             ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address))) 
                                  | ((0U == (0xc0000000U 
                                             & (0x40000000U 
                                                ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address))) 
                                     | (0U == (0x80000000U 
                                               & (0x80000000U 
                                                  ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:96342: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 96342, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release smaller than a beat (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:96390: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 96390, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release address not aligned to size (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:96414: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 96414, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release carries invalid report param (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:96438: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 96438, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_opcode))) 
                     & (~ (((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_size)) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_size)) 
                               & (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries ReleaseData type unsupported by manager (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_opcode))) 
                     & (~ (((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_size)) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_size)) 
                               & (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:96462: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 96462, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_size)) 
                            & ((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_size)) 
                               & ((0U == (0xfffff000U 
                                          & (0x1000U 
                                             ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address))) 
                                  | ((0U == (0xc0000000U 
                                             & (0x40000000U 
                                                ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address))) 
                                     | (0U == (0x80000000U 
                                               & (0x80000000U 
                                                  ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_size)) 
                            & ((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_size)) 
                               & ((0U == (0xfffff000U 
                                          & (0x1000U 
                                             ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address))) 
                                  | ((0U == (0xc0000000U 
                                             & (0x40000000U 
                                                ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address))) 
                                     | (0U == (0x80000000U 
                                               & (0x80000000U 
                                                  ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:96486: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 96486, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData smaller than a beat (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:96534: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 96534, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData address not aligned to size (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:96558: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 96558, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData carries invalid report param (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:96582: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 96582, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_opcode))) 
                     & (~ (((0U == (0x80000000U & (0x80000000U 
                                                   ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address))) 
                            | ((0U == (0xc0000000U 
                                       & (0x40000000U 
                                          ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address))) 
                               | (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries unmanaged address (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_opcode))) 
                     & (~ (((0U == (0x80000000U & (0x80000000U 
                                                   ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address))) 
                            | ((0U == (0xc0000000U 
                                       & (0x40000000U 
                                          ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address))) 
                               | (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:96606: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 96606, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck address not aligned to size (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:96654: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 96654, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries invalid param (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:96678: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 96678, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_opcode))) 
                     & (~ (((0U == (0x80000000U & (0x80000000U 
                                                   ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address))) 
                            | ((0U == (0xc0000000U 
                                       & (0x40000000U 
                                          ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address))) 
                               | (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries unmanaged address (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_opcode))) 
                     & (~ (((0U == (0x80000000U & (0x80000000U 
                                                   ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address))) 
                            | ((0U == (0xc0000000U 
                                       & (0x40000000U 
                                          ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address))) 
                               | (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:96702: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 96702, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData address not aligned to size (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:96750: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 96750, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries invalid param (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:96774: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 96774, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_opcode))) 
                     & (~ (((0U == (0x80000000U & (0x80000000U 
                                                   ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address))) 
                            | ((0U == (0xc0000000U 
                                       & (0x40000000U 
                                          ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address))) 
                               | (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries unmanaged address (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_opcode))) 
                     & (~ (((0U == (0x80000000U & (0x80000000U 
                                                   ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address))) 
                            | ((0U == (0xc0000000U 
                                       & (0x40000000U 
                                          ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address))) 
                               | (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:96798: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 96798, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck address not aligned to size (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:96846: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 96846, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries invalid param (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:96870: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 96870, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_e_valid) 
                     & (~ ((1U > (1U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                        >> 0x10U))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'E' channels carries invalid sink ID (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_e_valid) 
                     & (~ ((1U > (1U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                        >> 0x10U))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:96894: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 96894, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:96918: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 96918, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:96942: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 96942, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:96966: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 96966, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:96990: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 96990, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_valid)) 
                     & (~ ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__address 
                            == vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_address) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_valid)) 
                     & (~ ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__address 
                            == vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_address) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:97014: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 97014, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__opcode_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__opcode_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:97038: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 97038, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__param_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__param_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:97062: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 97062, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__size_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__size_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:97086: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 97086, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__source_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__source_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:97110: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 97110, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__denied) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__denied) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:97134: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 97134, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__opcode_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel opcode changed within multibeat operation (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__opcode_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:97158: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 97158, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__param_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel param changed within multibeat operation (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__param_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:97182: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 97182, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__size_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel size changed within multibeat operation (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__size_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:97206: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 97206, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__source_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel source changed within multibeat operation (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__source_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:97230: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 97230, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid)) 
                     & (~ ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__address_2 
                            == vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel address changed with multibeat operation (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid)) 
                     & (~ ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__address_2 
                            == vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:97254: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 97254, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2527) 
                     & (~ ((~ (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight 
                                       >> (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2527) 
                     & (~ ((~ (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight 
                                       >> (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:97278: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 97278, "");
    }
    if (VL_UNLIKELY((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2535)) 
                     & (~ (((IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight 
                                     >> (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2524) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_source) 
                                  == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2535)) 
                     & (~ (((IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight 
                                     >> (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2524) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_source) 
                                  == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:97302: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 97302, "");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2535)) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2524) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source)))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_opcode))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_42)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_opcode))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_42))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2535)) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2524) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source)))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_opcode))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_42)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_opcode))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_42))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:97326: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 97326, "");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2535)) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2524) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source)))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2535)) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2524) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source)))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:97350: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 97350, "");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2535)) 
                      & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2524) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_source) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (7U & ((VysyxSoCFull__ConstPool__CONST_h57168600_0[0U] 
                                                & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U]) 
                                               >> 1U)))
                                  ? 4U : ((6U == (7U 
                                                  & ((VysyxSoCFull__ConstPool__CONST_h57168600_0[0U] 
                                                      & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U]) 
                                                     >> 1U)))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_58)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (7U & ((VysyxSoCFull__ConstPool__CONST_h57168600_0[0U] 
                                                  & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U]) 
                                                 >> 1U)))
                                    ? 4U : ((6U == 
                                             (7U & 
                                              ((VysyxSoCFull__ConstPool__CONST_h57168600_0[0U] 
                                                & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U]) 
                                               >> 1U)))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_58))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2535)) 
                      & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2524) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_source) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (7U & ((VysyxSoCFull__ConstPool__CONST_h57168600_0[0U] 
                                                & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U]) 
                                               >> 1U)))
                                  ? 4U : ((6U == (7U 
                                                  & ((VysyxSoCFull__ConstPool__CONST_h57168600_0[0U] 
                                                      & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U]) 
                                                     >> 1U)))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_58)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (7U & ((VysyxSoCFull__ConstPool__CONST_h57168600_0[0U] 
                                                  & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U]) 
                                                 >> 1U)))
                                    ? 4U : ((6U == 
                                             (7U & 
                                              ((VysyxSoCFull__ConstPool__CONST_h57168600_0[0U] 
                                                & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U]) 
                                               >> 1U)))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_58))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:97374: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 97374, "");
    }
    VL_SHIFTR_WWI(512,512,9, __Vtemp_hcaf0abb2__0, vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                   << 3U));
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2535)) 
                      & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2524) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_source) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_size) 
                            == (0xffU & ((VysyxSoCFull__ConstPool__CONST_hffd88623_0[0U] 
                                          & __Vtemp_hcaf0abb2__0[0U]) 
                                         >> 1U))) | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(512,512,9, __Vtemp_hcaf0abb2__1, vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                   << 3U));
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2535)) 
                      & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2524) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_source) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_size) 
                            == (0xffU & ((VysyxSoCFull__ConstPool__CONST_hffd88623_0[0U] 
                                          & __Vtemp_hcaf0abb2__1[0U]) 
                                         >> 1U))) | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:97398: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 97398, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2535) 
                      & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_valid) 
                            & ((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode)) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_source) 
                                  == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source)))))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__maybe_full) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_ready)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2535) 
                      & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_valid) 
                            & ((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode)) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_source) 
                                  == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source)))))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__maybe_full) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_ready)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:97420: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 97420, "");
    }
    if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2524) 
                                  & ((0U != (1ULL << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_source))) 
                                     & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2524)
                                          ? (1ULL << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_source))
                                          : 0ULL) == 
                                        (((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode)) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2535))
                                          ? (1ULL << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                          : 0ULL))))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 1 (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2524) 
                                  & ((0U != (1ULL << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_source))) 
                                     & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2524)
                                          ? (1ULL << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_source))
                                          : 0ULL) == 
                                        (((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode)) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2535))
                                          ? (1ULL << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                          : 0ULL))))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:97444: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 97444, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight))) 
                               | ((0U == vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus) 
                                  | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__watchdog 
                                     < vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight))) 
                               | ((0U == vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus) 
                                  | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__watchdog 
                                     < vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:97468: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 97468, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2617) 
                     & (~ ((~ (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_1 
                                       >> (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel re-used a source ID (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2617) 
                     & (~ ((~ (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_1 
                                       >> (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:97492: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 97492, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2624) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_1 
                                     >> (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2611) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                  == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2624) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_1 
                                     >> (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2611) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                  == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:97516: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 97516, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2624) 
                       & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2611) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source)))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2624) 
                       & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2611) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source)))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:97540: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 97540, "");
    }
    VL_SHIFTR_WWI(512,512,9, __Vtemp_hda1fa4b6__0, vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                   << 3U));
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2624) 
                       & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2611) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_size) 
                            == (0xffU & ((VysyxSoCFull__ConstPool__CONST_hffd88623_0[0U] 
                                          & __Vtemp_hda1fa4b6__0[0U]) 
                                         >> 1U))) | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(512,512,9, __Vtemp_hda1fa4b6__1, vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                   << 3U));
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2624) 
                       & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2611) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_size) 
                            == (0xffU & ((VysyxSoCFull__ConstPool__CONST_hffd88623_0[0U] 
                                          & __Vtemp_hda1fa4b6__1[0U]) 
                                         >> 1U))) | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:97564: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 97564, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2624) 
                      & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1)) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
                            & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source)) 
                               & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode)))))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__maybe_full) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_ready)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2624) 
                      & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_first_counter_1)) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
                            & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                                == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source)) 
                               & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode)))))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__maybe_full) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_ready)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:97586: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 97586, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2611) 
                      & (0U != (1ULL << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T)))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2611)
                              ? (1ULL << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T))
                              : 0ULL) != (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2624) 
                                           & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode)))
                                           ? (1ULL 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                           : 0ULL)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' and 'D' concurrent, despite minlatency 1 (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2611) 
                      & (0U != (1ULL << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T)))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2611)
                              ? (1ULL << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T))
                              : 0ULL) != (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2624) 
                                           & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode)))
                                           ? (1ULL 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                           : 0ULL)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:97610: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 97610, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_1))) 
                               | ((0U == vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus) 
                                  | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__watchdog_1 
                                     < vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_1))) 
                               | ((0U == vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus) 
                                  | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__watchdog_1 
                                     < vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:97634: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 97634, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2682) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_2)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel re-used a sink ID (connected at ChipLink.scala:71:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2682) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_2)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:97658: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 97658, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___ridx_T_1) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2682) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_2)) 
                            >> (1U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                      >> 0x10U))) | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'E' channel acknowledged for nothing inflight (connected at ChipLink.scala:71:16)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___ridx_T_1) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2682) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_2)) 
                            >> (1U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                      >> 0x10U))) | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:97682: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 97682, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                             & (0U == (0x80000000U 
                                       & (0x80000000U 
                                          ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_77)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                             & (0U == (0x80000000U 
                                       & (0x80000000U 
                                          ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_77)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:5040: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 5040, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:5064: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 5064, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:5112: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 5112, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:5136: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 5136, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:5160: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 5160, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                             & (0U == (0x80000000U 
                                       & (0x80000000U 
                                          ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_77)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                             & (0U == (0x80000000U 
                                       & (0x80000000U 
                                          ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_77)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:5184: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 5184, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:5208: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 5208, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:5256: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 5256, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:5280: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 5280, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:5304: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 5304, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:5328: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 5328, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & ((0U == (0xfffff000U 
                                       & (0x1000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_461))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & ((0U == (0xfffff000U 
                                       & (0x1000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_461))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:5376: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 5376, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:5424: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 5424, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:5448: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 5448, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & ((0U == (0xfffff000U 
                                       & (0x1000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_461))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & ((0U == (0xfffff000U 
                                       & (0x1000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_461))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:5472: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 5472, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:5520: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 5520, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:5544: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 5544, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & ((0U == (0xfffff000U 
                                       & (0x1000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_461))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & ((0U == (0xfffff000U 
                                       & (0x1000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_461))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:5568: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 5568, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:5616: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 5616, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:5640: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 5640, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_461)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_77)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_461)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_77)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:5664: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 5664, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:5712: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 5712, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:5736: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 5736, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_461)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_77)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_461)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_77)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:5760: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 5760, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:5808: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 5808, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:5832: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 5832, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & ((0U == (0xfffff000U 
                                       & (0x1000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_461))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & ((0U == (0xfffff000U 
                                       & (0x1000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_461))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:5856: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 5856, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:5904: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 5904, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:5928: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 5928, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:5952: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 5952, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:6000: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 6000, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:6024: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 6024, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:6048: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 6048, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:6072: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 6072, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((0x21U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_sink)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((0x21U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_sink)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:6120: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 6120, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:6144: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 6144, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:6168: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 6168, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:6192: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 6192, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:6216: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 6216, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((0x21U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_sink)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((0x21U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_sink)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:6264: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 6264, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:6288: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 6288, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:6312: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 6312, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:6336: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 6336, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_denied)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_denied)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:6360: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 6360, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:6408: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 6408, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:6432: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 6432, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:6480: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 6480, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_denied)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_denied)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:6504: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 6504, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:6552: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 6552, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:6576: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 6576, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:6600: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 6600, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:6624: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 6624, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:6648: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 6648, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid)) 
                     & (~ ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__address 
                            == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid)) 
                     & (~ ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__address 
                            == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:6672: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 6672, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__opcode_1) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__opcode_1) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:6696: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 6696, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__param_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__param_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:6720: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 6720, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__size_1) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__size_1) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:6744: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 6744, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:6768: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 6768, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_sink) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__sink)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_sink) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__sink)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:6792: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 6792, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__denied) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__denied) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:6816: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 6816, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_822) 
                     & (~ ((~ (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__inflight) 
                                          >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_822) 
                     & (~ ((~ (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__inflight) 
                                          >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:6840: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 6840, "");
    }
    if (VL_UNLIKELY((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_830)) 
                     & (~ (((0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__inflight) 
                                        >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source))) 
                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter_1))) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___same_cycle_resp_T_2))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_830)) 
                     & (~ (((0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__inflight) 
                                        >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source))) 
                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter_1))) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___same_cycle_resp_T_2))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:6864: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 6864, "");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_830)) 
                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter_1))) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___same_cycle_resp_T_2))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode) 
                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___GEN_32)) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode) 
                               == ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___GEN_30))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_830)) 
                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter_1))) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___same_cycle_resp_T_2))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode) 
                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___GEN_32)) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode) 
                               == ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___GEN_30))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:6888: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 6888, "");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_830)) 
                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter_1))) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___same_cycle_resp_T_2))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_830)) 
                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter_1))) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___same_cycle_resp_T_2))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:6912: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 6912, "");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_830)) 
                      & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter_1))) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___same_cycle_resp_T_2)))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode) 
                             == ((7U == (7U & (IData)(
                                                      (7ULL 
                                                       & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                          >> 1U)))))
                                  ? 4U : ((6U == (7U 
                                                  & (IData)(
                                                            (7ULL 
                                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___GEN_46)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode) 
                               == ((7U == (7U & (IData)(
                                                        (7ULL 
                                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U)))))
                                    ? 4U : ((6U == 
                                             (7U & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___GEN_46))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_830)) 
                      & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter_1))) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___same_cycle_resp_T_2)))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode) 
                             == ((7U == (7U & (IData)(
                                                      (7ULL 
                                                       & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                          >> 1U)))))
                                  ? 4U : ((6U == (7U 
                                                  & (IData)(
                                                            (7ULL 
                                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___GEN_46)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode) 
                               == ((7U == (7U & (IData)(
                                                        (7ULL 
                                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U)))))
                                    ? 4U : ((6U == 
                                             (7U & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___GEN_46))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:6936: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 6936, "");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_830)) 
                      & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter_1))) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___same_cycle_resp_T_2)))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_size) 
                            == (0xfU & (IData)((7ULL 
                                                & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__inflight_sizes 
                                                    >> 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source) 
                                                     << 2U)) 
                                                   >> 1U))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_830)) 
                      & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter_1))) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___same_cycle_resp_T_2)))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_size) 
                            == (0xfU & (IData)((7ULL 
                                                & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__inflight_sizes 
                                                    >> 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source) 
                                                     << 2U)) 
                                                   >> 1U))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:6960: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 6960, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_830) 
                      & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter_1)) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                            & ((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___same_cycle_resp_T_2))))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_ready)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_ready)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_830) 
                      & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter_1)) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
                            & ((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___same_cycle_resp_T_2))))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_ready)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_ready)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:6982: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 6982, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__inflight)))) 
                               | ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus) 
                                  | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__watchdog 
                                     < vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__inflight)))) 
                               | ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus) 
                                  | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__watchdog 
                                     < vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:7006: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 7006, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT____VdfgTmp_h5d3bc996__0)) 
                     & (~ ((0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__inflight_1) 
                                       >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT____VdfgTmp_h5d3bc996__0)) 
                     & (~ ((0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__inflight_1) 
                                       >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:7030: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 7030, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT____VdfgTmp_h5d3bc996__0)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_size) 
                            == (0xfU & (IData)((7ULL 
                                                & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__inflight_sizes_1 
                                                    >> 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source) 
                                                     << 2U)) 
                                                   >> 1U))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT____VdfgTmp_h5d3bc996__0)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_size) 
                            == (0xfU & (IData)((7ULL 
                                                & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__inflight_sizes_1 
                                                    >> 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source) 
                                                     << 2U)) 
                                                   >> 1U))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:7054: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 7054, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__inflight_1)))) 
                               | ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus) 
                                  | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__watchdog_1 
                                     < vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:102:11)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__inflight_1)))) 
                               | ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus) 
                                  | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__watchdog_1 
                                     < vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:7078: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 7078, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                             & (0U == (0x80000000U 
                                       & (0x80000000U 
                                          ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___T_77)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                             & (0U == (0x80000000U 
                                       & (0x80000000U 
                                          ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___T_77)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:32926: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 32926, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:32950: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 32950, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:32998: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 32998, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:33022: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 33022, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:33046: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 33046, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                             & (0U == (0x80000000U 
                                       & (0x80000000U 
                                          ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___T_77)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                             & (0U == (0x80000000U 
                                       & (0x80000000U 
                                          ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___T_77)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:33070: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 33070, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:33094: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 33094, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:33142: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 33142, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:33166: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 33166, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:33190: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 33190, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:33214: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 33214, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & ((0U == (0xfffff000U 
                                       & (0x1000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))) 
                               | ((0U == (0xc0000000U 
                                          & (0x40000000U 
                                             ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))) 
                                  | (0U == (0x80000000U 
                                            & (0x80000000U 
                                               ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & ((0U == (0xfffff000U 
                                       & (0x1000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))) 
                               | ((0U == (0xc0000000U 
                                          & (0x40000000U 
                                             ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))) 
                                  | (0U == (0x80000000U 
                                            & (0x80000000U 
                                               ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:33262: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 33262, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:33310: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 33310, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:33334: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 33334, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & ((0U == (0xfffff000U 
                                       & (0x1000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))) 
                               | ((0U == (0xc0000000U 
                                          & (0x40000000U 
                                             ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))) 
                                  | (0U == (0x80000000U 
                                            & (0x80000000U 
                                               ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & ((0U == (0xfffff000U 
                                       & (0x1000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))) 
                               | ((0U == (0xc0000000U 
                                          & (0x40000000U 
                                             ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))) 
                                  | (0U == (0x80000000U 
                                            & (0x80000000U 
                                               ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:33358: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 33358, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:33406: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 33406, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:33430: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 33430, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & ((0U == (0xfffff000U 
                                       & (0x1000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))) 
                               | ((0U == (0xc0000000U 
                                          & (0x40000000U 
                                             ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))) 
                                  | (0U == (0x80000000U 
                                            & (0x80000000U 
                                               ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & ((0U == (0xfffff000U 
                                       & (0x1000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))) 
                               | ((0U == (0xc0000000U 
                                          & (0x40000000U 
                                             ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))) 
                                  | (0U == (0x80000000U 
                                            & (0x80000000U 
                                               ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:33454: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 33454, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:33502: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 33502, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__mask)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__mask)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:33526: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 33526, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                             & ((0U == (0xc0000000U 
                                        & (0x40000000U 
                                           ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))) 
                                | (0U == (0x80000000U 
                                          & (0x80000000U 
                                             ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))))) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___T_77)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                             & ((0U == (0xc0000000U 
                                        & (0x40000000U 
                                           ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))) 
                                | (0U == (0x80000000U 
                                          & (0x80000000U 
                                             ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))))) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___T_77)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:33550: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 33550, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:33598: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 33598, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:33622: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 33622, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                             & ((0U == (0xc0000000U 
                                        & (0x40000000U 
                                           ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))) 
                                | (0U == (0x80000000U 
                                          & (0x80000000U 
                                             ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))))) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___T_77)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                             & ((0U == (0xc0000000U 
                                        & (0x40000000U 
                                           ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))) 
                                | (0U == (0x80000000U 
                                          & (0x80000000U 
                                             ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))))) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___T_77)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:33646: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 33646, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:33694: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 33694, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:33718: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 33718, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & ((0U == (0xfffff000U 
                                       & (0x1000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))) 
                               | ((0U == (0xc0000000U 
                                          & (0x40000000U 
                                             ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))) 
                                  | (0U == (0x80000000U 
                                            & (0x80000000U 
                                               ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & ((0U == (0xfffff000U 
                                       & (0x1000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))) 
                               | ((0U == (0xc0000000U 
                                          & (0x40000000U 
                                             ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))) 
                                  | (0U == (0x80000000U 
                                            & (0x80000000U 
                                               ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:33742: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 33742, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:33790: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 33790, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:33814: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 33814, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:33838: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 33838, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:33886: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 33886, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:33910: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 33910, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:33934: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 33934, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:33958: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 33958, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((0x21U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_sink)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((0x21U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_sink)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:34006: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 34006, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:34030: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 34030, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:34054: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 34054, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:34078: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 34078, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:34102: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 34102, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((0x21U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_sink)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((0x21U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_sink)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:34150: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 34150, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:34174: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 34174, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:34198: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 34198, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:34222: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 34222, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_denied)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_denied)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:34246: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 34246, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:34294: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 34294, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:34318: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 34318, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:34366: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 34366, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_denied)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_denied)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:34390: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 34390, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:34438: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 34438, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:34462: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 34462, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:34486: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 34486, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:34510: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 34510, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:34534: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 34534, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid)) 
                     & (~ ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__address 
                            == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid)) 
                     & (~ ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__address 
                            == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:34558: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 34558, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__opcode_1) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__opcode_1) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:34582: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 34582, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__param_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__param_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:34606: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 34606, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__size_1) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__size_1) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:34630: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 34630, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:34654: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 34654, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_sink) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__sink)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_sink) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__sink)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:34678: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 34678, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__denied) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__denied) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:34702: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 34702, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___T_822) 
                     & (~ ((~ (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__inflight) 
                                          >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___T_822) 
                     & (~ ((~ (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__inflight) 
                                          >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:34726: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 34726, "");
    }
    if (VL_UNLIKELY((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___T_830)) 
                     & (~ (((0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__inflight) 
                                        >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source))) 
                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__a_first_counter_1))) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___same_cycle_resp_T_2))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___T_830)) 
                     & (~ (((0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__inflight) 
                                        >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source))) 
                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__a_first_counter_1))) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___same_cycle_resp_T_2))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:34750: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 34750, "");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___T_830)) 
                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__a_first_counter_1))) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___same_cycle_resp_T_2))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode) 
                             == ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___GEN_30)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode) 
                               == ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___GEN_30))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___T_830)) 
                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__a_first_counter_1))) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___same_cycle_resp_T_2))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode) 
                             == ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___GEN_30)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode) 
                               == ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___GEN_30))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:34774: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 34774, "");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___T_830)) 
                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__a_first_counter_1))) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___same_cycle_resp_T_2))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___T_830)) 
                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__a_first_counter_1))) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___same_cycle_resp_T_2))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:34798: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 34798, "");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___T_830)) 
                      & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__a_first_counter_1))) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___same_cycle_resp_T_2)))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode) 
                             == ((7U == (7U & (IData)(
                                                      (7ULL 
                                                       & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                          >> 1U)))))
                                  ? 4U : ((6U == (7U 
                                                  & (IData)(
                                                            (7ULL 
                                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___GEN_46)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode) 
                               == ((7U == (7U & (IData)(
                                                        (7ULL 
                                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U)))))
                                    ? 4U : ((6U == 
                                             (7U & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___GEN_46))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___T_830)) 
                      & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__a_first_counter_1))) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___same_cycle_resp_T_2)))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode) 
                             == ((7U == (7U & (IData)(
                                                      (7ULL 
                                                       & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                          >> 1U)))))
                                  ? 4U : ((6U == (7U 
                                                  & (IData)(
                                                            (7ULL 
                                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___GEN_46)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode) 
                               == ((7U == (7U & (IData)(
                                                        (7ULL 
                                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U)))))
                                    ? 4U : ((6U == 
                                             (7U & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___GEN_46))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:34822: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 34822, "");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___T_830)) 
                      & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__a_first_counter_1))) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___same_cycle_resp_T_2)))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_size) 
                            == (0xfU & (IData)((7ULL 
                                                & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__inflight_sizes 
                                                    >> 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source) 
                                                     << 2U)) 
                                                   >> 1U))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___T_830)) 
                      & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__a_first_counter_1))) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___same_cycle_resp_T_2)))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_size) 
                            == (0xfU & (IData)((7ULL 
                                                & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__inflight_sizes 
                                                    >> 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source) 
                                                     << 2U)) 
                                                   >> 1U))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:34846: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 34846, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___T_830) 
                      & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__a_first_counter_1)) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                            & ((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___same_cycle_resp_T_2))))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_ready)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor_io_in_a_ready)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___T_830) 
                      & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__a_first_counter_1)) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid) 
                            & ((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___same_cycle_resp_T_2))))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_ready)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor_io_in_a_ready)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:34868: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 34868, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__inflight)))) 
                               | ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__plusarg_reader__DOT__myplus) 
                                  | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__watchdog 
                                     < vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__inflight)))) 
                               | ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__plusarg_reader__DOT__myplus) 
                                  | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__watchdog 
                                     < vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:34892: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 34892, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT____VdfgTmp_h5d3bc996__0)) 
                     & (~ ((0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__inflight_1) 
                                       >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT____VdfgTmp_h5d3bc996__0)) 
                     & (~ ((0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__inflight_1) 
                                       >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:34916: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 34916, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT____VdfgTmp_h5d3bc996__0)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_size) 
                            == (0xfU & (IData)((7ULL 
                                                & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1 
                                                    >> 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source) 
                                                     << 2U)) 
                                                   >> 1U))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT____VdfgTmp_h5d3bc996__0)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_size) 
                            == (0xfU & (IData)((7ULL 
                                                & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1 
                                                    >> 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source) 
                                                     << 2U)) 
                                                   >> 1U))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:34940: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 34940, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__inflight_1)))) 
                               | ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus) 
                                  | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__watchdog_1 
                                     < vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:102:43)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__inflight_1)))) 
                               | ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus) 
                                  | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__watchdog_1 
                                     < vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:34964: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 34964, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)) 
                             & (0U == (0x80000000U 
                                       & (0x80000000U 
                                          ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)))) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___T_77)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)) 
                             & (0U == (0x80000000U 
                                       & (0x80000000U 
                                          ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)))) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___T_77)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:36026: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 36026, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:36050: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 36050, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:36098: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 36098, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:36122: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 36122, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor_io_in_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor_io_in_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:36146: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 36146, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)) 
                             & (0U == (0x80000000U 
                                       & (0x80000000U 
                                          ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)))) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___T_77)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)) 
                             & (0U == (0x80000000U 
                                       & (0x80000000U 
                                          ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)))) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___T_77)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:36170: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 36170, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:36194: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 36194, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:36242: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 36242, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:36266: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 36266, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:36290: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 36290, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor_io_in_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor_io_in_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:36314: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 36314, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)) 
                            & ((0U == (0xfffff000U 
                                       & (0x1000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))) 
                               | ((0U == (0xc0000000U 
                                          & (0x40000000U 
                                             ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))) 
                                  | (0U == (0x80000000U 
                                            & (0x80000000U 
                                               ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)) 
                            & ((0U == (0xfffff000U 
                                       & (0x1000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))) 
                               | ((0U == (0xc0000000U 
                                          & (0x40000000U 
                                             ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))) 
                                  | (0U == (0x80000000U 
                                            & (0x80000000U 
                                               ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:36362: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 36362, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:36410: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 36410, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:36434: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 36434, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)) 
                            & ((0U == (0xfffff000U 
                                       & (0x1000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))) 
                               | ((0U == (0xc0000000U 
                                          & (0x40000000U 
                                             ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))) 
                                  | (0U == (0x80000000U 
                                            & (0x80000000U 
                                               ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)) 
                            & ((0U == (0xfffff000U 
                                       & (0x1000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))) 
                               | ((0U == (0xc0000000U 
                                          & (0x40000000U 
                                             ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))) 
                                  | (0U == (0x80000000U 
                                            & (0x80000000U 
                                               ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:36458: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 36458, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:36506: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 36506, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:36530: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 36530, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)) 
                            & ((0U == (0xfffff000U 
                                       & (0x1000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))) 
                               | ((0U == (0xc0000000U 
                                          & (0x40000000U 
                                             ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))) 
                                  | (0U == (0x80000000U 
                                            & (0x80000000U 
                                               ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)) 
                            & ((0U == (0xfffff000U 
                                       & (0x1000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))) 
                               | ((0U == (0xc0000000U 
                                          & (0x40000000U 
                                             ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))) 
                                  | (0U == (0x80000000U 
                                            & (0x80000000U 
                                               ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:36554: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 36554, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:36602: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 36602, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor_io_in_a_bits_mask))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor_io_in_a_bits_mask))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:36626: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 36626, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)) 
                             & ((0U == (0xc0000000U 
                                        & (0x40000000U 
                                           ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))) 
                                | (0U == (0x80000000U 
                                          & (0x80000000U 
                                             ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))))) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___T_77)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)) 
                             & ((0U == (0xc0000000U 
                                        & (0x40000000U 
                                           ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))) 
                                | (0U == (0x80000000U 
                                          & (0x80000000U 
                                             ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))))) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___T_77)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:36650: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 36650, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:36698: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 36698, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:36722: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 36722, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)) 
                             & ((0U == (0xc0000000U 
                                        & (0x40000000U 
                                           ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))) 
                                | (0U == (0x80000000U 
                                          & (0x80000000U 
                                             ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))))) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___T_77)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)) 
                             & ((0U == (0xc0000000U 
                                        & (0x40000000U 
                                           ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))) 
                                | (0U == (0x80000000U 
                                          & (0x80000000U 
                                             ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))))) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___T_77)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:36746: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 36746, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:36794: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 36794, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:36818: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 36818, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)) 
                            & ((0U == (0xfffff000U 
                                       & (0x1000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))) 
                               | ((0U == (0xc0000000U 
                                          & (0x40000000U 
                                             ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))) 
                                  | (0U == (0x80000000U 
                                            & (0x80000000U 
                                               ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)) 
                            & ((0U == (0xfffff000U 
                                       & (0x1000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))) 
                               | ((0U == (0xc0000000U 
                                          & (0x40000000U 
                                             ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))) 
                                  | (0U == (0x80000000U 
                                            & (0x80000000U 
                                               ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:36842: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 36842, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:36890: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 36890, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:36914: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 36914, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:36938: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 36938, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:36986: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 36986, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:37010: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 37010, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:37034: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 37034, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:37058: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 37058, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((0x21U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_sink)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((0x21U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_sink)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:37106: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 37106, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:37130: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 37130, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:37154: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 37154, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:37178: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 37178, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:37202: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 37202, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((0x21U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_sink)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((0x21U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_sink)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:37250: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 37250, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:37274: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 37274, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:37298: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 37298, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:37322: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 37322, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_denied)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_denied)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:37346: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 37346, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:37394: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 37394, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:37418: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 37418, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:37466: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 37466, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_denied)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_denied)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:37490: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 37490, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:37538: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 37538, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:37562: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 37562, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:37586: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 37586, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:37610: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 37610, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:37634: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 37634, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid)) 
                     & (~ ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__address 
                            == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid)) 
                     & (~ ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__address 
                            == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:37658: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 37658, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__opcode_1) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__opcode_1) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:37682: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 37682, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__param_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__param_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:37706: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 37706, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__size_1) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__size_1) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:37730: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 37730, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:37754: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 37754, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_sink) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__sink)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_sink) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__sink)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:37778: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 37778, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__denied) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__denied) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:37802: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 37802, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___T_822) 
                     & (~ ((~ (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__inflight) 
                                          >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___T_822) 
                     & (~ ((~ (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__inflight) 
                                          >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:37826: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 37826, "");
    }
    if (VL_UNLIKELY((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___T_830)) 
                     & (~ (((0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__inflight) 
                                        >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source))) 
                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__a_first_counter_1))) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_source) 
                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___T_830)) 
                     & (~ (((0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__inflight) 
                                        >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source))) 
                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__a_first_counter_1))) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_source) 
                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:37850: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 37850, "");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___T_830)) 
                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode) 
                             == ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___GEN_30)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode) 
                               == ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___GEN_30))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___T_830)) 
                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode) 
                             == ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___GEN_30)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode) 
                               == ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___GEN_30))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:37874: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 37874, "");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___T_830)) 
                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___T_830)) 
                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:37898: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 37898, "");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___T_830)) 
                      & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_source) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode) 
                             == ((7U == (7U & (IData)(
                                                      (7ULL 
                                                       & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                          >> 1U)))))
                                  ? 4U : ((6U == (7U 
                                                  & (IData)(
                                                            (7ULL 
                                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___GEN_46)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode) 
                               == ((7U == (7U & (IData)(
                                                        (7ULL 
                                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U)))))
                                    ? 4U : ((6U == 
                                             (7U & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___GEN_46))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___T_830)) 
                      & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_source) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode) 
                             == ((7U == (7U & (IData)(
                                                      (7ULL 
                                                       & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                          >> 1U)))))
                                  ? 4U : ((6U == (7U 
                                                  & (IData)(
                                                            (7ULL 
                                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___GEN_46)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode) 
                               == ((7U == (7U & (IData)(
                                                        (7ULL 
                                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U)))))
                                    ? 4U : ((6U == 
                                             (7U & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___GEN_46))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:37922: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 37922, "");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___T_830)) 
                      & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_source) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_size) 
                            == (0xfU & (IData)((7ULL 
                                                & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__inflight_sizes 
                                                    >> 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source) 
                                                     << 2U)) 
                                                   >> 1U))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___T_830)) 
                      & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_source) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_size) 
                            == (0xfU & (IData)((7ULL 
                                                & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__inflight_sizes 
                                                    >> 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source) 
                                                     << 2U)) 
                                                   >> 1U))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:37946: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 37946, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___T_830) 
                      & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__a_first_counter_1)) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                            & ((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_source) 
                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source)))))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor_io_in_d_ready)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor_io_in_a_ready)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___T_830) 
                      & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__a_first_counter_1)) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid) 
                            & ((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_source) 
                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source)))))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor_io_in_d_ready)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor_io_in_a_ready)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:37968: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 37968, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__inflight)))) 
                               | ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__plusarg_reader__DOT__myplus) 
                                  | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__watchdog 
                                     < vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__inflight)))) 
                               | ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__plusarg_reader__DOT__myplus) 
                                  | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__watchdog 
                                     < vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:37992: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 37992, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT____VdfgTmp_h4a0938cf__0)) 
                     & (~ ((0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__inflight_1) 
                                       >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT____VdfgTmp_h4a0938cf__0)) 
                     & (~ ((0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__inflight_1) 
                                       >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:38016: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 38016, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT____VdfgTmp_h4a0938cf__0)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_size) 
                            == (0xfU & (IData)((7ULL 
                                                & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__inflight_sizes_1 
                                                    >> 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source) 
                                                     << 2U)) 
                                                   >> 1U))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT____VdfgTmp_h4a0938cf__0)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_size) 
                            == (0xfU & (IData)((7ULL 
                                                & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__inflight_sizes_1 
                                                    >> 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source) 
                                                     << 2U)) 
                                                   >> 1U))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:38040: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 38040, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__inflight_1)))) 
                               | ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus) 
                                  | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__watchdog_1 
                                     < vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:103:7)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__inflight_1)))) 
                               | ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus) 
                                  | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__watchdog_1 
                                     < vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:38064: Assertion failed in %NysyxSoCFull.asic.chipMaster.widget.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 38064, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & (0U == (0x80000000U & 
                                      (0x80000000U 
                                       ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & (0U == (0x80000000U & 
                                      (0x80000000U 
                                       ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:10722: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 10722, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:10746: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 10746, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:10794: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 10794, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:10818: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 10818, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:10842: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 10842, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & (0U == (0x80000000U & 
                                      (0x80000000U 
                                       ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & (0U == (0x80000000U & 
                                      (0x80000000U 
                                       ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:10866: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 10866, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:10890: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 10890, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:10938: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 10938, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:10962: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 10962, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:10986: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 10986, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:11010: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 11010, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_461)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_461)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:11058: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 11058, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:11106: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 11106, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:11130: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 11130, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_461)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_461)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:11154: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 11154, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:11202: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 11202, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:11226: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 11226, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_461)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_461)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:11250: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 11250, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:11298: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 11298, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__mask)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__mask)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:11322: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 11322, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_461)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_461)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:11346: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 11346, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:11394: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 11394, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:11418: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 11418, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_461)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_461)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:11442: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 11442, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:11490: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 11490, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:11514: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 11514, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_461)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_461)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:11538: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 11538, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:11586: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 11586, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:11610: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 11610, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:11634: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 11634, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:11682: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 11682, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:11706: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 11706, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:11730: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 11730, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:11754: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 11754, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:11802: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 11802, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:11826: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 11826, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:11850: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 11850, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:11874: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 11874, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:11922: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 11922, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:11946: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 11946, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:11970: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 11970, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_denied)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_denied)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:11994: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 11994, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:12042: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 12042, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:12066: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 12066, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:12114: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 12114, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_denied)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_denied)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:12138: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 12138, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:12186: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 12186, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:12210: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 12210, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:12234: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 12234, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:12258: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 12258, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:12282: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 12282, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid)) 
                     & (~ ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__address 
                            == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid)) 
                     & (~ ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__address 
                            == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:12306: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 12306, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__opcode_1) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__opcode_1) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:12330: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 12330, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__param_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__param_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:12354: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 12354, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__size_1) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__size_1) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:12378: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 12378, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:12402: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 12402, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_sink) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__sink)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_sink) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__sink)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:12426: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 12426, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__denied) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__denied) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:12450: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 12450, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___T_742) 
                     & (~ ((~ (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__inflight) 
                                          >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___T_742) 
                     & (~ ((~ (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__inflight) 
                                          >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:12474: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 12474, "");
    }
    if (VL_UNLIKELY((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___T_750)) 
                     & (~ (((0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__inflight) 
                                        >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_source))) 
                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___T_750)) 
                     & (~ (((0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__inflight) 
                                        >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_source))) 
                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:12498: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 12498, "");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___T_750)) 
                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode) 
                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___GEN_32)) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode) 
                               == ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___GEN_30))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___T_750)) 
                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode) 
                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___GEN_32)) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode) 
                               == ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___GEN_30))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:12522: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 12522, "");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___T_750)) 
                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___T_750)) 
                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:12546: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 12546, "");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___T_750)) 
                      & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode) 
                             == ((7U == (7U & (IData)(
                                                      (7ULL 
                                                       & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                          >> 1U)))))
                                  ? 4U : ((6U == (7U 
                                                  & (IData)(
                                                            (7ULL 
                                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___GEN_46)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode) 
                               == ((7U == (7U & (IData)(
                                                        (7ULL 
                                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U)))))
                                    ? 4U : ((6U == 
                                             (7U & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___GEN_46))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___T_750)) 
                      & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode) 
                             == ((7U == (7U & (IData)(
                                                      (7ULL 
                                                       & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                          >> 1U)))))
                                  ? 4U : ((6U == (7U 
                                                  & (IData)(
                                                            (7ULL 
                                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___GEN_46)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode) 
                               == ((7U == (7U & (IData)(
                                                        (7ULL 
                                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U)))))
                                    ? 4U : ((6U == 
                                             (7U & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___GEN_46))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:12570: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 12570, "");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___T_750)) 
                      & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_size) 
                            == (0xfU & (IData)((7ULL 
                                                & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__inflight_sizes 
                                                    >> 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_source) 
                                                     << 2U)) 
                                                   >> 1U))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___T_750)) 
                      & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_size) 
                            == (0xfU & (IData)((7ULL 
                                                & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__inflight_sizes 
                                                    >> 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_source) 
                                                     << 2U)) 
                                                   >> 1U))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:12594: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 12594, "");
    }
}
