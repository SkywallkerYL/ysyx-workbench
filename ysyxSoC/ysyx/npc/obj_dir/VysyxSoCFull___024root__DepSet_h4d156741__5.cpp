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

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__5(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__5\n"); );
    // Init
    VlWide<16>/*511:0*/ __Vtemp_ha9df3433__0;
    VlWide<16>/*511:0*/ __Vtemp_ha9df3433__1;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__0;
    VlWide<4>/*127:0*/ __Vtemp_he6dd0bd7__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__1;
    VlWide<4>/*127:0*/ __Vtemp_habcb8e0c__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__2;
    VlWide<4>/*127:0*/ __Vtemp_h6382d14d__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__3;
    VlWide<4>/*127:0*/ __Vtemp_h54e43528__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__4;
    VlWide<4>/*127:0*/ __Vtemp_hf96ea6f8__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__5;
    VlWide<4>/*127:0*/ __Vtemp_h7cd84dd7__0;
    VlWide<4>/*127:0*/ __Vtemp_hde54ef72__0;
    VlWide<4>/*127:0*/ __Vtemp_hde54ef72__1;
    VlWide<4>/*127:0*/ __Vtemp_h4cbfda60__0;
    VlWide<4>/*127:0*/ __Vtemp_h4cbfda60__1;
    VlWide<16>/*511:0*/ __Vtemp_h00554ccc__0;
    VlWide<16>/*511:0*/ __Vtemp_h00554ccc__1;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__6;
    VlWide<4>/*127:0*/ __Vtemp_hde7418b3__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__7;
    VlWide<4>/*127:0*/ __Vtemp_h4db0db2b__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__8;
    VlWide<4>/*127:0*/ __Vtemp_hab503110__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__9;
    VlWide<4>/*127:0*/ __Vtemp_h1e54f44f__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__10;
    VlWide<4>/*127:0*/ __Vtemp_h5a6df6c3__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__11;
    VlWide<4>/*127:0*/ __Vtemp_h398f39a3__0;
    VlWide<4>/*127:0*/ __Vtemp_ha03db4db__0;
    VlWide<4>/*127:0*/ __Vtemp_ha03db4db__1;
    VlWide<4>/*127:0*/ __Vtemp_h7d72c3a2__0;
    VlWide<4>/*127:0*/ __Vtemp_h7d72c3a2__1;
    VlWide<16>/*511:0*/ __Vtemp_hb2150cf0__0;
    VlWide<16>/*511:0*/ __Vtemp_hb2150cf0__1;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__12;
    VlWide<4>/*127:0*/ __Vtemp_h95a90dde__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__13;
    VlWide<4>/*127:0*/ __Vtemp_h52b462c7__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__14;
    VlWide<4>/*127:0*/ __Vtemp_h59965f33__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__15;
    VlWide<4>/*127:0*/ __Vtemp_h33e584cb__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__16;
    VlWide<4>/*127:0*/ __Vtemp_h7a722066__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__17;
    VlWide<4>/*127:0*/ __Vtemp_h3804401c__0;
    VlWide<4>/*127:0*/ __Vtemp_h14a41a0a__0;
    VlWide<4>/*127:0*/ __Vtemp_h14a41a0a__1;
    VlWide<4>/*127:0*/ __Vtemp_h83485c8b__0;
    VlWide<4>/*127:0*/ __Vtemp_h83485c8b__1;
    VlWide<16>/*511:0*/ __Vtemp_h04312ac7__0;
    VlWide<16>/*511:0*/ __Vtemp_h04312ac7__1;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__18;
    VlWide<4>/*127:0*/ __Vtemp_h7b0b71e6__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__19;
    VlWide<4>/*127:0*/ __Vtemp_he1fc8017__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__20;
    VlWide<4>/*127:0*/ __Vtemp_h3da4c2a6__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__21;
    VlWide<4>/*127:0*/ __Vtemp_h4a2f6d03__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__22;
    VlWide<4>/*127:0*/ __Vtemp_h25f84395__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__23;
    VlWide<4>/*127:0*/ __Vtemp_h8d643c26__0;
    VlWide<4>/*127:0*/ __Vtemp_h80be5bbf__0;
    VlWide<4>/*127:0*/ __Vtemp_h80be5bbf__1;
    VlWide<4>/*127:0*/ __Vtemp_h69a74f1a__0;
    VlWide<4>/*127:0*/ __Vtemp_h69a74f1a__1;
    VlWide<32>/*1023:0*/ __Vtemp_hc1f49eb6__0;
    VlWide<32>/*1023:0*/ __Vtemp_hc1f49eb6__1;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__24;
    VlWide<4>/*127:0*/ __Vtemp_ha5f920b9__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__25;
    VlWide<4>/*127:0*/ __Vtemp_h0419571f__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__26;
    VlWide<4>/*127:0*/ __Vtemp_h0e9fde5a__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__27;
    VlWide<4>/*127:0*/ __Vtemp_h8c79153a__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__28;
    VlWide<4>/*127:0*/ __Vtemp_h785ee83a__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__29;
    VlWide<4>/*127:0*/ __Vtemp_h61088775__0;
    VlWide<4>/*127:0*/ __Vtemp_hb02b2f71__0;
    VlWide<4>/*127:0*/ __Vtemp_hb02b2f71__1;
    VlWide<4>/*127:0*/ __Vtemp_h8cb72aa6__0;
    VlWide<4>/*127:0*/ __Vtemp_h8cb72aa6__1;
    VlWide<32>/*1023:0*/ __Vtemp_haec0dc5e__0;
    VlWide<32>/*1023:0*/ __Vtemp_haec0dc5e__1;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__30;
    VlWide<4>/*127:0*/ __Vtemp_h626b04b1__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__31;
    VlWide<4>/*127:0*/ __Vtemp_hbadad5b6__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__32;
    VlWide<4>/*127:0*/ __Vtemp_h1e94e357__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__33;
    VlWide<4>/*127:0*/ __Vtemp_h872a5f31__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__34;
    VlWide<4>/*127:0*/ __Vtemp_hcaf3b8de__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__35;
    VlWide<4>/*127:0*/ __Vtemp_h36dd92cc__0;
    // Body
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2396)) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2385) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_2))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:153:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2396)) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2385) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_2))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:61859: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 61859, "");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2396)) 
                      & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2385) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_2)))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (7U & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                               >> 1U)))
                                  ? 4U : ((6U == (7U 
                                                  & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                     >> 1U)))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_58)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (7U & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                 >> 1U)))
                                    ? 4U : ((6U == 
                                             (7U & 
                                              ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                               >> 1U)))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_58))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:153:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2396)) 
                      & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2385) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_2)))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (7U & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                               >> 1U)))
                                  ? 4U : ((6U == (7U 
                                                  & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                     >> 1U)))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_58)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (7U & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                 >> 1U)))
                                    ? 4U : ((6U == 
                                             (7U & 
                                              ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                               >> 1U)))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_58))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:61883: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 61883, "");
    }
    VL_SHIFTR_WWI(512,512,9, __Vtemp_ha9df3433__0, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2396)) 
                      & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2385) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_2)))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_size) 
                            == (0xfU & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                         & __Vtemp_ha9df3433__0[0U]) 
                                        >> 1U))) | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:153:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(512,512,9, __Vtemp_ha9df3433__1, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2396)) 
                      & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2385) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_2)))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_size) 
                            == (0xfU & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                         & __Vtemp_ha9df3433__1[0U]) 
                                        >> 1U))) | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:61907: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 61907, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2396) 
                      & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                            & (IData)(vlSelf->__VdfgTmp_ha9d053bc__0)))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_ready)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor_io_in_a_ready)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2396) 
                      & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                            & (IData)(vlSelf->__VdfgTmp_ha9d053bc__0)))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_ready)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor_io_in_a_ready)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:61929: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 61929, "");
    }
    __Vtemp_hd2b6c582__0[0U] = 1U;
    __Vtemp_hd2b6c582__0[1U] = 0U;
    __Vtemp_hd2b6c582__0[2U] = 0U;
    __Vtemp_hd2b6c582__0[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_he6dd0bd7__0, __Vtemp_hd2b6c582__0, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_source));
    __Vtemp_hd2b6c582__1[0U] = 1U;
    __Vtemp_hd2b6c582__1[1U] = 0U;
    __Vtemp_hd2b6c582__1[2U] = 0U;
    __Vtemp_hd2b6c582__1[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_habcb8e0c__0, __Vtemp_hd2b6c582__1, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_source));
    __Vtemp_hd2b6c582__2[0U] = 1U;
    __Vtemp_hd2b6c582__2[1U] = 0U;
    __Vtemp_hd2b6c582__2[2U] = 0U;
    __Vtemp_hd2b6c582__2[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h6382d14d__0, __Vtemp_hd2b6c582__2, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2385) 
                                  & ((0U != (((__Vtemp_he6dd0bd7__0[0U] 
                                               | __Vtemp_he6dd0bd7__0[1U]) 
                                              | __Vtemp_he6dd0bd7__0[2U]) 
                                             | __Vtemp_he6dd0bd7__0[3U])) 
                                     & (0U == ((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2385)
                                                    ? 
                                                   __Vtemp_habcb8e0c__0[0U]
                                                    : 0U) 
                                                  ^ 
                                                  (((6U 
                                                     != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2396))
                                                    ? 
                                                   __Vtemp_h6382d14d__0[0U]
                                                    : 0U)) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2385)
                                                      ? 
                                                     __Vtemp_habcb8e0c__0[1U]
                                                      : 0U) 
                                                    ^ 
                                                    (((6U 
                                                       != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2396))
                                                      ? 
                                                     __Vtemp_h6382d14d__0[1U]
                                                      : 0U))) 
                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2385)
                                                     ? 
                                                    __Vtemp_habcb8e0c__0[2U]
                                                     : 0U) 
                                                   ^ 
                                                   (((6U 
                                                      != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2396))
                                                     ? 
                                                    __Vtemp_h6382d14d__0[2U]
                                                     : 0U))) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2385)
                                                    ? 
                                                   __Vtemp_habcb8e0c__0[3U]
                                                    : 0U) 
                                                  ^ 
                                                  (((6U 
                                                     != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2396))
                                                    ? 
                                                   __Vtemp_h6382d14d__0[3U]
                                                    : 0U))))))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 1 (connected at ChipLinkBridge.scala:153:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    __Vtemp_hd2b6c582__3[0U] = 1U;
    __Vtemp_hd2b6c582__3[1U] = 0U;
    __Vtemp_hd2b6c582__3[2U] = 0U;
    __Vtemp_hd2b6c582__3[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h54e43528__0, __Vtemp_hd2b6c582__3, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_source));
    __Vtemp_hd2b6c582__4[0U] = 1U;
    __Vtemp_hd2b6c582__4[1U] = 0U;
    __Vtemp_hd2b6c582__4[2U] = 0U;
    __Vtemp_hd2b6c582__4[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hf96ea6f8__0, __Vtemp_hd2b6c582__4, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_source));
    __Vtemp_hd2b6c582__5[0U] = 1U;
    __Vtemp_hd2b6c582__5[1U] = 0U;
    __Vtemp_hd2b6c582__5[2U] = 0U;
    __Vtemp_hd2b6c582__5[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h7cd84dd7__0, __Vtemp_hd2b6c582__5, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2385) 
                                  & ((0U != (((__Vtemp_h54e43528__0[0U] 
                                               | __Vtemp_h54e43528__0[1U]) 
                                              | __Vtemp_h54e43528__0[2U]) 
                                             | __Vtemp_h54e43528__0[3U])) 
                                     & (0U == ((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2385)
                                                    ? 
                                                   __Vtemp_hf96ea6f8__0[0U]
                                                    : 0U) 
                                                  ^ 
                                                  (((6U 
                                                     != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2396))
                                                    ? 
                                                   __Vtemp_h7cd84dd7__0[0U]
                                                    : 0U)) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2385)
                                                      ? 
                                                     __Vtemp_hf96ea6f8__0[1U]
                                                      : 0U) 
                                                    ^ 
                                                    (((6U 
                                                       != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2396))
                                                      ? 
                                                     __Vtemp_h7cd84dd7__0[1U]
                                                      : 0U))) 
                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2385)
                                                     ? 
                                                    __Vtemp_hf96ea6f8__0[2U]
                                                     : 0U) 
                                                   ^ 
                                                   (((6U 
                                                      != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2396))
                                                     ? 
                                                    __Vtemp_h7cd84dd7__0[2U]
                                                     : 0U))) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2385)
                                                    ? 
                                                   __Vtemp_hf96ea6f8__0[3U]
                                                    : 0U) 
                                                  ^ 
                                                  (((6U 
                                                     != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2396))
                                                    ? 
                                                   __Vtemp_h7cd84dd7__0[3U]
                                                    : 0U))))))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:61953: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 61953, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)((0U != ((
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight[0U] 
                                                    | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight[1U]) 
                                                   | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight[2U]) 
                                                  | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight[3U])))) 
                               | ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus) 
                                  | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__watchdog 
                                     < vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:153:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)((0U != ((
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight[0U] 
                                                    | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight[1U]) 
                                                   | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight[2U]) 
                                                  | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight[3U])))) 
                               | ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus) 
                                  | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__watchdog 
                                     < vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:61977: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 61977, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp_hde54ef72__0, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_1, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2478) 
                     & (~ ((~ __Vtemp_hde54ef72__0[0U]) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel re-used a source ID (connected at ChipLinkBridge.scala:153:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp_hde54ef72__1, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_1, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2478) 
                     & (~ ((~ __Vtemp_hde54ef72__1[0U]) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:62001: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 62001, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp_h4cbfda60__0, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_1, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2485) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((__Vtemp_h4cbfda60__0[0U] 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2472) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___same_cycle_resp_T_8))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:153:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp_h4cbfda60__1, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_1, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2485) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((__Vtemp_h4cbfda60__1[0U] 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2472) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___same_cycle_resp_T_8))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:62025: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 62025, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2485) 
                       & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2472) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___same_cycle_resp_T_8))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:153:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2485) 
                       & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2472) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___same_cycle_resp_T_8))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:62049: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 62049, "");
    }
    VL_SHIFTR_WWI(512,512,9, __Vtemp_h00554ccc__0, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2485) 
                       & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2472) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___same_cycle_resp_T_8)))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_size) 
                            == (0xfU & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                         & __Vtemp_h00554ccc__0[0U]) 
                                        >> 1U))) | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:153:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(512,512,9, __Vtemp_h00554ccc__1, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2485) 
                       & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2472) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___same_cycle_resp_T_8)))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_size) 
                            == (0xfU & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                         & __Vtemp_h00554ccc__1[0U]) 
                                        >> 1U))) | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:62073: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 62073, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2485) 
                      & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1)) 
                         & (IData)(vlSelf->__VdfgTmp_hca581437__0))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_ready)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_ready)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2485) 
                      & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1)) 
                         & (IData)(vlSelf->__VdfgTmp_hca581437__0))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_ready)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_ready)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:62095: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 62095, "");
    }
    __Vtemp_hd2b6c582__6[0U] = 1U;
    __Vtemp_hd2b6c582__6[1U] = 0U;
    __Vtemp_hd2b6c582__6[2U] = 0U;
    __Vtemp_hd2b6c582__6[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hde7418b3__0, __Vtemp_hd2b6c582__6, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    __Vtemp_hd2b6c582__7[0U] = 1U;
    __Vtemp_hd2b6c582__7[1U] = 0U;
    __Vtemp_hd2b6c582__7[2U] = 0U;
    __Vtemp_hd2b6c582__7[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h4db0db2b__0, __Vtemp_hd2b6c582__7, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    __Vtemp_hd2b6c582__8[0U] = 1U;
    __Vtemp_hd2b6c582__8[1U] = 0U;
    __Vtemp_hd2b6c582__8[2U] = 0U;
    __Vtemp_hd2b6c582__8[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hab503110__0, __Vtemp_hd2b6c582__8, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2472) 
                      & (0U != (((__Vtemp_hde7418b3__0[0U] 
                                  | __Vtemp_hde7418b3__0[1U]) 
                                 | __Vtemp_hde7418b3__0[2U]) 
                                | __Vtemp_hde7418b3__0[3U]))) 
                     & (~ ((0U != ((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2472)
                                        ? __Vtemp_h4db0db2b__0[0U]
                                        : 0U) ^ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2485) 
                                                  & (6U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                  ? 
                                                 __Vtemp_hab503110__0[0U]
                                                  : 0U)) 
                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2472)
                                          ? __Vtemp_h4db0db2b__0[1U]
                                          : 0U) ^ (
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2485) 
                                                    & (6U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                    ? 
                                                   __Vtemp_hab503110__0[1U]
                                                    : 0U))) 
                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2472)
                                         ? __Vtemp_h4db0db2b__0[2U]
                                         : 0U) ^ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2485) 
                                                   & (6U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                   ? 
                                                  __Vtemp_hab503110__0[2U]
                                                   : 0U))) 
                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2472)
                                        ? __Vtemp_h4db0db2b__0[3U]
                                        : 0U) ^ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2485) 
                                                  & (6U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                  ? 
                                                 __Vtemp_hab503110__0[3U]
                                                  : 0U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' and 'D' concurrent, despite minlatency 1 (connected at ChipLinkBridge.scala:153:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    __Vtemp_hd2b6c582__9[0U] = 1U;
    __Vtemp_hd2b6c582__9[1U] = 0U;
    __Vtemp_hd2b6c582__9[2U] = 0U;
    __Vtemp_hd2b6c582__9[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1e54f44f__0, __Vtemp_hd2b6c582__9, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    __Vtemp_hd2b6c582__10[0U] = 1U;
    __Vtemp_hd2b6c582__10[1U] = 0U;
    __Vtemp_hd2b6c582__10[2U] = 0U;
    __Vtemp_hd2b6c582__10[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h5a6df6c3__0, __Vtemp_hd2b6c582__10, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    __Vtemp_hd2b6c582__11[0U] = 1U;
    __Vtemp_hd2b6c582__11[1U] = 0U;
    __Vtemp_hd2b6c582__11[2U] = 0U;
    __Vtemp_hd2b6c582__11[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h398f39a3__0, __Vtemp_hd2b6c582__11, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2472) 
                      & (0U != (((__Vtemp_h1e54f44f__0[0U] 
                                  | __Vtemp_h1e54f44f__0[1U]) 
                                 | __Vtemp_h1e54f44f__0[2U]) 
                                | __Vtemp_h1e54f44f__0[3U]))) 
                     & (~ ((0U != ((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2472)
                                        ? __Vtemp_h5a6df6c3__0[0U]
                                        : 0U) ^ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2485) 
                                                  & (6U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                  ? 
                                                 __Vtemp_h398f39a3__0[0U]
                                                  : 0U)) 
                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2472)
                                          ? __Vtemp_h5a6df6c3__0[1U]
                                          : 0U) ^ (
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2485) 
                                                    & (6U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                    ? 
                                                   __Vtemp_h398f39a3__0[1U]
                                                    : 0U))) 
                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2472)
                                         ? __Vtemp_h5a6df6c3__0[2U]
                                         : 0U) ^ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2485) 
                                                   & (6U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                   ? 
                                                  __Vtemp_h398f39a3__0[2U]
                                                   : 0U))) 
                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2472)
                                        ? __Vtemp_h5a6df6c3__0[3U]
                                        : 0U) ^ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2485) 
                                                  & (6U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                  ? 
                                                 __Vtemp_h398f39a3__0[3U]
                                                  : 0U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:62119: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 62119, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)((0U != ((
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_1[0U] 
                                                    | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_1[1U]) 
                                                   | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_1[2U]) 
                                                  | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_1[3U])))) 
                               | ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus) 
                                  | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__watchdog_1 
                                     < vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:153:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)((0U != ((
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_1[0U] 
                                                    | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_1[1U]) 
                                                   | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_1[2U]) 
                                                  | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_1[3U])))) 
                               | ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus) 
                                  | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__watchdog_1 
                                     < vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:62143: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 62143, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2543) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_2)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel re-used a sink ID (connected at ChipLinkBridge.scala:153:79)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2543) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_2)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:62167: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 62167, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2554) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2543) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_2)) 
                            >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_e_bits_sink)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'E' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:153:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2554) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2543) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_2)) 
                            >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_e_bits_sink)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:62191: Assertion failed in %NysyxSoCFull.asic.chipMaster.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 62191, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_in_wready) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__bundleOut_0_wvalid))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__w_todo))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Fragmenter.scala:169 assert (!out.w.fire() || w_todo =/= UInt(0)) // underflow impossible\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_in_wready) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__bundleOut_0_wvalid))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__w_todo))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:40864: Assertion failed in %NysyxSoCFull.fpga.axi4frag\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 40864, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__bundleOut_0_wvalid)) 
                                | (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__in_wdeq__DOT__maybe_full) 
                                      & vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__in_wdeq__DOT__ram_last
                                      [0U]))) | (1U 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__w_todo))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Fragmenter.scala:178 assert (!out.w.valid || !in_w.bits.last || w_last)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__bundleOut_0_wvalid)) 
                                | (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__in_wdeq__DOT__maybe_full) 
                                      & vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__in_wdeq__DOT__ram_last
                                      [0U]))) | (1U 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__w_todo))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:40887: Assertion failed in %NysyxSoCFull.fpga.axi4frag\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 40887, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__earlyWinner_0)) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__earlyWinner_1))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:105 assert((prefixOR zip earlyWinner) map { case (p,w) => !p || !w } reduce {_ && _})\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__earlyWinner_0)) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__earlyWinner_1))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:120383: Assertion failed in %NysyxSoCFull.fpga.atomics\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 120383, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_s_0_state)) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_i_valid))) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__earlyWinner_0) 
                                  | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__earlyWinner_1))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:107 assert (!earlyValids.reduce(_||_) || earlyWinner.reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_s_0_state)) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_i_valid))) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__earlyWinner_0) 
                                  | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__earlyWinner_1))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:120407: Assertion failed in %NysyxSoCFull.fpga.atomics\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 120407, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_s_0_state)) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_i_valid))) 
                               | ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_s_0_state)) 
                                  | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_i_valid))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:108 assert (!validQuals .reduce(_||_) || validQuals .reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_s_0_state)) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_i_valid))) 
                               | ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_s_0_state)) 
                                  | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_i_valid))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:120431: Assertion failed in %NysyxSoCFull.fpga.atomics\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 120431, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size))) 
                               & (0U == (0x1000U & 
                                         (0x1000U ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size))) 
                               & (0U == (0x1000U & 
                                         (0x1000U ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:137290: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 137290, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___T_242) 
                            & (0U == (0x1000U & (0x1000U 
                                                 ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___T_242) 
                            & (0U == (0x1000U & (0x1000U 
                                                 ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:137314: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 137314, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:137338: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 137338, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((3U <= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((3U <= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:137362: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 137362, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data 
                                            & (~ ((IData)(0x3fU) 
                                                  << 
                                                  (7U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data 
                                            & (~ ((IData)(0x3fU) 
                                                  << 
                                                  (7U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:137386: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 137386, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:137410: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 137410, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__ram_strb_MPORT_data)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__ram_strb_MPORT_data)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:137434: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 137434, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:137458: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 137458, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size))) 
                               & (0U == (0x1000U & 
                                         (0x1000U ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size))) 
                               & (0U == (0x1000U & 
                                         (0x1000U ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:137482: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 137482, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___T_242) 
                            & (0U == (0x1000U & (0x1000U 
                                                 ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___T_242) 
                            & (0U == (0x1000U & (0x1000U 
                                                 ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:137506: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 137506, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:137530: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 137530, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((3U <= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((3U <= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:137554: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 137554, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data 
                                            & (~ ((IData)(0x3fU) 
                                                  << 
                                                  (7U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data 
                                            & (~ ((IData)(0x3fU) 
                                                  << 
                                                  (7U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:137578: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 137578, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:137602: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 137602, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:137626: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 137626, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__ram_strb_MPORT_data)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__ram_strb_MPORT_data)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:137650: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 137650, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:137674: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 137674, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:137698: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 137698, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((6U >= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size))) 
                            & (0U == (0x1000U & (0x1000U 
                                                 ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((6U >= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size))) 
                            & (0U == (0x1000U & (0x1000U 
                                                 ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:137722: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 137722, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:137746: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 137746, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data 
                                            & (~ ((IData)(0x3fU) 
                                                  << 
                                                  (7U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data 
                                            & (~ ((IData)(0x3fU) 
                                                  << 
                                                  (7U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:137770: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 137770, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:137794: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 137794, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__ram_strb_MPORT_data) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__ram_strb_MPORT_data) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:137818: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 137818, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:137842: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 137842, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size))) 
                               & (0U == (0x1000U & 
                                         (0x1000U ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size))) 
                               & (0U == (0x1000U & 
                                         (0x1000U ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:137866: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 137866, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:137890: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 137890, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data 
                                            & (~ ((IData)(0x3fU) 
                                                  << 
                                                  (7U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data 
                                            & (~ ((IData)(0x3fU) 
                                                  << 
                                                  (7U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:137914: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 137914, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:137938: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 137938, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__ram_strb_MPORT_data) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__ram_strb_MPORT_data) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:137962: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 137962, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size))) 
                               & (0U == (0x1000U & 
                                         (0x1000U ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size))) 
                               & (0U == (0x1000U & 
                                         (0x1000U ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:137986: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 137986, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:138010: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 138010, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data 
                                            & (~ ((IData)(0x3fU) 
                                                  << 
                                                  (7U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data 
                                            & (~ ((IData)(0x3fU) 
                                                  << 
                                                  (7U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:138034: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 138034, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:138058: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 138058, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__mask)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__ram_strb_MPORT_data))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__mask)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__ram_strb_MPORT_data))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:138082: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 138082, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size))) 
                               & (0U == (0x1000U & 
                                         (0x1000U ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size))) 
                               & (0U == (0x1000U & 
                                         (0x1000U ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:138106: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 138106, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:138130: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 138130, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data 
                                            & (~ ((IData)(0x3fU) 
                                                  << 
                                                  (7U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data 
                                            & (~ ((IData)(0x3fU) 
                                                  << 
                                                  (7U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:138154: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 138154, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((4U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((4U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:138178: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 138178, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__ram_strb_MPORT_data) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__ram_strb_MPORT_data) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:138202: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 138202, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size))) 
                               & (0U == (0x1000U & 
                                         (0x1000U ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size))) 
                               & (0U == (0x1000U & 
                                         (0x1000U ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:138226: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 138226, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:138250: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 138250, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data 
                                            & (~ ((IData)(0x3fU) 
                                                  << 
                                                  (7U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data 
                                            & (~ ((IData)(0x3fU) 
                                                  << 
                                                  (7U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:138274: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 138274, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:138298: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 138298, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__ram_strb_MPORT_data) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__ram_strb_MPORT_data) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:138322: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 138322, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size))) 
                               & (0U == (0x1000U & 
                                         (0x1000U ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size))) 
                               & (0U == (0x1000U & 
                                         (0x1000U ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:138346: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 138346, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:138370: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 138370, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data 
                                            & (~ ((IData)(0x3fU) 
                                                  << 
                                                  (7U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data 
                                            & (~ ((IData)(0x3fU) 
                                                  << 
                                                  (7U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size))))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:138394: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 138394, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((1U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((1U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:138418: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 138418, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__ram_strb_MPORT_data) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__ram_strb_MPORT_data) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:138442: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 138442, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:138466: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 138466, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:138490: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 138490, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
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
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:138514: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 138514, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:138538: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 138538, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:138562: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 138562, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:138586: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 138586, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:138610: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 138610, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
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
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:138634: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 138634, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:138658: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 138658, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:138682: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 138682, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:138706: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 138706, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:138730: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 138730, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
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
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:138754: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 138754, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:138778: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 138778, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:138802: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 138802, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:138826: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 138826, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_denied)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_denied)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:138850: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 138850, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
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
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:138874: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 138874, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:138898: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 138898, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:138922: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 138922, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
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
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:138946: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 138946, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:138970: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 138970, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_denied)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_denied)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:138994: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 138994, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
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
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:139018: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 139018, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:139042: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 139042, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:139066: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 139066, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0x1000U & (0x1000U 
                                              ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_address)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries unmanaged address (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0x1000U & (0x1000U 
                                              ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_address)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:139090: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 139090, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck smaller than a beat (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:139138: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 139138, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_address) 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck address not aligned to size (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_address) 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:139162: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 139162, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid report param (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:139186: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 139186, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0x1000U & (0x1000U 
                                              ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_address)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries unmanaged address (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0x1000U & (0x1000U 
                                              ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_address)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:139210: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 139210, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData smaller than a beat (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:139258: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 139258, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_address) 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData address not aligned to size (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_address) 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:139282: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 139282, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries invalid report param (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:139306: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 139306, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_size)) 
                            & (0U == (0x1000U & (0x1000U 
                                                 ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release type unsupported by manager (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_size)) 
                            & (0U == (0x1000U & (0x1000U 
                                                 ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:139330: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 139330, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_size)) 
                            & (0U == (0x1000U & (0x1000U 
                                                 ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_size)) 
                            & (0U == (0x1000U & (0x1000U 
                                                 ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:139354: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 139354, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release smaller than a beat (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:139402: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 139402, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_address) 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release address not aligned to size (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_address) 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:139426: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 139426, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release carries invalid report param (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:139450: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 139450, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_size)) 
                            & (0U == (0x1000U & (0x1000U 
                                                 ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries ReleaseData type unsupported by manager (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_size)) 
                            & (0U == (0x1000U & (0x1000U 
                                                 ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:139474: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 139474, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_size)) 
                            & (0U == (0x1000U & (0x1000U 
                                                 ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_size)) 
                            & (0U == (0x1000U & (0x1000U 
                                                 ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:139498: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 139498, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData smaller than a beat (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:139546: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 139546, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_address) 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData address not aligned to size (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_address) 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:139570: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 139570, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData carries invalid report param (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:139594: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 139594, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0x1000U & (0x1000U 
                                              ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_address)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries unmanaged address (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0x1000U & (0x1000U 
                                              ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_address)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:139618: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 139618, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_address) 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck address not aligned to size (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_address) 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:139666: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 139666, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries invalid param (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:139690: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 139690, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0x1000U & (0x1000U 
                                              ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_address)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries unmanaged address (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0x1000U & (0x1000U 
                                              ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_address)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:139714: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 139714, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_address) 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData address not aligned to size (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_address) 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:139762: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 139762, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries invalid param (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:139786: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 139786, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0x1000U & (0x1000U 
                                              ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_address)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries unmanaged address (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0x1000U & (0x1000U 
                                              ^ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_address)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:139810: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 139810, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_address) 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck address not aligned to size (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_address) 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:139858: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 139858, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries invalid param (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:139882: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 139882, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:139906: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 139906, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:139930: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 139930, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid)) 
                     & (~ (((7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size)) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid)) 
                     & (~ (((7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size)) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:139954: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 139954, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:139978: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 139978, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__address) 
                            == (0x1fffU & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__address) 
                            == (0x1fffU & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:140002: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 140002, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:140026: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 140026, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__param_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__param_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:140050: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 140050, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:140074: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 140074, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:140098: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 140098, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__denied) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__denied) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:140122: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 140122, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__opcode_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__opcode_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:140146: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 140146, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__param_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__param_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:140170: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 140170, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__size_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__size_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:140194: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 140194, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid)) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                             << 1U) == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__source_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid)) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                             << 1U) == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__source_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:140218: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 140218, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__address_2) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_address)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel address changed with multibeat operation (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__address_2) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_address)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:140242: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 140242, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp_ha03db4db__0, vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data));
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2252) 
                     & (~ ((~ __Vtemp_ha03db4db__0[0U]) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp_ha03db4db__1, vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data));
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2252) 
                     & (~ ((~ __Vtemp_ha03db4db__1[0U]) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:140266: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 140266, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp_h7d72c3a2__0, vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2260)) 
                     & (~ ((__Vtemp_h7d72c3a2__0[0U] 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2249) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data) 
                                  == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp_h7d72c3a2__1, vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2260)) 
                     & (~ ((__Vtemp_h7d72c3a2__1[0U] 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2249) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data) 
                                  == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:140290: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 140290, "");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2260)) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2249) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode) 
                             == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___GEN_32)) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___GEN_40))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2260)) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2249) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode) 
                             == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___GEN_32)) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___GEN_40))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:140314: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 140314, "");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2260)) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2249) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ (((7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size)) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2260)) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2249) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ (((7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size)) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:140338: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 140338, "");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2260)) 
                      & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2249) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (7U & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                               >> 1U)))
                                  ? 4U : ((6U == (7U 
                                                  & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                      & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                     >> 1U)))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___GEN_58)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (7U & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                  & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                 >> 1U)))
                                    ? 4U : ((6U == 
                                             (7U & 
                                              ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                               >> 1U)))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___GEN_58))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2260)) 
                      & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2249) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (7U & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                               >> 1U)))
                                  ? 4U : ((6U == (7U 
                                                  & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                      & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                     >> 1U)))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___GEN_58)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (7U & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                  & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                 >> 1U)))
                                    ? 4U : ((6U == 
                                             (7U & 
                                              ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                               >> 1U)))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___GEN_58))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:140362: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 140362, "");
    }
    VL_SHIFTR_WWI(512,512,9, __Vtemp_hb2150cf0__0, vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2260)) 
                      & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2249) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_size) 
                            == (0xfU & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                         & __Vtemp_hb2150cf0__0[0U]) 
                                        >> 1U))) | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(512,512,9, __Vtemp_hb2150cf0__1, vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2260)) 
                      & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2249) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data) 
                               == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_size) 
                            == (0xfU & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                         & __Vtemp_hb2150cf0__1[0U]) 
                                        >> 1U))) | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:140386: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 140386, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2260) 
                      & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                            & ((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data) 
                                  == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source)))))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_ready)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_ready)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2260) 
                      & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
                            & ((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data) 
                                  == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source)))))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_ready)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_ready)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:140408: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 140408, "");
    }
    __Vtemp_hd2b6c582__12[0U] = 1U;
    __Vtemp_hd2b6c582__12[1U] = 0U;
    __Vtemp_hd2b6c582__12[2U] = 0U;
    __Vtemp_hd2b6c582__12[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h95a90dde__0, __Vtemp_hd2b6c582__12, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data));
    __Vtemp_hd2b6c582__13[0U] = 1U;
    __Vtemp_hd2b6c582__13[1U] = 0U;
    __Vtemp_hd2b6c582__13[2U] = 0U;
    __Vtemp_hd2b6c582__13[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h52b462c7__0, __Vtemp_hd2b6c582__13, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data));
    __Vtemp_hd2b6c582__14[0U] = 1U;
    __Vtemp_hd2b6c582__14[1U] = 0U;
    __Vtemp_hd2b6c582__14[2U] = 0U;
    __Vtemp_hd2b6c582__14[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h59965f33__0, __Vtemp_hd2b6c582__14, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2249) 
                                  & ((0U != (((__Vtemp_h95a90dde__0[0U] 
                                               | __Vtemp_h95a90dde__0[1U]) 
                                              | __Vtemp_h95a90dde__0[2U]) 
                                             | __Vtemp_h95a90dde__0[3U])) 
                                     & (0U == ((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2249)
                                                    ? 
                                                   __Vtemp_h52b462c7__0[0U]
                                                    : 0U) 
                                                  ^ 
                                                  (((6U 
                                                     != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2260))
                                                    ? 
                                                   __Vtemp_h59965f33__0[0U]
                                                    : 0U)) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2249)
                                                      ? 
                                                     __Vtemp_h52b462c7__0[1U]
                                                      : 0U) 
                                                    ^ 
                                                    (((6U 
                                                       != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)) 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2260))
                                                      ? 
                                                     __Vtemp_h59965f33__0[1U]
                                                      : 0U))) 
                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2249)
                                                     ? 
                                                    __Vtemp_h52b462c7__0[2U]
                                                     : 0U) 
                                                   ^ 
                                                   (((6U 
                                                      != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)) 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2260))
                                                     ? 
                                                    __Vtemp_h59965f33__0[2U]
                                                     : 0U))) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2249)
                                                    ? 
                                                   __Vtemp_h52b462c7__0[3U]
                                                    : 0U) 
                                                  ^ 
                                                  (((6U 
                                                     != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2260))
                                                    ? 
                                                   __Vtemp_h59965f33__0[3U]
                                                    : 0U))))))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 1 (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    __Vtemp_hd2b6c582__15[0U] = 1U;
    __Vtemp_hd2b6c582__15[1U] = 0U;
    __Vtemp_hd2b6c582__15[2U] = 0U;
    __Vtemp_hd2b6c582__15[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h33e584cb__0, __Vtemp_hd2b6c582__15, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data));
    __Vtemp_hd2b6c582__16[0U] = 1U;
    __Vtemp_hd2b6c582__16[1U] = 0U;
    __Vtemp_hd2b6c582__16[2U] = 0U;
    __Vtemp_hd2b6c582__16[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h7a722066__0, __Vtemp_hd2b6c582__16, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data));
    __Vtemp_hd2b6c582__17[0U] = 1U;
    __Vtemp_hd2b6c582__17[1U] = 0U;
    __Vtemp_hd2b6c582__17[2U] = 0U;
    __Vtemp_hd2b6c582__17[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h3804401c__0, __Vtemp_hd2b6c582__17, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2249) 
                                  & ((0U != (((__Vtemp_h33e584cb__0[0U] 
                                               | __Vtemp_h33e584cb__0[1U]) 
                                              | __Vtemp_h33e584cb__0[2U]) 
                                             | __Vtemp_h33e584cb__0[3U])) 
                                     & (0U == ((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2249)
                                                    ? 
                                                   __Vtemp_h7a722066__0[0U]
                                                    : 0U) 
                                                  ^ 
                                                  (((6U 
                                                     != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2260))
                                                    ? 
                                                   __Vtemp_h3804401c__0[0U]
                                                    : 0U)) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2249)
                                                      ? 
                                                     __Vtemp_h7a722066__0[1U]
                                                      : 0U) 
                                                    ^ 
                                                    (((6U 
                                                       != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)) 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2260))
                                                      ? 
                                                     __Vtemp_h3804401c__0[1U]
                                                      : 0U))) 
                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2249)
                                                     ? 
                                                    __Vtemp_h7a722066__0[2U]
                                                     : 0U) 
                                                   ^ 
                                                   (((6U 
                                                      != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)) 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2260))
                                                     ? 
                                                    __Vtemp_h3804401c__0[2U]
                                                     : 0U))) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2249)
                                                    ? 
                                                   __Vtemp_h7a722066__0[3U]
                                                    : 0U) 
                                                  ^ 
                                                  (((6U 
                                                     != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2260))
                                                    ? 
                                                   __Vtemp_h3804401c__0[3U]
                                                    : 0U))))))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:140432: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 140432, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)((0U != ((
                                                   (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight[0U] 
                                                    | vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight[1U]) 
                                                   | vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight[2U]) 
                                                  | vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight[3U])))) 
                               | ((0U == vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__plusarg_reader__DOT__myplus) 
                                  | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__watchdog 
                                     < vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)((0U != ((
                                                   (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight[0U] 
                                                    | vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight[1U]) 
                                                   | vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight[2U]) 
                                                  | vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight[3U])))) 
                               | ((0U == vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__plusarg_reader__DOT__myplus) 
                                  | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__watchdog 
                                     < vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:140456: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 140456, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp_h14a41a0a__0, vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_1, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2342) 
                     & (~ ((~ __Vtemp_h14a41a0a__0[0U]) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel re-used a source ID (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp_h14a41a0a__1, vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_1, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2342) 
                     & (~ ((~ __Vtemp_h14a41a0a__1[0U]) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:140480: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 140480, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp_h83485c8b__0, vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_1, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2349) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((__Vtemp_h83485c8b__0[0U] 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2336) 
                               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                   << 1U) == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp_h83485c8b__1, vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_1, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2349) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((__Vtemp_h83485c8b__1[0U] 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2336) 
                               & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                   << 1U) == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:140504: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 140504, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2349) 
                       & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2336) 
                         & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                             << 1U) == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2349) 
                       & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2336) 
                         & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                             << 1U) == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source)))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:140528: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 140528, "");
    }
    VL_SHIFTR_WWI(512,512,9, __Vtemp_h04312ac7__0, vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2349) 
                       & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2336) 
                            & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                << 1U) == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_size) 
                            == (0xfU & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                         & __Vtemp_h04312ac7__0[0U]) 
                                        >> 1U))) | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(512,512,9, __Vtemp_h04312ac7__1, vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2349) 
                       & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2336) 
                            & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                << 1U) == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source))))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_size) 
                            == (0xfU & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                         & __Vtemp_h04312ac7__1[0U]) 
                                        >> 1U))) | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:140552: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 140552, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2349) 
                      & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1)) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                            & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                 << 1U) == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source)) 
                               & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)))))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_ready)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_ready)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2349) 
                      & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1)) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                            & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                                 << 1U) == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source)) 
                               & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)))))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_ready)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_ready)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:140574: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 140574, "");
    }
    __Vtemp_hd2b6c582__18[0U] = 1U;
    __Vtemp_hd2b6c582__18[1U] = 0U;
    __Vtemp_hd2b6c582__18[2U] = 0U;
    __Vtemp_hd2b6c582__18[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h7b0b71e6__0, __Vtemp_hd2b6c582__18, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    __Vtemp_hd2b6c582__19[0U] = 1U;
    __Vtemp_hd2b6c582__19[1U] = 0U;
    __Vtemp_hd2b6c582__19[2U] = 0U;
    __Vtemp_hd2b6c582__19[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_he1fc8017__0, __Vtemp_hd2b6c582__19, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    __Vtemp_hd2b6c582__20[0U] = 1U;
    __Vtemp_hd2b6c582__20[1U] = 0U;
    __Vtemp_hd2b6c582__20[2U] = 0U;
    __Vtemp_hd2b6c582__20[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h3da4c2a6__0, __Vtemp_hd2b6c582__20, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2336) 
                      & (0U != (((__Vtemp_h7b0b71e6__0[0U] 
                                  | __Vtemp_h7b0b71e6__0[1U]) 
                                 | __Vtemp_h7b0b71e6__0[2U]) 
                                | __Vtemp_h7b0b71e6__0[3U]))) 
                     & (~ ((0U != ((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2336)
                                        ? __Vtemp_he1fc8017__0[0U]
                                        : 0U) ^ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2349) 
                                                  & (6U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                                  ? 
                                                 __Vtemp_h3da4c2a6__0[0U]
                                                  : 0U)) 
                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2336)
                                          ? __Vtemp_he1fc8017__0[1U]
                                          : 0U) ^ (
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2349) 
                                                    & (6U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                                    ? 
                                                   __Vtemp_h3da4c2a6__0[1U]
                                                    : 0U))) 
                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2336)
                                         ? __Vtemp_he1fc8017__0[2U]
                                         : 0U) ^ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2349) 
                                                   & (6U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                                   ? 
                                                  __Vtemp_h3da4c2a6__0[2U]
                                                   : 0U))) 
                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2336)
                                        ? __Vtemp_he1fc8017__0[3U]
                                        : 0U) ^ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2349) 
                                                  & (6U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                                  ? 
                                                 __Vtemp_h3da4c2a6__0[3U]
                                                  : 0U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' and 'D' concurrent, despite minlatency 1 (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    __Vtemp_hd2b6c582__21[0U] = 1U;
    __Vtemp_hd2b6c582__21[1U] = 0U;
    __Vtemp_hd2b6c582__21[2U] = 0U;
    __Vtemp_hd2b6c582__21[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h4a2f6d03__0, __Vtemp_hd2b6c582__21, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    __Vtemp_hd2b6c582__22[0U] = 1U;
    __Vtemp_hd2b6c582__22[1U] = 0U;
    __Vtemp_hd2b6c582__22[2U] = 0U;
    __Vtemp_hd2b6c582__22[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h25f84395__0, __Vtemp_hd2b6c582__22, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    __Vtemp_hd2b6c582__23[0U] = 1U;
    __Vtemp_hd2b6c582__23[1U] = 0U;
    __Vtemp_hd2b6c582__23[2U] = 0U;
    __Vtemp_hd2b6c582__23[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h8d643c26__0, __Vtemp_hd2b6c582__23, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2336) 
                      & (0U != (((__Vtemp_h4a2f6d03__0[0U] 
                                  | __Vtemp_h4a2f6d03__0[1U]) 
                                 | __Vtemp_h4a2f6d03__0[2U]) 
                                | __Vtemp_h4a2f6d03__0[3U]))) 
                     & (~ ((0U != ((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2336)
                                        ? __Vtemp_h25f84395__0[0U]
                                        : 0U) ^ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2349) 
                                                  & (6U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                                  ? 
                                                 __Vtemp_h8d643c26__0[0U]
                                                  : 0U)) 
                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2336)
                                          ? __Vtemp_h25f84395__0[1U]
                                          : 0U) ^ (
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2349) 
                                                    & (6U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                                    ? 
                                                   __Vtemp_h8d643c26__0[1U]
                                                    : 0U))) 
                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2336)
                                         ? __Vtemp_h25f84395__0[2U]
                                         : 0U) ^ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2349) 
                                                   & (6U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                                   ? 
                                                  __Vtemp_h8d643c26__0[2U]
                                                   : 0U))) 
                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2336)
                                        ? __Vtemp_h25f84395__0[3U]
                                        : 0U) ^ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2349) 
                                                  & (6U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)))
                                                  ? 
                                                 __Vtemp_h8d643c26__0[3U]
                                                  : 0U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:140598: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 140598, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)((0U != ((
                                                   (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_1[0U] 
                                                    | vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_1[1U]) 
                                                   | vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_1[2U]) 
                                                  | vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_1[3U])))) 
                               | ((0U == vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus) 
                                  | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__watchdog_1 
                                     < vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)((0U != ((
                                                   (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_1[0U] 
                                                    | vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_1[1U]) 
                                                   | vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_1[2U]) 
                                                  | vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_1[3U])))) 
                               | ((0U == vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus) 
                                  | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__watchdog_1 
                                     < vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:140622: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 140622, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2407) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_2)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel re-used a sink ID (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2407) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_2)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:140646: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 140646, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2690) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2407) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_2)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'E' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:173:32)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2690) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2407) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_2)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:140670: Assertion failed in %NysyxSoCFull.fpga.widget_2.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 140670, "");
    }
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram__v0 = 0U;
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__earlyWinner_0)) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__earlyWinner_1))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:105 assert((prefixOR zip earlyWinner) map { case (p,w) => !p || !w } reduce {_ && _})\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__earlyWinner_0)) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__earlyWinner_1))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:7429: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 7429, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_valid))) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__earlyWinner_0) 
                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__earlyWinner_1))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:107 assert (!earlyValids.reduce(_||_) || earlyWinner.reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_valid))) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__earlyWinner_0) 
                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__earlyWinner_1))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:7453: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 7453, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_valid))) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid) 
                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_valid))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:108 assert (!validQuals .reduce(_||_) || validQuals .reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_valid))) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid) 
                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_valid))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:7477: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 7477, "");
    }
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_address__v0 = 0U;
    if (VL_UNLIKELY((1U & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__idle) 
                               | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__counter))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Error.scala:49 assert (idle || da_first) // we only send Grant, never GrantData => simplified flow control below\n");
    }
    if (VL_UNLIKELY((1U & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__idle) 
                               | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__counter))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:115234: Assertion failed in %NysyxSoCFull.fpga.err\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 115234, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__earlyWinner_0)) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__earlyWinner_1))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:105 assert((prefixOR zip earlyWinner) map { case (p,w) => !p || !w } reduce {_ && _})\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__earlyWinner_0)) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__earlyWinner_1))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:115258: Assertion failed in %NysyxSoCFull.fpga.err\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 115258, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__dc_valid) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__da_valid))) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__earlyWinner_0) 
                                  | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__earlyWinner_1))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:107 assert (!earlyValids.reduce(_||_) || earlyWinner.reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__dc_valid) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__da_valid))) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__earlyWinner_0) 
                                  | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__earlyWinner_1))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:115282: Assertion failed in %NysyxSoCFull.fpga.err\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 115282, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__dc_valid) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__da_valid))) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__dc_valid) 
                                  | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__da_valid))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:108 assert (!validQuals .reduce(_||_) || validQuals .reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__dc_valid) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__da_valid))) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__dc_valid) 
                                  | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__da_valid))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:115306: Assertion failed in %NysyxSoCFull.fpga.err\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 115306, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_in_arvalid)) 
                               | ((0x7fffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize1_T_1 
                                              >> 8U)) 
                                  == (0x7fffU & (~ 
                                                 ((IData)(0x7fffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_size)))))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToTL.scala:98 assert (!in.ar.valid || r_size1 === UIntToOH1(r_size, beatCountBits)) // because aligned\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_in_arvalid)) 
                               | ((0x7fffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize1_T_1 
                                              >> 8U)) 
                                  == (0x7fffU & (~ 
                                                 ((IData)(0x7fffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_size)))))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:39357: Assertion failed in %NysyxSoCFull.fpga.axi42tl\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 39357, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_in_awvalid)) 
                               | ((0x7fffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize1_T_1 
                                              >> 8U)) 
                                  == (0x7fffU & (~ 
                                                 ((IData)(0x7fffU) 
                                                  << 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (0xffU 
                                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize_T_4) 
                                                                 >> 8U)))) 
                                                    << 3U) 
                                                   | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_1_size))))))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToTL.scala:131 assert (!in.aw.valid || w_size1 === UIntToOH1(w_size, beatCountBits)) // because aligned\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_in_awvalid)) 
                               | ((0x7fffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize1_T_1 
                                              >> 8U)) 
                                  == (0x7fffU & (~ 
                                                 ((IData)(0x7fffU) 
                                                  << 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (0xffU 
                                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize_T_4) 
                                                                 >> 8U)))) 
                                                    << 3U) 
                                                   | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_1_size))))))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:39381: Assertion failed in %NysyxSoCFull.fpga.axi42tl\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 39381, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_in_awvalid)) 
                                | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__beats_lo_1))) 
                               | (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_size))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToTL.scala:132 assert (!in.aw.valid || in.aw.bits.len === UInt(0) || in.aw.bits.size === UInt(log2Ceil(beatBytes))) // because aligned\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_in_awvalid)) 
                                | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__beats_lo_1))) 
                               | (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_size))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:39405: Assertion failed in %NysyxSoCFull.fpga.axi42tl\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 39405, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__earlyWinner_0)) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__earlyWinner_1))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:105 assert((prefixOR zip earlyWinner) map { case (p,w) => !p || !w } reduce {_ && _})\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__earlyWinner_0)) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__earlyWinner_1))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:39429: Assertion failed in %NysyxSoCFull.fpga.axi42tl\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 39429, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_in_arvalid) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_out_valid))) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__earlyWinner_0) 
                                  | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__earlyWinner_1))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:107 assert (!earlyValids.reduce(_||_) || earlyWinner.reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_in_arvalid) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_out_valid))) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__earlyWinner_0) 
                                  | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__earlyWinner_1))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:39453: Assertion failed in %NysyxSoCFull.fpga.axi42tl\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 39453, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_in_arvalid) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_out_valid))) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_in_arvalid) 
                                  | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_out_valid))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:108 assert (!validQuals .reduce(_||_) || validQuals .reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_in_arvalid) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_out_valid))) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_in_arvalid) 
                                  | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_out_valid))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:39477: Assertion failed in %NysyxSoCFull.fpga.axi42tl\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 39477, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_177) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                               & (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_177) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                               & (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:116058: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 116058, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(((0U == (0x38U 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source))) 
                                     & (6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)))) 
                            & ((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_294))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(((0U == (0x38U 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source))) 
                                     & (6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)))) 
                            & ((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_294))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:116082: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 116082, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
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
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:116106: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 116106, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:116130: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 116130, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:116154: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 116154, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:116178: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 116178, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__mapPP)
                                    ? 0xffU : (0xffU 
                                               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_a_bits_mask))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__mapPP)
                                    ? 0xffU : (0xffU 
                                               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_a_bits_mask))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:116202: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 116202, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_177) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                               & (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_177) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                               & (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:116226: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 116226, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(((0U == (0x38U 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source))) 
                                     & (6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)))) 
                            & ((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_294))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(((0U == (0x38U 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source))) 
                                     & (6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)))) 
                            & ((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_294))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:116250: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 116250, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
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
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:116274: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 116274, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:116298: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 116298, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:116322: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 116322, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:116346: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 116346, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:116370: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 116370, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__mapPP)
                                    ? 0xffU : (0xffU 
                                               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_a_bits_mask))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__mapPP)
                                    ? 0xffU : (0xffU 
                                               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_a_bits_mask))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:116394: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 116394, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_177) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_177) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:116418: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 116418, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_294)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_294)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:116442: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 116442, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
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
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:116466: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 116466, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:116490: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 116490, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:116514: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 116514, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:116538: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 116538, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_177) 
                            & (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                                & ((0U == (0xfffff000U 
                                           & (0x1000U 
                                              ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address))) 
                                   | (0U == (0x80000000U 
                                             & (0x80000000U 
                                                ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address))))) 
                               | ((8U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                                  & (0U == (0xc0000000U 
                                            & (0x40000000U 
                                               ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_177) 
                            & (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                                & ((0U == (0xfffff000U 
                                           & (0x1000U 
                                              ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address))) 
                                   | (0U == (0x80000000U 
                                             & (0x80000000U 
                                                ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address))))) 
                               | ((8U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                                  & (0U == (0xc0000000U 
                                            & (0x40000000U 
                                               ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:116562: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 116562, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
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
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:116586: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 116586, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:116610: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 116610, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:116634: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 116634, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:116658: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 116658, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_177) 
                            & (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                                & ((0U == (0xfffff000U 
                                           & (0x1000U 
                                              ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address))) 
                                   | (0U == (0x80000000U 
                                             & (0x80000000U 
                                                ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address))))) 
                               | ((8U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                                  & (0U == (0xc0000000U 
                                            & (0x40000000U 
                                               ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_177) 
                            & (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                                & ((0U == (0xfffff000U 
                                           & (0x1000U 
                                              ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address))) 
                                   | (0U == (0x80000000U 
                                             & (0x80000000U 
                                                ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address))))) 
                               | ((8U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                                  & (0U == (0xc0000000U 
                                            & (0x40000000U 
                                               ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:116682: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 116682, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
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
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:116706: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 116706, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:116730: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 116730, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:116754: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 116754, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_mask))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_mask))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:116778: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 116778, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_177) 
                            & ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_294))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_177) 
                            & ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_294))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:116802: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 116802, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
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
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:116826: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 116826, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:116850: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 116850, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((4U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((4U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:116874: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 116874, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:116898: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 116898, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_177) 
                            & ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_294))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_177) 
                            & ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_294))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:116922: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 116922, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
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
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:116946: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 116946, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:116970: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 116970, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:116994: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 116994, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:117018: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 117018, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_177) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                               & (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_177) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                               & (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:117042: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 117042, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
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
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:117066: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 117066, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:117090: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 117090, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((1U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((1U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:117114: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 117114, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:117138: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 117138, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:117162: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 117162, "");
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:49 assert(cond, message)\n");
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
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:117186: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 117186, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:117210: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 117210, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:117234: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 117234, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:117258: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 117258, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:117282: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 117282, "");
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:49 assert(cond, message)\n");
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
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:117306: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 117306, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:117330: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 117330, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:117354: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 117354, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:117378: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 117378, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:117402: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 117402, "");
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:49 assert(cond, message)\n");
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
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:117426: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 117426, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:117450: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 117450, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:117474: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 117474, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:117498: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 117498, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_denied)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_denied)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:117522: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 117522, "");
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:49 assert(cond, message)\n");
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
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:117546: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 117546, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:117570: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 117570, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:117594: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 117594, "");
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:49 assert(cond, message)\n");
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
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:117618: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 117618, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:117642: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 117642, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_denied)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_denied)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:117666: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 117666, "");
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:49 assert(cond, message)\n");
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
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:117690: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 117690, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:117714: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 117714, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:117738: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 117738, "");
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries unmanaged address (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
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
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:117762: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 117762, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck smaller than a beat (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:117810: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 117810, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck address not aligned to size (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:117834: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 117834, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAck carries invalid report param (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:117858: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 117858, "");
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries unmanaged address (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
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
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:117882: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 117882, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData smaller than a beat (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:117930: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 117930, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData address not aligned to size (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:117954: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 117954, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ProbeAckData carries invalid report param (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:117978: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 117978, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ (((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                               & (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release type unsupported by manager (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ (((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                               & (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:118002: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 118002, "");
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
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
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:118026: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 118026, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release smaller than a beat (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:118074: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 118074, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release address not aligned to size (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:118098: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 118098, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel Release carries invalid report param (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:118122: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 118122, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ (((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                               & (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries ReleaseData type unsupported by manager (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ (((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                               & (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:118146: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 118146, "");
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
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
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:118170: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 118170, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData smaller than a beat (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:118218: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 118218, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData address not aligned to size (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:118242: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 118242, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel ReleaseData carries invalid report param (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:118266: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 118266, "");
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries unmanaged address (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
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
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:118290: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 118290, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck address not aligned to size (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:118338: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 118338, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAck carries invalid param (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:118362: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 118362, "");
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries unmanaged address (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
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
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:118386: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 118386, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData address not aligned to size (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:118434: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 118434, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel AccessAckData carries invalid param (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:118458: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 118458, "");
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries unmanaged address (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
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
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:118482: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 118482, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck address not aligned to size (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:118530: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 118530, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel HintAck carries invalid param (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:118554: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 118554, "");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass_c)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_e_valid)) 
                     & (~ ((1U > (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_e_bits_sink)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'E' channels carries invalid sink ID (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass_c)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_e_valid)) 
                     & (~ ((1U > (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_e_bits_sink)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:118578: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 118578, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:118602: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 118602, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:118626: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 118626, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:118650: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 118650, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:118674: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 118674, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid)) 
                     & (~ ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__address 
                            == vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid)) 
                     & (~ ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__address 
                            == vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:118698: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 118698, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:118722: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 118722, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__param_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__param_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:118746: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 118746, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:118770: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 118770, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:118794: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 118794, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__denied) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__denied) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:118818: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 118818, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__opcode_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__opcode_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:118842: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 118842, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__param_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__param_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:118866: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 118866, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__size_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__size_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:118890: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 118890, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid)) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                             << 1U) == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__source_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid)) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                             << 1U) == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__source_3)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:118914: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 118914, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid)) 
                     & (~ ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__address_2 
                            == vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel address changed with multibeat operation (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid)) 
                     & (~ ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__address_2 
                            == vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:118938: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 118938, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp_h80be5bbf__0, vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_source));
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2524) 
                     & (~ ((~ __Vtemp_h80be5bbf__0[0U]) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp_h80be5bbf__1, vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_source));
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2524) 
                     & (~ ((~ __Vtemp_h80be5bbf__1[0U]) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:118962: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 118962, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp_h69a74f1a__0, vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2532)) 
                     & (~ ((__Vtemp_h69a74f1a__0[0U] 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2521) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_2))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp_h69a74f1a__1, vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2532)) 
                     & (~ ((__Vtemp_h69a74f1a__1[0U] 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2521) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_2))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:118986: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 118986, "");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2532)) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2521) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2532)) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2521) 
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
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:119010: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 119010, "");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2532)) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2521) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_2))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2532)) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2521) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_2))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:119034: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 119034, "");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2532)) 
                      & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2521) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_2)))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (7U & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                               >> 1U)))
                                  ? 4U : ((6U == (7U 
                                                  & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                      & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                     >> 1U)))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___GEN_58)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (7U & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                  & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                 >> 1U)))
                                    ? 4U : ((6U == 
                                             (7U & 
                                              ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                               >> 1U)))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___GEN_58))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2532)) 
                      & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2521) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_2)))) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (7U & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                               >> 1U)))
                                  ? 4U : ((6U == (7U 
                                                  & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                      & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                     >> 1U)))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___GEN_58)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (7U & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                  & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                 >> 1U)))
                                    ? 4U : ((6U == 
                                             (7U & 
                                              ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                               >> 1U)))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___GEN_58))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:119058: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 119058, "");
    }
    VL_SHIFTR_WWI(1024,1024,10, __Vtemp_hc1f49eb6__0, vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2532)) 
                      & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2521) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_2)))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_size) 
                            == (0xffU & ((VysyxSoCFull__ConstPool__CONST_h7bd5304c_0[0U] 
                                          & __Vtemp_hc1f49eb6__0[0U]) 
                                         >> 1U))) | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(1024,1024,10, __Vtemp_hc1f49eb6__1, vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    if (VL_UNLIKELY(((((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2532)) 
                      & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2521) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_2)))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_size) 
                            == (0xffU & ((VysyxSoCFull__ConstPool__CONST_h7bd5304c_0[0U] 
                                          & __Vtemp_hc1f49eb6__1[0U]) 
                                         >> 1U))) | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:119082: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 119082, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2532) 
                      & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                            & (IData)(vlSelf->__VdfgTmp_h12f687c7__0)))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_ready)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_ready)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2532) 
                      & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)) 
                         & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
                            & (IData)(vlSelf->__VdfgTmp_h12f687c7__0)))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_ready)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_ready)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:119104: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 119104, "");
    }
    __Vtemp_hd2b6c582__24[0U] = 1U;
    __Vtemp_hd2b6c582__24[1U] = 0U;
    __Vtemp_hd2b6c582__24[2U] = 0U;
    __Vtemp_hd2b6c582__24[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_ha5f920b9__0, __Vtemp_hd2b6c582__24, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_source));
    __Vtemp_hd2b6c582__25[0U] = 1U;
    __Vtemp_hd2b6c582__25[1U] = 0U;
    __Vtemp_hd2b6c582__25[2U] = 0U;
    __Vtemp_hd2b6c582__25[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h0419571f__0, __Vtemp_hd2b6c582__25, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_source));
    __Vtemp_hd2b6c582__26[0U] = 1U;
    __Vtemp_hd2b6c582__26[1U] = 0U;
    __Vtemp_hd2b6c582__26[2U] = 0U;
    __Vtemp_hd2b6c582__26[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h0e9fde5a__0, __Vtemp_hd2b6c582__26, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2521) 
                                  & ((0U != (((__Vtemp_ha5f920b9__0[0U] 
                                               | __Vtemp_ha5f920b9__0[1U]) 
                                              | __Vtemp_ha5f920b9__0[2U]) 
                                             | __Vtemp_ha5f920b9__0[3U])) 
                                     & (0U == ((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2521)
                                                    ? 
                                                   __Vtemp_h0419571f__0[0U]
                                                    : 0U) 
                                                  ^ 
                                                  (((6U 
                                                     != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2532))
                                                    ? 
                                                   __Vtemp_h0e9fde5a__0[0U]
                                                    : 0U)) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2521)
                                                      ? 
                                                     __Vtemp_h0419571f__0[1U]
                                                      : 0U) 
                                                    ^ 
                                                    (((6U 
                                                       != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2532))
                                                      ? 
                                                     __Vtemp_h0e9fde5a__0[1U]
                                                      : 0U))) 
                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2521)
                                                     ? 
                                                    __Vtemp_h0419571f__0[2U]
                                                     : 0U) 
                                                   ^ 
                                                   (((6U 
                                                      != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2532))
                                                     ? 
                                                    __Vtemp_h0e9fde5a__0[2U]
                                                     : 0U))) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2521)
                                                    ? 
                                                   __Vtemp_h0419571f__0[3U]
                                                    : 0U) 
                                                  ^ 
                                                  (((6U 
                                                     != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2532))
                                                    ? 
                                                   __Vtemp_h0e9fde5a__0[3U]
                                                    : 0U))))))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 1 (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    __Vtemp_hd2b6c582__27[0U] = 1U;
    __Vtemp_hd2b6c582__27[1U] = 0U;
    __Vtemp_hd2b6c582__27[2U] = 0U;
    __Vtemp_hd2b6c582__27[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h8c79153a__0, __Vtemp_hd2b6c582__27, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_source));
    __Vtemp_hd2b6c582__28[0U] = 1U;
    __Vtemp_hd2b6c582__28[1U] = 0U;
    __Vtemp_hd2b6c582__28[2U] = 0U;
    __Vtemp_hd2b6c582__28[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h785ee83a__0, __Vtemp_hd2b6c582__28, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_source));
    __Vtemp_hd2b6c582__29[0U] = 1U;
    __Vtemp_hd2b6c582__29[1U] = 0U;
    __Vtemp_hd2b6c582__29[2U] = 0U;
    __Vtemp_hd2b6c582__29[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h61088775__0, __Vtemp_hd2b6c582__29, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2521) 
                                  & ((0U != (((__Vtemp_h8c79153a__0[0U] 
                                               | __Vtemp_h8c79153a__0[1U]) 
                                              | __Vtemp_h8c79153a__0[2U]) 
                                             | __Vtemp_h8c79153a__0[3U])) 
                                     & (0U == ((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2521)
                                                    ? 
                                                   __Vtemp_h785ee83a__0[0U]
                                                    : 0U) 
                                                  ^ 
                                                  (((6U 
                                                     != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2532))
                                                    ? 
                                                   __Vtemp_h61088775__0[0U]
                                                    : 0U)) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2521)
                                                      ? 
                                                     __Vtemp_h785ee83a__0[1U]
                                                      : 0U) 
                                                    ^ 
                                                    (((6U 
                                                       != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2532))
                                                      ? 
                                                     __Vtemp_h61088775__0[1U]
                                                      : 0U))) 
                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2521)
                                                     ? 
                                                    __Vtemp_h785ee83a__0[2U]
                                                     : 0U) 
                                                   ^ 
                                                   (((6U 
                                                      != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2532))
                                                     ? 
                                                    __Vtemp_h61088775__0[2U]
                                                     : 0U))) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2521)
                                                    ? 
                                                   __Vtemp_h785ee83a__0[3U]
                                                    : 0U) 
                                                  ^ 
                                                  (((6U 
                                                     != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2532))
                                                    ? 
                                                   __Vtemp_h61088775__0[3U]
                                                    : 0U))))))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:119128: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 119128, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)((0U != ((
                                                   (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight[0U] 
                                                    | vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight[1U]) 
                                                   | vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight[2U]) 
                                                  | vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight[3U])))) 
                               | ((0U == vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__plusarg_reader__DOT__myplus) 
                                  | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__watchdog 
                                     < vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)((0U != ((
                                                   (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight[0U] 
                                                    | vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight[1U]) 
                                                   | vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight[2U]) 
                                                  | vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight[3U])))) 
                               | ((0U == vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__plusarg_reader__DOT__myplus) 
                                  | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__watchdog 
                                     < vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:119152: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 119152, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp_hb02b2f71__0, vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_1, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2614) 
                     & (~ ((~ __Vtemp_hb02b2f71__0[0U]) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' channel re-used a source ID (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp_hb02b2f71__1, vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_1, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2614) 
                     & (~ ((~ __Vtemp_hb02b2f71__1[0U]) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:119176: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 119176, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp_h8cb72aa6__0, vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_1, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2621) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((__Vtemp_h8cb72aa6__0[0U] 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2608) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___same_cycle_resp_T_8))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp_h8cb72aa6__1, vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_1, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2621) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((__Vtemp_h8cb72aa6__1[0U] 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2608) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___same_cycle_resp_T_8))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:119200: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 119200, "");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2621) 
                       & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2608) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___same_cycle_resp_T_8))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2621) 
                       & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2608) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___same_cycle_resp_T_8))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:119224: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 119224, "");
    }
    VL_SHIFTR_WWI(1024,1024,10, __Vtemp_haec0dc5e__0, vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2621) 
                       & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2608) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___same_cycle_resp_T_8)))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_size) 
                            == (0xffU & ((VysyxSoCFull__ConstPool__CONST_h7bd5304c_0[0U] 
                                          & __Vtemp_haec0dc5e__0[0U]) 
                                         >> 1U))) | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(1024,1024,10, __Vtemp_haec0dc5e__1, vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    if (VL_UNLIKELY(((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2621) 
                       & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))) 
                      & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2608) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___same_cycle_resp_T_8)))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_size) 
                            == (0xffU & ((VysyxSoCFull__ConstPool__CONST_h7bd5304c_0[0U] 
                                          & __Vtemp_haec0dc5e__1[0U]) 
                                         >> 1U))) | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:119248: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 119248, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2621) 
                      & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter_1)) 
                         & (IData)(vlSelf->__VdfgTmp_hdc4243a0__0))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_ready)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_ready)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2621) 
                      & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter_1)) 
                         & (IData)(vlSelf->__VdfgTmp_hdc4243a0__0))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_ready)) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_ready)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:119270: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 119270, "");
    }
    __Vtemp_hd2b6c582__30[0U] = 1U;
    __Vtemp_hd2b6c582__30[1U] = 0U;
    __Vtemp_hd2b6c582__30[2U] = 0U;
    __Vtemp_hd2b6c582__30[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h626b04b1__0, __Vtemp_hd2b6c582__30, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    __Vtemp_hd2b6c582__31[0U] = 1U;
    __Vtemp_hd2b6c582__31[1U] = 0U;
    __Vtemp_hd2b6c582__31[2U] = 0U;
    __Vtemp_hd2b6c582__31[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hbadad5b6__0, __Vtemp_hd2b6c582__31, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    __Vtemp_hd2b6c582__32[0U] = 1U;
    __Vtemp_hd2b6c582__32[1U] = 0U;
    __Vtemp_hd2b6c582__32[2U] = 0U;
    __Vtemp_hd2b6c582__32[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1e94e357__0, __Vtemp_hd2b6c582__32, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2608) 
                      & (0U != (((__Vtemp_h626b04b1__0[0U] 
                                  | __Vtemp_h626b04b1__0[1U]) 
                                 | __Vtemp_h626b04b1__0[2U]) 
                                | __Vtemp_h626b04b1__0[3U]))) 
                     & (~ ((0U != ((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2608)
                                        ? __Vtemp_hbadad5b6__0[0U]
                                        : 0U) ^ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2621) 
                                                  & (6U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                  ? 
                                                 __Vtemp_h1e94e357__0[0U]
                                                  : 0U)) 
                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2608)
                                          ? __Vtemp_hbadad5b6__0[1U]
                                          : 0U) ^ (
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2621) 
                                                    & (6U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                    ? 
                                                   __Vtemp_h1e94e357__0[1U]
                                                    : 0U))) 
                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2608)
                                         ? __Vtemp_hbadad5b6__0[2U]
                                         : 0U) ^ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2621) 
                                                   & (6U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                   ? 
                                                  __Vtemp_h1e94e357__0[2U]
                                                   : 0U))) 
                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2608)
                                        ? __Vtemp_hbadad5b6__0[3U]
                                        : 0U) ^ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2621) 
                                                  & (6U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                  ? 
                                                 __Vtemp_h1e94e357__0[3U]
                                                  : 0U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'C' and 'D' concurrent, despite minlatency 1 (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    __Vtemp_hd2b6c582__33[0U] = 1U;
    __Vtemp_hd2b6c582__33[1U] = 0U;
    __Vtemp_hd2b6c582__33[2U] = 0U;
    __Vtemp_hd2b6c582__33[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h872a5f31__0, __Vtemp_hd2b6c582__33, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    __Vtemp_hd2b6c582__34[0U] = 1U;
    __Vtemp_hd2b6c582__34[1U] = 0U;
    __Vtemp_hd2b6c582__34[2U] = 0U;
    __Vtemp_hd2b6c582__34[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hcaf3b8de__0, __Vtemp_hd2b6c582__34, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    __Vtemp_hd2b6c582__35[0U] = 1U;
    __Vtemp_hd2b6c582__35[1U] = 0U;
    __Vtemp_hd2b6c582__35[2U] = 0U;
    __Vtemp_hd2b6c582__35[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h36dd92cc__0, __Vtemp_hd2b6c582__35, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source));
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2608) 
                      & (0U != (((__Vtemp_h872a5f31__0[0U] 
                                  | __Vtemp_h872a5f31__0[1U]) 
                                 | __Vtemp_h872a5f31__0[2U]) 
                                | __Vtemp_h872a5f31__0[3U]))) 
                     & (~ ((0U != ((((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2608)
                                        ? __Vtemp_hcaf3b8de__0[0U]
                                        : 0U) ^ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2621) 
                                                  & (6U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                  ? 
                                                 __Vtemp_h36dd92cc__0[0U]
                                                  : 0U)) 
                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2608)
                                          ? __Vtemp_hcaf3b8de__0[1U]
                                          : 0U) ^ (
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2621) 
                                                    & (6U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                    ? 
                                                   __Vtemp_h36dd92cc__0[1U]
                                                    : 0U))) 
                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2608)
                                         ? __Vtemp_hcaf3b8de__0[2U]
                                         : 0U) ^ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2621) 
                                                   & (6U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                   ? 
                                                  __Vtemp_h36dd92cc__0[2U]
                                                   : 0U))) 
                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2608)
                                        ? __Vtemp_hcaf3b8de__0[3U]
                                        : 0U) ^ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2621) 
                                                  & (6U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)))
                                                  ? 
                                                 __Vtemp_h36dd92cc__0[3U]
                                                  : 0U)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:119294: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 119294, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)((0U != ((
                                                   (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_1[0U] 
                                                    | vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_1[1U]) 
                                                   | vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_1[2U]) 
                                                  | vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_1[3U])))) 
                               | ((0U == vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus) 
                                  | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__watchdog_1 
                                     < vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)((0U != ((
                                                   (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_1[0U] 
                                                    | vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_1[1U]) 
                                                   | vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_1[2U]) 
                                                  | vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_1[3U])))) 
                               | ((0U == vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus) 
                                  | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__watchdog_1 
                                     < vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:119318: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 119318, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2679) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_2)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel re-used a sink ID (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2679) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_2)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:119342: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 119342, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2690) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2679) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_2)) 
                            >> (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_e_bits_sink)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'E' channel acknowledged for nothing inflight (connected at ChipLinkBridge.scala:172:47)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2690) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2679) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_2)) 
                            >> (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_e_bits_sink)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:119366: Assertion failed in %NysyxSoCFull.fpga.atomics.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 119366, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_177) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                               & (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_177) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                               & (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:121203: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 121203, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(((0U == (0x38U 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source))) 
                                     & (6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)))) 
                            & ((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_294))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(((0U == (0x38U 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source))) 
                                     & (6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)))) 
                            & ((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_294))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:121227: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 121227, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
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
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:121251: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 121251, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:121275: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 121275, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:121299: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 121299, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:121323: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 121323, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__mapPP)
                                    ? 0xffU : (0xffU 
                                               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_a_bits_mask))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__mapPP)
                                    ? 0xffU : (0xffU 
                                               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_a_bits_mask))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:121347: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 121347, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_177) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                               & (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_177) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                               & (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:121371: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 121371, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(((0U == (0x38U 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source))) 
                                     & (6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)))) 
                            & ((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_294))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(((0U == (0x38U 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source))) 
                                     & (6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)))) 
                            & ((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_294))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:121395: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 121395, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
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
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:121419: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 121419, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:121443: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 121443, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:121467: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 121467, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:121491: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 121491, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:121515: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 121515, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__mapPP)
                                    ? 0xffU : (0xffU 
                                               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_a_bits_mask))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__mapPP)
                                    ? 0xffU : (0xffU 
                                               & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_a_bits_mask))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:121539: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 121539, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_177) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_177) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:121563: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 121563, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_294)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_294)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:121587: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 121587, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
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
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:121611: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 121611, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:121635: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 121635, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:121659: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 121659, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:121683: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 121683, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_177) 
                            & (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                                & ((0U == (0xfffff000U 
                                           & (0x1000U 
                                              ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address))) 
                                   | (0U == (0x80000000U 
                                             & (0x80000000U 
                                                ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address))))) 
                               | ((8U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                                  & (0U == (0xc0000000U 
                                            & (0x40000000U 
                                               ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_177) 
                            & (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                                & ((0U == (0xfffff000U 
                                           & (0x1000U 
                                              ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address))) 
                                   | (0U == (0x80000000U 
                                             & (0x80000000U 
                                                ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address))))) 
                               | ((8U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                                  & (0U == (0xc0000000U 
                                            & (0x40000000U 
                                               ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:121707: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 121707, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
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
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:121731: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 121731, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:121755: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 121755, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:121779: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 121779, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:121803: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 121803, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_177) 
                            & (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                                & ((0U == (0xfffff000U 
                                           & (0x1000U 
                                              ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address))) 
                                   | (0U == (0x80000000U 
                                             & (0x80000000U 
                                                ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address))))) 
                               | ((8U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                                  & (0U == (0xc0000000U 
                                            & (0x40000000U 
                                               ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_177) 
                            & (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                                & ((0U == (0xfffff000U 
                                           & (0x1000U 
                                              ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address))) 
                                   | (0U == (0x80000000U 
                                             & (0x80000000U 
                                                ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address))))) 
                               | ((8U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                                  & (0U == (0xc0000000U 
                                            & (0x40000000U 
                                               ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:121827: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 121827, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
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
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:121851: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 121851, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:121875: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 121875, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:121899: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 121899, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_mask))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_mask))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:121923: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 121923, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_177) 
                            & ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_294))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_177) 
                            & ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_294))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:121947: Assertion failed in %NysyxSoCFull.fpga.fixer_1.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 121947, "");
    }
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at ChipLinkBridge.scala:172:79)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
}
