// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull___024root.h"

extern const VlWide<16>/*511:0*/ VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0;
extern const VlWide<32>/*1023:0*/ VysyxSoCFull__ConstPool__CONST_h7bd5304c_0;
extern const VlWide<8>/*255:0*/ VysyxSoCFull__ConstPool__CONST_h57168600_0;

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__6(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__6\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_h95f07ce5__0;
    VlWide<4>/*127:0*/ __Vtemp_h95f07ce5__1;
    VlWide<4>/*127:0*/ __Vtemp_h4dc7b1fa__0;
    VlWide<4>/*127:0*/ __Vtemp_h4dc7b1fa__1;
    VlWide<32>/*1023:0*/ __Vtemp_h0fb3f0ab__0;
    VlWide<32>/*1023:0*/ __Vtemp_h0fb3f0ab__1;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__0;
    VlWide<4>/*127:0*/ __Vtemp_hc2edd881__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__1;
    VlWide<4>/*127:0*/ __Vtemp_h37bd5226__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__2;
    VlWide<4>/*127:0*/ __Vtemp_h042d7f7e__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__3;
    VlWide<4>/*127:0*/ __Vtemp_hc0f5f94e__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__4;
    VlWide<4>/*127:0*/ __Vtemp_h6538e4a2__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__5;
    VlWide<4>/*127:0*/ __Vtemp_hdf750002__0;
    VlWide<4>/*127:0*/ __Vtemp_hebbce26f__0;
    VlWide<4>/*127:0*/ __Vtemp_hebbce26f__1;
    VlWide<4>/*127:0*/ __Vtemp_hf538e7c4__0;
    VlWide<4>/*127:0*/ __Vtemp_hf538e7c4__1;
    VlWide<32>/*1023:0*/ __Vtemp_h012449f6__0;
    VlWide<32>/*1023:0*/ __Vtemp_h012449f6__1;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__6;
    VlWide<4>/*127:0*/ __Vtemp_h8887ac21__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__7;
    VlWide<4>/*127:0*/ __Vtemp_he75cff79__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__8;
    VlWide<4>/*127:0*/ __Vtemp_h8ac3bc5f__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__9;
    VlWide<4>/*127:0*/ __Vtemp_hc8e880bd__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__10;
    VlWide<4>/*127:0*/ __Vtemp_hf5095b51__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__11;
    VlWide<4>/*127:0*/ __Vtemp_hd8738354__0;
    VlWide<8>/*255:0*/ __Vtemp_h3285fcb2__0;
    VlWide<8>/*255:0*/ __Vtemp_h3285fcb2__1;
    VlWide<8>/*255:0*/ __Vtemp_he07f9447__0;
    VlWide<8>/*255:0*/ __Vtemp_he07f9447__1;
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
                                          >> 3U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
                                             >> 3U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
                                                >> 3U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
                                                   >> 3U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
                                                   >> 3U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
                                                      >> 3U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
                                                   >> 3U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
                                                     >> 3U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:121971: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 121971, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:121995: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 121995, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((4U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((4U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:122019: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 122019, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:122043: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 122043, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_177) 
                            & ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_294))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_177) 
                            & ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_294))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:122067: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 122067, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
                                          >> 3U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
                                             >> 3U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
                                                >> 3U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
                                                   >> 3U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
                                                   >> 3U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
                                                      >> 3U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
                                                   >> 3U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
                                                     >> 3U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
                                          >> 3U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
                                             >> 3U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
                                                >> 3U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
                                                   >> 3U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
                                                   >> 3U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
                                                      >> 3U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
                                                   >> 3U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
                                                     >> 3U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:122091: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 122091, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:122115: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 122115, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:122139: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 122139, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:122163: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 122163, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_177) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                               & (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_177) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                               & (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:122187: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 122187, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
                                          >> 3U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
                                             >> 3U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
                                                >> 3U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
                                                   >> 3U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
                                                   >> 3U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
                                                      >> 3U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
                                                   >> 3U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
                                                     >> 3U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
                                          >> 3U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
                                             >> 3U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
                                                >> 3U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
                                                   >> 3U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
                                                   >> 3U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
                                                      >> 3U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
                                                   >> 3U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
                                                     >> 3U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:122211: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 122211, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:122235: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 122235, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((1U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((1U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:122259: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 122259, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:122283: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 122283, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:122307: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 122307, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                          >> 4U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                      >> 4U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                     >> 4U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                          >> 4U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                      >> 4U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                     >> 4U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:122331: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 122331, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:122355: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 122355, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:122379: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 122379, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:122403: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 122403, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:122427: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 122427, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                          >> 4U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                      >> 4U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                     >> 4U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                          >> 4U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                      >> 4U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                     >> 4U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:122451: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 122451, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:122475: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 122475, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:122499: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 122499, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:122523: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 122523, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:122547: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 122547, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                          >> 4U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                      >> 4U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                     >> 4U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                          >> 4U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                      >> 4U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                     >> 4U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:122571: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 122571, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:122595: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 122595, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:122619: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 122619, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:122643: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 122643, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_denied)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_denied)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:122667: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 122667, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                          >> 4U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                      >> 4U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                     >> 4U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                          >> 4U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                      >> 4U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                     >> 4U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:122691: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 122691, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:122715: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 122715, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:122739: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 122739, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                          >> 4U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                      >> 4U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                     >> 4U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                          >> 4U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                      >> 4U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                     >> 4U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:122763: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 122763, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:122787: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 122787, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_denied)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_denied)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:122811: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 122811, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                          >> 4U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                      >> 4U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                     >> 4U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                          >> 4U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                      >> 4U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                     >> 4U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:122835: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 122835, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:122859: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 122859, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:122883: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 122883, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ (((0U == (0x80000000U & (0x80000000U 
                                                   ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address))) 
                            | ((0U == (0xc0000000U 
                                       & (0x40000000U 
                                          ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address))) 
                               | (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries unmanaged address (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ (((0U == (0x80000000U & (0x80000000U 
                                                   ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address))) 
                            | ((0U == (0xc0000000U 
                                       & (0x40000000U 
                                          ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address))) 
                               | (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:122907: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 122907, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck smaller than a beat (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:122955: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 122955, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck address not aligned to size (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:122979: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 122979, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid report param (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:123003: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 123003, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ (((0U == (0x80000000U & (0x80000000U 
                                                   ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address))) 
                            | ((0U == (0xc0000000U 
                                       & (0x40000000U 
                                          ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address))) 
                               | (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries unmanaged address (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ (((0U == (0x80000000U & (0x80000000U 
                                                   ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address))) 
                            | ((0U == (0xc0000000U 
                                       & (0x40000000U 
                                          ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address))) 
                               | (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:123027: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 123027, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData smaller than a beat (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:123075: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 123075, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData address not aligned to size (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:123099: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 123099, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries invalid report param (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:123123: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 123123, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ (((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                               & (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release type unsupported by manager (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ (((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                               & (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:123147: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 123147, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                            & ((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                               & ((0U == (0xfffff000U 
                                          & (0x1000U 
                                             ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address))) 
                                  | ((0U == (0xc0000000U 
                                             & (0x40000000U 
                                                ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address))) 
                                     | (0U == (0x80000000U 
                                               & (0x80000000U 
                                                  ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                            & ((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                               & ((0U == (0xfffff000U 
                                          & (0x1000U 
                                             ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address))) 
                                  | ((0U == (0xc0000000U 
                                             & (0x40000000U 
                                                ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address))) 
                                     | (0U == (0x80000000U 
                                               & (0x80000000U 
                                                  ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:123171: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 123171, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release smaller than a beat (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:123219: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 123219, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release address not aligned to size (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:123243: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 123243, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release carries invalid report param (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:123267: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 123267, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ (((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                               & (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries ReleaseData type unsupported by manager (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ (((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                               & (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:123291: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 123291, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                            & ((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                               & ((0U == (0xfffff000U 
                                          & (0x1000U 
                                             ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address))) 
                                  | ((0U == (0xc0000000U 
                                             & (0x40000000U 
                                                ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address))) 
                                     | (0U == (0x80000000U 
                                               & (0x80000000U 
                                                  ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                            & ((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                               & ((0U == (0xfffff000U 
                                          & (0x1000U 
                                             ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address))) 
                                  | ((0U == (0xc0000000U 
                                             & (0x40000000U 
                                                ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address))) 
                                     | (0U == (0x80000000U 
                                               & (0x80000000U 
                                                  ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:123315: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 123315, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData smaller than a beat (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:123363: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 123363, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData address not aligned to size (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:123387: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 123387, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData carries invalid report param (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:123411: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 123411, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ (((0U == (0x80000000U & (0x80000000U 
                                                   ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address))) 
                            | ((0U == (0xc0000000U 
                                       & (0x40000000U 
                                          ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address))) 
                               | (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries unmanaged address (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ (((0U == (0x80000000U & (0x80000000U 
                                                   ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address))) 
                            | ((0U == (0xc0000000U 
                                       & (0x40000000U 
                                          ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address))) 
                               | (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:123435: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 123435, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck address not aligned to size (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:123483: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 123483, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries invalid param (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:123507: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 123507, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ (((0U == (0x80000000U & (0x80000000U 
                                                   ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address))) 
                            | ((0U == (0xc0000000U 
                                       & (0x40000000U 
                                          ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address))) 
                               | (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries unmanaged address (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ (((0U == (0x80000000U & (0x80000000U 
                                                   ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address))) 
                            | ((0U == (0xc0000000U 
                                       & (0x40000000U 
                                          ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address))) 
                               | (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:123531: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 123531, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData address not aligned to size (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:123579: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 123579, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries invalid param (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:123603: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 123603, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ (((0U == (0x80000000U & (0x80000000U 
                                                   ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address))) 
                            | ((0U == (0xc0000000U 
                                       & (0x40000000U 
                                          ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address))) 
                               | (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries unmanaged address (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ (((0U == (0x80000000U & (0x80000000U 
                                                   ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address))) 
                            | ((0U == (0xc0000000U 
                                       & (0x40000000U 
                                          ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address))) 
                               | (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:123627: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 123627, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck address not aligned to size (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:123675: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 123675, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries invalid param (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:123699: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 123699, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass_c)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_e_valid)) 
                     & (~ ((1U > (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_e_bits_sink)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'E' channels carries invalid sink ID (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass_c)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_e_valid)) 
                     & (~ ((1U > (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_e_bits_sink)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:123723: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 123723, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:123747: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 123747, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:123771: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 123771, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:123795: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 123795, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:123819: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 123819, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid)) 
                     & (~ ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__address 
                            == vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid)) 
                     & (~ ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__address 
                            == vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:123843: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 123843, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:123867: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 123867, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__param_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__param_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:123891: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 123891, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:123915: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 123915, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:123939: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 123939, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__denied) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__denied) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:123963: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 123963, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__opcode_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__opcode_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:123987: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 123987, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__param_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__param_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:124011: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 124011, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__size_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__size_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:124035: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 124035, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid)) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                             << 1U) == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__source_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid)) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                             << 1U) == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__source_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:124059: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 124059, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid)) 
                     & (~ ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__address_2 
                            == vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel address changed with multibeat operation (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid)) 
                     & (~ ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__address_2 
                            == vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:124083: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 124083, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp_h95f07ce5__0, vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_source));
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2524) 
                     & (~ ((~ __Vtemp_h95f07ce5__0[0U]) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp_h95f07ce5__1, vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_source));
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2524) 
                     & (~ ((~ __Vtemp_h95f07ce5__1[0U]) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:124107: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 124107, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp_h4dc7b1fa__0, vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2532)) 
                     & (~ ((__Vtemp_h4dc7b1fa__0[0U] 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2521) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_2))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp_h4dc7b1fa__1, vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2532)) 
                     & (~ ((__Vtemp_h4dc7b1fa__1[0U] 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2521) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_2))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:124131: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 124131, "");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2532)) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2521) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_2))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___GEN_42)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___GEN_42))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2532)) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2521) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_2))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___GEN_42)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___GEN_42))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:124155: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 124155, "");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2532)) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2521) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_2))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2532)) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2521) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_2))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:124179: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 124179, "");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2532)) 
                      & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2521) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_2)))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (7U & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                & vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                               >> 1U)))
                                  ? 4U : ((6U == (7U 
                                                  & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                      & vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                     >> 1U)))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___GEN_58)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (7U & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                  & vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                 >> 1U)))
                                    ? 4U : ((6U == 
                                             (7U & 
                                              ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                & vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                               >> 1U)))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___GEN_58))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2532)) 
                      & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2521) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_2)))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (7U & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                & vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                               >> 1U)))
                                  ? 4U : ((6U == (7U 
                                                  & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                      & vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                     >> 1U)))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___GEN_58)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (7U & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                  & vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                 >> 1U)))
                                    ? 4U : ((6U == 
                                             (7U & 
                                              ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                & vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                               >> 1U)))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___GEN_58))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:124203: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 124203, "");
    }
    VL_SHIFTR_WWI(1024,1024,10, __Vtemp_h0fb3f0ab__0, vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2532)) 
                      & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2521) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_2)))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_size) 
                            == (0xffU & ((VysyxSoCFull__ConstPool__CONST_h7bd5304c_0[0U] 
                                          & __Vtemp_h0fb3f0ab__0[0U]) 
                                         >> 1U))) | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(1024,1024,10, __Vtemp_h0fb3f0ab__1, vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2532)) 
                      & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2521) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_2)))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_size) 
                            == (0xffU & ((VysyxSoCFull__ConstPool__CONST_h7bd5304c_0[0U] 
                                          & __Vtemp_h0fb3f0ab__1[0U]) 
                                         >> 1U))) | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:124227: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 124227, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2532) 
                      & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                            & (IData)(vlSelf->__VdfgTmp_h12f687c7__0)))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_ready)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_ready)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2532) 
                      & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                            & (IData)(vlSelf->__VdfgTmp_h12f687c7__0)))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_ready)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_ready)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:124249: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 124249, "");
    }
    __Vtemp_hd2b6c582__0[0U] = 1U;
    __Vtemp_hd2b6c582__0[1U] = 0U;
    __Vtemp_hd2b6c582__0[2U] = 0U;
    __Vtemp_hd2b6c582__0[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hc2edd881__0, __Vtemp_hd2b6c582__0, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_source));
    __Vtemp_hd2b6c582__1[0U] = 1U;
    __Vtemp_hd2b6c582__1[1U] = 0U;
    __Vtemp_hd2b6c582__1[2U] = 0U;
    __Vtemp_hd2b6c582__1[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h37bd5226__0, __Vtemp_hd2b6c582__1, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_source));
    __Vtemp_hd2b6c582__2[0U] = 1U;
    __Vtemp_hd2b6c582__2[1U] = 0U;
    __Vtemp_hd2b6c582__2[2U] = 0U;
    __Vtemp_hd2b6c582__2[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h042d7f7e__0, __Vtemp_hd2b6c582__2, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2521) 
                                  & ((0U != (((__Vtemp_hc2edd881__0[0U] 
                                               | __Vtemp_hc2edd881__0[1U]) 
                                              | __Vtemp_hc2edd881__0[2U]) 
                                             | __Vtemp_hc2edd881__0[3U])) 
                                     & (0U == ((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2521)
                                                    ? 
                                                   __Vtemp_h37bd5226__0[0U]
                                                    : 0U) 
                                                  ^ 
                                                  (((6U 
                                                     != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2532))
                                                    ? 
                                                   __Vtemp_h042d7f7e__0[0U]
                                                    : 0U)) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2521)
                                                      ? 
                                                     __Vtemp_h37bd5226__0[1U]
                                                      : 0U) 
                                                    ^ 
                                                    (((6U 
                                                       != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2532))
                                                      ? 
                                                     __Vtemp_h042d7f7e__0[1U]
                                                      : 0U))) 
                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2521)
                                                     ? 
                                                    __Vtemp_h37bd5226__0[2U]
                                                     : 0U) 
                                                   ^ 
                                                   (((6U 
                                                      != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2532))
                                                     ? 
                                                    __Vtemp_h042d7f7e__0[2U]
                                                     : 0U))) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2521)
                                                    ? 
                                                   __Vtemp_h37bd5226__0[3U]
                                                    : 0U) 
                                                  ^ 
                                                  (((6U 
                                                     != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2532))
                                                    ? 
                                                   __Vtemp_h042d7f7e__0[3U]
                                                    : 0U))))))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 1 (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    __Vtemp_hd2b6c582__3[0U] = 1U;
    __Vtemp_hd2b6c582__3[1U] = 0U;
    __Vtemp_hd2b6c582__3[2U] = 0U;
    __Vtemp_hd2b6c582__3[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hc0f5f94e__0, __Vtemp_hd2b6c582__3, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_source));
    __Vtemp_hd2b6c582__4[0U] = 1U;
    __Vtemp_hd2b6c582__4[1U] = 0U;
    __Vtemp_hd2b6c582__4[2U] = 0U;
    __Vtemp_hd2b6c582__4[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h6538e4a2__0, __Vtemp_hd2b6c582__4, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_source));
    __Vtemp_hd2b6c582__5[0U] = 1U;
    __Vtemp_hd2b6c582__5[1U] = 0U;
    __Vtemp_hd2b6c582__5[2U] = 0U;
    __Vtemp_hd2b6c582__5[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hdf750002__0, __Vtemp_hd2b6c582__5, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2521) 
                                  & ((0U != (((__Vtemp_hc0f5f94e__0[0U] 
                                               | __Vtemp_hc0f5f94e__0[1U]) 
                                              | __Vtemp_hc0f5f94e__0[2U]) 
                                             | __Vtemp_hc0f5f94e__0[3U])) 
                                     & (0U == ((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2521)
                                                    ? 
                                                   __Vtemp_h6538e4a2__0[0U]
                                                    : 0U) 
                                                  ^ 
                                                  (((6U 
                                                     != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2532))
                                                    ? 
                                                   __Vtemp_hdf750002__0[0U]
                                                    : 0U)) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2521)
                                                      ? 
                                                     __Vtemp_h6538e4a2__0[1U]
                                                      : 0U) 
                                                    ^ 
                                                    (((6U 
                                                       != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2532))
                                                      ? 
                                                     __Vtemp_hdf750002__0[1U]
                                                      : 0U))) 
                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2521)
                                                     ? 
                                                    __Vtemp_h6538e4a2__0[2U]
                                                     : 0U) 
                                                   ^ 
                                                   (((6U 
                                                      != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2532))
                                                     ? 
                                                    __Vtemp_hdf750002__0[2U]
                                                     : 0U))) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2521)
                                                    ? 
                                                   __Vtemp_h6538e4a2__0[3U]
                                                    : 0U) 
                                                  ^ 
                                                  (((6U 
                                                     != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2532))
                                                    ? 
                                                   __Vtemp_hdf750002__0[3U]
                                                    : 0U))))))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:124273: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 124273, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)((0U != ((
                                                   (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight[0U] 
                                                    | vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight[1U]) 
                                                   | vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight[2U]) 
                                                  | vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight[3U])))) 
                               | ((0U == vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus) 
                                  | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__watchdog 
                                     < vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)((0U != ((
                                                   (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight[0U] 
                                                    | vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight[1U]) 
                                                   | vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight[2U]) 
                                                  | vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight[3U])))) 
                               | ((0U == vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus) 
                                  | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__watchdog 
                                     < vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:124297: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 124297, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp_hebbce26f__0, vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_1, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2614) 
                     & (~ ((~ __Vtemp_hebbce26f__0[0U]) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel re-used a source ID (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp_hebbce26f__1, vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_1, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2614) 
                     & (~ ((~ __Vtemp_hebbce26f__1[0U]) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:124321: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 124321, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp_hf538e7c4__0, vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_1, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2621) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((__Vtemp_hf538e7c4__0[0U] 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2608) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___same_cycle_resp_T_8))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp_hf538e7c4__1, vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_1, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2621) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((__Vtemp_hf538e7c4__1[0U] 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2608) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___same_cycle_resp_T_8))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:124345: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 124345, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2621) 
                       & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2608) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___same_cycle_resp_T_8))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2621) 
                       & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2608) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___same_cycle_resp_T_8))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:124369: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 124369, "");
    }
    VL_SHIFTR_WWI(1024,1024,10, __Vtemp_h012449f6__0, vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2621) 
                       & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2608) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___same_cycle_resp_T_8)))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_size) 
                            == (0xffU & ((VysyxSoCFull__ConstPool__CONST_h7bd5304c_0[0U] 
                                          & __Vtemp_h012449f6__0[0U]) 
                                         >> 1U))) | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(1024,1024,10, __Vtemp_h012449f6__1, vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2621) 
                       & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2608) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___same_cycle_resp_T_8)))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_size) 
                            == (0xffU & ((VysyxSoCFull__ConstPool__CONST_h7bd5304c_0[0U] 
                                          & __Vtemp_h012449f6__1[0U]) 
                                         >> 1U))) | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:124393: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 124393, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2621) 
                      & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1)) 
                         & (IData)(vlSelf->__VdfgTmp_hdc4243a0__0))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_ready)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_ready)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2621) 
                      & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1)) 
                         & (IData)(vlSelf->__VdfgTmp_hdc4243a0__0))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_ready)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_ready)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:124415: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 124415, "");
    }
    __Vtemp_hd2b6c582__6[0U] = 1U;
    __Vtemp_hd2b6c582__6[1U] = 0U;
    __Vtemp_hd2b6c582__6[2U] = 0U;
    __Vtemp_hd2b6c582__6[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h8887ac21__0, __Vtemp_hd2b6c582__6, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    __Vtemp_hd2b6c582__7[0U] = 1U;
    __Vtemp_hd2b6c582__7[1U] = 0U;
    __Vtemp_hd2b6c582__7[2U] = 0U;
    __Vtemp_hd2b6c582__7[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_he75cff79__0, __Vtemp_hd2b6c582__7, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    __Vtemp_hd2b6c582__8[0U] = 1U;
    __Vtemp_hd2b6c582__8[1U] = 0U;
    __Vtemp_hd2b6c582__8[2U] = 0U;
    __Vtemp_hd2b6c582__8[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h8ac3bc5f__0, __Vtemp_hd2b6c582__8, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2608) 
                      & (0U != (((__Vtemp_h8887ac21__0[0U] 
                                  | __Vtemp_h8887ac21__0[1U]) 
                                 | __Vtemp_h8887ac21__0[2U]) 
                                | __Vtemp_h8887ac21__0[3U]))) 
                     & (~ ((0U != ((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2608)
                                        ? __Vtemp_he75cff79__0[0U]
                                        : 0U) ^ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2621) 
                                                  & (6U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                  ? 
                                                 __Vtemp_h8ac3bc5f__0[0U]
                                                  : 0U)) 
                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2608)
                                          ? __Vtemp_he75cff79__0[1U]
                                          : 0U) ^ (
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2621) 
                                                    & (6U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                    ? 
                                                   __Vtemp_h8ac3bc5f__0[1U]
                                                    : 0U))) 
                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2608)
                                         ? __Vtemp_he75cff79__0[2U]
                                         : 0U) ^ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2621) 
                                                   & (6U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                   ? 
                                                  __Vtemp_h8ac3bc5f__0[2U]
                                                   : 0U))) 
                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2608)
                                        ? __Vtemp_he75cff79__0[3U]
                                        : 0U) ^ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2621) 
                                                  & (6U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                  ? 
                                                 __Vtemp_h8ac3bc5f__0[3U]
                                                  : 0U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' and 'D' concurrent, despite minlatency 1 (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    __Vtemp_hd2b6c582__9[0U] = 1U;
    __Vtemp_hd2b6c582__9[1U] = 0U;
    __Vtemp_hd2b6c582__9[2U] = 0U;
    __Vtemp_hd2b6c582__9[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hc8e880bd__0, __Vtemp_hd2b6c582__9, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    __Vtemp_hd2b6c582__10[0U] = 1U;
    __Vtemp_hd2b6c582__10[1U] = 0U;
    __Vtemp_hd2b6c582__10[2U] = 0U;
    __Vtemp_hd2b6c582__10[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hf5095b51__0, __Vtemp_hd2b6c582__10, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    __Vtemp_hd2b6c582__11[0U] = 1U;
    __Vtemp_hd2b6c582__11[1U] = 0U;
    __Vtemp_hd2b6c582__11[2U] = 0U;
    __Vtemp_hd2b6c582__11[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hd8738354__0, __Vtemp_hd2b6c582__11, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2608) 
                      & (0U != (((__Vtemp_hc8e880bd__0[0U] 
                                  | __Vtemp_hc8e880bd__0[1U]) 
                                 | __Vtemp_hc8e880bd__0[2U]) 
                                | __Vtemp_hc8e880bd__0[3U]))) 
                     & (~ ((0U != ((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2608)
                                        ? __Vtemp_hf5095b51__0[0U]
                                        : 0U) ^ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2621) 
                                                  & (6U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                  ? 
                                                 __Vtemp_hd8738354__0[0U]
                                                  : 0U)) 
                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2608)
                                          ? __Vtemp_hf5095b51__0[1U]
                                          : 0U) ^ (
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2621) 
                                                    & (6U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                    ? 
                                                   __Vtemp_hd8738354__0[1U]
                                                    : 0U))) 
                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2608)
                                         ? __Vtemp_hf5095b51__0[2U]
                                         : 0U) ^ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2621) 
                                                   & (6U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                   ? 
                                                  __Vtemp_hd8738354__0[2U]
                                                   : 0U))) 
                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2608)
                                        ? __Vtemp_hf5095b51__0[3U]
                                        : 0U) ^ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2621) 
                                                  & (6U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                  ? 
                                                 __Vtemp_hd8738354__0[3U]
                                                  : 0U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:124439: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 124439, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)((0U != ((
                                                   (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_1[0U] 
                                                    | vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_1[1U]) 
                                                   | vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_1[2U]) 
                                                  | vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_1[3U])))) 
                               | ((0U == vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus) 
                                  | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__watchdog_1 
                                     < vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)((0U != ((
                                                   (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_1[0U] 
                                                    | vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_1[1U]) 
                                                   | vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_1[2U]) 
                                                  | vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_1[3U])))) 
                               | ((0U == vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus) 
                                  | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__watchdog_1 
                                     < vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:124463: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 124463, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2679) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_2)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel re-used a sink ID (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2679) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_2)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:124487: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 124487, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2690) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2679) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_2)) 
                            >> (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_e_bits_sink)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'E' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2690) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2679) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_2)) 
                            >> (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_e_bits_sink)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:124511: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 124511, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size)) 
                               & (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size)) 
                               & (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:65125: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 65125, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT____VdfgTmp_h728c09b0__0)) 
                             & (6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size))) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_282)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT____VdfgTmp_h728c09b0__0)) 
                             & (6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size))) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_282)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:65149: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 65149, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:65173: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 65173, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:65197: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 65197, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:65221: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 65221, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:65245: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 65245, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:65269: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 65269, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size)) 
                               & (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size)) 
                               & (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:65293: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 65293, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT____VdfgTmp_h728c09b0__0)) 
                             & (6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size))) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_282)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT____VdfgTmp_h728c09b0__0)) 
                             & (6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size))) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_282)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:65317: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 65317, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:65341: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 65341, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:65365: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 65365, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:65389: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 65389, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:65413: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 65413, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:65437: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 65437, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:65461: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 65461, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:65485: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 65485, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_282)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_282)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:65509: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 65509, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:65533: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 65533, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:65557: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 65557, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:65581: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 65581, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:65605: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 65605, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_282))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_282))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:65629: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 65629, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:65653: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 65653, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:65677: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 65677, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:65701: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 65701, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:65725: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 65725, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_282))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_282))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:65749: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 65749, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:65773: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 65773, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:65797: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 65797, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:65821: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 65821, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((0U == ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_bits_mask))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((0U == ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_bits_mask))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:65845: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 65845, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                            & ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_282))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                            & ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_282))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:65869: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 65869, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:65893: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 65893, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:65917: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 65917, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((4U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((4U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:65941: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 65941, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:65965: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 65965, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                            & ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_282))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                            & ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_282))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:65989: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 65989, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:66013: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 66013, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:66037: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 66037, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:66061: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 66061, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:66085: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 66085, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_282))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_282))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:66109: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 66109, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:66133: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 66133, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:66157: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 66157, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((1U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ ((1U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:66181: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 66181, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:66205: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 66205, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:66229: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 66229, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                          >> 4U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                      >> 4U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                     >> 4U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                          >> 4U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                      >> 4U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                     >> 4U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:66253: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 66253, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:66277: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 66277, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:66301: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 66301, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:66325: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 66325, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:66349: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 66349, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                          >> 4U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                      >> 4U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                     >> 4U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                          >> 4U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                      >> 4U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                     >> 4U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:66373: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 66373, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:66397: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 66397, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:66421: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 66421, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:66445: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 66445, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:66469: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 66469, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                          >> 4U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                      >> 4U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                     >> 4U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                          >> 4U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                      >> 4U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                     >> 4U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:66493: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 66493, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:66517: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 66517, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:66541: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 66541, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:66565: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 66565, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_denied)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_denied)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:66589: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 66589, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                          >> 4U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                      >> 4U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                     >> 4U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                          >> 4U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                      >> 4U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                     >> 4U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:66613: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 66613, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:66637: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 66637, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:66661: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 66661, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                          >> 4U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                      >> 4U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                     >> 4U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                          >> 4U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                      >> 4U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                     >> 4U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:66685: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 66685, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:66709: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 66709, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_denied)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_denied)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:66733: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 66733, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                          >> 4U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                      >> 4U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                     >> 4U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                          >> 4U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                      >> 4U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                     >> 4U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:66757: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 66757, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:66781: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 66781, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:66805: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 66805, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ (((0U == (0x80000000U & (0x80000000U 
                                                   ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_address))) 
                            | (0U == (0xfffff000U & 
                                      (0x1000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_address)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries unmanaged address (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ (((0U == (0x80000000U & (0x80000000U 
                                                   ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_address))) 
                            | (0U == (0xfffff000U & 
                                      (0x1000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_address)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:66829: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 66829, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck smaller than a beat (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:66877: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 66877, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck address not aligned to size (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:66901: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 66901, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid report param (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:66925: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 66925, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ (((0U == (0x80000000U & (0x80000000U 
                                                   ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_address))) 
                            | (0U == (0xfffff000U & 
                                      (0x1000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_address)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries unmanaged address (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ (((0U == (0x80000000U & (0x80000000U 
                                                   ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_address))) 
                            | (0U == (0xfffff000U & 
                                      (0x1000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_address)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:66949: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 66949, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData smaller than a beat (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:66997: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 66997, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData address not aligned to size (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:67021: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 67021, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries invalid report param (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:67045: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 67045, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                            & (0U == (0xfffff000U & 
                                      (0x1000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_address)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release type unsupported by manager (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                            & (0U == (0xfffff000U & 
                                      (0x1000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_address)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:67069: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 67069, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                            & ((0U == (0xfffff000U 
                                       & (0x1000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_address))) 
                               | (0U == (0x80000000U 
                                         & (0x80000000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                            & ((0U == (0xfffff000U 
                                       & (0x1000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_address))) 
                               | (0U == (0x80000000U 
                                         & (0x80000000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:67093: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 67093, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release smaller than a beat (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:67141: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 67141, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release address not aligned to size (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:67165: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 67165, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release carries invalid report param (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:67189: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 67189, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                            & (0U == (0xfffff000U & 
                                      (0x1000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_address)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries ReleaseData type unsupported by manager (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                            & (0U == (0xfffff000U & 
                                      (0x1000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_address)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:67213: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 67213, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                            & ((0U == (0xfffff000U 
                                       & (0x1000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_address))) 
                               | (0U == (0x80000000U 
                                         & (0x80000000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                            & ((0U == (0xfffff000U 
                                       & (0x1000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_address))) 
                               | (0U == (0x80000000U 
                                         & (0x80000000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:67237: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 67237, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData smaller than a beat (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:67285: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 67285, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData address not aligned to size (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:67309: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 67309, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData carries invalid report param (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:67333: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 67333, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ (((0U == (0x80000000U & (0x80000000U 
                                                   ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_address))) 
                            | (0U == (0xfffff000U & 
                                      (0x1000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_address)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries unmanaged address (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ (((0U == (0x80000000U & (0x80000000U 
                                                   ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_address))) 
                            | (0U == (0xfffff000U & 
                                      (0x1000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_address)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:67357: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 67357, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck address not aligned to size (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:67405: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 67405, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries invalid param (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:67429: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 67429, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ (((0U == (0x80000000U & (0x80000000U 
                                                   ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_address))) 
                            | (0U == (0xfffff000U & 
                                      (0x1000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_address)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries unmanaged address (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ (((0U == (0x80000000U & (0x80000000U 
                                                   ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_address))) 
                            | (0U == (0xfffff000U & 
                                      (0x1000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_address)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:67453: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 67453, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData address not aligned to size (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:67501: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 67501, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries invalid param (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:67525: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 67525, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ (((0U == (0x80000000U & (0x80000000U 
                                                   ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_address))) 
                            | (0U == (0xfffff000U & 
                                      (0x1000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_address)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries unmanaged address (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ (((0U == (0x80000000U & (0x80000000U 
                                                   ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_address))) 
                            | (0U == (0xfffff000U & 
                                      (0x1000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_address)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:67549: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 67549, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck address not aligned to size (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:67597: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 67597, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries invalid param (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:67621: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 67621, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass_c)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_e_valid)) 
                     & (~ ((1U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_e_bits_sink)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'E' channels carries invalid sink ID (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass_c)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_e_valid)) 
                     & (~ ((1U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_e_bits_sink)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:67645: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 67645, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:67669: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 67669, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:67693: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 67693, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:67717: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 67717, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:67741: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 67741, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid)) 
                     & (~ ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__address 
                            == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid)) 
                     & (~ ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__address 
                            == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:67765: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 67765, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:67789: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 67789, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__param_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__param_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:67813: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 67813, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:67837: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 67837, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid)) 
                     & (~ (((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                      >> 1U)) == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid)) 
                     & (~ (((0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                      >> 1U)) == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:67861: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 67861, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__denied) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__denied) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:67885: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 67885, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__opcode_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__opcode_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:67909: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 67909, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__param_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__param_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:67933: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 67933, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__size_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__size_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:67957: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 67957, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:67981: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 67981, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid)) 
                     & (~ ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__address_2 
                            == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_address) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel address changed with multibeat operation (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid)) 
                     & (~ ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__address_2 
                            == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_address) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:68005: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 68005, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2386) 
                     & (~ ((~ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight 
                                       >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2386) 
                     & (~ ((~ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight 
                                       >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:68029: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 68029, "");
    }
    if (VL_UNLIKELY((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2394)) 
                     & (~ (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight 
                                     >> (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                  >> 1U)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2383) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                  == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                               >> 1U))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2394)) 
                     & (~ (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight 
                                     >> (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                  >> 1U)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2383) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                  == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                               >> 1U))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:68053: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 68053, "");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2394)) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2383) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                            == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                         >> 1U))))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode) 
                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_44)) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_42))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2394)) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2383) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                            == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                         >> 1U))))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode) 
                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_44)) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_42))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:68077: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 68077, "");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2394)) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2383) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                            == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                         >> 1U))))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2394)) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2383) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                            == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                         >> 1U))))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:68101: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 68101, "");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2394)) 
                      & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2383) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                               == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                            >> 1U)))))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (7U & ((VysyxSoCFull__ConstPool__CONST_h57168600_0[0U] 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                               >> 1U)))
                                  ? 4U : ((6U == (7U 
                                                  & ((VysyxSoCFull__ConstPool__CONST_h57168600_0[0U] 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                     >> 1U)))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_58)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (7U & ((VysyxSoCFull__ConstPool__CONST_h57168600_0[0U] 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                 >> 1U)))
                                    ? 4U : ((6U == 
                                             (7U & 
                                              ((VysyxSoCFull__ConstPool__CONST_h57168600_0[0U] 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                               >> 1U)))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_58))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2394)) 
                      & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2383) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                               == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                            >> 1U)))))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (7U & ((VysyxSoCFull__ConstPool__CONST_h57168600_0[0U] 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                               >> 1U)))
                                  ? 4U : ((6U == (7U 
                                                  & ((VysyxSoCFull__ConstPool__CONST_h57168600_0[0U] 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                     >> 1U)))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_58)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (7U & ((VysyxSoCFull__ConstPool__CONST_h57168600_0[0U] 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                 >> 1U)))
                                    ? 4U : ((6U == 
                                             (7U & 
                                              ((VysyxSoCFull__ConstPool__CONST_h57168600_0[0U] 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                               >> 1U)))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_58))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:68125: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 68125, "");
    }
    VL_SHIFTR_WWI(256,256,8, __Vtemp_h3285fcb2__0, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes, 
                  (0xfcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                            << 1U)));
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2394)) 
                      & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2383) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                               == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                            >> 1U)))))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_size) 
                            == (0xfU & ((VysyxSoCFull__ConstPool__CONST_h57168600_0[0U] 
                                         & __Vtemp_h3285fcb2__0[0U]) 
                                        >> 1U))) | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(256,256,8, __Vtemp_h3285fcb2__1, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes, 
                  (0xfcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                            << 1U)));
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2394)) 
                      & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2383) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                               == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                            >> 1U)))))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_size) 
                            == (0xfU & ((VysyxSoCFull__ConstPool__CONST_h57168600_0[0U] 
                                         & __Vtemp_h3285fcb2__1[0U]) 
                                        >> 1U))) | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:68149: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 68149, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2394) 
                      & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1)) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                            & ((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode)) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                  == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                               >> 1U))))))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_ready)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_ready)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2394) 
                      & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1)) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
                            & ((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode)) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source) 
                                  == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                               >> 1U))))))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_ready)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_ready)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:68171: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 68171, "");
    }
    if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2383) 
                                  & ((0U != (1ULL << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source))) 
                                     & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2383)
                                          ? (1ULL << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source))
                                          : 0ULL) == 
                                        (((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode)) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2394))
                                          ? (1ULL << 
                                             (0x3fU 
                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                 >> 1U)))
                                          : 0ULL))))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 1 (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2383) 
                                  & ((0U != (1ULL << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source))) 
                                     & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2383)
                                          ? (1ULL << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source))
                                          : 0ULL) == 
                                        (((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode)) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2394))
                                          ? (1ULL << 
                                             (0x3fU 
                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                 >> 1U)))
                                          : 0ULL))))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:68195: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 68195, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight))) 
                               | ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__plusarg_reader__DOT__myplus) 
                                  | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__watchdog 
                                     < vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight))) 
                               | ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__plusarg_reader__DOT__myplus) 
                                  | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__watchdog 
                                     < vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:68219: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 68219, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2476) 
                     & (~ ((~ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_1 
                                       >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel re-used a source ID (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2476) 
                     & (~ ((~ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_1 
                                       >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:68243: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 68243, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2483) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_1 
                                     >> (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                  >> 1U)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2470) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                  == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                               >> 1U))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2483) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_1 
                                     >> (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                  >> 1U)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2470) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                  == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                               >> 1U))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:68267: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 68267, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2483) 
                       & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2470) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                            == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                         >> 1U))))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2483) 
                       & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2470) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                            == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                         >> 1U))))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:68291: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 68291, "");
    }
    VL_SHIFTR_WWI(256,256,8, __Vtemp_he07f9447__0, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes_1, 
                  (0xfcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                            << 1U)));
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2483) 
                       & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2470) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                               == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                            >> 1U)))))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_size) 
                            == (0xfU & ((VysyxSoCFull__ConstPool__CONST_h57168600_0[0U] 
                                         & __Vtemp_he07f9447__0[0U]) 
                                        >> 1U))) | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(256,256,8, __Vtemp_he07f9447__1, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes_1, 
                  (0xfcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                            << 1U)));
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2483) 
                       & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2470) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                               == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                            >> 1U)))))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_size) 
                            == (0xfU & ((VysyxSoCFull__ConstPool__CONST_h57168600_0[0U] 
                                         & __Vtemp_he07f9447__1[0U]) 
                                        >> 1U))) | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:68315: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 68315, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2483) 
                      & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter_1)) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                            & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                             >> 1U))) 
                               & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_ready)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_ready)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2483) 
                      & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter_1)) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                            & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                             >> 1U))) 
                               & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_ready)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_ready)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:68337: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 68337, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2470) 
                      & (0U != (1ULL << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source)))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2470)
                              ? (1ULL << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source))
                              : 0ULL) != (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2483) 
                                           & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                                           ? (1ULL 
                                              << (0x3fU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                     >> 1U)))
                                           : 0ULL)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' and 'D' concurrent, despite minlatency 1 (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2470) 
                      & (0U != (1ULL << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source)))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2470)
                              ? (1ULL << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source))
                              : 0ULL) != (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2483) 
                                           & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode)))
                                           ? (1ULL 
                                              << (0x3fU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                                     >> 1U)))
                                           : 0ULL)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:68361: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 68361, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_1))) 
                               | ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus) 
                                  | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__watchdog_1 
                                     < vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)((0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_1))) 
                               | ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus) 
                                  | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__watchdog_1 
                                     < vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:68385: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 68385, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2541) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_2)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel re-used a sink ID (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2541) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_2)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:68409: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 68409, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2554) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2541) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_2)) 
                            >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_e_bits_sink)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'E' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:153:98)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2554) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2541) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_2)) 
                            >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_e_bits_sink)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:68433: Assertion failed in %NysyxSoCFull.asic.chipMaster.hints.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 68433, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                           >> 4U))) 
                             | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                              >> 4U))) 
                                | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                 >> 4U))) 
                                   | ((3U == (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                               >> 4U))) 
                                      | ((4U == (7U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                    >> 4U))) 
                                         | ((5U == 
                                             (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                               >> 4U))) 
                                            | ((6U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                    >> 4U))) 
                                               | (7U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                      >> 4U)))))))))) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_size_MPORT_data)) 
                               & (0U == (0x1000U & 
                                         (0x1000U ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                           >> 4U))) 
                             | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                              >> 4U))) 
                                | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                 >> 4U))) 
                                   | ((3U == (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                               >> 4U))) 
                                      | ((4U == (7U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                    >> 4U))) 
                                         | ((5U == 
                                             (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                               >> 4U))) 
                                            | ((6U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                    >> 4U))) 
                                               | (7U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                      >> 4U)))))))))) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_size_MPORT_data)) 
                               & (0U == (0x1000U & 
                                         (0x1000U ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:111375: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 111375, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ (((IData)(((0U == (0x70U 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data))) 
                                     & (6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_size_MPORT_data)))) 
                            & (0U == (0x1000U & (0x1000U 
                                                 ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ (((IData)(((0U == (0x70U 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data))) 
                                     & (6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_size_MPORT_data)))) 
                            & (0U == (0x1000U & (0x1000U 
                                                 ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:111399: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 111399, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                          >> 4U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                             >> 4U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                >> 4U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                      >> 4U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                     >> 4U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                          >> 4U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                             >> 4U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                >> 4U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                      >> 4U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                     >> 4U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:111423: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 111423, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_size_MPORT_data)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_size_MPORT_data)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:111447: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 111447, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_address) 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_size_MPORT_data)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_address) 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_size_MPORT_data)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:111471: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 111471, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:111495: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 111495, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:111519: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 111519, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:111543: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 111543, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                           >> 4U))) 
                             | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                              >> 4U))) 
                                | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                 >> 4U))) 
                                   | ((3U == (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                               >> 4U))) 
                                      | ((4U == (7U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                    >> 4U))) 
                                         | ((5U == 
                                             (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                               >> 4U))) 
                                            | ((6U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                    >> 4U))) 
                                               | (7U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                      >> 4U)))))))))) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_size_MPORT_data)) 
                               & (0U == (0x1000U & 
                                         (0x1000U ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                           >> 4U))) 
                             | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                              >> 4U))) 
                                | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                 >> 4U))) 
                                   | ((3U == (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                               >> 4U))) 
                                      | ((4U == (7U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                    >> 4U))) 
                                         | ((5U == 
                                             (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                               >> 4U))) 
                                            | ((6U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                    >> 4U))) 
                                               | (7U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                      >> 4U)))))))))) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_size_MPORT_data)) 
                               & (0U == (0x1000U & 
                                         (0x1000U ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:111567: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 111567, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ (((IData)(((0U == (0x70U 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data))) 
                                     & (6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_size_MPORT_data)))) 
                            & (0U == (0x1000U & (0x1000U 
                                                 ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ (((IData)(((0U == (0x70U 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data))) 
                                     & (6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_size_MPORT_data)))) 
                            & (0U == (0x1000U & (0x1000U 
                                                 ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:111591: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 111591, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                          >> 4U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                             >> 4U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                >> 4U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                      >> 4U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                     >> 4U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                          >> 4U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                             >> 4U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                >> 4U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                      >> 4U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                     >> 4U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:111615: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 111615, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_size_MPORT_data)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_size_MPORT_data)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:111639: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 111639, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_address) 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_size_MPORT_data)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_address) 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_size_MPORT_data)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:111663: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 111663, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:111687: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 111687, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:111711: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 111711, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:111735: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 111735, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:111759: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 111759, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                          >> 4U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                             >> 4U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                >> 4U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                      >> 4U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                     >> 4U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                          >> 4U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                             >> 4U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                >> 4U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                      >> 4U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                     >> 4U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:111783: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 111783, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_size_MPORT_data)) 
                            & (0U == (0x1000U & (0x1000U 
                                                 ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_size_MPORT_data)) 
                            & (0U == (0x1000U & (0x1000U 
                                                 ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:111807: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 111807, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                          >> 4U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                             >> 4U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                >> 4U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                      >> 4U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                     >> 4U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                          >> 4U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                             >> 4U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                >> 4U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                      >> 4U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                     >> 4U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:111831: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 111831, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_address) 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_size_MPORT_data)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_address) 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_size_MPORT_data)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:111855: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 111855, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:111879: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 111879, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:111903: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 111903, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:111927: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 111927, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                           >> 4U))) 
                             | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                              >> 4U))) 
                                | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                 >> 4U))) 
                                   | ((3U == (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                               >> 4U))) 
                                      | ((4U == (7U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                    >> 4U))) 
                                         | ((5U == 
                                             (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                               >> 4U))) 
                                            | ((6U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                    >> 4U))) 
                                               | (7U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                      >> 4U)))))))))) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_size_MPORT_data)) 
                               & (0U == (0x1000U & 
                                         (0x1000U ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                           >> 4U))) 
                             | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                              >> 4U))) 
                                | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                 >> 4U))) 
                                   | ((3U == (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                               >> 4U))) 
                                      | ((4U == (7U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                    >> 4U))) 
                                         | ((5U == 
                                             (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                               >> 4U))) 
                                            | ((6U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                    >> 4U))) 
                                               | (7U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                      >> 4U)))))))))) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_size_MPORT_data)) 
                               & (0U == (0x1000U & 
                                         (0x1000U ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:111951: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 111951, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                          >> 4U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                             >> 4U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                >> 4U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                      >> 4U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                     >> 4U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                          >> 4U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                             >> 4U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                >> 4U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                      >> 4U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                     >> 4U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:111975: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 111975, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_address) 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_size_MPORT_data)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_address) 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_size_MPORT_data)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:111999: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 111999, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:112023: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 112023, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:112047: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 112047, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                           >> 4U))) 
                             | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                              >> 4U))) 
                                | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                 >> 4U))) 
                                   | ((3U == (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                               >> 4U))) 
                                      | ((4U == (7U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                    >> 4U))) 
                                         | ((5U == 
                                             (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                               >> 4U))) 
                                            | ((6U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                    >> 4U))) 
                                               | (7U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                      >> 4U)))))))))) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_size_MPORT_data)) 
                               & (0U == (0x1000U & 
                                         (0x1000U ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                           >> 4U))) 
                             | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                              >> 4U))) 
                                | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                 >> 4U))) 
                                   | ((3U == (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                               >> 4U))) 
                                      | ((4U == (7U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                    >> 4U))) 
                                         | ((5U == 
                                             (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                               >> 4U))) 
                                            | ((6U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                    >> 4U))) 
                                               | (7U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                      >> 4U)))))))))) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_size_MPORT_data)) 
                               & (0U == (0x1000U & 
                                         (0x1000U ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:112071: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 112071, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                          >> 4U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                             >> 4U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                >> 4U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                      >> 4U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                     >> 4U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                          >> 4U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                             >> 4U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                >> 4U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                      >> 4U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                     >> 4U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:112095: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 112095, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_address) 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_size_MPORT_data)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_address) 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_size_MPORT_data)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:112119: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 112119, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:112143: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 112143, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((0U == ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__mask)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_mask))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((0U == ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__mask)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_mask))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:112167: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 112167, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                           >> 4U))) 
                             | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                              >> 4U))) 
                                | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                 >> 4U))) 
                                   | ((3U == (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                               >> 4U))) 
                                      | ((4U == (7U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                    >> 4U))) 
                                         | ((5U == 
                                             (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                               >> 4U))) 
                                            | ((6U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                    >> 4U))) 
                                               | (7U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                      >> 4U)))))))))) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_size_MPORT_data)) 
                               & (0U == (0x1000U & 
                                         (0x1000U ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                           >> 4U))) 
                             | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                              >> 4U))) 
                                | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                 >> 4U))) 
                                   | ((3U == (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                               >> 4U))) 
                                      | ((4U == (7U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                    >> 4U))) 
                                         | ((5U == 
                                             (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                               >> 4U))) 
                                            | ((6U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                    >> 4U))) 
                                               | (7U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                      >> 4U)))))))))) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_size_MPORT_data)) 
                               & (0U == (0x1000U & 
                                         (0x1000U ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:112191: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 112191, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                          >> 4U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                             >> 4U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                >> 4U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                      >> 4U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                     >> 4U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                          >> 4U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                             >> 4U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                >> 4U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                      >> 4U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                     >> 4U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:112215: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 112215, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_address) 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_size_MPORT_data)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_address) 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_size_MPORT_data)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:112239: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 112239, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((4U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((4U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:112263: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 112263, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:112287: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 112287, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                           >> 4U))) 
                             | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                              >> 4U))) 
                                | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                 >> 4U))) 
                                   | ((3U == (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                               >> 4U))) 
                                      | ((4U == (7U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                    >> 4U))) 
                                         | ((5U == 
                                             (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                               >> 4U))) 
                                            | ((6U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                    >> 4U))) 
                                               | (7U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                      >> 4U)))))))))) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_size_MPORT_data)) 
                               & (0U == (0x1000U & 
                                         (0x1000U ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                           >> 4U))) 
                             | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                              >> 4U))) 
                                | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                 >> 4U))) 
                                   | ((3U == (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                               >> 4U))) 
                                      | ((4U == (7U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                    >> 4U))) 
                                         | ((5U == 
                                             (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                               >> 4U))) 
                                            | ((6U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                    >> 4U))) 
                                               | (7U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                      >> 4U)))))))))) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_size_MPORT_data)) 
                               & (0U == (0x1000U & 
                                         (0x1000U ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:112311: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 112311, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                          >> 4U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                             >> 4U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                >> 4U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                      >> 4U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                     >> 4U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                          >> 4U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                             >> 4U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                >> 4U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                      >> 4U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                     >> 4U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:112335: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 112335, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_address) 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_size_MPORT_data)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_address) 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_size_MPORT_data)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:112359: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 112359, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:112383: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 112383, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:112407: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 112407, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                           >> 4U))) 
                             | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                              >> 4U))) 
                                | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                 >> 4U))) 
                                   | ((3U == (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                               >> 4U))) 
                                      | ((4U == (7U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                    >> 4U))) 
                                         | ((5U == 
                                             (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                               >> 4U))) 
                                            | ((6U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                    >> 4U))) 
                                               | (7U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                      >> 4U)))))))))) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_size_MPORT_data)) 
                               & (0U == (0x1000U & 
                                         (0x1000U ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                           >> 4U))) 
                             | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                              >> 4U))) 
                                | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                 >> 4U))) 
                                   | ((3U == (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                               >> 4U))) 
                                      | ((4U == (7U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                    >> 4U))) 
                                         | ((5U == 
                                             (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                               >> 4U))) 
                                            | ((6U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                    >> 4U))) 
                                               | (7U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                      >> 4U)))))))))) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_size_MPORT_data)) 
                               & (0U == (0x1000U & 
                                         (0x1000U ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:112431: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 112431, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                          >> 4U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                             >> 4U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                >> 4U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                      >> 4U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                     >> 4U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                          >> 4U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                             >> 4U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                >> 4U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                      >> 4U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data) 
                                                     >> 4U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:112455: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 112455, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_address) 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_size_MPORT_data)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_address) 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_size_MPORT_data)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:112479: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 112479, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((1U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((1U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:112503: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 112503, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:112527: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 112527, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:112551: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 112551, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:112575: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 112575, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                          >> 4U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                      >> 4U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                     >> 4U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                          >> 4U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                      >> 4U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                     >> 4U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:112599: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 112599, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:112623: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 112623, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:112647: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 112647, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:112671: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 112671, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:112695: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 112695, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                          >> 4U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                      >> 4U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                     >> 4U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                          >> 4U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                      >> 4U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                     >> 4U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:112719: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 112719, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:112743: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 112743, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:112767: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 112767, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:112791: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 112791, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:112815: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 112815, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                          >> 4U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                      >> 4U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                     >> 4U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                          >> 4U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                      >> 4U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                     >> 4U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:112839: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 112839, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:112863: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 112863, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:112887: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 112887, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:112911: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 112911, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_denied)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_denied)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:112935: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 112935, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                          >> 4U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                      >> 4U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                     >> 4U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                          >> 4U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                      >> 4U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                     >> 4U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:112959: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 112959, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:112983: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 112983, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:113007: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 113007, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                          >> 4U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                      >> 4U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                     >> 4U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                          >> 4U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                      >> 4U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                     >> 4U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:113031: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 113031, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:113055: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 113055, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_denied)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_denied)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:113079: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 113079, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                          >> 4U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                      >> 4U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                     >> 4U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                          >> 4U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                             >> 4U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                >> 4U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                      >> 4U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                                                     >> 4U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:113103: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 113103, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:113127: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 113127, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:113151: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 113151, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((0U == (0x1000U & (0x1000U 
                                              ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_c_bits_address)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries unmanaged address (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((0U == (0x1000U & (0x1000U 
                                              ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_c_bits_address)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:113175: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 113175, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_opcode_MPORT_data))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_source_MPORT_data) 
                                          >> 4U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_source_MPORT_data) 
                                             >> 4U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_source_MPORT_data) 
                                                >> 4U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_source_MPORT_data) 
                                                      >> 4U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_source_MPORT_data) 
                                                     >> 4U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid source ID (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_opcode_MPORT_data))) 
                     & (~ (((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_source_MPORT_data) 
                                          >> 4U))) 
                            | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_source_MPORT_data) 
                                             >> 4U))) 
                               | ((2U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_source_MPORT_data) 
                                                >> 4U))) 
                                  | ((3U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                     | ((4U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                        | ((5U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_source_MPORT_data) 
                                                      >> 4U))) 
                                           | ((6U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_source_MPORT_data) 
                                                   >> 4U))) 
                                              | (7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_source_MPORT_data) 
                                                     >> 4U)))))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:113199: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 113199, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_size_MPORT_data)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck smaller than a beat (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_size_MPORT_data)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:113223: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 113223, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_c_bits_address) 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_size_MPORT_data)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck address not aligned to size (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_c_bits_address) 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_size_MPORT_data)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:113247: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 113247, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_param_MPORT_data)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid report param (connected at ChipLinkBridge.scala:173:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_opcode_MPORT_data))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_param_MPORT_data)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:113271: Assertion failed in %NysyxSoCFull.fpga.err.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 113271, "");
    }
}
