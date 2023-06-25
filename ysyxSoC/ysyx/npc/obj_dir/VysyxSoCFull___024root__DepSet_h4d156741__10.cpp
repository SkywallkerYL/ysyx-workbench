// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull___024root.h"

void VysyxSoCFull___024unit____Vdpiimwrap_flash_read_TOP____024unit(QData/*63:0*/ addr, QData/*63:0*/ &data);

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__10(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__10\n"); );
    // Init
    QData/*63:0*/ __Vtask_flash_read__0__data;
    __Vtask_flash_read__0__data = 0;
    VlWide<4>/*127:0*/ __Vtemp_h81d8d494__0;
    VlWide<4>/*127:0*/ __Vtemp_h81d8d494__1;
    VlWide<4>/*127:0*/ __Vtemp_hfd366158__0;
    VlWide<4>/*127:0*/ __Vtemp_hfd366158__1;
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___T_750) 
                      & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first_counter_1)) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                            & ((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode)) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_source)))))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_ready)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_a_ready)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___T_750) 
                      & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first_counter_1)) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid) 
                            & ((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode)) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_source)))))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_ready)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_a_ready)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:12616: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 12616, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__inflight)))) 
                               | ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__plusarg_reader__DOT__myplus) 
                                  | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__watchdog 
                                     < vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__inflight)))) 
                               | ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__plusarg_reader__DOT__myplus) 
                                  | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__watchdog 
                                     < vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:12640: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 12640, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT____VdfgTmp_h5d3bc996__0)) 
                     & (~ ((0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__inflight_1) 
                                       >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_source))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT____VdfgTmp_h5d3bc996__0)) 
                     & (~ ((0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__inflight_1) 
                                       >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_source))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:12664: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 12664, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT____VdfgTmp_h5d3bc996__0)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_size) 
                            == (0xfU & (IData)((7ULL 
                                                & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__inflight_sizes_1 
                                                    >> 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_source) 
                                                     << 2U)) 
                                                   >> 1U))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at BusBypass.scala:32:12)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT____VdfgTmp_h5d3bc996__0)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_size) 
                            == (0xfU & (IData)((7ULL 
                                                & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__inflight_sizes_1 
                                                    >> 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_source) 
                                                     << 2U)) 
                                                   >> 1U))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:12688: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 12688, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__inflight_1)))) 
                               | ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus) 
                                  | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__watchdog_1 
                                     < vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at BusBypass.scala:32:12)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__inflight_1)))) 
                               | ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus) 
                                  | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__watchdog_1 
                                     < vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:12712: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 12712, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:13543: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 13543, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:13591: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 13591, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                             & (~ ((IData)(0xfffU) 
                                                   << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                             & (~ ((IData)(0xfffU) 
                                                   << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:13615: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 13615, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:13639: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 13639, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:13687: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 13687, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:13735: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 13735, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                             & (~ ((IData)(0xfffU) 
                                                   << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                             & (~ ((IData)(0xfffU) 
                                                   << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:13759: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 13759, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:13783: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 13783, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:13807: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 13807, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                             & (~ ((IData)(0xfffU) 
                                                   << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                             & (~ ((IData)(0xfffU) 
                                                   << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:13903: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 13903, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:13927: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 13927, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                             & (~ ((IData)(0xfffU) 
                                                   << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                             & (~ ((IData)(0xfffU) 
                                                   << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:13999: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 13999, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:14023: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 14023, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                             & (~ ((IData)(0xfffU) 
                                                   << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                             & (~ ((IData)(0xfffU) 
                                                   << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:14095: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 14095, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__mask)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__mask)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:14119: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 14119, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((4U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((4U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:14143: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 14143, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                             & (~ ((IData)(0xfffU) 
                                                   << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                             & (~ ((IData)(0xfffU) 
                                                   << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:14191: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 14191, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:14215: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 14215, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((4U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((4U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:14239: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 14239, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                             & (~ ((IData)(0xfffU) 
                                                   << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                             & (~ ((IData)(0xfffU) 
                                                   << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:14287: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 14287, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:14311: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 14311, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                             & (~ ((IData)(0xfffU) 
                                                   << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                             & (~ ((IData)(0xfffU) 
                                                   << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:14383: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 14383, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:14407: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 14407, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:14431: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 14431, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:14479: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 14479, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:14503: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 14503, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:14527: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 14527, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:14575: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 14575, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:14599: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 14599, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:14647: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 14647, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_denied)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_denied)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:14671: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 14671, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:14719: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 14719, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_denied)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_denied)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:14767: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 14767, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:14815: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 14815, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:14839: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 14839, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:14863: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 14863, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:14887: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 14887, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid)) 
                     & (~ ((0U == ((((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__address[0U] 
                                      ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address) 
                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__address[1U]) 
                                    | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__address[2U]) 
                                   | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__address[3U])) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid)) 
                     & (~ ((0U == ((((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__address[0U] 
                                      ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address) 
                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__address[1U]) 
                                    | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__address[2U]) 
                                   | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__address[3U])) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:14911: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 14911, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__opcode_1) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__opcode_1) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:14935: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 14935, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__size_1) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__size_1) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:14959: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 14959, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_d_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_d_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:14983: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 14983, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__denied) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__denied) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:15007: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 15007, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___T_682) 
                     & (~ ((~ (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__inflight) 
                                          >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___T_682) 
                     & (~ ((~ (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__inflight) 
                                          >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:15031: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 15031, "");
    }
    if (VL_UNLIKELY((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_opcode)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___T_690)) 
                     & (~ (((0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__inflight) 
                                        >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_d_bits_source))) 
                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_first_counter_1))) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_d_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_opcode)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___T_690)) 
                     & (~ (((0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__inflight) 
                                        >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_d_bits_source))) 
                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                                & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_first_counter_1))) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_d_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:15055: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 15055, "");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___T_690)) 
                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_opcode) 
                             == ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___GEN_30)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_opcode) 
                               == ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___GEN_30))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___T_690)) 
                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_opcode) 
                             == ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                  ? 4U : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___GEN_30)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_opcode) 
                               == ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___GEN_30))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:15079: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 15079, "");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___T_690)) 
                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___T_690)) 
                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                          & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_first_counter_1))) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:15103: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 15103, "");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___T_690)) 
                      & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_opcode) 
                             == ((7U == (7U & (IData)(
                                                      (7ULL 
                                                       & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                          >> 1U)))))
                                  ? 4U : ((6U == (7U 
                                                  & (IData)(
                                                            (7ULL 
                                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___GEN_46)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_opcode) 
                               == ((7U == (7U & (IData)(
                                                        (7ULL 
                                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U)))))
                                    ? 4U : ((6U == 
                                             (7U & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___GEN_46))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___T_690)) 
                      & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_opcode) 
                             == ((7U == (7U & (IData)(
                                                      (7ULL 
                                                       & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                          >> 1U)))))
                                  ? 4U : ((6U == (7U 
                                                  & (IData)(
                                                            (7ULL 
                                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___GEN_46)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_opcode) 
                               == ((7U == (7U & (IData)(
                                                        (7ULL 
                                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U)))))
                                    ? 4U : ((6U == 
                                             (7U & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___GEN_46))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:15127: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 15127, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp_h81d8d494__0, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___T_690)) 
                      & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_size) 
                            == (0x7fU & (__Vtemp_h81d8d494__0[0U] 
                                         >> 1U))) | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp_h81d8d494__1, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___T_690)) 
                      & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_first_counter_1))) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_size) 
                            == (0x7fU & (__Vtemp_h81d8d494__1[0U] 
                                         >> 1U))) | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:15151: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 15151, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___T_690) 
                      & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_first_counter_1)) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                            & ((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_opcode)) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_d_bits_source)))))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_d_ready)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_a_ready)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___T_690) 
                      & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_first_counter_1)) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
                            & ((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_opcode)) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_d_bits_source)))))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_d_ready)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_a_ready)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:15173: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 15173, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__inflight)))) 
                               | ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__plusarg_reader__DOT__myplus) 
                                  | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__watchdog 
                                     < vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__inflight)))) 
                               | ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__plusarg_reader__DOT__myplus) 
                                  | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__watchdog 
                                     < vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:15197: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 15197, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_valid) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT____VdfgTmp_heef927f8__0)) 
                     & (~ ((0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__inflight_1) 
                                       >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_d_bits_source))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_valid) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT____VdfgTmp_heef927f8__0)) 
                     & (~ ((0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__inflight_1) 
                                       >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_d_bits_source))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:15221: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 15221, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp_hfd366158__0, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_valid) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT____VdfgTmp_heef927f8__0)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_size) 
                            == (0x7fU & (__Vtemp_hfd366158__0[0U] 
                                         >> 1U))) | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at BusBypass.scala:33:14)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp_hfd366158__1, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_valid) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT____VdfgTmp_heef927f8__0)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_size) 
                            == (0x7fU & (__Vtemp_hfd366158__1[0U] 
                                         >> 1U))) | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:15245: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 15245, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__inflight_1)))) 
                               | ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus) 
                                  | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__watchdog_1 
                                     < vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at BusBypass.scala:33:14)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__inflight_1)))) 
                               | ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus) 
                                  | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__watchdog_1 
                                     < vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:15269: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 15269, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & (0U == (0x1000U & (0x1000U 
                                                 ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & (0U == (0x1000U & (0x1000U 
                                                 ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:7942: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 7942, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:7966: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 7966, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:8014: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 8014, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:8038: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 8038, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:8062: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 8062, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & (0U == (0x1000U & (0x1000U 
                                                 ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & (0U == (0x1000U & (0x1000U 
                                                 ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:8086: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 8086, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:8110: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 8110, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:8158: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 8158, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:8182: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 8182, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:8206: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 8206, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:8230: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 8230, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & (0U == (0x1000U & (0x1000U 
                                                 ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & (0U == (0x1000U & (0x1000U 
                                                 ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:8278: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 8278, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:8326: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 8326, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:8350: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 8350, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & (0U == (0x1000U & (0x1000U 
                                                 ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & (0U == (0x1000U & (0x1000U 
                                                 ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:8374: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 8374, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:8422: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 8422, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:8446: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 8446, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & (0U == (0x1000U & (0x1000U 
                                                 ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & (0U == (0x1000U & (0x1000U 
                                                 ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:8470: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 8470, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:8518: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 8518, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:8542: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 8542, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & (0U == (0x1000U & (0x1000U 
                                                 ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & (0U == (0x1000U & (0x1000U 
                                                 ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:8566: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 8566, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:8614: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 8614, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:8638: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 8638, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & (0U == (0x1000U & (0x1000U 
                                                 ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & (0U == (0x1000U & (0x1000U 
                                                 ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:8662: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 8662, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:8710: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 8710, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:8734: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 8734, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & (0U == (0x1000U & (0x1000U 
                                                 ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & (0U == (0x1000U & (0x1000U 
                                                 ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:8758: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 8758, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:8806: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 8806, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:8830: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 8830, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:8854: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 8854, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:8902: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 8902, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__beatsDO_opdata_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__beatsDO_opdata_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:8926: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 8926, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:8950: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 8950, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:8998: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 8998, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__beatsDO_opdata_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__beatsDO_opdata_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:9022: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 9022, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:9070: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 9070, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_denied)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__beatsDO_opdata_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_denied)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__beatsDO_opdata_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:9094: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 9094, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__beatsDO_opdata_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__beatsDO_opdata_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:9142: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 9142, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_denied)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__beatsDO_opdata_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_denied)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__beatsDO_opdata_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:9190: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 9190, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__beatsDO_opdata_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__beatsDO_opdata_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:9238: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 9238, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:9262: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 9262, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:9286: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 9286, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:9310: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 9310, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__address) 
                            == (0x1fffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__address) 
                            == (0x1fffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:9334: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 9334, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:9358: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 9358, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:9382: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 9382, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:9406: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 9406, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__denied) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__denied) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:9430: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 9430, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___T_682) 
                     & (~ ((~ (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__inflight) 
                                          >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___T_682) 
                     & (~ ((~ (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__inflight) 
                                          >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:9454: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 9454, "");
    }
    if (VL_UNLIKELY((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_opcode)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___T_690)) 
                     & (~ (((0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__inflight) 
                                        >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_source))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___T_679) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_opcode)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___T_690)) 
                     & (~ (((0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__inflight) 
                                        >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_source))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___T_679) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:9478: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 9478, "");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___T_690)) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___T_679) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_opcode) 
                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___GEN_32)) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___GEN_30))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___T_690)) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___T_679) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_opcode) 
                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___GEN_32)) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___GEN_30))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:9502: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 9502, "");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___T_690)) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___T_679) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___T_690)) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___T_679) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:9526: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 9526, "");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___T_690)) 
                      & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___T_679) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (7U & (IData)(
                                                      (7ULL 
                                                       & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                          >> 1U)))))
                                  ? 4U : ((6U == (7U 
                                                  & (IData)(
                                                            (7ULL 
                                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___GEN_46)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (7U & (IData)(
                                                        (7ULL 
                                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U)))))
                                    ? 4U : ((6U == 
                                             (7U & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___GEN_46))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___T_690)) 
                      & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___T_679) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (7U & (IData)(
                                                      (7ULL 
                                                       & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                          >> 1U)))))
                                  ? 4U : ((6U == (7U 
                                                  & (IData)(
                                                            (7ULL 
                                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___GEN_46)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (7U & (IData)(
                                                        (7ULL 
                                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U)))))
                                    ? 4U : ((6U == 
                                             (7U & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___GEN_46))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:9550: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 9550, "");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___T_690)) 
                      & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___T_679) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_size) 
                            == (0xfU & (IData)((7ULL 
                                                & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__inflight_sizes 
                                                    >> 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_source) 
                                                     << 2U)) 
                                                   >> 1U))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___T_690)) 
                      & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___T_679) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_size) 
                            == (0xfU & (IData)((7ULL 
                                                & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__inflight_sizes 
                                                    >> 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_source) 
                                                     << 2U)) 
                                                   >> 1U))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:9574: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 9574, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___T_690) 
                      & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__a_first_counter_1)) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                            & ((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_opcode)) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_source)))))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_ready)) 
                            | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__a__DOT__maybe_full))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___T_690) 
                      & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__a_first_counter_1)) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
                            & ((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_opcode)) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_source)))))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_ready)) 
                            | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__a__DOT__maybe_full))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:9596: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 9596, "");
    }
    if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___T_679) 
                                  & ((0U != (0xffffU 
                                             & ((IData)(1U) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source)))) 
                                     & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___T_679)
                                          ? (0xffffU 
                                             & ((IData)(1U) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source)))
                                          : 0U) == 
                                        (((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_opcode)) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___T_690))
                                          ? (0xffffU 
                                             & ((IData)(1U) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_source)))
                                          : 0U))))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 1 (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___T_679) 
                                  & ((0U != (0xffffU 
                                             & ((IData)(1U) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source)))) 
                                     & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___T_679)
                                          ? (0xffffU 
                                             & ((IData)(1U) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source)))
                                          : 0U) == 
                                        (((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_opcode)) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___T_690))
                                          ? (0xffffU 
                                             & ((IData)(1U) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_source)))
                                          : 0U))))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:9620: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 9620, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__inflight)))) 
                               | ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__plusarg_reader__DOT__myplus) 
                                  | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__watchdog 
                                     < vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__inflight)))) 
                               | ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__plusarg_reader__DOT__myplus) 
                                  | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__watchdog 
                                     < vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:9644: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 9644, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_valid) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT____VdfgTmp_h5d3bc996__0)) 
                     & (~ ((0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__inflight_1) 
                                       >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_source))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_valid) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT____VdfgTmp_h5d3bc996__0)) 
                     & (~ ((0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__inflight_1) 
                                       >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_source))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:9668: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 9668, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_valid) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT____VdfgTmp_h5d3bc996__0)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_size) 
                            == (0xfU & (IData)((7ULL 
                                                & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__inflight_sizes_1 
                                                    >> 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_source) 
                                                     << 2U)) 
                                                   >> 1U))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_valid) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT____VdfgTmp_h5d3bc996__0)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_size) 
                            == (0xfU & (IData)((7ULL 
                                                & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__inflight_sizes_1 
                                                    >> 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_source) 
                                                     << 2U)) 
                                                   >> 1U))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:9692: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 9692, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__inflight_1)))) 
                               | ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus) 
                                  | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__watchdog_1 
                                     < vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:44:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__inflight_1)))) 
                               | ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus) 
                                  | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__watchdog_1 
                                     < vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:9716: Assertion failed in %NysyxSoCFull.asic.chipMaster.ferr.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 9716, "");
    }
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__ram_len__v0 = 0U;
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & (0U == (0x80000000U & 
                                      (0x80000000U 
                                       ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & (0U == (0x80000000U & 
                                      (0x80000000U 
                                       ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:21962: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 21962, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:21986: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 21986, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:22034: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 22034, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:22058: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 22058, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:22082: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 22082, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & (0U == (0x80000000U & 
                                      (0x80000000U 
                                       ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & (0U == (0x80000000U & 
                                      (0x80000000U 
                                       ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:22106: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 22106, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:22130: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 22130, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:22178: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 22178, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:22202: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 22202, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:22226: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 22226, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0xfU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:22250: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 22250, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_461)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_461)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:22298: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 22298, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:22346: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 22346, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:22370: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 22370, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_461)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_461)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:22394: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 22394, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:22442: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 22442, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:22466: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 22466, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_461)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_461)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:22490: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 22490, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:22538: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 22538, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__mask)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__mask)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:22562: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 22562, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_461)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_461)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:22586: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 22586, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:22634: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 22634, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:22658: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 22658, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_461)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_461)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:22682: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 22682, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:22730: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 22730, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:22754: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 22754, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_461)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_461)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:22778: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 22778, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:22826: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 22826, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:22850: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 22850, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:22874: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 22874, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode))) 
                     & (~ ((2U <= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_3))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode))) 
                     & (~ ((2U <= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_3))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:22922: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 22922, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode))) 
                     & (~ ((0U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode))) 
                     & (~ ((0U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:22946: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 22946, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:22970: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 22970, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2) 
                               >> 2U)) | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2) 
                               >> 2U)) | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:22994: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 22994, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode))) 
                     & (~ ((2U <= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_3))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode))) 
                     & (~ ((2U <= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_3))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:23042: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 23042, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode))) 
                     & (~ ((2U >= (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode))) 
                     & (~ ((2U >= (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:23066: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 23066, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode))) 
                     & (~ ((2U != (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode))) 
                     & (~ ((2U != (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:23090: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 23090, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:23114: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 23114, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode))) 
                     & (~ ((2U <= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_3))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode))) 
                     & (~ ((2U <= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_3))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:23162: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 23162, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode))) 
                     & (~ ((2U >= (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode))) 
                     & (~ ((2U >= (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:23186: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 23186, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode))) 
                     & (~ ((2U != (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode))) 
                     & (~ ((2U != (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:23210: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 23210, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode))) 
                     & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2) 
                                >> 2U)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode))) 
                     & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2) 
                                >> 2U)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:23234: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 23234, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode))) 
                     & (~ ((0U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode))) 
                     & (~ ((0U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:23282: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 23282, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:23306: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 23306, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode))) 
                     & (~ ((0U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode))) 
                     & (~ ((0U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:23354: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 23354, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode))) 
                     & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2) 
                                >> 2U)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode))) 
                     & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2) 
                                >> 2U)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:23378: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 23378, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode))) 
                     & (~ ((0U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode))) 
                     & (~ ((0U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:23426: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 23426, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:23450: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 23450, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:23474: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 23474, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:23498: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 23498, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:23522: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 23522, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid)) 
                     & (~ ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__address 
                            == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid)) 
                     & (~ ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__address 
                            == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:23546: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 23546, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:23570: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 23570, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid)) 
                     & (~ (((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2)) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__param_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid)) 
                     & (~ (((3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2)) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__param_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:23594: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 23594, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid)) 
                     & (~ (((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_3)) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid)) 
                     & (~ (((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_3)) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:23618: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 23618, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:23642: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 23642, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_sink) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__sink)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_sink) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__sink)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:23666: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 23666, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__denied) 
                            == (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2) 
                                      >> 2U))) | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__denied) 
                            == (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2) 
                                      >> 2U))) | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:23690: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 23690, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___T_742) 
                     & (~ ((~ (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__inflight) 
                                          >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___T_742) 
                     & (~ ((~ (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__inflight) 
                                          >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:23714: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 23714, "");
    }
    if (VL_UNLIKELY((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___T_750)) 
                     & (~ (((0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__inflight) 
                                        >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_source))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___T_739) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___T_750)) 
                     & (~ (((0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__inflight) 
                                        >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_source))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___T_739) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:23738: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 23738, "");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___T_750)) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___T_739) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_source)))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode) 
                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___GEN_32)) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode) 
                               == ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___GEN_30))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___T_750)) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___T_739) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_source)))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode) 
                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___GEN_32)) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode) 
                               == ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                    ? 4U : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___GEN_30))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:23762: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 23762, "");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___T_750)) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___T_739) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_source)))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size) 
                            == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_3))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___T_750)) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___T_739) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_source)))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size) 
                            == (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_3))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:23786: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 23786, "");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___T_750)) 
                      & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___T_739) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_source))))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode) 
                             == ((7U == (7U & (IData)(
                                                      (7ULL 
                                                       & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                          >> 1U)))))
                                  ? 4U : ((6U == (7U 
                                                  & (IData)(
                                                            (7ULL 
                                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___GEN_46)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode) 
                               == ((7U == (7U & (IData)(
                                                        (7ULL 
                                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U)))))
                                    ? 4U : ((6U == 
                                             (7U & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___GEN_46))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___T_750)) 
                      & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___T_739) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_source))))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode) 
                             == ((7U == (7U & (IData)(
                                                      (7ULL 
                                                       & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                          >> 1U)))))
                                  ? 4U : ((6U == (7U 
                                                  & (IData)(
                                                            (7ULL 
                                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___GEN_46)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode) 
                               == ((7U == (7U & (IData)(
                                                        (7ULL 
                                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                            >> 1U)))))
                                    ? 4U : ((6U == 
                                             (7U & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___GEN_46))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:23810: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 23810, "");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___T_750)) 
                      & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___T_739) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_source))))) 
                     & (~ (((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_3)) 
                            == (0xfU & (IData)((7ULL 
                                                & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__inflight_sizes 
                                                    >> 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_source) 
                                                     << 2U)) 
                                                   >> 1U))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___T_750)) 
                      & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___T_739) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_source))))) 
                     & (~ (((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_3)) 
                            == (0xfU & (IData)((7ULL 
                                                & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__inflight_sizes 
                                                    >> 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_source) 
                                                     << 2U)) 
                                                   >> 1U))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:23834: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 23834, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___T_750) 
                      & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_first_counter_1)) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                            & ((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode)) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_source)))))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_ready)) 
                            | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__maybe_full))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___T_750) 
                      & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_first_counter_1)) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
                            & ((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode)) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_source)))))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_ready)) 
                            | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__maybe_full))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:23856: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 23856, "");
    }
    if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___T_739) 
                                  & ((0U != (0xffffU 
                                             & ((IData)(1U) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source)))) 
                                     & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___T_739)
                                          ? (0xffffU 
                                             & ((IData)(1U) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source)))
                                          : 0U) == 
                                        (((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode)) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___T_750))
                                          ? (0xffffU 
                                             & ((IData)(1U) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_source)))
                                          : 0U))))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 8 (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___T_739) 
                                  & ((0U != (0xffffU 
                                             & ((IData)(1U) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source)))) 
                                     & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___T_739)
                                          ? (0xffffU 
                                             & ((IData)(1U) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source)))
                                          : 0U) == 
                                        (((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode)) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___T_750))
                                          ? (0xffffU 
                                             & ((IData)(1U) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_source)))
                                          : 0U))))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:23880: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 23880, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__inflight)))) 
                               | ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__plusarg_reader__DOT__myplus) 
                                  | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__watchdog 
                                     < vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__inflight)))) 
                               | ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__plusarg_reader__DOT__myplus) 
                                  | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__watchdog 
                                     < vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:23904: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 23904, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT____VdfgTmp_h5d3bc996__0)) 
                     & (~ ((0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__inflight_1) 
                                       >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_source))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT____VdfgTmp_h5d3bc996__0)) 
                     & (~ ((0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__inflight_1) 
                                       >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_source))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:23928: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 23928, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT____VdfgTmp_h5d3bc996__0)) 
                     & (~ (((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_3)) 
                            == (0xfU & (IData)((7ULL 
                                                & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__inflight_sizes_1 
                                                    >> 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_source) 
                                                     << 2U)) 
                                                   >> 1U))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLink.scala:66:13)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT____VdfgTmp_h5d3bc996__0)) 
                     & (~ (((7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_3)) 
                            == (0xfU & (IData)((7ULL 
                                                & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__inflight_sizes_1 
                                                    >> 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_source) 
                                                     << 2U)) 
                                                   >> 1U))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:23952: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 23952, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__inflight_1)))) 
                               | ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus) 
                                  | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__watchdog_1 
                                     < vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLink.scala:66:13)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__inflight_1)))) 
                               | ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus) 
                                  | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__watchdog_1 
                                     < vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:23976: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 23976, "");
    }
    if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__portsAWOI_filtered_1_valid) 
                                  & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu_io_master_awlen)))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at AXI4ToAPB.scala:68 assert(!(aw.valid && aw.bits.len =/= 0.U))\n");
    }
    if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__portsAWOI_filtered_1_valid) 
                                  & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu_io_master_awlen)))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:86209: Assertion failed in %NysyxSoCFull.asic.axi42apb\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 86209, "");
    }
    if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__portsAWOI_filtered_1_valid) 
                                  & (2U < (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu_io_master_awsize)))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at AXI4ToAPB.scala:71 assert(!(aw.valid && aw.bits.size > \"b10\".U))\n");
    }
    if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__portsAWOI_filtered_1_valid) 
                                  & (2U < (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu_io_master_awsize)))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:86255: Assertion failed in %NysyxSoCFull.asic.axi42apb\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 86255, "");
    }
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__ram_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ram_real_last__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ram_real_last__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ram_real_last__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__ram_real_last__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__ram_len__v0 = 0U;
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_in_wready) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_wvalid))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_todo))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Fragmenter.scala:169 assert (!out.w.fire() || w_todo =/= UInt(0)) // underflow impossible\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_in_wready) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_wvalid))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_todo))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:40864: Assertion failed in %NysyxSoCFull.asic.chipMaster.axi4frag\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 40864, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_wvalid)) 
                                | (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__maybe_full)
                                       ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__ram_last
                                      [0U] : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_w_bits_last)))) 
                               | (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_todo))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Fragmenter.scala:178 assert (!out.w.valid || !in_w.bits.last || w_last)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_wvalid)) 
                                | (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__maybe_full)
                                       ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__ram_last
                                      [0U] : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_w_bits_last)))) 
                               | (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_todo))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:40887: Assertion failed in %NysyxSoCFull.asic.chipMaster.axi4frag\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 40887, "");
    }
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__ram_size__v0 = 0U;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lps2__DOT__mps2__DOT__srstate 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lps2__DOT__mps2__DOT__srstate;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lps2__DOT__mps2__DOT__sraddrEn 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lps2__DOT__mps2__DOT__sraddrEn;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lps2__DOT__mps2__DOT__r_ptr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lps2__DOT__mps2__DOT__r_ptr;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lps2__DOT__mps2__DOT__srdataEn 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lps2__DOT__mps2__DOT__srdataEn;
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_out_arvalid)) 
                               | ((0x7fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize1_T_1 
                                              >> 8U)) 
                                  == (0x7fffU & (~ 
                                                 ((IData)(0x7fffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_size)))))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToTL.scala:98 assert (!in.ar.valid || r_size1 === UIntToOH1(r_size, beatCountBits)) // because aligned\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_out_arvalid)) 
                               | ((0x7fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize1_T_1 
                                              >> 8U)) 
                                  == (0x7fffU & (~ 
                                                 ((IData)(0x7fffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_size)))))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:39357: Assertion failed in %NysyxSoCFull.asic.chipMaster.axi42tl\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 39357, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_out_awvalid)) 
                               | ((0x7fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize1_T_1 
                                              >> 8U)) 
                                  == (0x7fffU & (~ 
                                                 ((IData)(0x7fffU) 
                                                  << 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (0xffU 
                                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_4) 
                                                                 >> 8U)))) 
                                                    << 3U) 
                                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_1_size))))))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToTL.scala:131 assert (!in.aw.valid || w_size1 === UIntToOH1(w_size, beatCountBits)) // because aligned\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_out_awvalid)) 
                               | ((0x7fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize1_T_1 
                                              >> 8U)) 
                                  == (0x7fffU & (~ 
                                                 ((IData)(0x7fffU) 
                                                  << 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (0xffU 
                                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_4) 
                                                                 >> 8U)))) 
                                                    << 3U) 
                                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_1_size))))))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:39381: Assertion failed in %NysyxSoCFull.asic.chipMaster.axi42tl\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 39381, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_out_awvalid)) 
                                | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_awlen))) 
                               | (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_size))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToTL.scala:132 assert (!in.aw.valid || in.aw.bits.len === UInt(0) || in.aw.bits.size === UInt(log2Ceil(beatBytes))) // because aligned\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_out_awvalid)) 
                                | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_awlen))) 
                               | (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_size))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:39405: Assertion failed in %NysyxSoCFull.asic.chipMaster.axi42tl\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 39405, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__earlyWinner_0)) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__earlyWinner_1))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:105 assert((prefixOR zip earlyWinner) map { case (p,w) => !p || !w } reduce {_ && _})\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__earlyWinner_0)) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__earlyWinner_1))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:39429: Assertion failed in %NysyxSoCFull.asic.chipMaster.axi42tl\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 39429, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_out_arvalid) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_out_valid))) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__earlyWinner_0) 
                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__earlyWinner_1))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:107 assert (!earlyValids.reduce(_||_) || earlyWinner.reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_out_arvalid) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_out_valid))) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__earlyWinner_0) 
                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__earlyWinner_1))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:39453: Assertion failed in %NysyxSoCFull.asic.chipMaster.axi42tl\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 39453, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_out_arvalid) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_out_valid))) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_out_arvalid) 
                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_out_valid))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:108 assert (!validQuals .reduce(_||_) || validQuals .reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_out_arvalid) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_out_valid))) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_out_arvalid) 
                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_out_valid))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:39477: Assertion failed in %NysyxSoCFull.asic.chipMaster.axi42tl\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 39477, "");
    }
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__ram_addr__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram__v0 = 0U;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__enq_ptr_value 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__enq_ptr_value;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__deq_ptr_value 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__deq_ptr_value;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__ram_addr__v0 = 0U;
    if (VL_UNLIKELY((1U & (~ (((~ (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h906b61fd__0))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:114 assert (!resp_fire || count =/= UInt(0))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h906b61fd__0))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:83187: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 83187, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_1)) 
                               | (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:115 assert (!req_fire  || count =/= UInt(flight))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_1)) 
                               | (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:83210: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 83210, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:114 assert (!resp_fire || count =/= UInt(0))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:83232: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 83232, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_1)) 
                               | (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:115 assert (!req_fire  || count =/= UInt(flight))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_1)) 
                               | (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:83255: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 83255, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x7fffU & ((((IData)(1U) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                                               >> 1U) 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h906b61fd__0)))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:114 assert (!resp_fire || count =/= UInt(0))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x7fffU & ((((IData)(1U) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                                               >> 1U) 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h906b61fd__0)))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:83277: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 83277, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x7fffU & ((((IData)(1U) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                                               >> 1U) 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:114 assert (!resp_fire || count =/= UInt(0))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x7fffU & ((((IData)(1U) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                                               >> 1U) 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:83322: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 83322, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x3fffU & ((((IData)(1U) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h906b61fd__0)))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:114 assert (!resp_fire || count =/= UInt(0))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x3fffU & ((((IData)(1U) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h906b61fd__0)))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:83367: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 83367, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x3fffU & ((((IData)(1U) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:114 assert (!resp_fire || count =/= UInt(0))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x3fffU & ((((IData)(1U) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:83412: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 83412, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x1fffU & ((((IData)(1U) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                                               >> 3U) 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h906b61fd__0)))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:114 assert (!resp_fire || count =/= UInt(0))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x1fffU & ((((IData)(1U) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                                               >> 3U) 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h906b61fd__0)))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:83457: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 83457, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x1fffU & ((((IData)(1U) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                                               >> 3U) 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:114 assert (!resp_fire || count =/= UInt(0))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x1fffU & ((((IData)(1U) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                                               >> 3U) 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:83502: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 83502, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0xfffU & ((((IData)(1U) 
                                               << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                                              >> 4U) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h906b61fd__0)))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:114 assert (!resp_fire || count =/= UInt(0))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0xfffU & ((((IData)(1U) 
                                               << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                                              >> 4U) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h906b61fd__0)))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:83547: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 83547, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0xfffU & ((((IData)(1U) 
                                               << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                                              >> 4U) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:114 assert (!resp_fire || count =/= UInt(0))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0xfffU & ((((IData)(1U) 
                                               << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                                              >> 4U) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:83592: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 83592, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x7ffU & ((((IData)(1U) 
                                               << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                                              >> 5U) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h906b61fd__0)))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:114 assert (!resp_fire || count =/= UInt(0))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x7ffU & ((((IData)(1U) 
                                               << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                                              >> 5U) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h906b61fd__0)))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:83637: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 83637, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x7ffU & ((((IData)(1U) 
                                               << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                                              >> 5U) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:114 assert (!resp_fire || count =/= UInt(0))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x7ffU & ((((IData)(1U) 
                                               << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                                              >> 5U) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:83682: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 83682, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x3ffU & ((((IData)(1U) 
                                               << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                                              >> 6U) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h906b61fd__0)))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:114 assert (!resp_fire || count =/= UInt(0))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x3ffU & ((((IData)(1U) 
                                               << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                                              >> 6U) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h906b61fd__0)))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:83727: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 83727, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x3ffU & ((((IData)(1U) 
                                               << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                                              >> 6U) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:114 assert (!resp_fire || count =/= UInt(0))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x3ffU & ((((IData)(1U) 
                                               << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                                              >> 6U) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:83772: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 83772, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x1ffU & ((((IData)(1U) 
                                               << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                                              >> 7U) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h906b61fd__0)))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:114 assert (!resp_fire || count =/= UInt(0))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x1ffU & ((((IData)(1U) 
                                               << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                                              >> 7U) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h906b61fd__0)))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:83817: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 83817, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x1ffU & ((((IData)(1U) 
                                               << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                                              >> 7U) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:114 assert (!resp_fire || count =/= UInt(0))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x1ffU & ((((IData)(1U) 
                                               << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                                              >> 7U) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:83862: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 83862, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0xffU & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                                             >> 8U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h906b61fd__0)))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:114 assert (!resp_fire || count =/= UInt(0))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0xffU & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                                             >> 8U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h906b61fd__0)))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:83907: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 83907, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0xffU & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                                             >> 8U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:114 assert (!resp_fire || count =/= UInt(0))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0xffU & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                                             >> 8U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:83952: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 83952, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x7fU & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                                             >> 9U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h906b61fd__0)))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:114 assert (!resp_fire || count =/= UInt(0))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x7fU & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                                             >> 9U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h906b61fd__0)))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:83997: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 83997, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x7fU & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                                             >> 9U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:114 assert (!resp_fire || count =/= UInt(0))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x7fU & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                                             >> 9U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:84042: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 84042, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x3fU & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                                             >> 0xaU) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h906b61fd__0)))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:114 assert (!resp_fire || count =/= UInt(0))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x3fU & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                                             >> 0xaU) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h906b61fd__0)))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:84087: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 84087, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x3fU & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                                             >> 0xaU) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:114 assert (!resp_fire || count =/= UInt(0))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x3fU & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                                             >> 0xaU) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:84132: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 84132, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x1fU & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                                             >> 0xbU) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h906b61fd__0)))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:114 assert (!resp_fire || count =/= UInt(0))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x1fU & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                                             >> 0xbU) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h906b61fd__0)))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:84177: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 84177, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x1fU & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                                             >> 0xbU) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:114 assert (!resp_fire || count =/= UInt(0))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x1fU & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                                             >> 0xbU) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:84222: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 84222, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0xfU & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                                            >> 0xcU) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h906b61fd__0)))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:114 assert (!resp_fire || count =/= UInt(0))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0xfU & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                                            >> 0xcU) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h906b61fd__0)))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:84267: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 84267, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0xfU & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                                            >> 0xcU) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:114 assert (!resp_fire || count =/= UInt(0))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0xfU & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                                            >> 0xcU) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:84312: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 84312, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (7U & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                                          >> 0xdU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h906b61fd__0)))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:114 assert (!resp_fire || count =/= UInt(0))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (7U & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                                          >> 0xdU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h906b61fd__0)))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:84357: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 84357, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (7U & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                                          >> 0xdU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:114 assert (!resp_fire || count =/= UInt(0))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (7U & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                                          >> 0xdU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:84402: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 84402, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (3U & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                                          >> 0xeU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h906b61fd__0)))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:114 assert (!resp_fire || count =/= UInt(0))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (3U & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                                          >> 0xeU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h906b61fd__0)))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:84447: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 84447, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (3U & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                                          >> 0xeU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:114 assert (!resp_fire || count =/= UInt(0))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (3U & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                                          >> 0xeU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:84492: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 84492, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h906b61fd__0) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                                      >> 0xfU))) | 
                               (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:114 assert (!resp_fire || count =/= UInt(0))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h906b61fd__0) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                                      >> 0xfU))) | 
                               (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:84537: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 84537, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                                      >> 0xfU))) | 
                               (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:114 assert (!resp_fire || count =/= UInt(0))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                                      >> 0xfU))) | 
                               (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:84582: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 84582, "");
    }
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:265 assert (!anyValid || winner.reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:84627: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 84627, "");
    }
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:265 assert (!anyValid || winner.reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:84649: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 84649, "");
    }
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:265 assert (!anyValid || winner.reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:84671: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 84671, "");
    }
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:265 assert (!anyValid || winner.reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:84693: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 84693, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid) 
                                   & (0U == (0xffffb000U 
                                             & (0x10003000U 
                                                ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_aw_bits_addr)))))) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid) 
                                  & (0U == (0xffffb000U 
                                            & (0x10003000U 
                                               ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_aw_bits_addr)))))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:265 assert (!anyValid || winner.reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid) 
                                   & (0U == (0xffffb000U 
                                             & (0x10003000U 
                                                ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_aw_bits_addr)))))) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid) 
                                  & (0U == (0xffffb000U 
                                            & (0x10003000U 
                                               ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_aw_bits_addr)))))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:84715: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 84715, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid) 
                                   & (0U == (0xffffb000U 
                                             & (0x10003000U 
                                                ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_ar_bits_addr)))))) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid) 
                                  & (0U == (0xffffb000U 
                                            & (0x10003000U 
                                               ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_ar_bits_addr)))))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:265 assert (!anyValid || winner.reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid) 
                                   & (0U == (0xffffb000U 
                                             & (0x10003000U 
                                                ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_ar_bits_addr)))))) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid) 
                                  & (0U == (0xffffb000U 
                                            & (0x10003000U 
                                               ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_ar_bits_addr)))))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:84737: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 84737, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_3))) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_3))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:265 assert (!anyValid || winner.reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_3))) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_3))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:84759: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 84759, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_3))) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_3))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:265 assert (!anyValid || winner.reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_3))) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_3))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:84781: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 84781, "");
    }
    if (VL_UNLIKELY((1U & (~ (((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_0)) 
                                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_1))) 
                                & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_0) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_1))) 
                                   | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_2)))) 
                               & ((~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_0) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_1)) 
                                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_2))) 
                                  | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_3)))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:263 assert((prefixOR zip winner) map { case (p,w) => !p || !w } reduce {_ && _})\n");
    }
    if (VL_UNLIKELY((1U & (~ (((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_0)) 
                                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_1))) 
                                & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_0) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_1))) 
                                   | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_2)))) 
                               & ((~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_0) 
                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_1)) 
                                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_2))) 
                                  | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_3)))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:84805: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 84805, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid)) 
                               | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_0) 
                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_1)) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_2)) 
                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_3))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:265 assert (!anyValid || winner.reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid)) 
                               | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_0) 
                                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_1)) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_2)) 
                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_3))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:84827: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 84827, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_5_0)) 
                                | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_5_1))) 
                               & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_5_0) 
                                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_5_1))) 
                                  | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_5_3)))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:263 assert((prefixOR zip winner) map { case (p,w) => !p || !w } reduce {_ && _})\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_5_0)) 
                                | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_5_1))) 
                               & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_5_0) 
                                      | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_5_1))) 
                                  | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_5_3)))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:84853: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 84853, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1)) 
                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_5_0) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_5_1)) 
                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_5_3))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:265 assert (!anyValid || winner.reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1)) 
                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_5_0) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_5_1)) 
                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_5_3))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:84875: Assertion failed in %NysyxSoCFull.asic.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 84875, "");
    }
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__sram0_ram__DOT__ram__v0 = 0U;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Reglen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Reglen;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Reglen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Reglen;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__sram1_ram__DOT__ram__v0 = 0U;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__reglen 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__reglen;
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__ren) {
        VysyxSoCFull___024unit____Vdpiimwrap_flash_read_TOP____024unit((QData)((IData)(
                                                                                (0xffffffcU 
                                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_in_paddr))), __Vtask_flash_read__0__data);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data 
            = __Vtask_flash_read__0__data;
    }
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lps2__DOT__mps2__DOT__ps2_clk_sync 
        = ((6U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lps2__DOT__mps2__DOT__ps2_clk_sync) 
                  << 1U)) | ((1U != (IData)(vlSelf->ysyxSoCFull__DOT__kdb__DOT__state)) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__kdb__DOT__clk_div)));
    if (vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT__ram_data_MPORT_en) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT__ram_last__v0 
            = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT__ram_last_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT__ram_last__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT__ram_strb__v0 
            = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT__ram_strb_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT__ram_strb__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT__ram_data__v0 
            = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT__ram_data_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT__ram_data__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__deq__DOT___do_enq_T) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__deq__DOT__ram_last__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__deq__DOT__ram_last_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__deq__DOT__ram_last__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__deq__DOT__ram_data__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__deq__DOT__ram_data_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__deq__DOT__ram_data__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__deq__DOT__ram_resp__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__deq__DOT__ram_resp_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__deq__DOT__ram_resp__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__deq__DOT__ram_id__v0 
            = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_d_bits_source) 
                     >> 3U));
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__deq__DOT__ram_id__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__ram_data_MPORT_en) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__ram_last__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__ram_last_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__ram_last__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__ram_data__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__ram_data_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__ram_data__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__ram_strb__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__ram_strb_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__ram_strb__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__deq__DOT___do_enq_T) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__deq__DOT__ram_last__v0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__deq__DOT__ram_last_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__deq__DOT__ram_last__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__deq__DOT__ram_data__v0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__deq__DOT__ram_data_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__deq__DOT__ram_data__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__deq__DOT__ram_strb__v0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_mask;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__deq__DOT__ram_strb__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__ram_data_MPORT_en) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__ram_last__v0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_w_bits_last;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__ram_last__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__ram_strb__v0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_w_bits_strb;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__ram_strb__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__ram_data__v0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_w_bits_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__ram_data__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__deq__DOT__ram_data_MPORT_en) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__deq__DOT__ram_last__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__deq__DOT__ram_last_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__deq__DOT__ram_last__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__deq__DOT__ram_data__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__ram_data_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__deq__DOT__ram_data__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__deq__DOT__ram_strb__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__ram_strb_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__deq__DOT__ram_strb__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_en) {
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_burst__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_size__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_size_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_size__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_size__v0 
            = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size));
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_size__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_len__v0 
            = (0xffU & (~ (0xffU & (((IData)(0x7ffU) 
                                     << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size))) 
                                    >> 3U))));
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_len__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_opcode_MPORT_en) {
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_param__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_mask__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_mask__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_data__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_a_bits_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_data__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_opcode_MPORT_en) {
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_param__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_mask__v0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_mask__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_data__v0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_a_bits_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_data__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT__ram_id_MPORT_en) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT__ram_burst__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_burst;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT__ram_burst__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT__ram_size__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_size;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT__ram_size__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT__ram_addr__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_addr;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT__ram_addr__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT__ram_len__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_len;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT__ram_len__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT__ram_id__v0 
            = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id));
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT__ram_id__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq__DOT__ram_id_MPORT_en) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq__DOT__ram_burst__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_burst;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq__DOT__ram_burst__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq__DOT__ram_size__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_size;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq__DOT__ram_size__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq__DOT__ram_addr__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_addr;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq__DOT__ram_addr__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq__DOT__ram_len__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_len;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq__DOT__ram_len__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq__DOT__ram_id__v0 
            = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id));
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq__DOT__ram_id__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_MPORT_en) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_MPORT_addr;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_MPORT_en) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data__v0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data__v0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_MPORT_addr;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq__DOT__ram_id_MPORT_en) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq__DOT__ram_resp__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__deq__DOT__ram_resp_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq__DOT__ram_resp__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq__DOT__ram_id__v0 
            = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_d_bits_source) 
                     >> 3U));
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq__DOT__ram_id__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_opcode_MPORT_en) {
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_sink__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_data__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_data_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_data__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_denied__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_denied;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_denied__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_param__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_param__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_size__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_size;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_size__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_opcode__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_opcode__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_source__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_source__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_opcode_MPORT_en) {
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_sink__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_data__v0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_data_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_data__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_denied__v0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_denied;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_denied__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_param__v0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_param__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_size__v0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_size;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_size__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_opcode__v0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_opcode__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_source__v0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_source__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_15__DOT__ram_tl_state_size_MPORT_en) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_15__DOT__ram_tl_state_source__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ram_tl_state_source_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_15__DOT__ram_tl_state_source__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_15__DOT__ram_tl_state_size__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ram_tl_state_size_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_15__DOT__ram_tl_state_size__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_15__DOT__ram_extra_id__v0 
            = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id) 
                     >> 4U));
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_15__DOT__ram_extra_id__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_14__DOT__ram_tl_state_size_MPORT_en) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_14__DOT__ram_tl_state_source__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ram_tl_state_source_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_14__DOT__ram_tl_state_source__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_14__DOT__ram_tl_state_size__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ram_tl_state_size_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_14__DOT__ram_tl_state_size__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_14__DOT__ram_extra_id__v0 
            = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id) 
                     >> 4U));
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_14__DOT__ram_extra_id__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_13__DOT__ram_tl_state_size_MPORT_en) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_13__DOT__ram_tl_state_source__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ram_tl_state_source_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_13__DOT__ram_tl_state_source__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_13__DOT__ram_tl_state_size__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ram_tl_state_size_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_13__DOT__ram_tl_state_size__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_13__DOT__ram_extra_id__v0 
            = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id) 
                     >> 4U));
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_13__DOT__ram_extra_id__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_12__DOT__ram_tl_state_size_MPORT_en) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_12__DOT__ram_tl_state_source__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ram_tl_state_source_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_12__DOT__ram_tl_state_source__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_12__DOT__ram_tl_state_size__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ram_tl_state_size_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_12__DOT__ram_tl_state_size__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_12__DOT__ram_extra_id__v0 
            = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id) 
                     >> 4U));
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_12__DOT__ram_extra_id__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_11__DOT__ram_tl_state_size_MPORT_en) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_11__DOT__ram_tl_state_source__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ram_tl_state_source_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_11__DOT__ram_tl_state_source__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_11__DOT__ram_tl_state_size__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ram_tl_state_size_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_11__DOT__ram_tl_state_size__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_11__DOT__ram_extra_id__v0 
            = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id) 
                     >> 4U));
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_11__DOT__ram_extra_id__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_10__DOT__ram_tl_state_size_MPORT_en) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_10__DOT__ram_tl_state_source__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ram_tl_state_source_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_10__DOT__ram_tl_state_source__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_10__DOT__ram_tl_state_size__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ram_tl_state_size_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_10__DOT__ram_tl_state_size__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_10__DOT__ram_extra_id__v0 
            = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id) 
                     >> 4U));
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_10__DOT__ram_extra_id__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__ram_id_MPORT_en) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__ram_echo_real_last__v0 
            = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__len));
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__ram_echo_real_last__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__ram_echo_real_last__v0 
            = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__value;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__ram_addr__v0 
            = (~ ((~ vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__addr) 
                  | (7U & (~ ((IData)(7U) << (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_io_deq_bits_size))))));
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__ram_addr__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__ram_addr__v0 
            = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__value;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__ram_id_MPORT_en) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__ram_data__v0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__ram_data_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__ram_data__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__ram_resp__v0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__ram_resp_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__ram_resp__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__ram_id_MPORT_en) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__ram_echo_real_last__v0 
            = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__len_1));
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__ram_echo_real_last__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__ram_echo_real_last__v0 
            = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__value;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__ram_addr__v0 
            = (~ ((~ vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__addr_1) 
                  | (7U & (~ ((IData)(7U) << (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1_io_deq_bits_size))))));
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__ram_addr__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__ram_addr__v0 
            = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__value;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T) {
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_burst__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_size__v0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_size__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_len__v0 
            = (0xffU & (~ (0xffU & (((IData)(0x7ffU) 
                                     << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)) 
                                    >> 3U))));
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_len__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_size__v0 
            = ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size))
                ? 3U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size));
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_size__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id__v0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_9__DOT__ram_tl_state_size_MPORT_en) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_9__DOT__ram_tl_state_source__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ram_tl_state_source_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_9__DOT__ram_tl_state_source__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_9__DOT__ram_tl_state_size__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ram_tl_state_size_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_9__DOT__ram_tl_state_size__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_9__DOT__ram_extra_id__v0 
            = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id) 
                     >> 4U));
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_9__DOT__ram_extra_id__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_8__DOT__ram_tl_state_size_MPORT_en) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_8__DOT__ram_tl_state_source__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ram_tl_state_source_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_8__DOT__ram_tl_state_source__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_8__DOT__ram_tl_state_size__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ram_tl_state_size_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_8__DOT__ram_tl_state_size__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_8__DOT__ram_extra_id__v0 
            = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id) 
                     >> 4U));
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_8__DOT__ram_extra_id__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_7__DOT__ram_tl_state_size_MPORT_en) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_7__DOT__ram_tl_state_source__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ram_tl_state_source_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_7__DOT__ram_tl_state_source__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_7__DOT__ram_tl_state_size__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ram_tl_state_size_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_7__DOT__ram_tl_state_size__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_7__DOT__ram_extra_id__v0 
            = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id) 
                     >> 4U));
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_7__DOT__ram_extra_id__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_opcode_MPORT_en) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_param__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_param_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_param__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___c_first_T) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__ram_param__v0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__ram_param_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__ram_param__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__ram_id_MPORT_en) {
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__ram_echo_extra_id__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__ram_id_MPORT_en) {
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__ram_echo_extra_id__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_MPORT_en) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_MPORT_addr;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_MPORT_en) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data__v0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data__v0 = 1U;
        vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data__v0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_MPORT_addr;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_31__DOT__ram_tl_state_size_MPORT_en) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_31__DOT__ram_tl_state_size__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__ram_tl_state_size_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_31__DOT__ram_tl_state_size__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_31__DOT__ram_extra_id__v0 
            = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id) 
                     >> 4U));
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_31__DOT__ram_extra_id__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_30__DOT__ram_tl_state_size_MPORT_en) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_30__DOT__ram_tl_state_size__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__ram_tl_state_size_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_30__DOT__ram_tl_state_size__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_30__DOT__ram_extra_id__v0 
            = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id) 
                     >> 4U));
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_30__DOT__ram_extra_id__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_29__DOT__ram_tl_state_size_MPORT_en) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_29__DOT__ram_tl_state_size__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__ram_tl_state_size_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_29__DOT__ram_tl_state_size__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_29__DOT__ram_extra_id__v0 
            = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id) 
                     >> 4U));
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_29__DOT__ram_extra_id__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_28__DOT__ram_tl_state_size_MPORT_en) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_28__DOT__ram_tl_state_size__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__ram_tl_state_size_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_28__DOT__ram_tl_state_size__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_28__DOT__ram_extra_id__v0 
            = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id) 
                     >> 4U));
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_28__DOT__ram_extra_id__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_27__DOT__ram_tl_state_size_MPORT_en) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_27__DOT__ram_tl_state_size__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__ram_tl_state_size_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_27__DOT__ram_tl_state_size__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_27__DOT__ram_extra_id__v0 
            = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id) 
                     >> 4U));
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_27__DOT__ram_extra_id__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_26__DOT__ram_tl_state_size_MPORT_en) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_26__DOT__ram_tl_state_size__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__ram_tl_state_size_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_26__DOT__ram_tl_state_size__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_26__DOT__ram_extra_id__v0 
            = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id) 
                     >> 4U));
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_26__DOT__ram_extra_id__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_15__DOT__ram_tl_state_size_MPORT_en) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_15__DOT__ram_tl_state_size__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__ram_tl_state_size_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_15__DOT__ram_tl_state_size__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_15__DOT__ram_extra_id__v0 
            = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id) 
                     >> 4U));
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_15__DOT__ram_extra_id__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_14__DOT__ram_tl_state_size_MPORT_en) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_14__DOT__ram_tl_state_size__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__ram_tl_state_size_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_14__DOT__ram_tl_state_size__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_14__DOT__ram_extra_id__v0 
            = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id) 
                     >> 4U));
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_14__DOT__ram_extra_id__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_13__DOT__ram_tl_state_size_MPORT_en) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_13__DOT__ram_tl_state_size__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__ram_tl_state_size_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_13__DOT__ram_tl_state_size__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_13__DOT__ram_extra_id__v0 
            = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id) 
                     >> 4U));
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_13__DOT__ram_extra_id__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_12__DOT__ram_tl_state_size_MPORT_en) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_12__DOT__ram_tl_state_size__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__ram_tl_state_size_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_12__DOT__ram_tl_state_size__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_12__DOT__ram_extra_id__v0 
            = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id) 
                     >> 4U));
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_12__DOT__ram_extra_id__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_11__DOT__ram_tl_state_size_MPORT_en) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_11__DOT__ram_tl_state_size__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__ram_tl_state_size_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_11__DOT__ram_tl_state_size__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_11__DOT__ram_extra_id__v0 
            = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id) 
                     >> 4U));
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_11__DOT__ram_extra_id__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_10__DOT__ram_tl_state_size_MPORT_en) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_10__DOT__ram_tl_state_size__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__ram_tl_state_size_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_10__DOT__ram_tl_state_size__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_10__DOT__ram_extra_id__v0 
            = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id) 
                     >> 4U));
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_10__DOT__ram_extra_id__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_25__DOT__ram_tl_state_size_MPORT_en) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_25__DOT__ram_tl_state_size__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__ram_tl_state_size_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_25__DOT__ram_tl_state_size__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_25__DOT__ram_extra_id__v0 
            = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id) 
                     >> 4U));
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_25__DOT__ram_extra_id__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_24__DOT__ram_tl_state_size_MPORT_en) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_24__DOT__ram_tl_state_size__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__ram_tl_state_size_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_24__DOT__ram_tl_state_size__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_24__DOT__ram_extra_id__v0 
            = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id) 
                     >> 4U));
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_24__DOT__ram_extra_id__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_23__DOT__ram_tl_state_size_MPORT_en) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_23__DOT__ram_tl_state_size__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__ram_tl_state_size_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_23__DOT__ram_tl_state_size__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_23__DOT__ram_extra_id__v0 
            = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id) 
                     >> 4U));
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_23__DOT__ram_extra_id__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_9__DOT__ram_tl_state_size_MPORT_en) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_9__DOT__ram_tl_state_size__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__ram_tl_state_size_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_9__DOT__ram_tl_state_size__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_9__DOT__ram_extra_id__v0 
            = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id) 
                     >> 4U));
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_9__DOT__ram_extra_id__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_8__DOT__ram_tl_state_size_MPORT_en) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_8__DOT__ram_tl_state_size__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__ram_tl_state_size_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_8__DOT__ram_tl_state_size__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_8__DOT__ram_extra_id__v0 
            = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id) 
                     >> 4U));
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_8__DOT__ram_extra_id__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__ram_tl_state_size_MPORT_en) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__ram_tl_state_size__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__ram_tl_state_size_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__ram_tl_state_size__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__ram_extra_id__v0 
            = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_id) 
                     >> 4U));
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__ram_extra_id__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_31__DOT__ram_tl_state_size_MPORT_en) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_31__DOT__ram_tl_state_size__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ram_tl_state_size_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_31__DOT__ram_tl_state_size__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_31__DOT__ram_extra_id__v0 
            = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id) 
                     >> 4U));
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_31__DOT__ram_extra_id__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_30__DOT__ram_tl_state_size_MPORT_en) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_30__DOT__ram_tl_state_size__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ram_tl_state_size_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_30__DOT__ram_tl_state_size__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_30__DOT__ram_extra_id__v0 
            = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id) 
                     >> 4U));
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_30__DOT__ram_extra_id__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_29__DOT__ram_tl_state_size_MPORT_en) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_29__DOT__ram_tl_state_size__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ram_tl_state_size_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_29__DOT__ram_tl_state_size__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_29__DOT__ram_extra_id__v0 
            = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id) 
                     >> 4U));
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_29__DOT__ram_extra_id__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_28__DOT__ram_tl_state_size_MPORT_en) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_28__DOT__ram_tl_state_size__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ram_tl_state_size_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_28__DOT__ram_tl_state_size__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_28__DOT__ram_extra_id__v0 
            = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id) 
                     >> 4U));
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_28__DOT__ram_extra_id__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_27__DOT__ram_tl_state_size_MPORT_en) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_27__DOT__ram_tl_state_size__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ram_tl_state_size_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_27__DOT__ram_tl_state_size__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_27__DOT__ram_extra_id__v0 
            = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id) 
                     >> 4U));
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_27__DOT__ram_extra_id__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_26__DOT__ram_tl_state_size_MPORT_en) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_26__DOT__ram_tl_state_size__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ram_tl_state_size_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_26__DOT__ram_tl_state_size__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_26__DOT__ram_extra_id__v0 
            = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id) 
                     >> 4U));
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_26__DOT__ram_extra_id__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_25__DOT__ram_tl_state_size_MPORT_en) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_25__DOT__ram_tl_state_size__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ram_tl_state_size_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_25__DOT__ram_tl_state_size__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_25__DOT__ram_extra_id__v0 
            = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id) 
                     >> 4U));
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_25__DOT__ram_extra_id__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_24__DOT__ram_tl_state_size_MPORT_en) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_24__DOT__ram_tl_state_size__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ram_tl_state_size_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_24__DOT__ram_tl_state_size__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_24__DOT__ram_extra_id__v0 
            = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id) 
                     >> 4U));
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_24__DOT__ram_extra_id__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_23__DOT__ram_tl_state_size_MPORT_en) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_23__DOT__ram_tl_state_size__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ram_tl_state_size_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_23__DOT__ram_tl_state_size__v0 = 1U;
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_23__DOT__ram_extra_id__v0 
            = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_id) 
                     >> 4U));
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_23__DOT__ram_extra_id__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT__ram_id_MPORT_en) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT__ram_echo_tl_state_size__v0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT__ram_echo_tl_state_size__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq__DOT__ram_id_MPORT_en) {
        vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq__DOT__ram_resp__v0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__ram_resp_MPORT_data;
        vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq__DOT__ram_resp__v0 = 1U;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu_reset) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__lfsr = 1U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__lfsr = 1U;
    } else {
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__lfsr 
            = ((0x8000U & (VL_REDXOR_8((0x2dU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__lfsr))) 
                           << 0xfU)) | (0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__lfsr) 
                                                   >> 1U)));
        vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__lfsr 
            = ((0x8000U & (VL_REDXOR_8((0x2dU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__lfsr))) 
                           << 0xfU)) | (0x7fffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__lfsr) 
                                                   >> 1U)));
    }
    if (((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT___T_1) 
         & (0U == (0x80000000U & (0x80000000U ^ vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__ram_addr_io_deq_bits_MPORT_data))))) {
        if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__ram_strb_io_deq_bits_MPORT_data))) {
            vlSelf->__Vdlyvval__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v0 
                = (0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__ram_data_io_deq_bits_MPORT_data));
            vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v0 = 1U;
            vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v0 = 0U;
            vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v0 
                = (0xfffffffU & (vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__ram_addr_io_deq_bits_MPORT_data 
                                 >> 3U));
        }
        if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__ram_strb_io_deq_bits_MPORT_data))) {
            vlSelf->__Vdlyvval__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v1 
                = (0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__ram_data_io_deq_bits_MPORT_data 
                                    >> 8U)));
            vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v1 = 1U;
            vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v1 = 8U;
            vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v1 
                = (0xfffffffU & (vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__ram_addr_io_deq_bits_MPORT_data 
                                 >> 3U));
        }
        if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__ram_strb_io_deq_bits_MPORT_data))) {
            vlSelf->__Vdlyvval__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v2 
                = (0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__ram_data_io_deq_bits_MPORT_data 
                                    >> 0x10U)));
            vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v2 = 1U;
            vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v2 = 0x10U;
            vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v2 
                = (0xfffffffU & (vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__ram_addr_io_deq_bits_MPORT_data 
                                 >> 3U));
        }
        if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__ram_strb_io_deq_bits_MPORT_data))) {
            vlSelf->__Vdlyvval__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v3 
                = (0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__ram_data_io_deq_bits_MPORT_data 
                                    >> 0x18U)));
            vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v3 = 1U;
            vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v3 = 0x18U;
            vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v3 
                = (0xfffffffU & (vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__ram_addr_io_deq_bits_MPORT_data 
                                 >> 3U));
        }
        if ((0x10U & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__ram_strb_io_deq_bits_MPORT_data))) {
            vlSelf->__Vdlyvval__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v4 
                = (0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__ram_data_io_deq_bits_MPORT_data 
                                    >> 0x20U)));
            vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v4 = 1U;
            vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v4 = 0x20U;
            vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v4 
                = (0xfffffffU & (vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__ram_addr_io_deq_bits_MPORT_data 
                                 >> 3U));
        }
        if ((0x20U & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__ram_strb_io_deq_bits_MPORT_data))) {
            vlSelf->__Vdlyvval__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v5 
                = (0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__ram_data_io_deq_bits_MPORT_data 
                                    >> 0x28U)));
            vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v5 = 1U;
            vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v5 = 0x28U;
            vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v5 
                = (0xfffffffU & (vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__ram_addr_io_deq_bits_MPORT_data 
                                 >> 3U));
        }
        if ((0x40U & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__ram_strb_io_deq_bits_MPORT_data))) {
            vlSelf->__Vdlyvval__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v6 
                = (0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__ram_data_io_deq_bits_MPORT_data 
                                    >> 0x30U)));
            vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v6 = 1U;
            vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v6 = 0x30U;
            vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v6 
                = (0xfffffffU & (vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__ram_addr_io_deq_bits_MPORT_data 
                                 >> 3U));
        }
        if ((0x80U & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__ram_strb_io_deq_bits_MPORT_data))) {
            vlSelf->__Vdlyvval__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v7 
                = (0xffU & (IData)((vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__ram_data_io_deq_bits_MPORT_data 
                                    >> 0x38U)));
            vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v7 = 1U;
            vlSelf->__Vdlyvlsb__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v7 = 0x38U;
            vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v7 
                = (0xfffffffU & (vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__ram_addr_io_deq_bits_MPORT_data 
                                 >> 3U));
        }
    }
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__16(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__16\n"); );
    // Init
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__spiFlash__DOT__cmd;
    __Vdly__ysyxSoCFull__DOT__spiFlash__DOT__cmd = 0;
    QData/*63:0*/ __Vdly__ysyxSoCFull__DOT__spiFlash__DOT__data;
    __Vdly__ysyxSoCFull__DOT__spiFlash__DOT__data = 0;
    // Body
    __Vdly__ysyxSoCFull__DOT__spiFlash__DOT__cmd = vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__cmd;
    vlSelf->__Vdly__ysyxSoCFull__DOT__spiFlash__DOT__counter 
        = vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__spiFlash__DOT__data = vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__data;
    vlSelf->__Vdly__ysyxSoCFull__DOT__spiFlash__DOT__addr 
        = vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__addr;
    vlSelf->__Vdly__ysyxSoCFull__DOT__spiFlash__DOT__state 
        = vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__state;
    if (vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__reset) {
        __Vdly__ysyxSoCFull__DOT__spiFlash__DOT__cmd = 0U;
        vlSelf->__Vdly__ysyxSoCFull__DOT__spiFlash__DOT__counter = 0U;
        __Vdly__ysyxSoCFull__DOT__spiFlash__DOT__data = 0ULL;
        vlSelf->__Vdly__ysyxSoCFull__DOT__spiFlash__DOT__addr = 0U;
    } else {
        if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__state))) {
            __Vdly__ysyxSoCFull__DOT__spiFlash__DOT__cmd 
                = (1U | (0xfeU & ((IData)(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__cmd) 
                                  << 1U)));
            vlSelf->__Vdly__ysyxSoCFull__DOT__spiFlash__DOT__counter 
                = (0xffU & ((7U > (IData)(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__counter))
                             ? ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__counter))
                             : 0U));
        } else {
            vlSelf->__Vdly__ysyxSoCFull__DOT__spiFlash__DOT__counter 
                = (0xffU & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__state))
                             ? ((0x17U > (IData)(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__counter))
                                 ? ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__counter))
                                 : 0U) : ((IData)(1U) 
                                          + (IData)(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__counter))));
        }
        if (((1U == (IData)(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__state)) 
             & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__counter)))) {
            __Vdly__ysyxSoCFull__DOT__spiFlash__DOT__data 
                = (((QData)((IData)((((IData)(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__rdata) 
                                      << 0x18U) | (
                                                   (0xff0000U 
                                                    & ((IData)(
                                                               (vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__rdata 
                                                                >> 8U)) 
                                                       << 0x10U)) 
                                                   | ((0xff00U 
                                                       & ((IData)(
                                                                  (vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__rdata 
                                                                   >> 0x10U)) 
                                                          << 8U)) 
                                                      | (0xffU 
                                                         & (IData)(
                                                                   (vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__rdata 
                                                                    >> 0x18U)))))))) 
                    << 0x20U) | (QData)((IData)((((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__rdata 
                                                           >> 0x20U)) 
                                                  << 0x18U) 
                                                 | ((0xff0000U 
                                                     & ((IData)(
                                                                (vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__rdata 
                                                                 >> 0x28U)) 
                                                        << 0x10U)) 
                                                    | ((0xff00U 
                                                        & ((IData)(
                                                                   (vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__rdata 
                                                                    >> 0x30U)) 
                                                           << 8U)) 
                                                       | (0xffU 
                                                          & (IData)(
                                                                    (vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__rdata 
                                                                     >> 0x38U)))))))));
        } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__state))) {
            __Vdly__ysyxSoCFull__DOT__spiFlash__DOT__data 
                = ((vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__data 
                    << 1U) | (QData)((IData)((1U & (IData)(
                                                           (vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__data 
                                                            >> 0x3fU))))));
        }
        if (((1U == (IData)(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__state)) 
             & (0x16U > (IData)(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__counter)))) {
            vlSelf->__Vdly__ysyxSoCFull__DOT__spiFlash__DOT__addr 
                = (1U | (0x3ffffeU & (vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__addr 
                                      << 1U)));
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__reset) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__spiFlash__DOT__state = 0U;
    } else if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__state))) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__spiFlash__DOT__state 
            = ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__counter))
                ? 1U : (IData)(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__state));
    } else if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__state))) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__spiFlash__DOT__state 
            = ((3U != (IData)(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__cmd))
                ? 3U : ((0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__counter))
                         ? 2U : (IData)(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__state)));
    } else if (VL_LIKELY((2U == (IData)(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__state)))) {
        vlSelf->__Vdly__ysyxSoCFull__DOT__spiFlash__DOT__state 
            = vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__state;
    } else {
        VL_FWRITEF(0x80000002U,"Assertion failed: only support `03h` read command\n");
        vlSelf->__Vdly__ysyxSoCFull__DOT__spiFlash__DOT__state 
            = vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__state;
        VL_WRITEF("[%0t] %%Fatal: spiFlash.v:47: Assertion failed in %NysyxSoCFull.spiFlash\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/perip/spiFlash/spiFlash.v", 47, "");
    }
    vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__data = __Vdly__ysyxSoCFull__DOT__spiFlash__DOT__data;
    vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__cmd = __Vdly__ysyxSoCFull__DOT__spiFlash__DOT__cmd;
}

void VysyxSoCFull___024unit____Vdpiimwrap_ps2_read_TOP____024unit(CData/*7:0*/ &dat);
extern const VlUnpacked<CData/*0:0*/, 2048> VysyxSoCFull__ConstPool__TABLE_he9a8fcb9_0;
extern const VlUnpacked<CData/*3:0*/, 64> VysyxSoCFull__ConstPool__TABLE_hb2209b71_0;
extern const VlUnpacked<CData/*3:0*/, 4> VysyxSoCFull__ConstPool__TABLE_h1ddc50bd_0;
extern const VlUnpacked<CData/*7:0*/, 256> VysyxSoCFull__ConstPool__TABLE_h143b7803_0;
extern const VlUnpacked<SData/*9:0*/, 256> VysyxSoCFull__ConstPool__TABLE_h89ed0f95_0;

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__17(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__17\n"); );
    // Init
    CData/*7:0*/ __Vtask_ps2_read__2__dat;
    __Vtask_ps2_read__2__dat = 0;
    SData/*10:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*5:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r = 0;
    SData/*15:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd = 0;
    CData/*2:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 0;
    CData/*4:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0;
    CData/*6:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor = 0;
    CData/*2:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0;
    CData/*4:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0;
    CData/*2:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b = 0;
    SData/*9:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0;
    CData/*4:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0;
    CData/*3:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0;
    CData/*2:0*/ __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0;
    CData/*3:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 = 0;
    CData/*3:0*/ __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0;
    CData/*2:0*/ __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0;
    CData/*0:0*/ __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0;
    SData/*12:0*/ __Vdly__ysyxSoCFull__DOT__kdb__DOT__cnt;
    __Vdly__ysyxSoCFull__DOT__kdb__DOT__cnt = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__kdb__DOT__clk_div;
    __Vdly__ysyxSoCFull__DOT__kdb__DOT__clk_div = 0;
    CData/*7:0*/ __Vdly__ysyxSoCFull__DOT__kdb__DOT__rec_dat;
    __Vdly__ysyxSoCFull__DOT__kdb__DOT__rec_dat = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__kdb__DOT__kdb_clk_sync;
    __Vdly__ysyxSoCFull__DOT__kdb__DOT__kdb_clk_sync = 0;
    CData/*1:0*/ __Vdly__ysyxSoCFull__DOT__kdb__DOT__state;
    __Vdly__ysyxSoCFull__DOT__kdb__DOT__state = 0;
    CData/*3:0*/ __Vdly__ysyxSoCFull__DOT__kdb__DOT__send_cnt;
    __Vdly__ysyxSoCFull__DOT__kdb__DOT__send_cnt = 0;
    // Body
    __Vdly__ysyxSoCFull__DOT__kdb__DOT__kdb_clk_sync 
        = vlSelf->ysyxSoCFull__DOT__kdb__DOT__kdb_clk_sync;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset;
    __Vdly__ysyxSoCFull__DOT__kdb__DOT__clk_div = vlSelf->ysyxSoCFull__DOT__kdb__DOT__clk_div;
    __Vdly__ysyxSoCFull__DOT__kdb__DOT__cnt = vlSelf->ysyxSoCFull__DOT__kdb__DOT__cnt;
    __Vdly__ysyxSoCFull__DOT__kdb__DOT__send_cnt = vlSelf->ysyxSoCFull__DOT__kdb__DOT__send_cnt;
    __Vdly__ysyxSoCFull__DOT__kdb__DOT__state = vlSelf->ysyxSoCFull__DOT__kdb__DOT__state;
    __Vdly__ysyxSoCFull__DOT__kdb__DOT__rec_dat = vlSelf->ysyxSoCFull__DOT__kdb__DOT__rec_dat;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r;
    vlSelf->__Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__ridx_ridx_bin 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__ridx_ridx_bin;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__ridx_ridx_bin 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__ridx_ridx_bin;
    vlSelf->__Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__ridx_ridx_bin 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__ridx_ridx_bin;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__ridx_ridx_bin 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__ridx_ridx_bin;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 = 0U;
    __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 0U;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count;
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__kdb__DOT__dat = 0U;
    } else {
        VysyxSoCFull___024unit____Vdpiimwrap_ps2_read_TOP____024unit(__Vtask_ps2_read__2__dat);
        vlSelf->ysyxSoCFull__DOT__kdb__DOT__dat = __Vtask_ps2_read__2__dat;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r 
        = (1U & ((IData)(vlSelf->reset) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write)
                                            ? 0U : 
                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6) 
                                               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7) 
                                                      & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d)))))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r 
        = (1U & ((IData)(vlSelf->reset) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write)
                                            ? 0U : 
                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5) 
                                               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : (1U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                                      | (((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                                          >> 2U) 
                                                         & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : (1U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                      | ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                                         & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : (1U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                      | (((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                                          >> 1U) 
                                                         & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d))))))));
    vlSelf->__Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__ridx_ridx_bin 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__ridx_ridx_bin) 
                                            + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink_io_deq_valid))));
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__ridx_ridx_bin 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__ridx_ridx_bin) 
                                            + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink_io_deq_valid))));
    vlSelf->__Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__ridx_ridx_bin 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__ridx_ridx_bin) 
                                            + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink_io_deq_valid))));
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__ridx_ridx_bin 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__ridx_ridx_bin) 
                                            + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink_io_deq_valid))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((((1U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)) 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)) 
                                                 & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse))) 
                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset))
                                                ? 0U
                                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0) 
                                                      & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d)))))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read)
                                                ? 0U
                                                : (
                                                   ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd) 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
                                                       >> 3U))))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read)
                                                ? 0U
                                                : (
                                                   ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : (
                                                   ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd) 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
                                                       >> 2U))))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count) 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level)) 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read))
                                                ? 0U
                                                : (
                                                   ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd 
        = (1U & ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read) 
                                                   & (2U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir))))
                                                ? 0U
                                                : (
                                                   ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd) 
                                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
                                                       >> 1U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask)
                                                ? 0U
                                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun) 
                                                      & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    __Vtableidx6 = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read) 
                     << 0xaU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd) 
                                  << 9U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read) 
                                             << 8U) 
                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write) 
                                                << 7U) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd) 
                                                   << 6U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read) 
                                                      << 5U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd) 
                                                         << 4U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd) 
                                                            << 3U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask) 
                                                               << 2U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelf->reset)))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt 
        = VysyxSoCFull__ConstPool__TABLE_he9a8fcb9_0
        [__Vtableidx6];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__valid_reg 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx) 
                                            != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray_io_q))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__valid_reg 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx) 
                                            != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray_io_q))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__valid_reg 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx) 
                                            != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray_io_q))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__valid_reg 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx) 
                                            != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray_io_q))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__valid_reg 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx) 
                                            != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray_io_q))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__valid_reg 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx) 
                                            != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray_io_q))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__valid_reg 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__ridx_incremented) 
                                            != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__valid_reg 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__ridx_incremented) 
                                            != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__valid_reg 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__ridx_incremented) 
                                            != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__valid_reg 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__ridx_incremented) 
                                            != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__valid_reg 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx) 
                                            != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray_io_q))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__valid_reg 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx) 
                                            != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray_io_q))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__valid_reg 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx) 
                                            != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray_io_q))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__valid_reg 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx) 
                                            != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray_io_q))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1));
    if (vlSelf->reset) {
        __Vdly__ysyxSoCFull__DOT__kdb__DOT__kdb_clk_sync = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = 1U;
        __Vdly__ysyxSoCFull__DOT__kdb__DOT__cnt = 0U;
        __Vdly__ysyxSoCFull__DOT__kdb__DOT__clk_div = 0U;
        __Vdly__ysyxSoCFull__DOT__kdb__DOT__rec_dat = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b = 0x9fU;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t = 0x27fU;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count = 0U;
        __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0 = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in = 0U;
        __Vdly__ysyxSoCFull__DOT__kdb__DOT__state = 0U;
        __Vdly__ysyxSoCFull__DOT__kdb__DOT__send_cnt = 0U;
        vlSelf->ysyxSoCFull__DOT__kdb__DOT__send_val = 1U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_ridx_bin = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_ridx_bin = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_ridx_bin = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_ridx_bin = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_ridx_bin = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_ridx_bin = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_ridx_bin = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_ridx_bin = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr = 3U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_ridx_bin = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_ridx_bin = 0U;
    } else {
        __Vdly__ysyxSoCFull__DOT__kdb__DOT__kdb_clk_sync 
            = ((2U & ((IData)(vlSelf->ysyxSoCFull__DOT__kdb__DOT__kdb_clk_sync) 
                      << 1U)) | (IData)(vlSelf->ysyxSoCFull__DOT__kdb__DOT__clk_div));
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = 0U;
        } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset = 1U;
        }
        if ((1U > (IData)(vlSelf->ysyxSoCFull__DOT__kdb__DOT__cnt))) {
            __Vdly__ysyxSoCFull__DOT__kdb__DOT__cnt 
                = (0x1fffU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__kdb__DOT__cnt)));
            __Vdly__ysyxSoCFull__DOT__kdb__DOT__clk_div 
                = vlSelf->ysyxSoCFull__DOT__kdb__DOT__clk_div;
        } else {
            __Vdly__ysyxSoCFull__DOT__kdb__DOT__clk_div 
                = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__kdb__DOT__clk_div)));
            __Vdly__ysyxSoCFull__DOT__kdb__DOT__cnt = 0U;
        }
        if (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__kdb__DOT__dat)) 
             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__kdb__DOT__state)))) {
            __Vdly__ysyxSoCFull__DOT__kdb__DOT__rec_dat 
                = vlSelf->ysyxSoCFull__DOT__kdb__DOT__dat;
        }
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr 
            = ((0xf0U & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr)) 
               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset)
                   ? 0U : (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr) 
                                   | (0xeU ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals))))));
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr 
            = ((0xfU & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr)) 
               | (((IData)((0x18U == (0x18U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr)))) 
                   << 7U) | (((IData)((0x14U == (0x14U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr)))) 
                              << 6U) | (((IData)((0x11U 
                                                  == 
                                                  (0x11U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr)))) 
                                         << 5U) | ((IData)(
                                                           (0x10U 
                                                            != 
                                                            (0x12U 
                                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr)))) 
                                                   << 4U)))));
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = 0U;
        } else if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
                     & (0U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_in_paddr))) 
                    & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                          >> 7U)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop = 1U;
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
                = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                            >> 2U));
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable) 
                    & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
                = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b) 
                            - (IData)(1U)));
        }
        if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)) 
             | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value;
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable) 
                    & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t 
                = (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t) 
                             - (IData)(1U)));
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value;
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable) 
                    & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
                = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt) 
                            - (IData)(1U)));
        }
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc 
            = (0xffffU & ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc) 
                                 | (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc))))))
                           ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                              - (IData)(1U)) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc) 
                                                - (IData)(1U))));
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top = 0U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom = 0U;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count = 0U;
            __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16 = 1U;
        } else if ((2U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)))) {
            if ((0x10U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)));
                __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 
                    = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in));
                __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 = 1U;
                __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1;
            }
        } else if ((1U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)))) {
            if ((0U < (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count))) {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count 
                    = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count) 
                                - (IData)(1U)));
                __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 = 1U;
                __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom)));
            }
        } else if ((3U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
                            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom)));
            __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 
                = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in));
            __Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 = 1U;
            __Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1;
        }
        if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__kdb__DOT__state))) {
            if ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__kdb__DOT__dat))) {
                __Vdly__ysyxSoCFull__DOT__kdb__DOT__state = 1U;
            }
        } else if (((1U == (IData)(vlSelf->ysyxSoCFull__DOT__kdb__DOT__state)) 
                    & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__kdb__DOT__kdb_clk_sync)))) {
            if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__kdb__DOT__send_cnt))) {
                __Vdly__ysyxSoCFull__DOT__kdb__DOT__send_cnt 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__kdb__DOT__send_cnt)));
                vlSelf->ysyxSoCFull__DOT__kdb__DOT__send_val = 0U;
            } else if ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__kdb__DOT__send_cnt))) {
                __Vdly__ysyxSoCFull__DOT__kdb__DOT__send_cnt 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__kdb__DOT__send_cnt)));
                vlSelf->ysyxSoCFull__DOT__kdb__DOT__send_val 
                    = (1U & (~ VL_REDXOR_8(vlSelf->ysyxSoCFull__DOT__kdb__DOT__rec_dat)));
            } else if ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__kdb__DOT__send_cnt))) {
                vlSelf->ysyxSoCFull__DOT__kdb__DOT__send_val = 1U;
                __Vdly__ysyxSoCFull__DOT__kdb__DOT__state = 0U;
                __Vdly__ysyxSoCFull__DOT__kdb__DOT__send_cnt = 0U;
                __Vdly__ysyxSoCFull__DOT__kdb__DOT__rec_dat = 0U;
            } else {
                vlSelf->ysyxSoCFull__DOT__kdb__DOT__send_val 
                    = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__kdb__DOT__rec_dat) 
                             >> (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__kdb__DOT__send_cnt) 
                                       - (IData)(1U)))));
                __Vdly__ysyxSoCFull__DOT__kdb__DOT__send_cnt 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__kdb__DOT__send_cnt)));
            }
        }
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_ridx_bin 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___ridx_incremented_T_1)
                : 0U);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_ridx_bin 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___ridx_incremented_T_1)
                : 0U);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_ridx_bin 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___ridx_incremented_T_1)
                : 0U);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_ridx_bin 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___ridx_incremented_T_1)
                : 0U);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_ridx_bin 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___ridx_incremented_T_1)
                : 0U);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_ridx_bin 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___ridx_incremented_T_1)
                : 0U);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_ridx_bin 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT___ridx_incremented_T_1)
                : 0U);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_ridx_bin 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT___ridx_incremented_T_1)
                : 0U);
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (2U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_in_paddr)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr 
                = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in) 
                         >> 6U));
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (7U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_in_paddr)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in;
        }
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_ridx_bin 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT___ridx_incremented_T_1)
                : 0U);
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset) 
             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun = 0U;
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push) 
                    & (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun = 1U;
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_ridx_bin 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT___ridx_incremented_T_1)
                : 0U);
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count = 0U;
    } else if ((2U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push) 
                        << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop)))) {
        if (VL_UNLIKELY((0x10U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count)))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count)));
            VL_WRITEF("%c",8,vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in);
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1;
        }
    } else if ((1U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push) 
                        << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop)))) {
        if ((0U < (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count))) {
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom)));
            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count 
                = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count) 
                            - (IData)(1U)));
        }
    } else if (VL_UNLIKELY((3U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push) 
                                    << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop))))) {
        VL_WRITEF("%c",8,vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in);
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1;
    }
    vlSelf->ysyxSoCFull__DOT__kdb__DOT__cnt = __Vdly__ysyxSoCFull__DOT__kdb__DOT__cnt;
    vlSelf->ysyxSoCFull__DOT__kdb__DOT__clk_div = __Vdly__ysyxSoCFull__DOT__kdb__DOT__clk_div;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top;
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xaU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xbU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xcU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xdU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xeU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xfU] = 0U;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v16) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xaU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xbU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xcU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xdU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xeU] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0xfU] = 0U;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32] 
            = __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v32;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v33] = 0U;
    }
    if (__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34] 
            = __Vdlyvval__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo__v34;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom;
    vlSelf->ysyxSoCFull__DOT__kdb__DOT__send_cnt = __Vdly__ysyxSoCFull__DOT__kdb__DOT__send_cnt;
    vlSelf->ysyxSoCFull__DOT__kdb__DOT__kdb_clk_sync 
        = __Vdly__ysyxSoCFull__DOT__kdb__DOT__kdb_clk_sync;
    vlSelf->ysyxSoCFull__DOT__kdb__DOT__rec_dat = __Vdly__ysyxSoCFull__DOT__kdb__DOT__rec_dat;
    vlSelf->ysyxSoCFull__DOT__kdb__DOT__state = __Vdly__ysyxSoCFull__DOT__kdb__DOT__state;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                         >> 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d 
        = (1U & ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                               >> 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    __Vtableidx7 = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd) 
                     << 5U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd) 
                                << 4U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd) 
                                           << 3U) | 
                                          (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int) 
                                            << 2U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd) 
                                               << 1U) 
                                              | (IData)(vlSelf->reset))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir 
        = VysyxSoCFull__ConstPool__TABLE_hb2209b71_0
        [__Vtableidx7];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
                                          & (0U == 
                                             (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_in_paddr))) 
                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                            >> 7U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lps2__DOT__mps2_ps2_dat 
        = ((1U != (IData)(vlSelf->ysyxSoCFull__DOT__kdb__DOT__state)) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__kdb__DOT__send_val));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0 
        = vlSelf->reset;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray_io_q 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
             << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                       << 2U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                   << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray_io_q 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
             << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                       << 2U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                   << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray_io_q 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
             << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                       << 2U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                   << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray_io_q 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
             << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                       << 2U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                   << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray_io_q 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
             << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                       << 2U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                   << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray_io_q 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
             << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                       << 2U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                   << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray_io_q 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
             << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                       << 2U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                   << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray_io_q 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
             << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                       << 2U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                   << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray_io_q 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
             << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                       << 2U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                   << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray_io_q 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_0) 
             << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_0) 
                       << 2U)) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_0) 
                                   << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->__Vtableidx4 = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level 
        = VysyxSoCFull__ConstPool__TABLE_h1ddc50bd_0
        [vlSelf->__Vtableidx4];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top_plus_1 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
                                          & (2U == 
                                             (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_in_paddr))) 
                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in) 
                                            >> 2U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
                                          & (0U == 
                                             (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_in_paddr))) 
                                         & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                               >> 7U))));
    vlSelf->__VdfgTmp_ha17ae98a__0 = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
        [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd;
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals = 0xeU;
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (4U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_in_paddr)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr 
                = (0x1fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in));
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (1U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_in_paddr)))) {
            if ((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                          >> 7U)))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier 
                    = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in));
            }
        }
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable) {
            if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0U;
                } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0U;
                    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b)))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in 
                            = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))
                                ? 4U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                         << 3U) | (
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error))));
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 1U;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0U;
                    } else if ((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error)))) {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in 
                            = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                << 3U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error) 
                                           << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error)));
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 1U;
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 1U;
                    }
                } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 4U;
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                    } else {
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                    }
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
                        = (1U & (VL_REDXOR_8(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                 ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity)));
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 5U;
                }
            } else if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                        if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter))) {
                            if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 3U;
                            } else {
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 4U;
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error = 0U;
                            }
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
                                = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter) 
                                         - (IData)(1U)));
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 2U;
                        }
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                    } else {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
                            = ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                    ? 7U : 6U) : ((1U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                   ? 5U
                                                   : 4U));
                        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0) {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 2U;
                            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift = 0U;
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 6U;
                        }
                        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                    }
                } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error 
                        = (1U & ((0x10U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                  ? ((0x20U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity)
                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor))
                                  : ((0x20U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                      ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity))
                                      : (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor)))));
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 9U;
                } else {
                    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error 
                            = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in)));
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 0xaU;
                    }
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                }
            } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity 
                            = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 8U;
                    }
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                } else {
                    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                        if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                            if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
                                    = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                        << 7U) | (0x7fU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                                     >> 1U)));
                            } else {
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
                                    = ((0x80U & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                           << 6U) | 
                                          (0x3fU & 
                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                            >> 1U))));
                            }
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
                                = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                    ? ((0xc0U & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                           << 5U) | 
                                          (0x1fU & 
                                           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                            >> 1U))))
                                    : ((0xe0U & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift)) 
                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in) 
                                           << 4U) | 
                                          (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift) 
                                                   >> 1U)))));
                        }
                    }
                    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 7U;
                    }
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
                }
            } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 0U;
                if (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate 
                        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in)
                            ? 0U : 6U);
                }
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1;
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16 = 0xeU;
                if (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in)) 
                     & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b)))) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate = 1U;
                }
            }
            if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 0U;
                } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 1U;
                    if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                        if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 7U;
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                                = (1U & VL_REDXOR_8(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out));
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 6U;
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                                = (1U & VL_REDXOR_32(
                                                     (0x7fU 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out))));
                        }
                    } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 5U;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                            = (1U & VL_REDXOR_32((0x3fU 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out))));
                    } else {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter = 4U;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
                            = (1U & VL_REDXOR_32((0x1fU 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out))));
                    }
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
                        = (0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out) 
                                    >> 1U));
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
                        = (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out));
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 1U;
                } else {
                    if ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 0U;
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                                = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                            - (IData)(1U)));
                        }
                    } else {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                            = ((0U == (4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)))
                                ? 0xdU : ((4U == (7U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)))
                                           ? 0x15U : 0x1dU));
                    }
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
                }
            } else if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                    if ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 4U;
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                                = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                            - (IData)(1U)));
                        }
                    } else {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0xfU;
                    }
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
                } else {
                    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp 
                        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
                    if ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                            if ((0U < (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter))) {
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter 
                                    = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter) 
                                             - (IData)(1U)));
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
                                    = ((0x40U & (IData)(__Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out)) 
                                       | (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out) 
                                                   >> 1U)));
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
                                    = (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out));
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 2U;
                            } else if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
                                    = (1U & ((0x10U 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                              ? ((~ 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                                   >> 5U)) 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor))
                                              : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                                  >> 5U) 
                                                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor)))));
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 3U;
                            } else {
                                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 4U;
                            }
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                        } else {
                            __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                                = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                            - (IData)(1U)));
                        }
                    } else {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0xfU;
                    }
                }
            } else if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
                if ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                    if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter))) {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0U;
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 2U;
                    } else {
                        __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
                            = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter) 
                                        - (IData)(1U)));
                    }
                } else {
                    __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter = 0xfU;
                }
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 0U;
            } else if ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 5U;
            } else {
                __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp = 1U;
            }
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop = 0U;
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b 
            = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 3U) & (0U != (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
            >> 2U) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray) 
                                         >> 3U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray) 
                                               >> 2U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray) 
                                               >> 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray) 
                                         >> 3U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray) 
                                               >> 2U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray) 
                                               >> 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray) 
                                         >> 3U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray) 
                                               >> 2U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray) 
                                               >> 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray) 
                                         >> 3U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray) 
                                               >> 2U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray) 
                                               >> 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray) 
                                         >> 3U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray) 
                                               >> 2U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray) 
                                               >> 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray) 
                                         >> 3U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray) 
                                               >> 2U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray) 
                                               >> 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray) 
                                         >> 3U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray) 
                                               >> 2U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray) 
                                               >> 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray) 
                                         >> 3U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray) 
                                               >> 2U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray) 
                                               >> 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray) 
                                         >> 3U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray) 
                                               >> 2U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray) 
                                               >> 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray) 
                                         >> 3U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray) 
                                               >> 2U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray) 
                                               >> 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__valid_reg));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__valid_reg));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_e_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__valid_reg));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_e_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__valid_reg));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__valid_reg));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__valid_reg));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__valid_reg));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__valid_reg));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__valid_reg));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_7 
        = (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_minus_1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                   - (IData)(1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16_eq_0 
        = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__valid_reg));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher_1__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelf->reset)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5 
        = ((~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable 
        = ((~ (IData)(vlSelf->reset)) & ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc))))));
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl 
            = (0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl 
            = (0xff00U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr = 3U;
    } else {
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset) 
             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun = 0U;
        } else if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop))) 
                    & (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun = 1U;
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (1U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_in_paddr)))) {
            if ((0x80U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl 
                    = ((0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)) 
                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in) 
                          << 8U));
            }
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (0U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_in_paddr)))) {
            if ((0x80U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl 
                    = ((0xff00U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)) 
                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in));
            }
        }
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
             & (3U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_in_paddr)))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in;
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7 
        = ((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                   [0U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                           [1U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                   [2U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                           [3U] | (
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                   [4U] 
                                                   | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                      [5U] 
                                                      | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                         [6U] 
                                                         | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                            [7U] 
                                                            | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                               [8U] 
                                                               | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                  [9U] 
                                                                  | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                     [0xaU] 
                                                                     | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                        [0xbU] 
                                                                        | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                           [0xcU] 
                                                                           | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                              [0xdU] 
                                                                              | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xeU] 
                                                                                | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                                [0xfU])))))))))))))))) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count) 
              >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t)) 
              & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
                                          & (2U == 
                                             (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_in_paddr))) 
                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in) 
                                            >> 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_gray));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_gray));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_gray));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_gray));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->__Vtableidx5 = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value 
        = VysyxSoCFull__ConstPool__TABLE_h143b7803_0
        [vlSelf->__Vtableidx5];
    vlSelf->__Vtableidx8 = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value 
        = VysyxSoCFull__ConstPool__TABLE_h89ed0f95_0
        [vlSelf->__Vtableidx8];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in 
        = ((0x10U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))
            ? ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                   >> 6U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp))
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
}
