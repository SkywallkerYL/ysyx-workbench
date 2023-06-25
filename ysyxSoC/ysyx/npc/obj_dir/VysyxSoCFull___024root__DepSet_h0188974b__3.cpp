// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull___024root.h"

extern const VlWide<16>/*511:0*/ VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0;
extern const VlWide<8>/*255:0*/ VysyxSoCFull__ConstPool__CONST_h57168600_0;
extern const VlWide<16>/*511:0*/ VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0;
extern const VlWide<8>/*255:0*/ VysyxSoCFull__ConstPool__CONST_h5b979007_0;
extern const VlWide<32>/*1023:0*/ VysyxSoCFull__ConstPool__CONST_h7bd5304c_0;
extern const VlWide<32>/*1023:0*/ VysyxSoCFull__ConstPool__CONST_ha6258237_0;

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__15(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__15\n"); );
    // Init
    CData/*3:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___inflight_opcodes_T_1;
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___inflight_opcodes_T_1 = 0;
    SData/*11:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_unready_T_1;
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_unready_T_1 = 0;
    SData/*11:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_unready_T_3;
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_unready_T_3 = 0;
    CData/*5:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_mask_T_3;
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_mask_T_3 = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT___wen_T_13;
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT___wen_T_13 = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT___wen_T_13;
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT___wen_T_13 = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT___wen_T_13;
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT___wen_T_13 = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT___wen_T_13;
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT___wen_T_13 = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT___wen_T_13;
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT___wen_T_13 = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT___wen_T_13;
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT___wen_T_13 = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2542;
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2542 = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT___GEN_159;
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT___GEN_159 = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT___GEN_180;
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT___GEN_180 = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h950ae05f__0;
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h950ae05f__0 = 0;
    CData/*5:0*/ ysyxSoCFull__DOT__fpga__DOT__xbar__DOT___readys_unready_T_1;
    ysyxSoCFull__DOT__fpga__DOT__xbar__DOT___readys_unready_T_1 = 0;
    CData/*2:0*/ ysyxSoCFull__DOT__fpga__DOT__xbar__DOT___readys_mask_T;
    ysyxSoCFull__DOT__fpga__DOT__xbar__DOT___readys_mask_T = 0;
    CData/*2:0*/ ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN_30;
    ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN_30 = 0;
    SData/*11:0*/ ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___readys_unready_T_1;
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___readys_unready_T_1 = 0;
    SData/*11:0*/ ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___readys_unready_T_3;
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___readys_unready_T_3 = 0;
    CData/*5:0*/ ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___readys_mask_T_3;
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___readys_mask_T_3 = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT___wen_T_13;
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT___wen_T_13 = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT___wen_T_13;
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT___wen_T_13 = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT___wen_T_13;
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT___wen_T_13 = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT___wen_T_13;
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT___wen_T_13 = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT___wen_T_13;
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT___wen_T_13 = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT___wen_T_13;
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT___wen_T_13 = 0;
    SData/*15:0*/ ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___winner_T_2;
    ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___winner_T_2 = 0;
    SData/*15:0*/ ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___winner_T_5;
    ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___winner_T_5 = 0;
    SData/*15:0*/ ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___winner_T_8;
    ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___winner_T_8 = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2678;
    ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2678 = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT___GEN_180;
    ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT___GEN_180 = 0;
    CData/*0:0*/ __VdfgTmp_hc81eae13__0;
    __VdfgTmp_hc81eae13__0 = 0;
    CData/*0:0*/ __VdfgTmp_hc940793c__0;
    __VdfgTmp_hc940793c__0 = 0;
    CData/*0:0*/ __VdfgTmp_h5d042c25__0;
    __VdfgTmp_h5d042c25__0 = 0;
    CData/*0:0*/ __VdfgTmp_h63eab968__0;
    __VdfgTmp_h63eab968__0 = 0;
    CData/*0:0*/ __VdfgTmp_h1606c44b__0;
    __VdfgTmp_h1606c44b__0 = 0;
    CData/*0:0*/ __VdfgTmp_h17c71574__0;
    __VdfgTmp_h17c71574__0 = 0;
    VlWide<16>/*511:0*/ __Vtemp_h6194d599__0;
    VlWide<16>/*511:0*/ __Vtemp_ha60e5549__0;
    VlWide<16>/*511:0*/ __Vtemp_h5c3b1f1f__0;
    VlWide<16>/*511:0*/ __Vtemp_h7b4ad598__0;
    VlWide<4>/*127:0*/ __Vtemp_hdf14df92__0;
    VlWide<4>/*127:0*/ __Vtemp_hdf14df92__1;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__0;
    VlWide<4>/*127:0*/ __Vtemp_ha8e697f7__0;
    VlWide<4>/*127:0*/ __Vtemp_hdbe281e5__0;
    VlWide<4>/*127:0*/ __Vtemp_h7dbd534c__0;
    VlWide<4>/*127:0*/ __Vtemp_hdf14ded1__0;
    VlWide<4>/*127:0*/ __Vtemp_ha9a90be6__0;
    VlWide<4>/*127:0*/ __Vtemp_he77c9fd2__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__1;
    VlWide<4>/*127:0*/ __Vtemp_hb0ba6bd5__0;
    VlWide<4>/*127:0*/ __Vtemp_h9376acbd__0;
    VlWide<4>/*127:0*/ __Vtemp_h304b5296__0;
    VlWide<4>/*127:0*/ __Vtemp_h5779a382__0;
    VlWide<4>/*127:0*/ __Vtemp_h60d9ac46__0;
    VlWide<4>/*127:0*/ __Vtemp_hf7042704__0;
    VlWide<4>/*127:0*/ __Vtemp_hd756ed55__0;
    VlWide<16>/*511:0*/ __Vtemp_hd61a028e__0;
    VlWide<16>/*511:0*/ __Vtemp_hb4b5d05f__0;
    VlWide<16>/*511:0*/ __Vtemp_hc0b1fcd1__0;
    VlWide<8>/*255:0*/ __Vtemp_hf2924b2c__0;
    VlWide<8>/*255:0*/ __Vtemp_hcd8e215a__0;
    VlWide<8>/*255:0*/ __Vtemp_h5528368b__0;
    VlWide<16>/*511:0*/ __Vtemp_hd3d5317e__0;
    VlWide<16>/*511:0*/ __Vtemp_h431d406c__0;
    VlWide<16>/*511:0*/ __Vtemp_h70789772__0;
    VlWide<8>/*255:0*/ __Vtemp_h17c0c1f6__0;
    VlWide<4>/*127:0*/ __Vtemp_h27305c17__0;
    VlWide<4>/*127:0*/ __Vtemp_h82d21fd8__0;
    VlWide<8>/*255:0*/ __Vtemp_hbdce3bef__0;
    VlWide<8>/*255:0*/ __Vtemp_h25758cf1__0;
    VlWide<16>/*511:0*/ __Vtemp_h064b736b__0;
    VlWide<16>/*511:0*/ __Vtemp_h064b736b__1;
    VlWide<16>/*511:0*/ __Vtemp_h064b736b__2;
    VlWide<8>/*255:0*/ __Vtemp_h6dd39924__0;
    VlWide<16>/*511:0*/ __Vtemp_h92fe3747__0;
    VlWide<8>/*255:0*/ __Vtemp_hb5d5870d__0;
    VlWide<16>/*511:0*/ __Vtemp_h92fe3747__1;
    VlWide<8>/*255:0*/ __Vtemp_hb5d5870d__1;
    VlWide<16>/*511:0*/ __Vtemp_hcd3e0595__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__2;
    VlWide<4>/*127:0*/ __Vtemp_hc4ce6e48__0;
    VlWide<16>/*511:0*/ __Vtemp_h53631281__0;
    VlWide<16>/*511:0*/ __Vtemp_h53631281__1;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__3;
    VlWide<4>/*127:0*/ __Vtemp_h7fe23cae__0;
    VlWide<32>/*1023:0*/ __Vtemp_h98f13421__0;
    VlWide<16>/*511:0*/ __Vtemp_hcd3e0595__1;
    // Body
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_denied) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__beatsDO_opdata_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__beats1_opdata;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_source 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__a__DOT__ram_source
            [0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_size 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__a__DOT__ram_size
            [0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__da_bits_opcode;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__beatsDO_opdata_1 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_source = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_size = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_opcode = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__enable_0 
        = (1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__count) 
                    & (~ (1U & (((IData)(7U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size)) 
                                >> 2U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT____VdfgTmp_h728c09b0__0)) 
           | ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT____VdfgTmp_h728c09b0__0)) 
              | ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT____VdfgTmp_h728c09b0__0)) 
                 | ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT____VdfgTmp_h728c09b0__0)) 
                    | ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT____VdfgTmp_h728c09b0__0)) 
                       | ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT____VdfgTmp_h728c09b0__0)) 
                          | ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT____VdfgTmp_h728c09b0__0)) 
                             | (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT____VdfgTmp_h728c09b0__0)))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_source 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT____VdfgTmp_h728c09b0__0) 
            << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__a_first)
                       ? ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT____VdfgTmp_h728c09b0__0))
                           ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_MPORT_addr)
                           : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT____VdfgTmp_h728c09b0__0))
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_MPORT_addr)
                               : ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT____VdfgTmp_h728c09b0__0))
                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_MPORT_addr)
                                   : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_19))))
                       : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__source_r)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask_acc 
        = ((2U <= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3))) 
           | (IData)(vlSelf->__VdfgTmp_hd68defa0__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc 
        = ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3)) 
           | (IData)(vlSelf->__VdfgTmp_hd68defa0__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask_acc_1 
        = ((2U <= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3))) 
           | (IData)(vlSelf->__VdfgTmp_h6abe75de__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1 
        = ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_3)) 
           | (IData)(vlSelf->__VdfgTmp_h6abe75de__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__mask_acc 
        = (1U & ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size)) 
                 | (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_bit_1)) 
                          & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__mask_sizeOH_shiftAmount)) 
                             >> 1U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__mask_acc_1 
        = ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_bit_1) 
              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__mask_sizeOH_shiftAmount)) 
                 >> 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_eq_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_bit)) 
                 & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_bit_1))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_eq_3 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_bit)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_bit_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_eq_4 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_bit_1)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_bit));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_eq_5 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_bit) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_bit_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_acc 
        = (1U & ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size)) 
                 | (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_bit)) 
                          & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_sizeOH_shiftAmount)) 
                             >> 2U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_acc_1 
        = ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_bit) 
              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_sizeOH_shiftAmount)) 
                 >> 2U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_legal 
        = (((0ULL == (0xffffffff80000000ULL & (0x80000000ULL 
                                               ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_address))) 
            | (0ULL == (0xfffffffffffff000ULL & (0x1000ULL 
                                                 ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_address)))) 
           & ((~ ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_opcode)) 
                  | (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_opcode)))) 
              | (0ULL == (0x80000000ULL & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_address))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__last 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT____VdfgTmp_he7c815ba__0) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__count) 
              == (1U & (~ (1U & (((IData)(7U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size)) 
                                 >> 2U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_42 
        = ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))
            ? 2U : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))
                     ? 1U : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))
                              ? 1U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))
                                       ? 1U : 0U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_source 
        = ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_4))
            ? 0U : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_4))
                     ? 0U : ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_4))
                              ? 0U : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_4))
                                       ? 0U : ((3U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_4))
                                                ? 0U
                                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_32))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__stall 
        = ((~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_grant)) 
               | (0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__free))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__d_first));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__enable_0 
        = (1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__count) 
                    & (~ (1U & (((IData)(7U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size)) 
                                >> 2U))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_177 
        = ((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size)) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT____VdfgTmp_h728c09b0__0)) 
              | ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT____VdfgTmp_h728c09b0__0)) 
                 | ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT____VdfgTmp_h728c09b0__0)) 
                    | ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT____VdfgTmp_h728c09b0__0)) 
                       | ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT____VdfgTmp_h728c09b0__0)) 
                          | ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT____VdfgTmp_h728c09b0__0)) 
                             | ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT____VdfgTmp_h728c09b0__0)) 
                                | (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT____VdfgTmp_h728c09b0__0))))))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_source 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT____VdfgTmp_h728c09b0__0) 
            << 3U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__a_first)
                       ? ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT____VdfgTmp_h728c09b0__0))
                           ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_MPORT_addr)
                           : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT____VdfgTmp_h728c09b0__0))
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_MPORT_addr)
                               : ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT____VdfgTmp_h728c09b0__0))
                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_MPORT_addr)
                                   : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_19))))
                       : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__source_r)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_lo 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask_acc) 
             | (1U == (3U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6))) 
            << 1U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask_acc) 
                      | (0U == (3U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask_hi_lo 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask_acc_1) 
           | (2U == (3U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask_hi_hi 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask_acc_1) 
                 | ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                     >> 1U) & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__mask_acc 
        = (1U & ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size)) 
                 | (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_bit_1)) 
                          & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__mask_sizeOH_shiftAmount)) 
                             >> 1U)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__mask_acc_1 
        = ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_bit_1) 
              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__mask_sizeOH_shiftAmount)) 
                 >> 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_eq_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_bit)) 
                 & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_bit_1))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_eq_3 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_bit)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_bit_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_eq_4 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_bit_1)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_bit));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_eq_5 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_bit) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_bit_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_acc 
        = (1U & ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size)) 
                 | (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_bit)) 
                          & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_sizeOH_shiftAmount)) 
                             >> 2U)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_acc_1 
        = ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_bit) 
              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_sizeOH_shiftAmount)) 
                 >> 2U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_legal 
        = (((0ULL == (0xffffffff80000000ULL & (0x80000000ULL 
                                               ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_address))) 
            | ((0ULL == (0xffffffffc0000000ULL & (0x40000000ULL 
                                                  ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_address))) 
               | (0ULL == (0xfffffffffffff000ULL & 
                           (0x1000ULL ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_address))))) 
           & ((~ ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_opcode)) 
                  | (7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_opcode)))) 
              | (0ULL == (0xc0000000ULL & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_address))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__last 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT____VdfgTmp_he7c815ba__0) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__count) 
              == (1U & (~ (1U & (((IData)(7U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size)) 
                                 >> 2U))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___GEN_42 
        = ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))
            ? 2U : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))
                     ? 1U : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))
                              ? 1U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))
                                       ? 1U : 0U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__readdevice 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSWB_readflag) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h81482532__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__writedevicedata 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ClintWen) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h81482532__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h894bd1aa__0 
        = ((0x1bU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__opcode)) 
           & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__func3)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__ItypeOpKey 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__func3) 
            << 7U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__opcode));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__sraw 
        = ((0x3bU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__opcode)) 
           & ((0x20U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__func7)) 
              & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__func3))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hb6d1737f__0 
        = ((0x3bU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__opcode)) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__func7)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hb69999fa__0 
        = ((0x3bU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__opcode)) 
           & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__func7)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h8583f8a4__0 
        = ((0x1bU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__opcode)) 
           | (0x13U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__opcode)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__csrflag 
        = ((~ ((0x73U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IDU__io_IFID_inst) 
               | (0x30200073U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IDU__io_IFID_inst))) 
           & (0x73U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__opcode)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_fence 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__fencei) 
           | (0x100fU == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IDU__io_IFID_inst));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_fence 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__fencei) 
           | (0x100fU == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IDU__io_IFID_inst));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Score_RScore_valid 
        = ((0x100073U != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IDU__io_IFID_inst) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rif_id_valid));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu_reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rif_id_pc = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rif_id_flush = 0U;
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Id_ready) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rif_id_pc 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_pc;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rif_id_flush 
            = ((~ ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__next)) 
                   | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__fnext)))) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__realflush));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mulvalid 
        = (((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Ridex_AluOp_op)) 
            | (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Ridex_AluOp_op))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Ridex_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__divvalid 
        = (((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Ridex_AluOp_op)) 
            | (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Ridex_AluOp_op))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Ridex_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtimein 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT____VdfgTmp_h8c586c71__0)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__REXLS_rs2
            : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtip)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime
                : (1ULL + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__Cachenext 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__Cache))
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Lsu_Cache_valid)
                ? 1U : 0U) : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__Cache))
                               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Cache_DataOk)
                                   ? 0U : 1U) : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Lsu_Cache_valid)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__REXLS_alures)
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__RegCacheAddr);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__readys_filter_lo 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_out_valid) 
            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_in_arvalid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_2 
        = (0xffU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_1) 
                     >> 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_2 
        = (0xffU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_1) 
                     >> 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_7 
        = (0xffU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_6) 
                     >> 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_6)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_12 
        = (0xffU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_11) 
                     >> 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_11)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_17 
        = (0xffU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_16) 
                     >> 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_16)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_22 
        = (0xffU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_21) 
                     >> 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_21)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_7 
        = (0xffU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_6) 
                     >> 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_6)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_12 
        = (0xffU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_11) 
                     >> 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_11)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_17 
        = (0xffU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_16) 
                     >> 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_16)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_22 
        = (0xffU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_21) 
                     >> 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_21)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_legal)
              ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_6 
                 >> 0xcU) : 1U) << 0xcU) | (0xfffU 
                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_6));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass_c) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_c_bits_address = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_address = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_c_bits_address 
            = ((0x1000U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_legal)) 
                            << 0xcU) | (0xfffff000U 
                                        & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_6))) 
               | (0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_6));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_address 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeat_last_1 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__ram_opcode_MPORT_data)) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeat_count_1) 
                    == (1U & (~ (1U & (((IData)(7U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__ram_size_MPORT_data)) 
                                       >> 2U)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT____VdfgTmp_h95ec52b7__0 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1)) 
           & (IData)((6U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__ram_opcode_MPORT_data)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT____VdfgTmp_h4c740f86__0 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_counter_1)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2475));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT____VdfgTmp_h4c740f86__0 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_first_counter_1)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2475));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_h4c740f86__0 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2475));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT____VdfgTmp_h4c740f86__0 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_first_counter_1)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2475));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT____VdfgTmp_h95ec52b7__0 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2475));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT____VdfgTmp_h4c740f86__0 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2475));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_ready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__last_1)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_ready)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__q_legal)
              ? (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___GEN_6 
                 >> 0xcU) : 1U) << 0xcU) | (0xfffU 
                                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___GEN_6));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass_c) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_address = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_address 
            = ((0x1000U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__q_legal)) 
                            << 0xcU) | (0xfffff000U 
                                        & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___GEN_6))) 
               | (0xfffU & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___GEN_6));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeat_last_1 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_opcode_MPORT_data)) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeat_count_1) 
                    == (1U & (~ (1U & (((IData)(7U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_size_MPORT_data)) 
                                       >> 2U)))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT____VdfgTmp_h95ec52b7__0 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__c_first_counter_1)) 
           & (IData)((6U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_opcode_MPORT_data)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT____VdfgTmp_hcb13d3f5__0 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_counter_1)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT____VdfgTmp_hcb13d3f5__0 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_first_counter_1)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_hcb13d3f5__0 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_first_counter_1)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT____VdfgTmp_hcb13d3f5__0 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_first_counter_1)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT____VdfgTmp_h647911d6__0 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_first_counter_1)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT____VdfgTmp_h4c740f86__0 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_first_counter_1)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_ready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__last_1)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_ready)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_2 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_1) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT___a_opcode_lookup_T_1 
        = (vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__inflight_opcodes 
           >> ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor_io_in_d_bits_source) 
               << 2U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT____VdfgTmp_h5d3bc996__0 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__d_first_counter_2)) 
           & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor_io_in_d_bits_opcode)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT___a_opcode_lookup_T_1 
        = (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__inflight_opcodes 
           >> ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_source) 
               << 2U));
    if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__beatsLeft))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__muxStateEarly_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__earlyWinner_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_denied 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__earlyWinner_1;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__muxStateEarly_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__state_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_denied 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__state_1;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT___GEN_7 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__formatValid)
                  ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data
                  : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__format_r)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT___first_beats_c_T_1 
        = ((8U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__first_beats_beats)
            : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT___GEN_7 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__formatValid)
                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data
                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__format_r)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT___first_beats_c_T_1 
        = ((8U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__first_beats_beats)
            : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_2 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_1) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_1)));
    if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__beatsLeft))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__muxStateEarly_0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__earlyWinner_0;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_denied 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__earlyWinner_1;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__muxStateEarly_0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__state_0;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_denied 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__state_1;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize_T_5 
        = (0xffU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize_T_4) 
                     >> 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize_T_4)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize_T_5 
        = (0xffU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize_T_4) 
                     >> 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize_T_4)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___a_opcode_lookup_T_1 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__inflight_opcodes 
           >> ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_source) 
               << 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT____VdfgTmp_h5d3bc996__0 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__d_first_counter_2)) 
           & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_opcode)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__bundleOut_0_a_bits_data_masked_enable_0 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__enable_0) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__bundleOut_0_a_bits_data_rdata_written_once))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__bundleOut_0_a_bits_mask_masked_enable_0 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__enable_0) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__bundleOut_0_a_bits_mask_rdata_written_once))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass)
            ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_source));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask_acc_1) 
             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask_eq_5)) 
            << 3U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask_acc_1) 
                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask_eq_4)) 
                       << 2U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask_acc) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask_eq_3)) 
                                  << 1U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask_acc) 
                                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask_eq_2)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_mask 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_opcode))
            ? ((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                      >> 0x18U)) | ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                           >> 0x10U)) 
                                    | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                              >> 8U)) 
                                       | (1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U]))))
            : (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask_eq_5)) 
                 << 3U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask_eq_4)) 
                           << 2U)) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask_eq_3)) 
                                       << 1U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask_eq_2)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__mask 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__mask_acc_1) 
             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_bit_1) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_bit_2))) 
            << 3U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__mask_acc_1) 
                        | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_bit_2)) 
                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_bit_1))) 
                       << 2U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__mask_acc) 
                                   | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_bit_1)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_bit_2))) 
                                  << 1U) | (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__mask_acc) 
                                                  | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_bit_1)) 
                                                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_bit_2))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_sizeOH_shiftAmount)) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_eq_2))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_sizeOH_shiftAmount)) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_eq_3))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_sizeOH_shiftAmount)) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_eq_4))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_sizeOH_shiftAmount)) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_eq_5))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_address 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__q_legal)
              ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                 >> 0xcU) : 1U) << 0xcU) | (0xfffU 
                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_6));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_mask = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_mask 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_mask;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_address;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater__DOT__full) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_size 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater__DOT__saved_size;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_source 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater__DOT__saved_source;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_address 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater__DOT__saved_address;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_size 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_source 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_address 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_44 
        = ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))
            ? 4U : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))
                     ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_42)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___a_opcode_lookup_T_1 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__inflight_opcodes 
           >> ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_source) 
               << 2U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__bundleOut_0_a_bits_data_masked_enable_0 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__enable_0) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__bundleOut_0_a_bits_data_rdata_written_once))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__bundleOut_0_a_bits_mask_masked_enable_0 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__enable_0) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__bundleOut_0_a_bits_mask_rdata_written_once))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass)
            ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_source));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask_hi_hi) 
            << 3U) | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask_hi_lo) 
                       << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_lo)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_mask 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_opcode))
            ? ((8U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                      >> 0x18U)) | ((4U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                           >> 0x10U)) 
                                    | ((2U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                              >> 8U)) 
                                       | (1U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U]))))
            : (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask_hi_hi) 
                << 3U) | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask_hi_lo) 
                           << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_lo))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__mask 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__mask_acc_1) 
             | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_bit_1) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_bit_2))) 
            << 3U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__mask_acc_1) 
                        | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_bit_2)) 
                           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_bit_1))) 
                       << 2U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__mask_acc) 
                                   | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_bit_1)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_bit_2))) 
                                  << 1U) | (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__mask_acc) 
                                                  | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_bit_1)) 
                                                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_bit_2))))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_sizeOH_shiftAmount)) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_eq_2))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_sizeOH_shiftAmount)) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_eq_3))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_sizeOH_shiftAmount)) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_eq_4))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_sizeOH_shiftAmount)) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_eq_5))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_address 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__q_legal)
              ? (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6 
                 >> 0xcU) : 1U) << 0xcU) | (0xfffU 
                                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_6));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_mask = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_mask 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_mask;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_address;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__full) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__saved_size;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__saved_source;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__saved_address;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___GEN_44 
        = ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))
            ? 4U : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))
                     ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___GEN_42)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__loaddouble 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__readdevice) 
           & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__REXLS_func3)));
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h950ae05f__0 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__Wstate)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__writedevicedata));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__storedouble 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__writedevicedata) 
           & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__REXLS_func3)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__RtypeOpKey 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__func7) 
            << 0xaU) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__ItypeOpKey));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__srlw 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hb6d1737f__0) 
           & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__func3)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__remuw 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hb69999fa__0) 
           & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__func3)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__sign32 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hb69999fa__0) 
           & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__func3)) 
              | ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__func3)) 
                 | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__func3)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__InstType 
        = (((0x33U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__opcode)) 
            | (0x3bU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__opcode)))
            ? 0U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h8583f8a4__0) 
                     | ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__opcode)) 
                        | ((0x67U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__opcode)) 
                           | ((0x73U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__opcode)) 
                              | (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__opcode))))))
                     ? 1U : ((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__opcode))
                              ? 2U : ((0x6fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__opcode))
                                       ? 5U : ((0x63U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__opcode))
                                                ? 3U
                                                : (
                                                   ((0x17U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__opcode)) 
                                                    | (0x37U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__opcode)))
                                                    ? 4U
                                                    : 6U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____VdfgTmp_h6f19a505__0 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__fstate)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_fence) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RLSWB_flush) 
                 & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__state)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____VdfgTmp_h6f19a505__0 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__fstate)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_fence) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RLSWB_flush) 
                 & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__state)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Flush 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__clintintr) 
           | ((0x100fU == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IDU__io_IFID_inst) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_fence) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_fence))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Score_RScore_busy2 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ScoreBoard__DOT__busy
           [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rs2] 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Score_RScore_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Score_RScore_busy1 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ScoreBoard__DOT__busy
           [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rs1] 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Score_RScore_valid));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mulvalid) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____Vcellinp__Multi__io_Exu_Multiplicand 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Ridex_AluOp_rd1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____Vcellinp__Multi__io_Exu_Multiplier 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Ridex_AluOp_rd2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Multi__DOT__Sumen 
            = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Multi__DOT__state));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____Vcellinp__Multi__io_Exu_Multiplicand = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____Vcellinp__Multi__io_Exu_Multiplier = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Multi__DOT__Sumen = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Multi__DOT__next 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Multi__DOT__state))
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mulvalid)
                ? 1U : 0U) : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Multi__DOT__state))
                               ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Multi__DOT__ind) 
                                   != ((0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Ridex_AluOp_op))
                                        ? 0x1eU : 0x3eU))
                                   ? 1U : 2U) : 0U));
    if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__state))) {
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__divvalid) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__next = 1U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT____VdfgTmp_h0bc766da__0 = 1U;
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__next = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT____VdfgTmp_h0bc766da__0 = 0U;
        }
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__next 
            = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__state))
                ? ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__divcount))
                    ? 2U : 1U) : 0U);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT____VdfgTmp_h0bc766da__0 = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__divendsign 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__divvalid) 
           & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Ridex_AluOp_rd1 
                      >> 0x3fU)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__divsorsign 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__divvalid) 
           & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Ridex_AluOp_rd2 
                      >> 0x3fU)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgExtracted_hf2dbe3cc__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mulvalid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__divvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____VdfgTmp_h5515e8c7__0 
        = (((QData)((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr 
                             >> 8U))) << 8U) | (QData)((IData)(
                                                               (0xf0U 
                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag[0U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag0
        [(0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr 
                  >> 4U))];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag[1U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag1
        [(0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr 
                  >> 4U))];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag[2U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag2
        [(0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr 
                  >> 4U))];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag[3U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag3
        [(0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr 
                  >> 4U))];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____VdfgTmp_hd43e32ae__0 
        = (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr 
             >> 8U) == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag3
            [(0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr 
                      >> 4U))]) & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__valid
           [(3U | (0x3cU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr 
                            >> 2U)))]);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____VdfgTmp_h512f6b16__0 
        = (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr 
             >> 8U) == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag2
            [(0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr 
                      >> 4U))]) & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__valid
           [(2U | (0x3cU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr 
                            >> 2U)))]);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____VdfgTmp_he8e6d7ce__0 
        = (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr 
             >> 8U) == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag1
            [(0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr 
                      >> 4U))]) & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__valid
           [(1U | (0x3cU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr 
                            >> 2U)))]);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu_reset 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor_io_in_a_valid 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__beatsLeft))
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_in_arvalid) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_out_valid))
            : (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_in_arvalid) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__state_0)) 
               | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__state_1) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_out_valid))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor_io_in_a_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__repeated_repeater__DOT__full) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor_io_in_a_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__readys_filter 
        = ((((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__readys_mask)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__readys_filter_lo)) 
            << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__readys_filter_lo));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_3 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_2) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_3 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_2) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_2)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_8 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_7) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_7)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_13 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_12) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_12)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_18 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_17) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_17)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_23 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_22) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_22)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_8 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_7) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_7)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_13 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_12) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_12)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_18 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_17) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_17)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_23 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_22) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_22)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__full) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_c_bits_address 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__saved_address;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__ram_source_MPORT_data 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__saved_source;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_c_bits_address 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_c_bits_address;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__ram_source_MPORT_data 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
               << 1U);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_ready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass_c)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_ready));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1__DOT__full) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_c_bits_address 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1__DOT__saved_address;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_source_MPORT_data 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1__DOT__saved_source;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_c_bits_address 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_address;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_source_MPORT_data 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
               << 1U);
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_ready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass_c)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_ready));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & (IData)((7ULL & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                         >> 1U)))))
            ? 2U : ((4U == (7U & (IData)((7ULL & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                  >> 1U)))))
                     ? 1U : ((3U == (7U & (IData)((7ULL 
                                                   & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                      >> 1U)))))
                              ? 1U : ((2U == (7U & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                       ? 1U : 0U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & (IData)((7ULL & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                         >> 1U)))))
            ? 2U : ((4U == (7U & (IData)((7ULL & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                  >> 1U)))))
                     ? 1U : ((3U == (7U & (IData)((7ULL 
                                                   & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                      >> 1U)))))
                              ? 1U : ((2U == (7U & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                       ? 1U : 0U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_param 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__muxStateEarly_0)
            ? ((2U == (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__ram_param
                       [0U])) ? 2U : ((1U == (3U & 
                                              vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__ram_param
                                              [0U]))
                                       ? 2U : 1U)) : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_corrupt 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_denied) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__beats1_opdata));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__muxStateEarly_0)
             ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__ram_source
            [0U] : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_denied)
                           ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_source
                          [0U] : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_size 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__muxStateEarly_0)
             ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__ram_size
            [0U] : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_denied)
                           ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_size
                          [0U] : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__muxStateEarly_0)
             ? 6U : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_denied)
                            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__da_bits_opcode)
                            : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq_io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_send) 
           & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT___GEN_7)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq_io_enq_valid 
        = (0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_send) 
                    & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT___GEN_7)) 
                       >> 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq_io_enq_valid 
        = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_send) 
                    & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT___GEN_7)) 
                       >> 2U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq_io_enq_valid 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_send) 
                    & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT___GEN_7)) 
                       >> 3U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq_io_enq_valid 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_send) 
                   & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT___GEN_7)) 
                      >> 4U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT____VdfgTmp_hdd5175e6__0 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_send) 
                 & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT___GEN_7)) 
                    >> 5U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_c2b_send_REG_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_c2b_send_REG));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG_2 
        = (((((((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG))
                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG_1_0
                 : 0U) | ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG))
                           ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG_1_1
                           : 0U)) | ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG))
                                      ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG_1_2
                                      : 0U)) | ((8U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG))
                                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG_1_3
                                                 : 0U)) 
            | ((0x10U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG))
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG_1_4
                : 0U)) | ((0x20U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG))
                           ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG_1_5
                           : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq_io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_send) 
           & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT___GEN_7)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq_io_enq_valid 
        = (0x7fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_send) 
                    & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT___GEN_7)) 
                       >> 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq_io_enq_valid 
        = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_send) 
                    & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT___GEN_7)) 
                       >> 2U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq_io_enq_valid 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_send) 
                    & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT___GEN_7)) 
                       >> 3U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq_io_enq_valid 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_send) 
                   & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT___GEN_7)) 
                      >> 4U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT____VdfgTmp_hdd5175e6__0 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_send) 
                 & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT___GEN_7)) 
                    >> 5U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_send_REG_1 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_send_REG));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG_2 
        = (((((((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG))
                 ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG_1_0
                 : 0U) | ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG))
                           ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG_1_1
                           : 0U)) | ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG))
                                      ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG_1_2
                                      : 0U)) | ((8U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG))
                                                 ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG_1_3
                                                 : 0U)) 
            | ((0x10U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG))
                ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG_1_4
                : 0U)) | ((0x20U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG))
                           ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG_1_5
                           : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_param 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__muxStateEarly_0)
            ? ((2U == (3U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_param
                       [0U])) ? 2U : ((1U == (3U & 
                                              vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_param
                                              [0U]))
                                       ? 2U : 1U)) : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_corrupt 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_denied) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__beats1_opdata));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__muxStateEarly_0)
             ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_source
            [0U] : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_denied)
                           ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source
                          [0U] : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_size 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__muxStateEarly_0)
             ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_size
            [0U] : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_denied)
                           ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_size
                          [0U] : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__muxStateEarly_0)
             ? 6U : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_denied)
                            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__da_bits_opcode)
                            : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize_T_6 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize_T_5) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize_T_5)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize_T_6 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize_T_5) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize_T_5)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & (IData)((7ULL & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                         >> 1U)))))
            ? 2U : ((4U == (7U & (IData)((7ULL & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                  >> 1U)))))
                     ? 1U : ((3U == (7U & (IData)((7ULL 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                      >> 1U)))))
                              ? 1U : ((2U == (7U & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                       ? 1U : 0U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_a_bits_data 
        = (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_data)) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__bundleOut_0_a_bits_data_masked_enable_0)
                                          ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_data
                                          : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__bundleOut_0_a_bits_data_rdata_0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_acc_5) 
             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_eq_5) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_bit_2))) 
            << 7U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_acc_5) 
                        | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_bit_2)) 
                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_eq_5))) 
                       << 6U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_acc_4) 
                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_eq_4) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_bit_2))) 
                                  << 5U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_acc_4) 
                                              | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_bit_2)) 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_eq_4))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_acc_3) 
                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_eq_3) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_bit_2))) 
                                                << 3U) 
                                               | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_acc_3) 
                                                    | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_bit_2)) 
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_eq_3))) 
                                                   << 2U) 
                                                  | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_acc_2) 
                                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_eq_2) 
                                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_bit_2))) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_acc_2) 
                                                        | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_bit_2)) 
                                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask_eq_2))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_282 
        = ((0U == (0xfffff000U & (0x1000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_address))) 
           | (0U == (0x80000000U & (0x80000000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_address))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & (IData)((7ULL & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                         >> 1U)))))
            ? 2U : ((4U == (7U & (IData)((7ULL & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                  >> 1U)))))
                     ? 1U : ((3U == (7U & (IData)((7ULL 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                      >> 1U)))))
                              ? 1U : ((2U == (7U & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                       ? 1U : 0U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_a_bits_data 
        = (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_data)) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__bundleOut_0_a_bits_data_masked_enable_0)
                                          ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_data
                                          : vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__bundleOut_0_a_bits_data_rdata_0))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_acc_5) 
             | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_eq_5) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_bit_2))) 
            << 7U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_acc_5) 
                        | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_bit_2)) 
                           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_eq_5))) 
                       << 6U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_acc_4) 
                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_eq_4) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_bit_2))) 
                                  << 5U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_acc_4) 
                                              | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_bit_2)) 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_eq_4))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_acc_3) 
                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_eq_3) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_bit_2))) 
                                                << 3U) 
                                               | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_acc_3) 
                                                    | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_bit_2)) 
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_eq_3))) 
                                                   << 2U) 
                                                  | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_acc_2) 
                                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_eq_2) 
                                                          & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_bit_2))) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_acc_2) 
                                                        | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_bit_2)) 
                                                           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask_eq_2))))))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_294 
        = ((0U == (0xfffff000U & (0x1000U ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_address))) 
           | ((0U == (0xc0000000U & (0x40000000U ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_address))) 
              | (0U == (0x80000000U & (0x80000000U 
                                       ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_address)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h33d13855__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__loaddouble) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__reglen));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hceeb7920__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__storedouble) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__reglen));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__Rtype_Op 
        = ((0x8033U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__RtypeOpKey)
            ? 1U : ((0x433U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__RtypeOpKey)
                     ? 9U : ((0x6b3U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__RtypeOpKey)
                              ? 0xdU : ((0x633U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__RtypeOpKey)
                                         ? 0xaU : (
                                                   (0x233U 
                                                    == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__RtypeOpKey)
                                                    ? 6U
                                                    : 
                                                   ((0x7b3U 
                                                     == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__RtypeOpKey)
                                                     ? 0xeU
                                                     : 
                                                    ((0x733U 
                                                      == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__RtypeOpKey)
                                                      ? 0xbU
                                                      : 
                                                     ((0x133U 
                                                       == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__RtypeOpKey)
                                                       ? 0xcU
                                                       : 
                                                      ((0x1b3U 
                                                        == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__RtypeOpKey)
                                                        ? 2U
                                                        : 
                                                       ((0x803bU 
                                                         == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__RtypeOpKey)
                                                         ? 1U
                                                         : 
                                                        ((0x43bU 
                                                          == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__RtypeOpKey)
                                                          ? 9U
                                                          : 
                                                         ((0x63bU 
                                                           == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__RtypeOpKey)
                                                           ? 0xaU
                                                           : 
                                                          ((0x6bbU 
                                                            == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__RtypeOpKey)
                                                            ? 0xdU
                                                            : 
                                                           ((0x73bU 
                                                             == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__RtypeOpKey)
                                                             ? 0xbU
                                                             : 
                                                            ((0x7bbU 
                                                              == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__RtypeOpKey)
                                                              ? 0xeU
                                                              : 
                                                             ((0xbbU 
                                                               == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__RtypeOpKey)
                                                               ? 0xfU
                                                               : 
                                                              ((0xb3U 
                                                                == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__RtypeOpKey)
                                                                ? 5U
                                                                : 
                                                               ((0x82bbU 
                                                                 == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__RtypeOpKey)
                                                                 ? 3U
                                                                 : 
                                                                ((0x2bbU 
                                                                  == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__RtypeOpKey)
                                                                  ? 8U
                                                                  : 
                                                                 ((0x2b3U 
                                                                   == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__RtypeOpKey)
                                                                   ? 8U
                                                                   : 
                                                                  ((0x3b3U 
                                                                    == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__RtypeOpKey)
                                                                    ? 4U
                                                                    : 
                                                                   ((0x333U 
                                                                     == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__RtypeOpKey)
                                                                     ? 7U
                                                                     : 0U))))))))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idex_wen 
        = ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__InstType)) 
           & ((3U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__InstType)) 
              & ((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__InstType)) 
                 & (0xfU != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__opcode)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__InstType))
            ? (((- (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hbc820a58__0))) 
                << 0xcU) | (QData)((IData)(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rif_id_valid)
                                             ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rif_id_inst 
                                                >> 0x14U)
                                             : 0U))))
            : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__InstType))
                ? (((QData)((IData)((- (IData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hbc820a58__0))))) 
                    << 0x20U) | (QData)((IData)((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rif_id_valid)
                                                   ? 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rif_id_inst 
                                                   >> 0xcU)
                                                   : 0U) 
                                                 << 0xcU))))
                : ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__InstType))
                    ? (((- (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hbc820a58__0))) 
                        << 0x14U) | (QData)((IData)(
                                                    ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rif_id_valid)
                                                        ? 
                                                       (0xffU 
                                                        & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rif_id_inst 
                                                           >> 0xcU))
                                                        : 0U) 
                                                      << 0xcU) 
                                                     | ((0x7ff800U 
                                                         & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rif_id_valid) 
                                                             << 0xbU) 
                                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rif_id_inst 
                                                               >> 9U))) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rif_id_valid)
                                                             ? 
                                                            (0x3ffU 
                                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rif_id_inst 
                                                                >> 0x15U))
                                                             : 0U) 
                                                           << 1U))))))
                    : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__InstType))
                        ? (((- (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hbc820a58__0))) 
                            << 0xcU) | (QData)((IData)(
                                                       ((0xfffff800U 
                                                         & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rif_id_valid) 
                                                             << 0xbU) 
                                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rif_id_inst 
                                                               << 4U))) 
                                                        | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rif_id_valid)
                                                              ? 
                                                             (0x3fU 
                                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rif_id_inst 
                                                                 >> 0x19U))
                                                              : 0U) 
                                                            << 5U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rif_id_valid)
                                                                ? 
                                                               (0xfU 
                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rif_id_inst 
                                                                   >> 8U))
                                                                : 0U) 
                                                              << 1U))))))
                        : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__InstType))
                            ? (((- (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hbc820a58__0))) 
                                << 0xcU) | (QData)((IData)(
                                                           (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__func7) 
                                                             << 5U) 
                                                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rd)))))
                            : 0ULL)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__realflush 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Flush) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__FLUSH));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__realbusy2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Pass_pass2)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Score_RScore_busy2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rData2 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Pass_pass2) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Score_RScore_busy2))
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Pass_rdata
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__REGS__DOT__regs
           [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rs2]);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__realbusy1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Pass_pass1)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Score_RScore_busy1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rData1 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Pass_pass1) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Score_RScore_busy1))
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Pass_rdata
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__REGS__DOT__regs
           [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rs1]);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Multi__DOT__ProdGen__DOT__chooseSignal 
        = ((4U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____Vcellinp__Multi__io_Exu_Multiplier 
                           >> (0x3fU & ((IData)(1U) 
                                        + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Multi__DOT__ind))))) 
                  << 2U)) | ((2U & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____Vcellinp__Multi__io_Exu_Multiplier 
                                             >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Multi__DOT__ind))) 
                                    << 1U)) | ((0U 
                                                != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Multi__DOT__ind)) 
                                               & (IData)(
                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____Vcellinp__Multi__io_Exu_Multiplier 
                                                          >> 
                                                          (0x3fU 
                                                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Multi__DOT__ind) 
                                                              - (IData)(1U))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__divres 
        = (((3U == ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Ridex_AluOp_op))
                     ? 3U : 0U)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__divendsign) 
                                    ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__divsorsign)))
            ? (1ULL + (~ (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__DivRes[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__DivRes[0U])))))
            : (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__DivRes[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__DivRes[0U]))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__cmpDivs 
        = (((3U == ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Ridex_AluOp_op))
                     ? 3U : 0U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__divsorsign))
            ? (1ULL + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__divvalid)
                        ? (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Ridex_AluOp_rd2)
                        : 0xffffffffffffffffULL)) : 
           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__divvalid)
             ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Ridex_AluOp_rd2
             : 0ULL));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alubusy 
        = (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgExtracted_hf2dbe3cc__0)) 
           | ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state)) 
              | ((~ ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__state)) 
                     | (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Multi__DOT__state)))) 
                 & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state)))));
    if ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__fstate))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__addr 
            = (QData)((IData)(((((0U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__fencecnt)))
                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag0
                                 [(0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__fencecnt) 
                                           >> 2U))]
                                  : ((1U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__fencecnt)))
                                      ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag1
                                     [(0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__fencecnt) 
                                               >> 2U))]
                                      : ((2U == (3U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__fencecnt)))
                                          ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag2
                                         [(0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__fencecnt) 
                                                   >> 2U))]
                                          : ((3U == 
                                              (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__fencecnt)))
                                              ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag3
                                             [(0xfU 
                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__fencecnt) 
                                                  >> 2U))]
                                              : 0U)))) 
                                << 8U) | (0xf0U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__fencecnt) 
                                                   << 2U)))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__fencecnt;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__addr 
            = (QData)((IData)(((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag
                                [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__chooseway] 
                                << 8U) | (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr 
            = (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__state)) 
                | (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__state)))
                ? ((0x3cU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr 
                             >> 2U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____VdfgTmp_hd43e32ae__0)
                                         ? 3U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____VdfgTmp_h512f6b16__0)
                                                  ? 2U
                                                  : 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____VdfgTmp_he8e6d7ce__0)
                                                   ? 1U
                                                   : 0U))))
                : ((0x3cU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr 
                             >> 2U)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__chooseway)));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__hit 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____VdfgTmp_hd43e32ae__0) 
            << 3U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____VdfgTmp_h512f6b16__0) 
                       << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____VdfgTmp_he8e6d7ce__0) 
                                  << 1U) | (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr 
                                              >> 8U) 
                                             == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag0
                                             [(0xfU 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr 
                                                  >> 4U))]) 
                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__valid
                                            [(0x3cU 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr 
                                                 >> 2U))]))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__readys_unready 
        = (0xfU & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__readys_filter) 
                     >> 1U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__readys_filter) 
                               >> 2U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__readys_mask) 
                                          << 2U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__header_hi 
        = (((((IData)((0U != (0x1fU & (~ (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msbOH_T_9 
                                          >> 0xfU))))) 
              << 9U) << 0xaU) | ((((IData)((0U != (0xffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_21) 
                                                      >> 8U)))) 
                                   << 8U) << 0xaU) 
                                 | ((((IData)((0U != 
                                               (0xfU 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_22) 
                                                   >> 4U)))) 
                                      << 7U) << 0xaU) 
                                    | ((((IData)((0U 
                                                  != 
                                                  (3U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_23) 
                                                      >> 2U)))) 
                                         << 6U) << 0xaU) 
                                       | ((0x8000U 
                                           & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_23) 
                                               << 0xcU) 
                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_23) 
                                                 << 0xeU))) 
                                          | ((((IData)(
                                                       (0U 
                                                        != 
                                                        (0x1fU 
                                                         & (~ 
                                                            (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msbOH_T_7 
                                                             >> 0xfU))))) 
                                               << 4U) 
                                              | (((IData)(
                                                          (0U 
                                                           != 
                                                           (0xffU 
                                                            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_16) 
                                                               >> 8U)))) 
                                                  << 3U) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (0xfU 
                                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_17) 
                                                                  >> 4U)))) 
                                                     << 2U) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != 
                                                                 (3U 
                                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_18) 
                                                                     >> 2U)))) 
                                                        << 1U) 
                                                       | (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0xaU 
                                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_18)))))))) 
                                             << 0xaU)))))) 
           | (((IData)((0U != (0x1fU & (~ (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msbOH_T_5 
                                           >> 0xfU))))) 
               << 9U) | (((IData)((0U != (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_11) 
                                                   >> 8U)))) 
                          << 8U) | (((IData)((0U != 
                                              (0xfU 
                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_12) 
                                                  >> 4U)))) 
                                     << 7U) | (((IData)(
                                                        (0U 
                                                         != 
                                                         (3U 
                                                          & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_13) 
                                                             >> 2U)))) 
                                                << 6U) 
                                               | ((0x20U 
                                                   & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_13) 
                                                       << 2U) 
                                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_13) 
                                                         << 4U))) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (0x1fU 
                                                                & (~ 
                                                                   (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msbOH_T_3 
                                                                    >> 0xfU))))) 
                                                      << 4U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0xffU 
                                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_6) 
                                                                      >> 8U)))) 
                                                         << 3U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (0xfU 
                                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_7) 
                                                                         >> 4U)))) 
                                                            << 2U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (3U 
                                                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_8) 
                                                                            >> 2U)))) 
                                                               << 1U) 
                                                              | (IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0xaU 
                                                                          & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_8))))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__header_hi 
        = (((((IData)((0U != (0x1fU & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msbOH_T_9 
                                          >> 0xfU))))) 
              << 9U) << 0xaU) | ((((IData)((0U != (0xffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_21) 
                                                      >> 8U)))) 
                                   << 8U) << 0xaU) 
                                 | ((((IData)((0U != 
                                               (0xfU 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_22) 
                                                   >> 4U)))) 
                                      << 7U) << 0xaU) 
                                    | ((((IData)((0U 
                                                  != 
                                                  (3U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_23) 
                                                      >> 2U)))) 
                                         << 6U) << 0xaU) 
                                       | ((0x8000U 
                                           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_23) 
                                               << 0xcU) 
                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_23) 
                                                 << 0xeU))) 
                                          | ((((IData)(
                                                       (0U 
                                                        != 
                                                        (0x1fU 
                                                         & (~ 
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msbOH_T_7 
                                                             >> 0xfU))))) 
                                               << 4U) 
                                              | (((IData)(
                                                          (0U 
                                                           != 
                                                           (0xffU 
                                                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_16) 
                                                               >> 8U)))) 
                                                  << 3U) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (0xfU 
                                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_17) 
                                                                  >> 4U)))) 
                                                     << 2U) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != 
                                                                 (3U 
                                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_18) 
                                                                     >> 2U)))) 
                                                        << 1U) 
                                                       | (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0xaU 
                                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_18)))))))) 
                                             << 0xaU)))))) 
           | (((IData)((0U != (0x1fU & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msbOH_T_5 
                                           >> 0xfU))))) 
               << 9U) | (((IData)((0U != (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_11) 
                                                   >> 8U)))) 
                          << 8U) | (((IData)((0U != 
                                              (0xfU 
                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_12) 
                                                  >> 4U)))) 
                                     << 7U) | (((IData)(
                                                        (0U 
                                                         != 
                                                         (3U 
                                                          & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_13) 
                                                             >> 2U)))) 
                                                << 6U) 
                                               | ((0x20U 
                                                   & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_13) 
                                                       << 2U) 
                                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_13) 
                                                         << 4U))) 
                                                  | (((IData)(
                                                              (0U 
                                                               != 
                                                               (0x1fU 
                                                                & (~ 
                                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msbOH_T_3 
                                                                    >> 0xfU))))) 
                                                      << 4U) 
                                                     | (((IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0xffU 
                                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_6) 
                                                                      >> 8U)))) 
                                                         << 3U) 
                                                        | (((IData)(
                                                                    (0U 
                                                                     != 
                                                                     (0xfU 
                                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_7) 
                                                                         >> 4U)))) 
                                                            << 2U) 
                                                           | (((IData)(
                                                                       (0U 
                                                                        != 
                                                                        (3U 
                                                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_8) 
                                                                            >> 2U)))) 
                                                               << 1U) 
                                                              | (IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0xaU 
                                                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_8))))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_bits_corrupt 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_corrupt) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__corrupt_reg));
    VL_SHIFTR_WWI(512,512,9, __Vtemp_h6194d599__0, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
        = __Vtemp_h6194d599__0[0U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[1U] 
        = __Vtemp_h6194d599__0[1U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[2U] 
        = __Vtemp_h6194d599__0[2U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[3U] 
        = __Vtemp_h6194d599__0[3U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[4U] 
        = __Vtemp_h6194d599__0[4U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[5U] 
        = __Vtemp_h6194d599__0[5U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[6U] 
        = __Vtemp_h6194d599__0[6U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[7U] 
        = __Vtemp_h6194d599__0[7U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[8U] 
        = __Vtemp_h6194d599__0[8U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[9U] 
        = __Vtemp_h6194d599__0[9U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU] 
        = __Vtemp_h6194d599__0[0xaU];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU] 
        = __Vtemp_h6194d599__0[0xbU];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU] 
        = __Vtemp_h6194d599__0[0xcU];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU] 
        = __Vtemp_h6194d599__0[0xdU];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU] 
        = __Vtemp_h6194d599__0[0xeU];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU] 
        = __Vtemp_h6194d599__0[0xfU];
    VL_SHIFTR_WWI(512,512,9, __Vtemp_ha60e5549__0, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
        = __Vtemp_ha60e5549__0[0U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[1U] 
        = __Vtemp_ha60e5549__0[1U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[2U] 
        = __Vtemp_ha60e5549__0[2U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[3U] 
        = __Vtemp_ha60e5549__0[3U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[4U] 
        = __Vtemp_ha60e5549__0[4U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[5U] 
        = __Vtemp_ha60e5549__0[5U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[6U] 
        = __Vtemp_ha60e5549__0[6U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[7U] 
        = __Vtemp_ha60e5549__0[7U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[8U] 
        = __Vtemp_ha60e5549__0[8U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[9U] 
        = __Vtemp_ha60e5549__0[9U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU] 
        = __Vtemp_ha60e5549__0[0xaU];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU] 
        = __Vtemp_ha60e5549__0[0xbU];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU] 
        = __Vtemp_ha60e5549__0[0xcU];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU] 
        = __Vtemp_ha60e5549__0[0xdU];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU] 
        = __Vtemp_ha60e5549__0[0xeU];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU] 
        = __Vtemp_ha60e5549__0[0xfU];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2406 
        = (IData)((4U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__last 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode)) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__count) 
                    == (1U & (~ (1U & (((IData)(7U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_size)) 
                                       >> 2U)))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq_io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__empty)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq_io_enq_valid)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_out_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq_io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__empty)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq_io_enq_valid)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_out_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq_io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__empty)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq_io_enq_valid)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_out_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq_io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__empty)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq_io_enq_valid)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_out_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq_io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__empty)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq_io_enq_valid)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_out_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_z 
        = (0x1fffffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_a 
                        + ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT____VdfgTmp_hdd5175e6__0)
                            ? ((0x14U < (0x1fU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                  >> 7U)))
                                ? 0xfffffU : (0xfffffU 
                                              & (((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                      >> 7U))) 
                                                 >> 1U)))
                            : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_z_1 
        = (0x1fffffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_b 
                        + ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT____VdfgTmp_hdd5175e6__0)
                            ? ((0x14U < (0x1fU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                  >> 0xcU)))
                                ? 0xfffffU : (0xfffffU 
                                              & (((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                      >> 0xcU))) 
                                                 >> 1U)))
                            : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_z_2 
        = (0x1fffffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_c 
                        + ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT____VdfgTmp_hdd5175e6__0)
                            ? ((0x14U < (0x1fU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                  >> 0x11U)))
                                ? 0xfffffU : (0xfffffU 
                                              & (((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                      >> 0x11U))) 
                                                 >> 1U)))
                            : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_z_3 
        = (0x1fffffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_d 
                        + ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT____VdfgTmp_hdd5175e6__0)
                            ? ((0x14U < (0x1fU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                  >> 0x16U)))
                                ? 0xfffffU : (0xfffffU 
                                              & (((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                      >> 0x16U))) 
                                                 >> 1U)))
                            : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_z_4 
        = (0x1fffffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__tx_e 
                        + ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT____VdfgTmp_hdd5175e6__0)
                            ? ((0x14U < (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                         >> 0x1bU))
                                ? 0xfffffU : (0xfffffU 
                                              & (((IData)(1U) 
                                                  << 
                                                  (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                   >> 0x1bU)) 
                                                 >> 1U)))
                            : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq_io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__empty)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq_io_enq_valid)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_out_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq_io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__empty)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq_io_enq_valid)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_out_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq_io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__empty)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq_io_enq_valid)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_out_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq_io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__empty)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq_io_enq_valid)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_out_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq_io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__empty)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq_io_enq_valid)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_out_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_z 
        = (0x1fffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_a 
                        + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT____VdfgTmp_hdd5175e6__0)
                            ? ((0x14U < (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                  >> 7U)))
                                ? 0xfffffU : (0xfffffU 
                                              & (((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                      >> 7U))) 
                                                 >> 1U)))
                            : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_z_1 
        = (0x1fffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_b 
                        + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT____VdfgTmp_hdd5175e6__0)
                            ? ((0x14U < (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                  >> 0xcU)))
                                ? 0xfffffU : (0xfffffU 
                                              & (((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                      >> 0xcU))) 
                                                 >> 1U)))
                            : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_z_2 
        = (0x1fffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_c 
                        + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT____VdfgTmp_hdd5175e6__0)
                            ? ((0x14U < (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                  >> 0x11U)))
                                ? 0xfffffU : (0xfffffU 
                                              & (((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                      >> 0x11U))) 
                                                 >> 1U)))
                            : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_z_3 
        = (0x1fffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_d 
                        + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT____VdfgTmp_hdd5175e6__0)
                            ? ((0x14U < (0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                  >> 0x16U)))
                                ? 0xfffffU : (0xfffffU 
                                              & (((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                      >> 0x16U))) 
                                                 >> 1U)))
                            : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_z_4 
        = (0x1fffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__tx_e 
                        + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT____VdfgTmp_hdd5175e6__0)
                            ? ((0x14U < (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                         >> 0x1bU))
                                ? 0xfffffU : (0xfffffU 
                                              & (((IData)(1U) 
                                                  << 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__b2c_data 
                                                   >> 0x1bU)) 
                                                 >> 1U)))
                            : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_bits_corrupt 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_corrupt) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__corrupt_reg));
    VL_SHIFTR_WWI(512,512,9, __Vtemp_h5c3b1f1f__0, vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
        = __Vtemp_h5c3b1f1f__0[0U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[1U] 
        = __Vtemp_h5c3b1f1f__0[1U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[2U] 
        = __Vtemp_h5c3b1f1f__0[2U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[3U] 
        = __Vtemp_h5c3b1f1f__0[3U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[4U] 
        = __Vtemp_h5c3b1f1f__0[4U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[5U] 
        = __Vtemp_h5c3b1f1f__0[5U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[6U] 
        = __Vtemp_h5c3b1f1f__0[6U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[7U] 
        = __Vtemp_h5c3b1f1f__0[7U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[8U] 
        = __Vtemp_h5c3b1f1f__0[8U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[9U] 
        = __Vtemp_h5c3b1f1f__0[9U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU] 
        = __Vtemp_h5c3b1f1f__0[0xaU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU] 
        = __Vtemp_h5c3b1f1f__0[0xbU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU] 
        = __Vtemp_h5c3b1f1f__0[0xcU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU] 
        = __Vtemp_h5c3b1f1f__0[0xdU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU] 
        = __Vtemp_h5c3b1f1f__0[0xeU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU] 
        = __Vtemp_h5c3b1f1f__0[0xfU];
    VL_SHIFTR_WWI(512,512,9, __Vtemp_h7b4ad598__0, vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
        = __Vtemp_h7b4ad598__0[0U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[1U] 
        = __Vtemp_h7b4ad598__0[1U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[2U] 
        = __Vtemp_h7b4ad598__0[2U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[3U] 
        = __Vtemp_h7b4ad598__0[3U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[4U] 
        = __Vtemp_h7b4ad598__0[4U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[5U] 
        = __Vtemp_h7b4ad598__0[5U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[6U] 
        = __Vtemp_h7b4ad598__0[6U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[7U] 
        = __Vtemp_h7b4ad598__0[7U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[8U] 
        = __Vtemp_h7b4ad598__0[8U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[9U] 
        = __Vtemp_h7b4ad598__0[9U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU] 
        = __Vtemp_h7b4ad598__0[0xaU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU] 
        = __Vtemp_h7b4ad598__0[0xbU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU] 
        = __Vtemp_h7b4ad598__0[0xcU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU] 
        = __Vtemp_h7b4ad598__0[0xdU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU] 
        = __Vtemp_h7b4ad598__0[0xeU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU] 
        = __Vtemp_h7b4ad598__0[0xfU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___T_2406 
        = (IData)((4U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__last 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__count) 
                    == (1U & (~ (1U & (((IData)(7U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_size)) 
                                       >> 2U)))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_sizeOH_shiftAmount 
        = (((IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize_T_6) 
                                  >> 2U)))) << 1U) 
           | (IData)((0U != (0xaU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize_T_6)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_1_size 
        = (((IData)((0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize_T_5) 
                                    >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize_T_6) 
                                     >> 2U)))) << 1U) 
              | (IData)((0U != (0xaU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize_T_6))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__source_ok 
        = ((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
                         >> 3U))) | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
                                                   >> 3U))) 
                                     | ((2U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
                                                   >> 3U))) 
                                        | ((3U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
                                                      >> 3U))) 
                                           | ((4U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
                                                   >> 3U))) 
                                              | ((5U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
                                                      >> 3U))) 
                                                 | ((6U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
                                                         >> 3U))) 
                                                    | (7U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
                                                           >> 3U))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_bits_mask 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT____VdfgTmp_he7c815ba__0)
               ? 0xffU : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_mask) 
                           << 4U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__bundleOut_0_a_bits_mask_masked_enable_0)
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_mask)
                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__bundleOut_0_a_bits_mask_rdata_0)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_282 
        = ((0U == (0xfffff000U & (0x1000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address))) 
           | (0U == (0x80000000U & (0x80000000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__mapPP 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater__DOT__full) 
           | ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode)) 
              & (0U == (0x80000000U & (0x80000000U 
                                       ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_177 
        = ((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
           & ((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
                            >> 3U))) | ((1U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
                                                   >> 3U))) 
                                        | ((2U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
                                                      >> 3U))) 
                                           | ((3U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
                                                   >> 3U))) 
                                              | ((4U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
                                                      >> 3U))) 
                                                 | ((5U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
                                                         >> 3U))) 
                                                    | ((6U 
                                                        == 
                                                        (7U 
                                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
                                                            >> 3U))) 
                                                       | (7U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
                                                              >> 3U)))))))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_a_bits_mask 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__mask) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT____VdfgTmp_he7c815ba__0)
               ? 0xffU : (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_mask) 
                           << 4U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__bundleOut_0_a_bits_mask_masked_enable_0)
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_mask)
                                      : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__bundleOut_0_a_bits_mask_rdata_0)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT___helpPP_T_10 
        = ((0U == (0xc0000000U & (0x40000000U ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address))) 
           | (0U == (0x80000000U & (0x80000000U ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DevSram_ar_valid 
        = (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__Rstate)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__readdevice)) 
           | (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__Rstate)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h33d13855__0)) 
              | (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__Rstate))));
    if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__Wstate))) {
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hceeb7920__0) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_w_bits_strb 
                = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__REXLS_wmask) 
                            >> 4U));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_w_bits_data 
                = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__REXLS_writedata 
                   >> 0x20U);
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_w_bits_strb 
                = (0xffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__REXLS_wmask));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_w_bits_data 
                = (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__REXLS_writedata));
        }
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Lsu_w_valid) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_w_bits_strb 
            = (0xffU & 0xfU);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_w_bits_data 
            = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Reglen))
                ? (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__sram1_ram_Q[0U]))
                : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Reglen))
                    ? (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__sram1_ram_Q[1U]))
                    : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Reglen))
                        ? (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__sram1_ram_Q[2U]))
                        : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Reglen))
                            ? (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__sram1_ram_Q[3U]))
                            : 0ULL))));
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_w_valid) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_w_bits_strb 
            = (0xffU & 0xfU);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_w_bits_data 
            = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Reglen))
                ? (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__sram0_ram_Q[0U]))
                : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Reglen))
                    ? (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__sram0_ram_Q[1U]))
                    : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Reglen))
                        ? (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__sram0_ram_Q[2U]))
                        : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Reglen))
                            ? (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__sram0_ram_Q[3U]))
                            : 0ULL))));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_w_bits_strb 
            = (0xffU & 0U);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_w_bits_data = 0ULL;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DevSram_aw_valid 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h950ae05f__0) 
           | ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__Wstate)) 
              | ((IData)(ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h950ae05f__0) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hceeb7920__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rd2 
        = ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__InstType))
            ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__InstType))
                ? 0ULL : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__InstType))
                           ? 4ULL : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm))
            : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__InstType))
                ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__InstType))
                    ? 0ULL : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm)
                : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__InstType))
                    ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__csrflag)
                        ? 0ULL : ((0x67U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__opcode))
                                   ? 4ULL : ((((0U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hbd6e8c8e__0)) 
                                               | (0x10U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hbd6e8c8e__0))) 
                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h8583f8a4__0) 
                                                 & ((5U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__func3)) 
                                                    | (1U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__func3)))))
                                              ? (QData)((IData)(
                                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rif_id_valid)
                                                                  ? 
                                                                 (0x3fU 
                                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rif_id_inst 
                                                                     >> 0x14U))
                                                                  : 0U)))
                                              : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm)))
                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__remuw)
                        ? (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rData2))
                        : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__sign32)
                            ? (((QData)((IData)((- (IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rData2 
                                                                       >> 0x1fU))))))) 
                                << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rData2)))
                            : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__srlw) 
                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_hb6d1737f__0) 
                                    & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__func3))) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__sraw)))
                                ? (QData)((IData)((0x1fU 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rData2))))
                                : (((0x33U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__opcode)) 
                                    & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__func7)) 
                                       & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__func3))))
                                    ? (QData)((IData)(
                                                      (0x3fU 
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rData2))))
                                    : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rData2)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_IDNPC_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rif_id_valid) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__realbusy1)) 
              & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__realbusy2)) 
                 & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rif_id_flush)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__Signedrs1 
        = (((QData)((IData)((- (IData)((1U & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rData1 
                                                      >> 0x1fU))))))) 
            << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rData1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__jump 
        = ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__InstType)) 
           & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h299aeb16__0)
                 ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rData1 
                    < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rData2)
                 : VL_LTS_IQQ(64, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rData1, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rData2)) 
               & ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__func3)) 
                  & ((1U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__func3)) 
                     & ((5U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__func3)) 
                        & ((7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__func3)) 
                           & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__func3)) 
                              | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__func3)))))))) 
              | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h299aeb16__0)
                    ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rData1 
                       > vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rData2)
                    : VL_GTS_IQQ(64, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rData1, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rData2)) 
                  & ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__func3)) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h32b91cce__0))) 
                 | (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rData1 
                      == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rData2) 
                     & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__func3)) 
                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h32b91cce__0))) 
                    | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rData1 
                        != vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rData2) 
                       & ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__func3)) 
                          & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__func3))))))));
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hdf14df92__0, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Multi__DOT__Sum, 1U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hdf14df92__1, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Multi__DOT__Sum, 1U);
    __Vtemp_hd2b6c582__0[0U] = 1U;
    __Vtemp_hd2b6c582__0[1U] = 0U;
    __Vtemp_hd2b6c582__0[2U] = 0U;
    __Vtemp_hd2b6c582__0[3U] = 0U;
    __Vtemp_ha8e697f7__0[0U] = (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Multi__DOT__Sum[0U]);
    __Vtemp_ha8e697f7__0[1U] = (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Multi__DOT__Sum[1U]);
    __Vtemp_ha8e697f7__0[2U] = (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Multi__DOT__Sum[2U]);
    __Vtemp_ha8e697f7__0[3U] = (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Multi__DOT__Sum[3U]);
    VL_ADD_W(4, __Vtemp_hdbe281e5__0, __Vtemp_hd2b6c582__0, __Vtemp_ha8e697f7__0);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h7dbd534c__0, __Vtemp_hdbe281e5__0, 1U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hdf14ded1__0, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Multi__DOT__Sum, 2U);
    if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Multi__DOT__ProdGen__DOT__chooseSignal))) {
        __Vtemp_ha9a90be6__0[0U] = 0U;
        __Vtemp_ha9a90be6__0[1U] = 0U;
        __Vtemp_ha9a90be6__0[2U] = 0U;
        __Vtemp_ha9a90be6__0[3U] = 0U;
    } else if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Multi__DOT__ProdGen__DOT__chooseSignal))) {
        __Vtemp_ha9a90be6__0[0U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Multi__DOT__Sum[0U];
        __Vtemp_ha9a90be6__0[1U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Multi__DOT__Sum[1U];
        __Vtemp_ha9a90be6__0[2U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Multi__DOT__Sum[2U];
        __Vtemp_ha9a90be6__0[3U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Multi__DOT__Sum[3U];
    } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Multi__DOT__ProdGen__DOT__chooseSignal))) {
        __Vtemp_ha9a90be6__0[0U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Multi__DOT__Sum[0U];
        __Vtemp_ha9a90be6__0[1U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Multi__DOT__Sum[1U];
        __Vtemp_ha9a90be6__0[2U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Multi__DOT__Sum[2U];
        __Vtemp_ha9a90be6__0[3U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Multi__DOT__Sum[3U];
    } else if ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Multi__DOT__ProdGen__DOT__chooseSignal))) {
        __Vtemp_ha9a90be6__0[0U] = __Vtemp_hdf14df92__0[0U];
        __Vtemp_ha9a90be6__0[1U] = __Vtemp_hdf14df92__0[1U];
        __Vtemp_ha9a90be6__0[2U] = __Vtemp_hdf14df92__0[2U];
        __Vtemp_ha9a90be6__0[3U] = __Vtemp_hdf14df92__0[3U];
    } else if ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Multi__DOT__ProdGen__DOT__chooseSignal))) {
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Multi__DOT____Vcellinp__ProdGen__io_Choose_HighUsign) {
            __Vtemp_ha9a90be6__0[0U] = __Vtemp_hdf14df92__1[0U];
            __Vtemp_ha9a90be6__0[1U] = __Vtemp_hdf14df92__1[1U];
            __Vtemp_ha9a90be6__0[2U] = __Vtemp_hdf14df92__1[2U];
            __Vtemp_ha9a90be6__0[3U] = __Vtemp_hdf14df92__1[3U];
        } else {
            __Vtemp_ha9a90be6__0[0U] = __Vtemp_h7dbd534c__0[0U];
            __Vtemp_ha9a90be6__0[1U] = __Vtemp_h7dbd534c__0[1U];
            __Vtemp_ha9a90be6__0[2U] = __Vtemp_h7dbd534c__0[2U];
            __Vtemp_ha9a90be6__0[3U] = __Vtemp_h7dbd534c__0[3U];
        }
    } else if ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Multi__DOT__ProdGen__DOT__chooseSignal))) {
        __Vtemp_ha9a90be6__0[0U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Multi__DOT__ProdGen__DOT____VdfgTmp_h68626d25__0[0U];
        __Vtemp_ha9a90be6__0[1U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Multi__DOT__ProdGen__DOT____VdfgTmp_h68626d25__0[1U];
        __Vtemp_ha9a90be6__0[2U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Multi__DOT__ProdGen__DOT____VdfgTmp_h68626d25__0[2U];
        __Vtemp_ha9a90be6__0[3U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Multi__DOT__ProdGen__DOT____VdfgTmp_h68626d25__0[3U];
    } else if ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Multi__DOT__ProdGen__DOT__chooseSignal))) {
        __Vtemp_ha9a90be6__0[0U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Multi__DOT__ProdGen__DOT____VdfgTmp_h68626d25__0[0U];
        __Vtemp_ha9a90be6__0[1U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Multi__DOT__ProdGen__DOT____VdfgTmp_h68626d25__0[1U];
        __Vtemp_ha9a90be6__0[2U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Multi__DOT__ProdGen__DOT____VdfgTmp_h68626d25__0[2U];
        __Vtemp_ha9a90be6__0[3U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Multi__DOT__ProdGen__DOT____VdfgTmp_h68626d25__0[3U];
    } else if ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Multi__DOT__ProdGen__DOT__chooseSignal))) {
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Multi__DOT____Vcellinp__ProdGen__io_Choose_HighUsign) {
            __Vtemp_ha9a90be6__0[0U] = __Vtemp_hdf14ded1__0[0U];
            __Vtemp_ha9a90be6__0[1U] = __Vtemp_hdf14ded1__0[1U];
            __Vtemp_ha9a90be6__0[2U] = __Vtemp_hdf14ded1__0[2U];
            __Vtemp_ha9a90be6__0[3U] = __Vtemp_hdf14ded1__0[3U];
        } else {
            __Vtemp_ha9a90be6__0[0U] = 0U;
            __Vtemp_ha9a90be6__0[1U] = 0U;
            __Vtemp_ha9a90be6__0[2U] = 0U;
            __Vtemp_ha9a90be6__0[3U] = 0U;
        }
    } else {
        __Vtemp_ha9a90be6__0[0U] = 0U;
        __Vtemp_ha9a90be6__0[1U] = 0U;
        __Vtemp_ha9a90be6__0[2U] = 0U;
        __Vtemp_ha9a90be6__0[3U] = 0U;
    }
    VL_ADD_W(4, __Vtemp_he77c9fd2__0, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Multi__DOT__Prod, __Vtemp_ha9a90be6__0);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Multi__DOT__ProdGen__DOT__out[0U] 
        = __Vtemp_he77c9fd2__0[0U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Multi__DOT__ProdGen__DOT__out[1U] 
        = __Vtemp_he77c9fd2__0[1U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Multi__DOT__ProdGen__DOT__out[2U] 
        = __Vtemp_he77c9fd2__0[2U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Multi__DOT__ProdGen__DOT__out[3U] 
        = __Vtemp_he77c9fd2__0[3U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__MulDivRes 
        = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Multi__DOT__state))
            ? (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Multi__DOT__Prod[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Multi__DOT__Prod[0U])))
            : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__state))
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__divres
                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__RegMulDiv));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT____VdfgTmp_h2c6d0d39__0 
        = ((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__DivRes[3U])) 
             << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__DivRes[2U]))) 
           >= vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__cmpDivs);
    __Vtemp_hd2b6c582__1[0U] = 1U;
    __Vtemp_hd2b6c582__1[1U] = 0U;
    __Vtemp_hd2b6c582__1[2U] = 0U;
    __Vtemp_hd2b6c582__1[3U] = 0U;
    __Vtemp_hb0ba6bd5__0[0U] = 0U;
    __Vtemp_hb0ba6bd5__0[1U] = 0U;
    __Vtemp_hb0ba6bd5__0[2U] = (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__cmpDivs);
    __Vtemp_hb0ba6bd5__0[3U] = (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__cmpDivs 
                                        >> 0x20U));
    VL_SUB_W(4, __Vtemp_h9376acbd__0, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__DivRes, __Vtemp_hb0ba6bd5__0);
    VL_ADD_W(4, __Vtemp_h304b5296__0, __Vtemp_hd2b6c582__1, __Vtemp_h9376acbd__0);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT____VdfgTmp_ha2701191__0[0U] 
        = __Vtemp_h304b5296__0[0U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT____VdfgTmp_ha2701191__0[1U] 
        = __Vtemp_h304b5296__0[1U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT____VdfgTmp_ha2701191__0[2U] 
        = __Vtemp_h304b5296__0[2U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT____VdfgTmp_ha2701191__0[3U] 
        = __Vtemp_h304b5296__0[3U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT____VdfgTmp_h2cc4c5eb__0 
        = ((((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__DivRes[3U])) 
             << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__DivRes[2U]))) 
           < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__cmpDivs);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dataokin 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__state)) 
           & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__hit)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__axivalid 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__valid
           [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr] 
           & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirty
           [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___readys_readys_T_2 
        = (3U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__readys_unready) 
                  >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__readys_unready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_58 
        = ((5U == (7U & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                         >> 1U))) ? 2U : ((4U == (7U 
                                                  & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                     >> 1U)))
                                           ? 1U : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___GEN_58 
        = ((5U == (7U & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                         >> 1U))) ? 2U : ((4U == (7U 
                                                  & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                     >> 1U)))
                                           ? 1U : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__last));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG_1_5 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_0_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_c2b_send_REG 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__first)
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_0)
                                          : (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___send_T))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG_1_4 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__elts_0_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG_1_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__elts_0_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG_1_3 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__elts_0_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG_1_1 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__elts_0_data;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG_1_2 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__elts_0_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG_1_5 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_0_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_send_REG 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__first)
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_0)
                                          : (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___send_T))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG_1_4 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__elts_0_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG_1_0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__elts_0_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG_1_3 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__elts_0_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG_1_1 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__elts_0_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG_1_2 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__elts_0_data;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___GEN_58 
        = ((5U == (7U & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                         >> 1U))) ? 2U : ((4U == (7U 
                                                  & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                      & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                     >> 1U)))
                                           ? 1U : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___GEN_58 
        = ((5U == (7U & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                         >> 1U))) ? 2U : ((4U == (7U 
                                                  & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                      & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                     >> 1U)))
                                           ? 1U : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__last));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_size 
        = (((IData)((0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize_T_5) 
                                    >> 4U)))) << 2U) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_sizeOH_shiftAmount));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__mapPP) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT____VdfgTmp_h63d78882__0 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_param = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_mask = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_opcode = 1U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT____VdfgTmp_h63d78882__0 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass)
                ? 0U : (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_param)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_param 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_mask 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_bits_mask;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_source 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__mapPP));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT____VdfgTmp_h6e76a9e1__0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__mapPP)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT____VdfgTmp_he7c815ba__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_282 
        = ((0U == (0xfffff000U & (0x1000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_address))) 
           | (0U == (0x80000000U & (0x80000000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_address))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__mask_eq_2 
        = (IData)((0U == (6U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_address)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__mask_eq_3 
        = (IData)((2U == (6U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_address)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__mask_eq_4 
        = (IData)((4U == (6U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_address)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__mask_eq_5 
        = (IData)((6U == (6U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_address)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__mask_acc 
        = (1U & ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                 | (1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_address 
                              >> 2U)) & (((IData)(1U) 
                                          << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_size))) 
                                         >> 2U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_size))) 
                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_address) 
                          >> 2U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__a_id 
        = ((0U == (0x80000000U & (0x80000000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_address))) 
           | ((0U == (0x80000000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_address))
               ? 2U : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_294 
        = ((0U == (0xfffff000U & (0x1000U ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address))) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT___helpPP_T_10));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__mapPP 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__full) 
           | ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT___helpPP_T_10)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_294 
        = ((0U == (0xfffff000U & (0x1000U ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address))) 
           | ((0U == (0xc0000000U & (0x40000000U ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address))) 
              | (0U == (0x80000000U & (0x80000000U 
                                       ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask_eq_2 
        = (IData)((0U == (6U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask_eq_3 
        = (IData)((2U == (6U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask_eq_4 
        = (IData)((4U == (6U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask_eq_5 
        = (IData)((6U == (6U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask_acc 
        = (1U & ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                 | (1U & ((~ (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address 
                              >> 2U)) & (((IData)(1U) 
                                          << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size))) 
                                         >> 2U)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size))) 
                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address) 
                          >> 2U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__a_fifoId 
        = ((0U == (0xc0000000U & (0x40000000U ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address))) 
           | ((0U == (0xc0000000U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address))
               ? 2U : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__a_id 
        = (((0U == (0x80000000U & (0x80000000U ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address))) 
            | ((0U == (0xc0000000U & (0x40000000U ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address)))
                ? 2U : 0U)) | ((0U == (0xc0000000U 
                                       & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address))
                                ? 3U : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq_io_deq_bits_data 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__maybe_full)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__ram_data
           [0U] : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_w_bits_data);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__jal 
        = (((0x67U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__opcode)) 
            << 4U) | (((0x73U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IDU__io_IFID_inst) 
                       << 3U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__jump) 
                                  << 2U) | (((0x30200073U 
                                              == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IDU__io_IFID_inst) 
                                             << 1U) 
                                            | (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__InstType))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__ALURes 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Ridex_AluOp_op))
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hf7ad80cc__0
            : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Ridex_AluOp_op))
                ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Ridex_AluOp_rd1 
                   - vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Ridex_AluOp_rd2)
                : ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Ridex_AluOp_op))
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__MulDivRes
                    : ((0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Ridex_AluOp_op))
                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__MulDivRes
                        : ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Ridex_AluOp_op))
                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__MulDivRes
                            : ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Ridex_AluOp_op))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__MulDivRes
                                : ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Ridex_AluOp_op))
                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hf41e2551__0
                                    : ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Ridex_AluOp_op))
                                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hf41e2551__0
                                        : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Ridex_AluOp_op))
                                            ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Ridex_AluOp_rd1 
                                               ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Ridex_AluOp_rd2)
                                            : ((7U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Ridex_AluOp_op))
                                                ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Ridex_AluOp_rd1 
                                                   | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Ridex_AluOp_rd2)
                                                : (
                                                   (4U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Ridex_AluOp_op))
                                                    ? 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Ridex_AluOp_rd1 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Ridex_AluOp_rd2)
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Ridex_AluOp_op))
                                                     ? (QData)((IData)(
                                                                       (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Ridex_AluOp_rd1 
                                                                        < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Ridex_AluOp_rd2)))
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Ridex_AluOp_op))
                                                      ? (QData)((IData)(
                                                                        VL_LTS_IQQ(64, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Ridex_AluOp_rd1, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Ridex_AluOp_rd2)))
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Ridex_AluOp_op))
                                                       ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_he9f0634e__0
                                                       : 
                                                      ((8U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Ridex_AluOp_op))
                                                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_he9f0634e__0
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Ridex_AluOp_op))
                                                         ? 
                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Ridex_AluOp_rd1 
                                                         << 
                                                         (0x3fU 
                                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Ridex_AluOp_rd2)))
                                                         : 
                                                        ((0xfU 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Ridex_AluOp_op))
                                                          ? 
                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Ridex_AluOp_rd1 
                                                          << 
                                                          (0x1fU 
                                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Ridex_AluOp_rd2)))
                                                          : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgTmp_hf7ad80cc__0)))))))))))))))));
    if (((3U == ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Ridex_AluOp_op))
                  ? 3U : 0U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__divendsign))) {
        __Vtemp_h5779a382__0[0U] = (IData)((1ULL + 
                                            ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__divvalid)
                                              ? (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Ridex_AluOp_rd1)
                                              : 0xffffffffffffffffULL)));
        __Vtemp_h5779a382__0[1U] = (IData)(((1ULL + 
                                             ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__divvalid)
                                               ? (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Ridex_AluOp_rd1)
                                               : 0xffffffffffffffffULL)) 
                                            >> 0x20U));
    } else {
        __Vtemp_h5779a382__0[0U] = (IData)(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__divvalid)
                                             ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Ridex_AluOp_rd1
                                             : 0ULL));
        __Vtemp_h5779a382__0[1U] = (IData)((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__divvalid)
                                              ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Ridex_AluOp_rd1
                                              : 0ULL) 
                                            >> 0x20U));
    }
    __Vtemp_h5779a382__0[2U] = 0U;
    __Vtemp_h5779a382__0[3U] = 0U;
    VL_SHIFTL_WWI(128,128,32, __Vtemp_h60d9ac46__0, __Vtemp_h5779a382__0, 1U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hf7042704__0, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT____VdfgTmp_ha2701191__0, 1U);
    VL_SHIFTL_WWI(128,128,32, __Vtemp_hd756ed55__0, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__DivRes, 1U);
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT____VdfgTmp_h0bc766da__0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__indinput = 0x3fU;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__DivResIn[0U] 
            = __Vtemp_h60d9ac46__0[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__DivResIn[1U] 
            = __Vtemp_h60d9ac46__0[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__DivResIn[2U] 
            = __Vtemp_h60d9ac46__0[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__DivResIn[3U] 
            = __Vtemp_h60d9ac46__0[3U];
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__indinput 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT____VdfgTmp_h5c2c799d__0)
                ? (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__divcount) 
                            - (IData)(1U))) : 0U);
        if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT____VdfgTmp_h5bf1badd__0) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT____VdfgTmp_h2c6d0d39__0))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__DivResIn[0U] 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT____VdfgTmp_ha2701191__0[0U];
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__DivResIn[1U] 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT____VdfgTmp_ha2701191__0[1U];
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__DivResIn[2U] 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT____VdfgTmp_ha2701191__0[2U];
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__DivResIn[3U] 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT____VdfgTmp_ha2701191__0[3U];
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT____VdfgTmp_h5bf1badd__0) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT____VdfgTmp_h2cc4c5eb__0))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__DivResIn[0U] 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__DivRes[0U];
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__DivResIn[1U] 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__DivRes[1U];
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__DivResIn[2U] 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__DivRes[2U];
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__DivResIn[3U] 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__DivRes[3U];
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT____VdfgTmp_h5c2c799d__0) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT____VdfgTmp_h2c6d0d39__0))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__DivResIn[0U] 
                = __Vtemp_hf7042704__0[0U];
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__DivResIn[1U] 
                = __Vtemp_hf7042704__0[1U];
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__DivResIn[2U] 
                = __Vtemp_hf7042704__0[2U];
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__DivResIn[3U] 
                = __Vtemp_hf7042704__0[3U];
        } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT____VdfgTmp_h5c2c799d__0) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT____VdfgTmp_h2cc4c5eb__0))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__DivResIn[0U] 
                = __Vtemp_hd756ed55__0[0U];
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__DivResIn[1U] 
                = __Vtemp_hd756ed55__0[1U];
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__DivResIn[2U] 
                = __Vtemp_hd756ed55__0[2U];
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__DivResIn[3U] 
                = __Vtemp_hd756ed55__0[3U];
        } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__state))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__DivResIn[0U] = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__DivResIn[1U] = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__DivResIn[2U] = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__DivResIn[3U] = 0U;
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__DivResIn[0U] 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__DivRes[0U];
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__DivResIn[1U] 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__DivRes[1U];
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__DivResIn[2U] 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__DivRes[2U];
            vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__DivResIn[3U] 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__DivRes[3U];
        }
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteData 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dataokin) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSWB_readflag)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ClintWen)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Lsu_ar_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__axivalid)) 
           & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Lsu_aw_valid 
        = (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__state)) 
            | (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__fstate))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__axivalid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___readys_mask_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___readys_readys_T_2)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__readys_filter_lo));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__earlyWinner_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___readys_readys_T_2)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_in_arvalid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__earlyWinner_1 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___readys_readys_T_2) 
               >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_out_valid));
    if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__beatsLeft))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxStateEarly_0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__earlyWinner_0;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxStateEarly_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__earlyWinner_1;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxStateEarly_0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__state_0;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxStateEarly_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__state_1;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2260 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2349 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__readys_filter 
        = ((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__readys_mask)) 
             << 2U) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                       << 3U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                                  << 1U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2260 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2349 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__readys_filter_lo 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
            << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                       << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_size 
        = (((IData)((0U != (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize_T_4) 
                                     >> 8U)))) << 3U) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_size));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_repeat 
        = ((~ ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_repeat_counter)) 
               | (0U == ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT____VdfgTmp_h6e76a9e1__0)
                          ? 0U : (7U & (~ (7U & (((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                                                 >> 3U)))))))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__mapPP));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_42 
        = ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))
            ? 2U : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))
                     ? 1U : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))
                              ? 1U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))
                                       ? 1U : 0U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__a_isSupported 
        = ((3U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_opcode)) 
           & (2U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_opcode)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_size))) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__mask_eq_2))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_size))) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__mask_eq_3))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_size))) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__mask_eq_4))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_size))) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__mask_eq_5))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__stall 
        = ((IData)((((8U == (0x38U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_source))) 
                     & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__a_first_counter))) 
                    & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_16) 
                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_17) 
                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_18) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_19) 
                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_20) 
                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_21) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_22) 
                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_23) 
                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_24) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_25) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_26) 
                                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_27) 
                                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_28) 
                                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_29) 
                                                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_30) 
                                                                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_31)))))))))))))))) 
                       & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__a_id)) 
                          | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__stalls_id) 
                             != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__a_id)))))) 
           | ((IData)((((0x10U == (0x38U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_source))) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__a_first_counter))) 
                       & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_32) 
                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_33) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_34) 
                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_35) 
                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_36) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_37) 
                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_38) 
                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_39) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_40) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_41) 
                                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_42) 
                                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_43) 
                                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_44) 
                                                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_45) 
                                                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_46) 
                                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_47)))))))))))))))) 
                          & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__a_id)) 
                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__stalls_id_1) 
                                != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__a_id)))))) 
              | ((IData)((((0x18U == (0x38U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_source))) 
                           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__a_first_counter))) 
                          & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_48) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_49) 
                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_50) 
                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_51) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_52) 
                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_53) 
                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_54) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_55) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_56) 
                                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_57) 
                                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_58) 
                                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_59) 
                                                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_60) 
                                                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_61) 
                                                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_62) 
                                                                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_63)))))))))))))))) 
                             & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__a_id)) 
                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__stalls_id_2) 
                                   != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__a_id)))))) 
                 | ((IData)((((0x20U == (0x38U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_source))) 
                              & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__a_first_counter))) 
                             & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_64) 
                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_65) 
                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_66) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_67) 
                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_68) 
                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_69) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_70) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_71) 
                                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_72) 
                                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_73) 
                                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_74) 
                                                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_75) 
                                                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_76) 
                                                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_77) 
                                                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_78) 
                                                                           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_79)))))))))))))))) 
                                & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__a_id)) 
                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__stalls_id_3) 
                                      != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__a_id)))))) 
                    | ((IData)((((0x28U == (0x38U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_source))) 
                                 & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__a_first_counter))) 
                                & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_80) 
                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_81) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_82) 
                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_83) 
                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_84) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_85) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_86) 
                                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_87) 
                                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_88) 
                                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_89) 
                                                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_90) 
                                                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_91) 
                                                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_92) 
                                                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_93) 
                                                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_94) 
                                                                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_95)))))))))))))))) 
                                   & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__a_id)) 
                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__stalls_id_4) 
                                         != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__a_id)))))) 
                       | ((IData)((((0x30U == (0x38U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_source))) 
                                    & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__a_first_counter))) 
                                   & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_96) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_97) 
                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_98) 
                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_99) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_100) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_101) 
                                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_102) 
                                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_103) 
                                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_104) 
                                                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_105) 
                                                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_106) 
                                                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_107) 
                                                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_108) 
                                                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_109) 
                                                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_110) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_111)))))))))))))))) 
                                      & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__a_id)) 
                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__stalls_id_5) 
                                            != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__a_id)))))) 
                          | (IData)((((0x38U == (0x38U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_source))) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__a_first_counter))) 
                                     & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_112) 
                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_113) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_114) 
                                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_115) 
                                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_116) 
                                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_117) 
                                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_118) 
                                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_119) 
                                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_120) 
                                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_121) 
                                                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_122) 
                                                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_123) 
                                                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_124) 
                                                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_125) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_126) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__flight_127)))))))))))))))) 
                                        & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__a_id)) 
                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__stalls_id_6) 
                                              != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__a_id))))))))))));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__mapPP) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT____VdfgTmp_h63d78882__0 = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_param = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_mask = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode = 1U;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT____VdfgTmp_h63d78882__0 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass)
                ? 0U : (3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_param)));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_param 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_param;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_mask 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_a_bits_mask;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_source 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__mapPP));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT____VdfgTmp_h14e6d394__0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__mapPP)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT____VdfgTmp_he7c815ba__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size))) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask_eq_2))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size))) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask_eq_3))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size))) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask_eq_4))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size))) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask_eq_5))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__stall 
        = ((IData)((((8U == (0x38U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source))) 
                     & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__a_first_counter))) 
                    & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_16) 
                        | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_17) 
                           | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_18) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_19) 
                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_20) 
                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_21) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_22) 
                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_23) 
                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_24) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_25) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_26) 
                                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_27) 
                                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_28) 
                                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_29) 
                                                               | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_30) 
                                                                  | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_31)))))))))))))))) 
                       & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__a_id)) 
                          | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__stalls_id) 
                             != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__a_id)))))) 
           | ((IData)((((0x10U == (0x38U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source))) 
                        & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__a_first_counter))) 
                       & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_32) 
                           | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_33) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_34) 
                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_35) 
                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_36) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_37) 
                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_38) 
                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_39) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_40) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_41) 
                                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_42) 
                                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_43) 
                                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_44) 
                                                               | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_45) 
                                                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_46) 
                                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_47)))))))))))))))) 
                          & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__a_id)) 
                             | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__stalls_id_1) 
                                != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__a_id)))))) 
              | ((IData)((((0x18U == (0x38U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source))) 
                           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__a_first_counter))) 
                          & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_48) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_49) 
                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_50) 
                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_51) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_52) 
                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_53) 
                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_54) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_55) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_56) 
                                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_57) 
                                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_58) 
                                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_59) 
                                                               | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_60) 
                                                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_61) 
                                                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_62) 
                                                                        | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_63)))))))))))))))) 
                             & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__a_id)) 
                                | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__stalls_id_2) 
                                   != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__a_id)))))) 
                 | ((IData)((((0x20U == (0x38U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source))) 
                              & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__a_first_counter))) 
                             & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_64) 
                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_65) 
                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_66) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_67) 
                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_68) 
                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_69) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_70) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_71) 
                                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_72) 
                                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_73) 
                                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_74) 
                                                               | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_75) 
                                                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_76) 
                                                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_77) 
                                                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_78) 
                                                                           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_79)))))))))))))))) 
                                & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__a_id)) 
                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__stalls_id_3) 
                                      != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__a_id)))))) 
                    | ((IData)((((0x28U == (0x38U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source))) 
                                 & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__a_first_counter))) 
                                & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_80) 
                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_81) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_82) 
                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_83) 
                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_84) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_85) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_86) 
                                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_87) 
                                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_88) 
                                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_89) 
                                                               | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_90) 
                                                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_91) 
                                                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_92) 
                                                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_93) 
                                                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_94) 
                                                                              | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_95)))))))))))))))) 
                                   & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__a_id)) 
                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__stalls_id_4) 
                                         != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__a_id)))))) 
                       | ((IData)((((0x30U == (0x38U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source))) 
                                    & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__a_first_counter))) 
                                   & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_96) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_97) 
                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_98) 
                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_99) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_100) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_101) 
                                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_102) 
                                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_103) 
                                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_104) 
                                                               | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_105) 
                                                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_106) 
                                                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_107) 
                                                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_108) 
                                                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_109) 
                                                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_110) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_111)))))))))))))))) 
                                      & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__a_id)) 
                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__stalls_id_5) 
                                            != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__a_id)))))) 
                          | (IData)((((0x38U == (0x38U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source))) 
                                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__a_first_counter))) 
                                     & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_112) 
                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_113) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_114) 
                                               | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_115) 
                                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_116) 
                                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_117) 
                                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_118) 
                                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_119) 
                                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_120) 
                                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_121) 
                                                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_122) 
                                                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_123) 
                                                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_124) 
                                                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_125) 
                                                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_126) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__flight_127)))))))))))))))) 
                                        & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__a_id)) 
                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__stalls_id_6) 
                                              != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__a_id))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCREG__DOT__jumpc 
        = (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__jal)) 
            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__irujump))
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__irujump)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__REGS__DOT____Vcellout__Rmtvec__dout
                : (((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__InstType)) 
                    | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__jump))
                    ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Rif_id_pc 
                       + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm)
                    : ((0x67U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__opcode))
                        ? (0xfffffffffffffffeULL & 
                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__imm 
                            + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rData1))
                        : ((0x73U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IDU__io_IFID_inst)
                            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__REGS__DOT____Vcellout__Rmtvec__dout
                            : ((0x30200073U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IDU__io_IFID_inst)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__REGS__DOT____Vcellout__Rmepc__dout
                                : (4ULL + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCREG__DOT__RegPc))))))
            : (4ULL + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCREG__DOT__RegPc));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteData) 
           | (((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__state)) 
               | (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__fstate))) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Lsu_w_valid) 
                 & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Reglen)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____VdfgTmp_h0f0f23a0__0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Lsu_aw_valid)) 
           & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__fstate)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_valid 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__beatsLeft))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid)
            : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__state_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2400 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2489 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__readys_unready 
        = (0xfU & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__readys_filter) 
                     >> 1U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__readys_filter) 
                               >> 2U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__readys_mask) 
                                          << 2U)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__wen) {
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_0_data 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_1_data;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_0_beats 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_1_beats;
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_0_data 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ_io_enq_bits_data;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_0_beats = 1U;
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_0_last 
            = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1)) 
                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_1_last)));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__readys_mask = 0x3fU;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__first) 
                & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__requests)))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__readys_mask 
            = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_mask_T_6) 
                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_mask_T_6) 
                           << 4U)));
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__first) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_mask_T;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__state 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_mask_T;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__state;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__first 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_8));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_0 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ_io_deq_ready)
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT___wen_T_3)
                                          : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT___valid_0_T_6)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__wen) {
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_1) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__elts_0_data 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__elts_1_data;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__elts_0_last 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__elts_1_last;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__elts_0_beats 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__elts_1_beats;
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__elts_0_data 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_0_data;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__elts_0_last 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_0_last;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__elts_0_beats 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_0_beats;
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__wen) {
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_1) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__elts_0_data 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__elts_1_data;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__elts_0_last 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__elts_1_last;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__elts_0_beats 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__elts_1_beats;
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__elts_0_data 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_0_data;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__elts_0_last 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_0_last;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__elts_0_beats 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_0_beats;
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__wen) {
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_1) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__elts_0_data 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__elts_1_data;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__elts_0_last 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__elts_1_last;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__elts_0_beats 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__elts_1_beats;
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__elts_0_data 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_0_data;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__elts_0_last 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_0_last;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__elts_0_beats 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_0_beats;
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__wen) {
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_1) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__elts_0_data 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__elts_1_data;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__elts_0_last 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__elts_1_last;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__elts_0_beats 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__elts_1_beats;
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__elts_0_data 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_0_data;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__elts_0_last 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_0_last;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__elts_0_beats 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_0_beats;
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__wen) {
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_1) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__elts_0_data 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__elts_1_data;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__elts_0_last 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__elts_1_last;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__elts_0_beats 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__elts_1_beats;
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__elts_0_data 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_0_data;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__elts_0_last 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_0_last;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__elts_0_beats 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_0_beats;
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__wen) {
        if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1) {
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_0_data 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_1_data;
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_0_beats 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_1_beats;
        } else {
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_0_data 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ_io_enq_bits_data;
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_0_beats = 1U;
        }
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_0_last 
            = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1)) 
                     | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_1_last)));
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__readys_mask = 0x3fU;
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__first) 
                & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__requests)))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__readys_mask 
            = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___readys_mask_T_6) 
                        | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___readys_mask_T_6) 
                           << 4U)));
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__first) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___readys_mask_T;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__state 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___readys_mask_T;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_data_REG 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__state;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__first 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___GEN_8));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_0 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ_io_deq_ready)
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT___wen_T_3)
                                          : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT___valid_0_T_6)));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__wen) {
        if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_1) {
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__elts_0_data 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__elts_1_data;
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__elts_0_last 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__elts_1_last;
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__elts_0_beats 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__elts_1_beats;
        } else {
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__elts_0_data 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_0_data;
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__elts_0_last 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_0_last;
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__elts_0_beats 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_0_beats;
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__wen) {
        if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_1) {
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__elts_0_data 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__elts_1_data;
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__elts_0_last 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__elts_1_last;
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__elts_0_beats 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__elts_1_beats;
        } else {
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__elts_0_data 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_0_data;
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__elts_0_last 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_0_last;
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__elts_0_beats 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_0_beats;
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__wen) {
        if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_1) {
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__elts_0_data 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__elts_1_data;
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__elts_0_last 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__elts_1_last;
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__elts_0_beats 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__elts_1_beats;
        } else {
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__elts_0_data 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_0_data;
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__elts_0_last 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_0_last;
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__elts_0_beats 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_0_beats;
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__wen) {
        if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_1) {
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__elts_0_data 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__elts_1_data;
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__elts_0_last 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__elts_1_last;
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__elts_0_beats 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__elts_1_beats;
        } else {
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__elts_0_data 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_0_data;
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__elts_0_last 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_0_last;
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__elts_0_beats 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_0_beats;
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__wen) {
        if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_1) {
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__elts_0_data 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__elts_1_data;
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__elts_0_last 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__elts_1_last;
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__elts_0_beats 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__elts_1_beats;
        } else {
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__elts_0_data 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_0_data;
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__elts_0_last 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_0_last;
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__elts_0_beats 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_0_beats;
        }
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__beatsLeft))
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
               | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                  | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid)))
            : (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__state_0)) 
               | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__state_1)) 
                  | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__state_2)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2536 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2625 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__readys_filter 
        = ((((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__readys_mask)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__readys_filter_lo)) 
            << 3U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__readys_filter_lo));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_addr 
        = (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_size)) 
            & ((0U == (0xfffff000U & (0x1000U ^ (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___out_bits_addr_T_5)))) 
               | ((0U == (0xc0000000U & (0x40000000U 
                                         ^ (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___out_bits_addr_T_5)))) 
                  | (0U == (0x80000000U & (0x80000000U 
                                           ^ (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___out_bits_addr_T_5)))))))
            ? (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___out_bits_addr_T_5)
            : (0x1000U | (7U & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___out_bits_addr_T_5))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__a_allow 
        = ((~ (((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_s_0_state)) 
                | (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_s_0_state))) 
               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_fifoId) 
                  == (0U == (0x80000000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_address))))) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__a_isSupported) 
              | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_s_0_state))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__mask 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__mask_acc_5) 
             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__mask_eq_5) 
                & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_address)) 
            << 7U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__mask_acc_5) 
                        | ((~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_address) 
                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__mask_eq_5))) 
                       << 6U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__mask_acc_4) 
                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__mask_eq_4) 
                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_address)) 
                                  << 5U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__mask_acc_4) 
                                              | ((~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_address) 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__mask_eq_4))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__mask_acc_3) 
                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__mask_eq_3) 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_address)) 
                                                << 3U) 
                                               | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__mask_acc_3) 
                                                    | ((~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_address) 
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__mask_eq_3))) 
                                                   << 2U) 
                                                  | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__mask_acc_2) 
                                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__mask_eq_2) 
                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_address)) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__mask_acc_2) 
                                                        | ((~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_address) 
                                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__mask_eq_2))))))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_repeat 
        = ((~ ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_repeat_counter)) 
               | (0U == ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT____VdfgTmp_h14e6d394__0)
                          ? 0U : (0x1fU & (~ (0x1fU 
                                              & (((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)) 
                                                 >> 3U)))))))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__mapPP));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___GEN_42 
        = ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))
            ? 2U : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))
                     ? 1U : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))
                              ? 1U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode))
                                       ? 1U : 0U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__a_isSupported 
        = ((3U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode)) 
           & (2U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask_acc_5) 
             | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask_eq_5) 
                & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address)) 
            << 7U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask_acc_5) 
                        | ((~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address) 
                           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask_eq_5))) 
                       << 6U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask_acc_4) 
                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask_eq_4) 
                                      & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address)) 
                                  << 5U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask_acc_4) 
                                              | ((~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address) 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask_eq_4))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask_acc_3) 
                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask_eq_3) 
                                                    & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address)) 
                                                << 3U) 
                                               | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask_acc_3) 
                                                    | ((~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address) 
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask_eq_3))) 
                                                   << 2U) 
                                                  | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask_acc_2) 
                                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask_eq_2) 
                                                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address)) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask_acc_2) 
                                                        | ((~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address) 
                                                           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__mask_eq_2))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_pc 
        = (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__jal)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_IDNPC_valid))
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCREG__DOT__jumpc
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCREG__DOT__RegPc);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__63__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (0x3fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__62__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (0x3eU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__61__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (0x3dU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__60__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (0x3cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__59__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (0x3bU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__58__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (0x3aU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__57__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (0x39U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__56__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (0x38U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__55__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (0x37U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__54__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (0x36U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__53__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (0x35U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__52__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (0x34U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__51__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (0x33U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__50__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (0x32U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__49__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (0x31U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__48__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (0x30U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__47__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (0x2fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__46__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (0x2eU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__45__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (0x2dU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__44__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (0x2cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__43__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (0x2bU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__42__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (0x2aU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__41__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (0x29U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__40__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (0x28U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__39__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (0x27U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__38__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (0x26U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__37__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (0x25U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__36__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (0x24U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__35__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__34__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (0x22U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__33__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (0x21U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__32__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (0x20U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__31__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (0x1fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__30__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (0x1eU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__29__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (0x1dU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__28__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__27__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (0x1bU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__26__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (0x1aU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__25__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (0x19U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__24__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (0x18U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__23__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__22__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__21__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (0x15U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__20__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (0x14U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__19__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (0x13U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__18__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (0x12U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__17__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (0x11U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__16__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__15__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__14__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__13__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__12__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__11__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__10__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__9__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__8__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__7__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__6__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__5__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__4__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__3__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__2__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__1__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__0__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__fencecntin 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____VdfgTmp_h6f19a505__0)
            ? 0U : (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__fencecnt) 
                             + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____VdfgTmp_h0f0f23a0__0))));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxStateEarly_1) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__cated_bits_data_lo 
            = (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__in_wdeq_io_deq_bits_data);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__repeated_repeater_io_enq_bits_data 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__in_wdeq_io_deq_bits_data;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__cated_bits_data_lo = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__repeated_repeater_io_enq_bits_data = 0ULL;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor_io_in_a_bits_source 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxStateEarly_0)
             ? (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_io_deq_bits_id) 
                 << 3U) | (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_io_deq_bits_id)
                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_count_1)
                                   : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_count_0)) 
                                 << 1U))) : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxStateEarly_1)
                                                    ? 
                                                   (1U 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_id) 
                                                        << 3U) 
                                                       | (6U 
                                                          & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_id)
                                                               ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_count_1)
                                                               : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_count_0)) 
                                                             << 1U))))
                                                    : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor_io_in_a_bits_size 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxStateEarly_0)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_size)
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxStateEarly_1)
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_1_size)
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor_io_in_a_bits_opcode 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxStateEarly_0)
             ? 4U : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxStateEarly_1)
                            ? 1U : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT___readys_readys_T_2 
        = (3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__readys_unready) 
                  >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__readys_unready)));
    ysyxSoCFull__DOT__fpga__DOT__xbar__DOT___readys_unready_T_1 
        = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__readys_filter) 
                    | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__readys_filter) 
                       >> 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_eq_2 
        = (IData)((0U == (6U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_addr)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_eq_3 
        = (IData)((2U == (6U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_addr)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_eq_4 
        = (IData)((4U == (6U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_addr)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_eq_5 
        = (IData)((6U == (6U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_addr)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_acc 
        = (1U & ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_size)) 
                 | (1U & ((~ (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_addr 
                              >> 2U)) & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_sizeOH_shiftAmount)) 
                                         >> 2U)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_acc_1 
        = (1U & ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_size)) 
                 | (1U & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_sizeOH_shiftAmount)) 
                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_addr) 
                          >> 2U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor_io_in_a_bits_address 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxStateEarly_0)
             ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_addr
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxStateEarly_1)
                       ? (((6U >= (((IData)((0U != 
                                             (0xffU 
                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize_T_4) 
                                                 >> 8U)))) 
                                    << 3U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_1_size))) 
                           & ((0U == (0xfffff000U & 
                                      (0x1000U ^ (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___out_bits_addr_T_12)))) 
                              | ((0U == (0xc0000000U 
                                         & (0x40000000U 
                                            ^ (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___out_bits_addr_T_12)))) 
                                 | (0U == (0x80000000U 
                                           & (0x80000000U 
                                              ^ (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___out_bits_addr_T_12)))))))
                           ? (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___out_bits_addr_T_12)
                           : (0x1000U | (7U & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___out_bits_addr_T_12))))
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__a_allow 
        = ((~ (((3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_s_0_state)) 
                | (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_s_0_state))) 
               & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_fifoId) 
                  == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__a_fifoId)))) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__a_isSupported) 
              | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_s_0_state))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyen 
        = (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__63__KET____DOT__regdirty__wen)) 
            << 0x3fU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__62__KET____DOT__regdirty__wen)) 
                          << 0x3eU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__61__KET____DOT__regdirty__wen)) 
                                        << 0x3dU) | 
                                       (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__60__KET____DOT__regdirty__wen)) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__59__KET____DOT__regdirty__wen)) 
                                            << 0x3bU) 
                                           | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__58__KET____DOT__regdirty__wen)) 
                                               << 0x3aU) 
                                              | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__57__KET____DOT__regdirty__wen)) 
                                                  << 0x39U) 
                                                 | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__56__KET____DOT__regdirty__wen)) 
                                                     << 0x38U) 
                                                    | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__55__KET____DOT__regdirty__wen)) 
                                                        << 0x37U) 
                                                       | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__54__KET____DOT__regdirty__wen)) 
                                                           << 0x36U) 
                                                          | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__53__KET____DOT__regdirty__wen)) 
                                                              << 0x35U) 
                                                             | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__52__KET____DOT__regdirty__wen)) 
                                                                 << 0x34U) 
                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__51__KET____DOT__regdirty__wen)) 
                                                                    << 0x33U) 
                                                                   | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__50__KET____DOT__regdirty__wen)) 
                                                                       << 0x32U) 
                                                                      | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__49__KET____DOT__regdirty__wen)) 
                                                                          << 0x31U) 
                                                                         | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__48__KET____DOT__regdirty__wen)) 
                                                                             << 0x30U) 
                                                                            | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__47__KET____DOT__regdirty__wen)) 
                                                                                << 0x2fU) 
                                                                               | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__46__KET____DOT__regdirty__wen)) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__45__KET____DOT__regdirty__wen)) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__44__KET____DOT__regdirty__wen)) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__43__KET____DOT__regdirty__wen)) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__42__KET____DOT__regdirty__wen)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__41__KET____DOT__regdirty__wen)) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__40__KET____DOT__regdirty__wen)) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__39__KET____DOT__regdirty__wen)) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__38__KET____DOT__regdirty__wen)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__37__KET____DOT__regdirty__wen)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__36__KET____DOT__regdirty__wen)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__35__KET____DOT__regdirty__wen)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__34__KET____DOT__regdirty__wen)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__33__KET____DOT__regdirty__wen)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__32__KET____DOT__regdirty__wen)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__31__KET____DOT__regdirty__wen) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__30__KET____DOT__regdirty__wen) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__29__KET____DOT__regdirty__wen) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__28__KET____DOT__regdirty__wen) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__27__KET____DOT__regdirty__wen) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__26__KET____DOT__regdirty__wen) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__25__KET____DOT__regdirty__wen) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__24__KET____DOT__regdirty__wen) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__23__KET____DOT__regdirty__wen) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__22__KET____DOT__regdirty__wen) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__21__KET____DOT__regdirty__wen) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__20__KET____DOT__regdirty__wen) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__19__KET____DOT__regdirty__wen) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__18__KET____DOT__regdirty__wen) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__17__KET____DOT__regdirty__wen) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__16__KET____DOT__regdirty__wen) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__15__KET____DOT__regdirty__wen) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__14__KET____DOT__regdirty__wen) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__13__KET____DOT__regdirty__wen) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__12__KET____DOT__regdirty__wen) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__11__KET____DOT__regdirty__wen) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__10__KET____DOT__regdirty__wen) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__9__KET____DOT__regdirty__wen) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__8__KET____DOT__regdirty__wen) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__7__KET____DOT__regdirty__wen) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__6__KET____DOT__regdirty__wen) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__5__KET____DOT__regdirty__wen) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__4__KET____DOT__regdirty__wen) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__3__KET____DOT__regdirty__wen) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__2__KET____DOT__regdirty__wen) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__1__KET____DOT__regdirty__wen) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__0__KET____DOT__regdirty__wen))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor__DOT___GEN_30 
        = ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor_io_in_a_bits_opcode))
            ? 2U : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor_io_in_a_bits_opcode))
                     ? 1U : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor_io_in_a_bits_opcode))
                              ? 1U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor_io_in_a_bits_opcode))
                                       ? 1U : 0U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT___readys_mask_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT___readys_readys_T_2)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid) 
              << 1U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__earlyWinner_1 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT___readys_readys_T_2) 
               >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__muxStateEarly_1 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__beatsLeft))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__earlyWinner_1)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__state_1));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__wen_1) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_1_last = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_1_beats = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_1_data 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ_io_enq_bits_data;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ_io_deq_ready)
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT___wen_T_10)
                                          : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT___valid_1_T_6)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__f_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__allowReturn));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__wen_1) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__elts_1_data 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_0_data;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__elts_1_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_0_last;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__elts_1_beats 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_0_beats;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_1 
        = ((~ (IData)(vlSelf->reset)) & ((0x10U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__allowed))
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT___wen_T_10)
                                          : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT___valid_1_T_6)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_1 
        = ((~ (IData)(vlSelf->reset)) & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__allowed))
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT___wen_T_10)
                                          : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT___valid_1_T_6)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__wen_1) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__elts_1_data 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_0_data;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__elts_1_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_0_last;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__elts_1_beats 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_0_beats;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_1 
        = ((~ (IData)(vlSelf->reset)) & ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__allowed))
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT___wen_T_10)
                                          : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT___valid_1_T_6)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__wen_1) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__elts_1_data 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_0_data;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__elts_1_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_0_last;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__elts_1_beats 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_0_beats;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_1 
        = ((~ (IData)(vlSelf->reset)) & ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__allowed))
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT___wen_T_10)
                                          : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT___valid_1_T_6)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__wen_1) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__elts_1_data 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_0_data;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__elts_1_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_0_last;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__elts_1_beats 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_0_beats;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_1 
        = ((~ (IData)(vlSelf->reset)) & ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__allowed))
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT___wen_T_10)
                                          : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT___valid_1_T_6)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__wen_1) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__elts_1_data 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_0_data;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__elts_1_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_0_last;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__elts_1_beats 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_0_beats;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__wen_1) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_1_last = 1U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_1_beats = 1U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_1_data 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ_io_enq_bits_data;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ_io_deq_ready)
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT___wen_T_10)
                                          : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT___valid_1_T_6)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__f_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__allowReturn));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__wen_1) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__elts_1_data 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_0_data;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__elts_1_last 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_0_last;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__elts_1_beats 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_0_beats;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_1 
        = ((~ (IData)(vlSelf->reset)) & ((0x10U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__allowed))
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT___wen_T_10)
                                          : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT___valid_1_T_6)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_1 
        = ((~ (IData)(vlSelf->reset)) & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__allowed))
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT___wen_T_10)
                                          : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT___valid_1_T_6)));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__wen_1) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__elts_1_data 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_0_data;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__elts_1_last 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_0_last;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__elts_1_beats 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_0_beats;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_1 
        = ((~ (IData)(vlSelf->reset)) & ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__allowed))
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT___wen_T_10)
                                          : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT___valid_1_T_6)));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__wen_1) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__elts_1_data 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_0_data;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__elts_1_last 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_0_last;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__elts_1_beats 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_0_beats;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_1 
        = ((~ (IData)(vlSelf->reset)) & ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__allowed))
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT___wen_T_10)
                                          : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT___valid_1_T_6)));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__wen_1) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__elts_1_data 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_0_data;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__elts_1_last 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_0_last;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__elts_1_beats 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_0_beats;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_1 
        = ((~ (IData)(vlSelf->reset)) & ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__allowed))
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT___wen_T_10)
                                          : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT___valid_1_T_6)));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__wen_1) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__elts_1_data 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_0_data;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__elts_1_last 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_0_last;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__elts_1_beats 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_0_beats;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__readys_unready 
        = (0x3fU & ((((IData)(ysyxSoCFull__DOT__fpga__DOT__xbar__DOT___readys_unready_T_1) 
                      >> 1U) | ((IData)(ysyxSoCFull__DOT__fpga__DOT__xbar__DOT___readys_unready_T_1) 
                                >> 3U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__readys_mask) 
                                           << 3U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_acc_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_acc) 
           | (3U & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_sizeOH_shiftAmount)) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_eq_2))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_acc_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_acc) 
           | (3U & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_sizeOH_shiftAmount)) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_eq_3))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_acc_4 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_acc_1) 
           | (3U & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_sizeOH_shiftAmount)) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_eq_4))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_acc_5 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_acc_1) 
           | (3U & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_sizeOH_shiftAmount)) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_eq_5))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor__DOT___T_77 
        = ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor_io_in_a_bits_size)) 
           & (0U == (0xfffff000U & (0x1000U ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor_io_in_a_bits_address))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor__DOT__mask_eq_2 
        = (IData)((0U == (6U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor_io_in_a_bits_address)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor__DOT__mask_eq_3 
        = (IData)((2U == (6U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor_io_in_a_bits_address)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor__DOT__mask_eq_4 
        = (IData)((4U == (6U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor_io_in_a_bits_address)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor__DOT__mask_eq_5 
        = (IData)((6U == (6U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor_io_in_a_bits_address)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor__DOT__mask_acc 
        = (1U & ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor_io_in_a_bits_size)) 
                 | (1U & ((~ (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor_io_in_a_bits_address 
                              >> 2U)) & (((IData)(1U) 
                                          << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor_io_in_a_bits_size))) 
                                         >> 2U)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor_io_in_a_bits_size)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor_io_in_a_bits_size))) 
                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor_io_in_a_bits_address) 
                          >> 2U))));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__repeated_repeater__DOT__full) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__repeated_repeater_io_deq_bits_data 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__repeated_repeater__DOT__saved_data;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_source 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__repeated_repeater__DOT__saved_source;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_size 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__repeated_repeater__DOT__saved_size;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__repeated_repeater__DOT__saved_opcode;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__repeated_repeater_io_deq_bits_data 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__repeated_repeater_io_enq_bits_data;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_source 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor_io_in_a_bits_source;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_size 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor_io_in_a_bits_size;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor_io_in_a_bits_opcode;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__repeat_last 
        = (IData)((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_opcode) 
                    >> 2U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__repeat_count) 
                              == (1U & (~ (1U & (((IData)(7U) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_size)) 
                                                 >> 2U)))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__beats1_opdata 
        = ((7U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_opcode)) 
           & ((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_opcode)) 
              & ((5U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_opcode)) 
                 & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_opcode)) 
                    | ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_opcode)) 
                       | (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_opcode)))))));
    ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN_30 
        = ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_opcode))
            ? 2U : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_opcode))
                     ? 1U : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_opcode))
                              ? 1U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_opcode))
                                       ? 1U : 0U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__a_last 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__a_last_counter)) 
           | (0U == ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_opcode))
                      ? 0U : (0x3ffU & (~ (0x3ffU & 
                                           (((IData)(0xfffU) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_size)) 
                                            >> 2U)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ_io_enq_bits_data 
        = (5U | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__header_hi 
                  << 0xcU) | (((IData)((0U != (0x1fU 
                                               & (~ 
                                                  (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msbOH_T_1 
                                                   >> 0xfU))))) 
                               << 0xbU) | (((IData)(
                                                    (0U 
                                                     != 
                                                     (0xffU 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_1) 
                                                         >> 8U)))) 
                                            << 0xaU) 
                                           | (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xfU 
                                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_2) 
                                                            >> 4U)))) 
                                               << 9U) 
                                              | (((IData)(
                                                          (0U 
                                                           != 
                                                           (3U 
                                                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_3) 
                                                               >> 2U)))) 
                                                  << 8U) 
                                                 | (0x80U 
                                                    & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_3) 
                                                        << 4U) 
                                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_3) 
                                                          << 6U)))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__requests 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__f_valid) 
            << 5U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_0) 
                       << 4U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_0) 
                                  << 3U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_0) 
                                             << 2U) 
                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_0) 
                                                << 1U) 
                                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_0))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ_io_enq_bits_data 
        = (5U | ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__header_hi 
                  << 0xcU) | (((IData)((0U != (0x1fU 
                                               & (~ 
                                                  (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msbOH_T_1 
                                                   >> 0xfU))))) 
                               << 0xbU) | (((IData)(
                                                    (0U 
                                                     != 
                                                     (0xffU 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_1) 
                                                         >> 8U)))) 
                                            << 0xaU) 
                                           | (((IData)(
                                                       (0U 
                                                        != 
                                                        (0xfU 
                                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_2) 
                                                            >> 4U)))) 
                                               << 9U) 
                                              | (((IData)(
                                                          (0U 
                                                           != 
                                                           (3U 
                                                            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_3) 
                                                               >> 2U)))) 
                                                  << 8U) 
                                                 | (0x80U 
                                                    & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_3) 
                                                        << 4U) 
                                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_3) 
                                                          << 6U)))))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__requests 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__f_valid) 
            << 5U) | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_0) 
                       << 4U) | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_0) 
                                  << 3U) | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_0) 
                                             << 2U) 
                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_0) 
                                                << 1U) 
                                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_0))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT___readys_readys_T_2 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__readys_unready) 
                  >> 3U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__readys_unready)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor_io_in_a_bits_mask 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxStateEarly_0)
             ? ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_acc_5) 
                  | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_eq_5) 
                     & vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_addr)) 
                 << 7U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_acc_5) 
                             | ((~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_addr) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_eq_5))) 
                            << 6U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_acc_4) 
                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_eq_4) 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_addr)) 
                                       << 5U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_acc_4) 
                                                   | ((~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_addr) 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_eq_4))) 
                                                  << 4U) 
                                                 | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_acc_3) 
                                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_eq_3) 
                                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_addr)) 
                                                     << 3U) 
                                                    | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_acc_3) 
                                                         | ((~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_addr) 
                                                            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_eq_3))) 
                                                        << 2U) 
                                                       | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_acc_2) 
                                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_eq_2) 
                                                               & vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_addr)) 
                                                           << 1U) 
                                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_acc_2) 
                                                             | ((~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_addr) 
                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_eq_2))))))))))
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxStateEarly_1)
                       ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__in_wdeq__DOT__maybe_full)
                           ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__in_wdeq__DOT__ram_strb
                          [0U] : 0U) : 0U));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__repeated_repeater__DOT__full) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_address 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__repeated_repeater__DOT__saved_address;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__repeated_repeater_io_deq_bits_mask 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__repeated_repeater__DOT__saved_mask;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_address 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor_io_in_a_bits_address;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__repeated_repeater_io_deq_bits_mask 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor_io_in_a_bits_mask;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor_io_in_a_bits_size))) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor__DOT__mask_eq_2))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor_io_in_a_bits_size))) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor__DOT__mask_eq_3))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor_io_in_a_bits_size))) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor__DOT__mask_eq_4))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor_io_in_a_bits_size))) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor__DOT__mask_eq_5))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___T_77 
        = ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_size)) 
           & (0U == (0xfffff000U & (0x1000U ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_address))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__mask_eq_2 
        = (IData)((0U == (3U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_address)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__mask_eq_3 
        = (IData)((1U == (3U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_address)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__mask_eq_4 
        = (IData)((2U == (3U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_address)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__mask_eq_5 
        = (IData)((3U == (3U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_address)));
    __VdfgTmp_h5d042c25__0 = (1U & ((~ (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_address 
                                        >> 1U)) & (
                                                   ((IData)(1U) 
                                                    << 
                                                    (1U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_size))) 
                                                   >> 1U)));
    __VdfgTmp_h63eab968__0 = (1U & ((((IData)(1U) << 
                                      (1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_size))) 
                                     & vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_address) 
                                    >> 1U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__repeat_index 
        = (1U & ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_address 
                  >> 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__repeat_count)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___T_461 
        = ((0U == (0xc0000000U & (0x40000000U ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_address))) 
           | (0U == (0x80000000U & (0x80000000U ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_address))));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__maybe_full) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_source 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_source
            [0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_size 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_size
            [0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_opcode
            [0U];
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_source 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_source;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_size 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_size;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_opcode;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__header 
        = ((((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_source))
              ? 7U : ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_source))
                       ? 6U : ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_source))
                                ? 5U : ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_source))
                                         ? 4U : ((0xbU 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_source))
                                                  ? 3U
                                                  : 
                                                 ((0xaU 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_source))
                                                   ? 2U
                                                   : 
                                                  ((9U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_source))
                                                    ? 1U
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_source))
                                                     ? 0U
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_source))
                                                      ? 7U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_source))
                                                       ? 6U
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_source))
                                                        ? 5U
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_source))
                                                         ? 4U
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_source))
                                                          ? 3U
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_source))
                                                           ? 2U
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_source))
                                                            ? 1U
                                                            : 0U))))))))))))))) 
            << 0x10U) | ((((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_source))
                            ? 2U : ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_source))
                                     ? 2U : ((0xdU 
                                              == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_source))
                                              ? 2U : 
                                             ((0xcU 
                                               == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_source))
                                               ? 2U
                                               : ((0xbU 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_source))
                                                   ? 2U
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_source))
                                                    ? 2U
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_source))
                                                     ? 2U
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_source))
                                                      ? 2U
                                                      : 1U)))))))) 
                          << 0xdU) | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_size) 
                                       << 9U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__maybe_full)
                                                    ? 
                                                   vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_param
                                                   [0U]
                                                    : 0U) 
                                                  << 6U) 
                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_opcode) 
                                                    << 3U)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_last 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_last_counter)) 
           | (0U == ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_opcode))
                      ? 0U : (0xfU & (~ (0xfU & (((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_size)) 
                                                 >> 2U)))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__isLastState 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__state) 
           == ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_opcode))
                ? 2U : 3U));
    if ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_opcode))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN_40 = 4U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN_32 = 4U;
    } else if ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_opcode))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN_40 = 5U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN_32 = 4U;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN_40 
            = ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN_30;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN_32 
            = ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN_30;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9 
        = vlSelf->reset;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_corrupt 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__muxStateEarly_0) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_d_bits_corrupt)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__muxStateEarly_1) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_bits_corrupt)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_param 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__muxStateEarly_1)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_param)
            : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_denied 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__muxStateEarly_0) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_d_bits_denied)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__muxStateEarly_1) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_denied)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_size 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__muxStateEarly_0)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size)
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__muxStateEarly_1)
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_size)
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__muxStateEarly_0)
             ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__r_holds_d)
                 ? 1U : 0U) : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__muxStateEarly_1)
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode)
                                      : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__muxStateEarly_0)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source)
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__muxStateEarly_1)
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source)
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT___valid_0_T_6 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT___wen_T_3 = 1U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT___wen_T_10 = 0U;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT___wen_T_13 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___send_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__state) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__requests));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__readys_filter 
        = ((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__readys_mask)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__requests)) 
            << 6U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__requests));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__wen) {
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_1) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_0_data 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_1_data;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_0_beats 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_1_beats;
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_0_data 
                = (4U | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_MPORT_en) 
                           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_MPORT_addr)))
                           ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_MPORT_data)
                           : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data
                          [0U]) << 0x10U));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_0_beats = 1U;
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_0_last 
            = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_1)) 
                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_1_last)));
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__wen) {
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_1) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_0_data 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_1_data;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_0_last 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_1_last;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_0_beats 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_1_beats;
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_0_data 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q_io_enq_bits_data;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_0_last 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q_io_enq_bits_last;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_0_beats 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___io_q_bits_beats_T_13;
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__wen) {
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_1) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_0_data 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_1_data;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_0_last 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_1_last;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_0_beats 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_1_beats;
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_0_data 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q_io_enq_bits_data;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_0_last 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q_io_enq_bits_last;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_0_beats 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___io_q_bits_beats_T_8;
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__wen) {
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__valid_1) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_0_data 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_1_data;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_0_last 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_1_last;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_0_beats 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_1_beats;
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_0_data 
                = ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkB__DOT__state))
                    ? 0U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkB__DOT__state))
                             ? 0U : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkB__DOT__state))
                                      ? 0U : 1U)));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_0_last 
                = (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkB__DOT__state));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_0_beats = 3U;
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__wen) {
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_1) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_0_data 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_1_data;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_0_last 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_1_last;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_0_beats 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_1_beats;
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_0_data 
                = ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkC__DOT__state))
                    ? 0U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkC__DOT__state))
                             ? 0U : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkC__DOT__state))
                                      ? 0U : 2U)));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_0_last 
                = (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkC__DOT__state));
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_0_beats = 3U;
        }
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT___valid_0_T_6 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_0)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT___wen_T_3 = 1U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT___wen_T_10 = 0U;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT___wen_T_13 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___send_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__state) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__requests));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__readys_filter 
        = ((((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__readys_mask)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__requests)) 
            << 6U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__requests));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__wen) {
        if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_1) {
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_0_data 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_1_data;
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_0_beats 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_1_beats;
        } else {
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_0_data 
                = (4U | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_MPORT_en) 
                           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_MPORT_addr)))
                           ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_MPORT_data)
                           : vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data
                          [0U]) << 0x10U));
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_0_beats = 1U;
        }
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_0_last 
            = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_1)) 
                     | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_1_last)));
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__wen) {
        if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_1) {
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_0_data 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_1_data;
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_0_last 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_1_last;
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_0_beats 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_1_beats;
        } else {
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_0_data 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q_io_enq_bits_data;
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_0_last 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q_io_enq_bits_last;
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_0_beats 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT___io_q_bits_beats_T_13;
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__wen) {
        if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_1) {
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_0_data 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_1_data;
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_0_last 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_1_last;
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_0_beats 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_1_beats;
        } else {
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_0_data 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q_io_enq_bits_data;
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_0_last 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q_io_enq_bits_last;
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_0_beats 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___io_q_bits_beats_T_8;
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__wen) {
        if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__valid_1) {
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_0_data 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_1_data;
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_0_last 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_1_last;
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_0_beats 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_1_beats;
        } else {
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_0_data 
                = ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkB__DOT__state))
                    ? 0U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkB__DOT__state))
                             ? 0U : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkB__DOT__state))
                                      ? 0U : 1U)));
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_0_last 
                = (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkB__DOT__state));
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_0_beats = 3U;
        }
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__wen) {
        if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_1) {
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_0_data 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_1_data;
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_0_last 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_1_last;
        } else {
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_0_data 
                = ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkC__DOT__state))
                    ? 0U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkC__DOT__state))
                             ? 0U : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkC__DOT__state))
                                      ? 0U : 2U)));
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_0_last 
                = (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkC__DOT__state));
        }
    }
    if (vlSelf->reset) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkB__DOT__state = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkC__DOT__state = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkB__DOT__state = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkC__DOT__state = 0U;
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__wen) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_0_beats 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_1)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_1_beats)
                : 3U);
    }
    ysyxSoCFull__DOT__fpga__DOT__xbar__DOT___readys_mask_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT___readys_readys_T_2)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__readys_filter_lo));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__earlyWinner_2 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT___readys_readys_T_2) 
               >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__earlyWinner_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT___readys_readys_T_2)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__earlyWinner_1 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT___readys_readys_T_2) 
               >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid));
    if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__beatsLeft))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__muxStateEarly_2 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__earlyWinner_2;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__muxStateEarly_0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__earlyWinner_0;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__muxStateEarly_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__earlyWinner_1;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__muxStateEarly_2 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__state_2;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__muxStateEarly_0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__state_0;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__muxStateEarly_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__state_1;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor__DOT__mask 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor__DOT__mask_acc_5) 
             | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor__DOT__mask_eq_5) 
                & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor_io_in_a_bits_address)) 
            << 7U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor__DOT__mask_acc_5) 
                        | ((~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor_io_in_a_bits_address) 
                           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor__DOT__mask_eq_5))) 
                       << 6U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor__DOT__mask_acc_4) 
                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor__DOT__mask_eq_4) 
                                      & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor_io_in_a_bits_address)) 
                                  << 5U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor__DOT__mask_acc_4) 
                                              | ((~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor_io_in_a_bits_address) 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor__DOT__mask_eq_4))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor__DOT__mask_acc_3) 
                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor__DOT__mask_eq_3) 
                                                    & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor_io_in_a_bits_address)) 
                                                << 3U) 
                                               | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor__DOT__mask_acc_3) 
                                                    | ((~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor_io_in_a_bits_address) 
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor__DOT__mask_eq_3))) 
                                                   << 2U) 
                                                  | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor__DOT__mask_acc_2) 
                                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor__DOT__mask_eq_2) 
                                                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor_io_in_a_bits_address)) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor__DOT__mask_acc_2) 
                                                        | ((~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor_io_in_a_bits_address) 
                                                           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor__DOT__mask_eq_2))))))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__mask_acc 
        = ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_size)) 
           | (IData)(__VdfgTmp_h5d042c25__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__mask_acc 
        = ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_size)) 
           | (IData)(__VdfgTmp_h5d042c25__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__mask_acc_1 
        = ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_size)) 
           | (IData)(__VdfgTmp_h63eab968__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__mask_acc_1 
        = ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_size)) 
           | (IData)(__VdfgTmp_h63eab968__0));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__repeat_index) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_a_bits_data 
            = (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__repeated_repeater_io_deq_bits_data 
                       >> 0x20U));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask 
            = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__repeated_repeater_io_deq_bits_mask) 
                       >> 4U));
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_a_bits_data 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__cated_bits_data_lo;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask 
            = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__repeated_repeater_io_deq_bits_mask));
    }
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__maybe_full) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_data 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_data
            [0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_mask 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_mask
            [0U];
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_data 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_a_bits_data;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_mask 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__a_id 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___T_461) 
           | ((0U == (0xc0000000U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_address))
               ? 2U : 0U));
    VL_SHIFTR_WWI(512,512,9, __Vtemp_hd61a028e__0, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
        = __Vtemp_hd61a028e__0[0U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[1U] 
        = __Vtemp_hd61a028e__0[1U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[2U] 
        = __Vtemp_hd61a028e__0[2U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[3U] 
        = __Vtemp_hd61a028e__0[3U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[4U] 
        = __Vtemp_hd61a028e__0[4U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[5U] 
        = __Vtemp_hd61a028e__0[5U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[6U] 
        = __Vtemp_hd61a028e__0[6U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[7U] 
        = __Vtemp_hd61a028e__0[7U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[8U] 
        = __Vtemp_hd61a028e__0[8U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[9U] 
        = __Vtemp_hd61a028e__0[9U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU] 
        = __Vtemp_hd61a028e__0[0xaU];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU] 
        = __Vtemp_hd61a028e__0[0xbU];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU] 
        = __Vtemp_hd61a028e__0[0xcU];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU] 
        = __Vtemp_hd61a028e__0[0xdU];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU] 
        = __Vtemp_hd61a028e__0[0xeU];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU] 
        = __Vtemp_hd61a028e__0[0xfU];
    VL_SHIFTR_WWI(512,512,9, __Vtemp_hb4b5d05f__0, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
        = __Vtemp_hb4b5d05f__0[0U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[1U] 
        = __Vtemp_hb4b5d05f__0[1U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[2U] 
        = __Vtemp_hb4b5d05f__0[2U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[3U] 
        = __Vtemp_hb4b5d05f__0[3U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[4U] 
        = __Vtemp_hb4b5d05f__0[4U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[5U] 
        = __Vtemp_hb4b5d05f__0[5U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[6U] 
        = __Vtemp_hb4b5d05f__0[6U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[7U] 
        = __Vtemp_hb4b5d05f__0[7U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[8U] 
        = __Vtemp_hb4b5d05f__0[8U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[9U] 
        = __Vtemp_hb4b5d05f__0[9U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU] 
        = __Vtemp_hb4b5d05f__0[0xaU];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU] 
        = __Vtemp_hb4b5d05f__0[0xbU];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU] 
        = __Vtemp_hb4b5d05f__0[0xcU];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU] 
        = __Vtemp_hb4b5d05f__0[0xdU];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU] 
        = __Vtemp_hb4b5d05f__0[0xeU];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU] 
        = __Vtemp_hb4b5d05f__0[0xfU];
    VL_SHIFTR_WWI(512,512,9, __Vtemp_hc0b1fcd1__0, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
        = __Vtemp_hc0b1fcd1__0[0U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U] 
        = __Vtemp_hc0b1fcd1__0[1U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U] 
        = __Vtemp_hc0b1fcd1__0[2U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U] 
        = __Vtemp_hc0b1fcd1__0[3U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U] 
        = __Vtemp_hc0b1fcd1__0[4U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U] 
        = __Vtemp_hc0b1fcd1__0[5U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U] 
        = __Vtemp_hc0b1fcd1__0[6U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U] 
        = __Vtemp_hc0b1fcd1__0[7U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U] 
        = __Vtemp_hc0b1fcd1__0[8U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U] 
        = __Vtemp_hc0b1fcd1__0[9U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU] 
        = __Vtemp_hc0b1fcd1__0[0xaU];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU] 
        = __Vtemp_hc0b1fcd1__0[0xbU];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU] 
        = __Vtemp_hc0b1fcd1__0[0xcU];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU] 
        = __Vtemp_hc0b1fcd1__0[0xdU];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU] 
        = __Vtemp_hc0b1fcd1__0[0xeU];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU] 
        = __Vtemp_hc0b1fcd1__0[0xfU];
    VL_SHIFTR_WWI(256,256,8, __Vtemp_hf2924b2c__0, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_opcodes, 
                  (0xfcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                            << 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
        = __Vtemp_hf2924b2c__0[0U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[1U] 
        = __Vtemp_hf2924b2c__0[1U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[2U] 
        = __Vtemp_hf2924b2c__0[2U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[3U] 
        = __Vtemp_hf2924b2c__0[3U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[4U] 
        = __Vtemp_hf2924b2c__0[4U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[5U] 
        = __Vtemp_hf2924b2c__0[5U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[6U] 
        = __Vtemp_hf2924b2c__0[6U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[7U] 
        = __Vtemp_hf2924b2c__0[7U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_source) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___same_cycle_resp_T_8 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
            << 1U) == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__d_cam_sel_match_0 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_source)) 
           & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_s_0_state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT___valid_1_T_6 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT___wen_T_13) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_unready_T_1 
        = (0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__readys_filter) 
                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__readys_filter) 
                        >> 1U)));
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data__v0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data__v0;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_MPORT_data 
        = (0xffffU & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__state))
                       ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg
                       : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_sink_r)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_MPORT_addr 
        = (((IData)((0U != (0xffffU & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__free_sel 
                                               >> 0x10U))))) 
            << 4U) | (((IData)((0U != (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T) 
                                                >> 8U)))) 
                       << 3U) | (((IData)((0U != (0xfU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_1) 
                                                     >> 4U)))) 
                                  << 2U) | (((IData)(
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_2) 
                                                          >> 2U)))) 
                                             << 1U) 
                                            | (IData)(
                                                      (0U 
                                                       != 
                                                       (0xaU 
                                                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_2))))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT___valid_1_T_6 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT___wen_T_13) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1));
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___readys_unready_T_1 
        = (0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__readys_filter) 
                     | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__readys_filter) 
                        >> 1U)));
    if (vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data__v0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data[vlSelf->__Vdlyvdim0__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data__v0] 
            = vlSelf->__Vdlyvval__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data__v0;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_MPORT_data 
        = (0xffffU & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__state))
                       ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg
                       : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_sink_r)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_MPORT_addr 
        = (((IData)((0U != (0xffffU & (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__free_sel 
                                               >> 0x10U))))) 
            << 4U) | (((IData)((0U != (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T) 
                                                >> 8U)))) 
                       << 3U) | (((IData)((0U != (0xfU 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_1) 
                                                     >> 4U)))) 
                                  << 2U) | (((IData)(
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_2) 
                                                          >> 2U)))) 
                                             << 1U) 
                                            | (IData)(
                                                      (0U 
                                                       != 
                                                       (0xaU 
                                                        & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_2))))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT___readys_mask_T_3 
        = (7U & ((IData)(ysyxSoCFull__DOT__fpga__DOT__xbar__DOT___readys_mask_T) 
                 | ((IData)(ysyxSoCFull__DOT__fpga__DOT__xbar__DOT___readys_mask_T) 
                    << 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__mask 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__mask_acc_1) 
             | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__mask_eq_5)) 
            << 3U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__mask_acc_1) 
                        | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__mask_eq_4)) 
                       << 2U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__mask_acc) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__mask_eq_3)) 
                                  << 1U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__mask_acc) 
                                            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__mask_eq_2)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__mask 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__mask_acc_1) 
             | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__mask_eq_5)) 
            << 3U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__mask_acc_1) 
                        | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__mask_eq_4)) 
                       << 2U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__mask_acc) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__mask_eq_3)) 
                                  << 1U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__mask_acc) 
                                            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT__mask_eq_2)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__stall 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_source) 
                >> 3U)) & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__a_first_counter)) 
                           & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__flight_0) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__flight_1) 
                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__flight_2) 
                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__flight_3) 
                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__flight_4) 
                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__flight_5) 
                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__flight_6) 
                                                 | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__flight_7)))))))) 
                              & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__a_id)) 
                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__stalls_id) 
                                    != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__a_id)))))) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_source) 
               >> 3U) & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__a_first_counter)) 
                         & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__flight_8) 
                             | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__flight_9) 
                                | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__flight_10) 
                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__flight_11) 
                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__flight_12) 
                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__flight_13) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__flight_14) 
                                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__flight_15)))))))) 
                            & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__a_id)) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__stalls_id_1) 
                                  != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__a_id)))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_o_last 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_opcode))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__last)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_last));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT___GEN_2 
        = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__state))
            ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_opcode))
                ? 0U : 3U) : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__state))
                               ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_o_last)
                                   ? 0U : 3U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__state)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__full) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__saved_param;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_size 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__saved_size;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source 
            = (0x3fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__saved_source));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_param;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_size 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_size;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source 
            = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                        >> 1U));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_58 
        = ((5U == (7U & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                         >> 1U))) ? 2U : ((4U == (7U 
                                                  & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                     >> 1U)))
                                           ? 1U : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___GEN_58 
        = ((5U == (7U & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                         >> 1U))) ? 2U : ((4U == (7U 
                                                  & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                     >> 1U)))
                                           ? 1U : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___GEN_58 
        = ((5U == (7U & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                         >> 1U))) ? 2U : ((4U == (7U 
                                                  & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                     >> 1U)))
                                           ? 1U : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_58 
        = ((5U == (7U & ((VysyxSoCFull__ConstPool__CONST_h57168600_0[0U] 
                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                         >> 1U))) ? 2U : ((4U == (7U 
                                                  & ((VysyxSoCFull__ConstPool__CONST_h57168600_0[0U] 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                     >> 1U)))
                                           ? 1U : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & ((VysyxSoCFull__ConstPool__CONST_h57168600_0[0U] 
                                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((VysyxSoCFull__ConstPool__CONST_h57168600_0[0U] 
                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___a_opcode_lookup_T_1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__inflight_opcodes) 
                   >> (4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                             << 2U))));
    VL_SHIFTR_WWI(256,256,8, __Vtemp_hcd8e215a__0, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U] 
        = __Vtemp_hcd8e215a__0[0U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[1U] 
        = __Vtemp_hcd8e215a__0[1U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[2U] 
        = __Vtemp_hcd8e215a__0[2U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[3U] 
        = __Vtemp_hcd8e215a__0[3U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[4U] 
        = __Vtemp_hcd8e215a__0[4U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[5U] 
        = __Vtemp_hcd8e215a__0[5U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[6U] 
        = __Vtemp_hcd8e215a__0[6U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[7U] 
        = __Vtemp_hcd8e215a__0[7U];
    VL_SHIFTR_WWI(256,256,8, __Vtemp_h5528368b__0, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
        = __Vtemp_h5528368b__0[0U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U] 
        = __Vtemp_h5528368b__0[1U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U] 
        = __Vtemp_h5528368b__0[2U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U] 
        = __Vtemp_h5528368b__0[3U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U] 
        = __Vtemp_h5528368b__0[4U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U] 
        = __Vtemp_h5528368b__0[5U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U] 
        = __Vtemp_h5528368b__0[6U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U] 
        = __Vtemp_h5528368b__0[7U];
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT___GEN_159 
        = ((0x15U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_21)
            : ((0x14U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_20)
                : ((0x13U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_19)
                    : ((0x12U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_18)
                        : ((0x11U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_17)
                            : ((0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_16)
                                : ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_15)
                                    : ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_14)
                                        : ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_13)
                                            : ((0xcU 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_12)
                                                : (
                                                   (0xbU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_11)
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_10)
                                                     : 
                                                    ((9U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_9)
                                                      : 
                                                     ((8U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_8)
                                                       : 
                                                      ((7U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_7)
                                                        : 
                                                       ((6U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_6)
                                                         : 
                                                        ((5U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_5)
                                                          : 
                                                         ((4U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                           ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_4)
                                                           : 
                                                          ((3U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_3)
                                                            : 
                                                           ((2U 
                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_2)
                                                             : 
                                                            ((1U 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_1)
                                                              : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_0))))))))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__d_replace 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__d_first_counter)) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__d_cam_sel_match_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__d_drop 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__d_first_counter)) 
           & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__d_cam_sel_match_0)));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_unready_T_3 
        = (0xfffU & ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_unready_T_1) 
                     | ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_unready_T_1) 
                        >> 2U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_sink 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_grant)
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__d_first)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_MPORT_addr)
                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__sink_r))
            : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_delta_4 
        = (0x1fffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__tx_e 
                        - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_0_beats)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_1 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q_io_deq_ready)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT___valid_1_T_6)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__wen_1) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_1_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q_io_enq_bits_last;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_1_beats 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___io_q_bits_beats_T_13;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_1_data 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q_io_enq_bits_data;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_delta 
        = (0x1fffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__tx_a 
                        - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_0_beats)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_1 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q_io_deq_ready)
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT___wen_T_10)
                                          : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT___valid_1_T_6)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__wen_1) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_1_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q_io_enq_bits_last;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_1_beats 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___io_q_bits_beats_T_8;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_1_data 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q_io_enq_bits_data;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_delta_3 
        = (0x1fffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__tx_d 
                        - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_0_beats)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_1 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q_io_deq_ready)
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT___wen_T_10)
                                          : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT___valid_1_T_6)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_delta_1 
        = (0x1fffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__tx_b 
                        - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_0_beats)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__valid_1 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q_io_deq_ready)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT___valid_1_T_6)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_delta_2 
        = (0x1fffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__tx_c 
                        - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_0_beats)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_1 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q_io_deq_ready)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT___valid_1_T_6)));
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___readys_unready_T_3 
        = (0xfffU & ((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___readys_unready_T_1) 
                     | ((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___readys_unready_T_1) 
                        >> 2U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_sink 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_grant)
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__d_first)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_MPORT_addr)
                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__sink_r))
            : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_delta_4 
        = (0x1fffffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__tx_e 
                        - (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_0_beats)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_1 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q_io_deq_ready)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT___valid_1_T_6)));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__wen_1) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_1_last 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q_io_enq_bits_last;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_1_beats 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT___io_q_bits_beats_T_13;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_1_data 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q_io_enq_bits_data;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_delta 
        = (0x1fffffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__tx_a 
                        - (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_0_beats)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_1 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q_io_deq_ready)
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT___wen_T_10)
                                          : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT___valid_1_T_6)));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__wen_1) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_1_last 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q_io_enq_bits_last;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_1_beats 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___io_q_bits_beats_T_8;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_1_data 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q_io_enq_bits_data;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_delta_3 
        = (0x1fffffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__tx_d 
                        - (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_0_beats)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_1 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q_io_deq_ready)
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT___wen_T_10)
                                          : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT___valid_1_T_6)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_delta_1 
        = (0x1fffffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__tx_b 
                        - (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_0_beats)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__valid_1 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q_io_deq_ready)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT___valid_1_T_6)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_delta_2 
        = (0x1fffffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__tx_c 
                        - (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_0_beats)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_1 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q_io_deq_ready)) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT___valid_1_T_6)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__muxStateEarly_2)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_param)
            : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_corrupt 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__muxStateEarly_0) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_corrupt)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__muxStateEarly_1) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_corrupt)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__muxStateEarly_2) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_bits_corrupt))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_denied 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__muxStateEarly_0) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_denied)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__muxStateEarly_1) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_denied)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__muxStateEarly_2) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_denied))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_data 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__muxStateEarly_0)
             ? vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_data
            [vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value_1]
             : 0ULL) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__muxStateEarly_1)
                         ? ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                             ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__DOT__ram_data
                            [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__DOT__deq_ptr_value]
                             : ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                 ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__DOT__ram_data
                                [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__DOT__deq_ptr_value]
                                 : ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                     ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__DOT__ram_data
                                    [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__DOT__deq_ptr_value]
                                     : ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                         ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__DOT__ram_data
                                        [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__DOT__deq_ptr_value]
                                         : ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                             ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__DOT__ram_data
                                            [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__DOT__deq_ptr_value]
                                             : ((0xaU 
                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                 ? 
                                                vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__DOT__ram_data
                                                [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__DOT__deq_ptr_value]
                                                 : 
                                                ((9U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                  ? 
                                                 vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__DOT__ram_data
                                                 [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__DOT__deq_ptr_value]
                                                  : 
                                                 ((8U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                   ? 
                                                  vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__DOT__ram_data
                                                  [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__DOT__deq_ptr_value]
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                    ? 
                                                   vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__DOT__ram_data
                                                   [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__DOT__deq_ptr_value]
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                     ? 
                                                    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__DOT__ram_data
                                                    [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__DOT__deq_ptr_value]
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                      ? 
                                                     vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__DOT__ram_data
                                                     [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__DOT__deq_ptr_value]
                                                      : 
                                                     ((4U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                       ? 
                                                      vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__DOT__ram_data
                                                      [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__DOT__deq_ptr_value]
                                                       : 
                                                      ((3U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                        ? 
                                                       vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__DOT__ram_data
                                                       [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__DOT__deq_ptr_value]
                                                        : 
                                                       ((2U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                         ? 
                                                        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__DOT__ram_data
                                                        [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__DOT__deq_ptr_value]
                                                         : 
                                                        ((1U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id))
                                                          ? 
                                                         vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__DOT__ram_data
                                                         [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__DOT__deq_ptr_value]
                                                          : 
                                                         vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0__DOT__ram_data
                                                         [vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0__DOT__deq_ptr_value])))))))))))))))
                         : 0ULL));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_size 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__muxStateEarly_0)
              ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size)
              : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__muxStateEarly_1)
                        ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_size)
                        : 0U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__muxStateEarly_2)
                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_size)
                                   : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__muxStateEarly_0)
              ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_beats1_opdata)
                  ? 1U : 0U) : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__muxStateEarly_1)
                                       ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__beatsDO_opdata_1)
                                           ? 1U : 0U)
                                       : 0U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__muxStateEarly_2)
                                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)
                                                  : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__muxStateEarly_0)
              ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source)
              : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__muxStateEarly_1)
                        ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source)
                        : 0U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__muxStateEarly_2)
                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source)
                                   : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__stall)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor_io_in_a_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___GEN_58 
        = ((5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                         >> 1U))) ? 2U : ((4U == (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                     >> 1U)))
                                           ? 1U : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_58 
        = ((5U == (7U & ((VysyxSoCFull__ConstPool__CONST_h57168600_0[0U] 
                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U]) 
                         >> 1U))) ? 2U : ((4U == (7U 
                                                  & ((VysyxSoCFull__ConstPool__CONST_h57168600_0[0U] 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U]) 
                                                     >> 1U)))
                                           ? 1U : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & ((VysyxSoCFull__ConstPool__CONST_h57168600_0[0U] 
                                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U]) 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((VysyxSoCFull__ConstPool__CONST_h57168600_0[0U] 
                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U]) 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___GEN_58 
        = ((5U == (7U & ((VysyxSoCFull__ConstPool__CONST_h57168600_0[0U] 
                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                         >> 1U))) ? 2U : ((4U == (7U 
                                                  & ((VysyxSoCFull__ConstPool__CONST_h57168600_0[0U] 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                     >> 1U)))
                                           ? 1U : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & ((VysyxSoCFull__ConstPool__CONST_h57168600_0[0U] 
                                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((VysyxSoCFull__ConstPool__CONST_h57168600_0[0U] 
                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0U))));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT___GEN_180 
        = ((0x2aU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_42)
            : ((0x29U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_41)
                : ((0x28U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_40)
                    : ((0x27U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_39)
                        : ((0x26U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_38)
                            : ((0x25U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_37)
                                : ((0x24U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_36)
                                    : ((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_35)
                                        : ((0x22U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_34)
                                            : ((0x21U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_33)
                                                : (
                                                   (0x20U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_32)
                                                    : 
                                                   ((0x1fU 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_31)
                                                     : 
                                                    ((0x1eU 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_30)
                                                      : 
                                                     ((0x1dU 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_29)
                                                       : 
                                                      ((0x1cU 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_28)
                                                        : 
                                                       ((0x1bU 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_27)
                                                         : 
                                                        ((0x1aU 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_26)
                                                          : 
                                                         ((0x19U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                           ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_25)
                                                           : 
                                                          ((0x18U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_24)
                                                            : 
                                                           ((0x17U 
                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_23)
                                                             : 
                                                            ((0x16U 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_22)
                                                              : (IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT___GEN_159))))))))))))))))))))));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__d_replace) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_denied) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_corrupt));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_denied 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_denied) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_denied));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_enq_bits_data 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode = 1U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_corrupt;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_denied 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_denied;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_enq_bits_data = 0ULL;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_beats1_opdata 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__d_replace) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)));
    __VdfgTmp_hc940793c__0 = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__d_replace)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode) 
                                 >> 2U));
    __VdfgTmp_hc81eae13__0 = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__d_replace)) 
                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode) 
                                       >> 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_ready) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__d_drop));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__d_drop)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__readys_unready 
        = (0xfffU & ((((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_unready_T_3) 
                       >> 1U) | ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_unready_T_3) 
                                 >> 5U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__readys_mask) 
                                            << 6U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_allow_4 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_first_4)) 
                 | VL_LTES_III(21, 0U, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_delta_4)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_allow 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_first)) 
                 | VL_LTES_III(21, 0U, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_delta)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_allow_3 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_first_3)) 
                 | VL_LTES_III(21, 0U, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_delta_3)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_allow_1 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_first_1)) 
                 | VL_LTES_III(21, 0U, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_delta_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_allow_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_first_2)) 
                 | VL_LTES_III(21, 0U, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_delta_2)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__readys_unready 
        = (0xfffU & ((((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___readys_unready_T_3) 
                       >> 1U) | ((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___readys_unready_T_3) 
                                 >> 5U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__readys_mask) 
                                            << 6U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_allow_4 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_first_4)) 
                 | VL_LTES_III(21, 0U, vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_delta_4)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q_io_enq_bits_last 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_o_last) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__isLastState));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT___io_q_bits_beats_T_13 
        = (0x1fU & ((IData)(3U) + (((4U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_opcode))
                                     ? 0U : ((0x1eU 
                                              & (((IData)(1U) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_size)) 
                                                 >> 2U)) 
                                             | (2U 
                                                >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_size)))) 
                                   + ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_opcode))
                                       ? ((2U & (((IData)(1U) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_size)) 
                                                 >> 5U)) 
                                          | (5U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_size)))
                                       : 0U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_allow 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_first)) 
                 | VL_LTES_III(21, 0U, vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_delta)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_allow_3 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_first_3)) 
                 | VL_LTES_III(21, 0U, vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_delta_3)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_allow_1 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_first_1)) 
                 | VL_LTES_III(21, 0U, vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_delta_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_allow_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_first_2)) 
                 | VL_LTES_III(21, 0U, vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_delta_2)));
    VL_SHIFTR_WWI(512,512,9, __Vtemp_hd3d5317e__0, vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
        = __Vtemp_hd3d5317e__0[0U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[1U] 
        = __Vtemp_hd3d5317e__0[1U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[2U] 
        = __Vtemp_hd3d5317e__0[2U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[3U] 
        = __Vtemp_hd3d5317e__0[3U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[4U] 
        = __Vtemp_hd3d5317e__0[4U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[5U] 
        = __Vtemp_hd3d5317e__0[5U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[6U] 
        = __Vtemp_hd3d5317e__0[6U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[7U] 
        = __Vtemp_hd3d5317e__0[7U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[8U] 
        = __Vtemp_hd3d5317e__0[8U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[9U] 
        = __Vtemp_hd3d5317e__0[9U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU] 
        = __Vtemp_hd3d5317e__0[0xaU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU] 
        = __Vtemp_hd3d5317e__0[0xbU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU] 
        = __Vtemp_hd3d5317e__0[0xcU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU] 
        = __Vtemp_hd3d5317e__0[0xdU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU] 
        = __Vtemp_hd3d5317e__0[0xeU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU] 
        = __Vtemp_hd3d5317e__0[0xfU];
    VL_SHIFTR_WWI(512,512,9, __Vtemp_h431d406c__0, vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
        = __Vtemp_h431d406c__0[0U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[1U] 
        = __Vtemp_h431d406c__0[1U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[2U] 
        = __Vtemp_h431d406c__0[2U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[3U] 
        = __Vtemp_h431d406c__0[3U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[4U] 
        = __Vtemp_h431d406c__0[4U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[5U] 
        = __Vtemp_h431d406c__0[5U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[6U] 
        = __Vtemp_h431d406c__0[6U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[7U] 
        = __Vtemp_h431d406c__0[7U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[8U] 
        = __Vtemp_h431d406c__0[8U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[9U] 
        = __Vtemp_h431d406c__0[9U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU] 
        = __Vtemp_h431d406c__0[0xaU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU] 
        = __Vtemp_h431d406c__0[0xbU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU] 
        = __Vtemp_h431d406c__0[0xcU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU] 
        = __Vtemp_h431d406c__0[0xdU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU] 
        = __Vtemp_h431d406c__0[0xeU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU] 
        = __Vtemp_h431d406c__0[0xfU];
    VL_SHIFTR_WWI(512,512,9, __Vtemp_h70789772__0, vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
        = __Vtemp_h70789772__0[0U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U] 
        = __Vtemp_h70789772__0[1U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U] 
        = __Vtemp_h70789772__0[2U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U] 
        = __Vtemp_h70789772__0[3U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U] 
        = __Vtemp_h70789772__0[4U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U] 
        = __Vtemp_h70789772__0[5U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U] 
        = __Vtemp_h70789772__0[6U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U] 
        = __Vtemp_h70789772__0[7U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U] 
        = __Vtemp_h70789772__0[8U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U] 
        = __Vtemp_h70789772__0[9U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU] 
        = __Vtemp_h70789772__0[0xaU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU] 
        = __Vtemp_h70789772__0[0xbU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU] 
        = __Vtemp_h70789772__0[0xcU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU] 
        = __Vtemp_h70789772__0[0xdU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU] 
        = __Vtemp_h70789772__0[0xeU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU] 
        = __Vtemp_h70789772__0[0xfU];
    VL_SHIFTR_WWI(256,256,8, __Vtemp_h17c0c1f6__0, vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_opcodes, 
                  (0xfcU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                            << 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
        = __Vtemp_h17c0c1f6__0[0U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[1U] 
        = __Vtemp_h17c0c1f6__0[1U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[2U] 
        = __Vtemp_h17c0c1f6__0[2U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[3U] 
        = __Vtemp_h17c0c1f6__0[3U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[4U] 
        = __Vtemp_h17c0c1f6__0[4U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[5U] 
        = __Vtemp_h17c0c1f6__0[5U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[6U] 
        = __Vtemp_h17c0c1f6__0[6U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[7U] 
        = __Vtemp_h17c0c1f6__0[7U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_source) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___same_cycle_resp_T_8 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
            << 1U) == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__d_cam_sel_match_0 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_source)) 
           & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_s_0_state)));
    __Vtemp_h27305c17__0[0U] = (IData)((((QData)((IData)(
                                                         (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_data 
                                                          >> 0x18U))) 
                                         << 0x1cU) 
                                        | (QData)((IData)(
                                                          ((0x8000000U 
                                                            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_mask) 
                                                               << 0x18U)) 
                                                           | ((0x7f80000U 
                                                               & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_data 
                                                                  << 3U)) 
                                                              | ((0x40000U 
                                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_mask) 
                                                                     << 0x10U)) 
                                                                 | ((0x3fc00U 
                                                                     & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_data 
                                                                        << 2U)) 
                                                                    | ((0x200U 
                                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_mask) 
                                                                           << 8U)) 
                                                                       | ((0x1feU 
                                                                           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_data 
                                                                              << 1U)) 
                                                                          | (1U 
                                                                             & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_mask))))))))))));
    __Vtemp_h27305c17__0[1U] = (IData)(((((QData)((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_data 
                                                           >> 0x18U))) 
                                          << 0x1cU) 
                                         | (QData)((IData)(
                                                           ((0x8000000U 
                                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_mask) 
                                                                << 0x18U)) 
                                                            | ((0x7f80000U 
                                                                & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_data 
                                                                   << 3U)) 
                                                               | ((0x40000U 
                                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_mask) 
                                                                      << 0x10U)) 
                                                                  | ((0x3fc00U 
                                                                      & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_data 
                                                                         << 2U)) 
                                                                     | ((0x200U 
                                                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_mask) 
                                                                            << 8U)) 
                                                                        | ((0x1feU 
                                                                            & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_data 
                                                                               << 1U)) 
                                                                           | (1U 
                                                                              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_mask))))))))))) 
                                        >> 0x20U));
    __Vtemp_h27305c17__0[2U] = 0U;
    __Vtemp_h27305c17__0[3U] = 0U;
    VL_SHIFTL_WWI(99,99,6, __Vtemp_h82d21fd8__0, __Vtemp_h27305c17__0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__state) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide[0U] 
        = (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__shift 
           | __Vtemp_h82d21fd8__0[0U]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide[1U] 
        = __Vtemp_h82d21fd8__0[1U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide[2U] 
        = __Vtemp_h82d21fd8__0[2U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide[3U] 
        = (7U & __Vtemp_h82d21fd8__0[3U]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor_io_in_a_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_valid) 
           & (0U == (0xc0000000U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_address)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_a_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___T_461));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT___GEN_198 
        = ((0x3cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_60)
            : ((0x3bU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_59)
                : ((0x3aU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_58)
                    : ((0x39U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_57)
                        : ((0x38U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_56)
                            : ((0x37U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_55)
                                : ((0x36U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_54)
                                    : ((0x35U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_53)
                                        : ((0x34U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_52)
                                            : ((0x33U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_51)
                                                : (
                                                   (0x32U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_50)
                                                    : 
                                                   ((0x31U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_49)
                                                     : 
                                                    ((0x30U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_48)
                                                      : 
                                                     ((0x2fU 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_47)
                                                       : 
                                                      ((0x2eU 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_46)
                                                        : 
                                                       ((0x2dU 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_45)
                                                         : 
                                                        ((0x2cU 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_44)
                                                          : 
                                                         ((0x2bU 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                           ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_43)
                                                           : (IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT___GEN_180)))))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_beats1_opdata 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_beats1_opdata));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2542 
        = ((~ (IData)(__VdfgTmp_hc81eae13__0)) & (IData)(__VdfgTmp_hc940793c__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__d_first 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__d_first_counter)) 
           & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)));
    vlSelf->__VdfgTmp_ha9d053bc__0 = ((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode 
        = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source))
            ? 2U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__full) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_denied 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__saved_denied;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_data 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__saved_data;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__saved_opcode;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_denied 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_denied;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_data 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_enq_bits_data;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__latch 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__beatsLeft)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_ready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_d_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_ready) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__beatsLeft))
               ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT___readys_readys_T_2))
               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__state_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___d_first_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_ready) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__beatsLeft))
               ? (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT___readys_readys_T_2) 
                     >> 1U)) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__state_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2396 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2485 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2396 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2485 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2394 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2483 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_d_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__full) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_readys_T_2 
        = (0x3fU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__readys_unready) 
                     >> 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__readys_unready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q_io_deq_ready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_1)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_allow_4));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT___wen_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_1)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_0) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_allow_4)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT___valid_1_T_6 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_1;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q_io_deq_ready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_1)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_allow));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT___wen_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_1)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_0) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_allow)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q_io_deq_ready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_1)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_allow_3));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT___wen_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_1)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_0) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_allow_3)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q_io_deq_ready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_1)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_allow_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT___wen_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_1)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__valid_0) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_allow_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT___valid_1_T_6 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__valid_1;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q_io_deq_ready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_1)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_allow_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT___wen_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_1)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_0) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_allow_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT___valid_1_T_6 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_1;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___readys_readys_T_2 
        = (0x3fU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__readys_unready) 
                     >> 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__readys_unready)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q_io_deq_ready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_1)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_allow_4));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT___wen_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_1)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_0) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_allow_4)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT___valid_1_T_6 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_1;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q_io_deq_ready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_1)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_allow));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT___wen_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_1)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_0) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_allow)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_o_ready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_1)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__isLastState));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_ready 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_opcode))
            ? ((~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__last)) 
                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_last) 
                      | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__state) 
                         >> 3U)))) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_o_ready))
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_o_ready));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q_io_deq_ready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_1)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_allow_3));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT___wen_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_1)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_0) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_allow_3)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q_io_deq_ready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_1)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_allow_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT___wen_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_1)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__valid_0) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_allow_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT___valid_1_T_6 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__valid_1;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q_io_deq_ready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_1)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_allow_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT___wen_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_1)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_0) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_allow_2)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT___valid_1_T_6 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_1;
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__full) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__saved_param;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_size 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__saved_size;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source 
            = (0x3fU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__saved_source));
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_param;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_size 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_size;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source 
            = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                        >> 1U));
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___GEN_58 
        = ((5U == (7U & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                         >> 1U))) ? 2U : ((4U == (7U 
                                                  & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                      & vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                     >> 1U)))
                                           ? 1U : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___GEN_58 
        = ((5U == (7U & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                         >> 1U))) ? 2U : ((4U == (7U 
                                                  & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                      & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                     >> 1U)))
                                           ? 1U : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___GEN_58 
        = ((5U == (7U & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                         >> 1U))) ? 2U : ((4U == (7U 
                                                  & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                      & vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                     >> 1U)))
                                           ? 1U : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___GEN_58 
        = ((5U == (7U & ((VysyxSoCFull__ConstPool__CONST_h57168600_0[0U] 
                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                         >> 1U))) ? 2U : ((4U == (7U 
                                                  & ((VysyxSoCFull__ConstPool__CONST_h57168600_0[0U] 
                                                      & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                     >> 1U)))
                                           ? 1U : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & ((VysyxSoCFull__ConstPool__CONST_h57168600_0[0U] 
                                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((VysyxSoCFull__ConstPool__CONST_h57168600_0[0U] 
                                                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___a_opcode_lookup_T_1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__inflight_opcodes) 
                   >> (4U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                             << 2U))));
    VL_SHIFTR_WWI(256,256,8, __Vtemp_hbdce3bef__0, vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U] 
        = __Vtemp_hbdce3bef__0[0U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[1U] 
        = __Vtemp_hbdce3bef__0[1U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[2U] 
        = __Vtemp_hbdce3bef__0[2U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[3U] 
        = __Vtemp_hbdce3bef__0[3U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[4U] 
        = __Vtemp_hbdce3bef__0[4U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[5U] 
        = __Vtemp_hbdce3bef__0[5U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[6U] 
        = __Vtemp_hbdce3bef__0[6U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[7U] 
        = __Vtemp_hbdce3bef__0[7U];
    VL_SHIFTR_WWI(256,256,8, __Vtemp_h25758cf1__0, vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
        = __Vtemp_h25758cf1__0[0U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U] 
        = __Vtemp_h25758cf1__0[1U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U] 
        = __Vtemp_h25758cf1__0[2U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U] 
        = __Vtemp_h25758cf1__0[3U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U] 
        = __Vtemp_h25758cf1__0[4U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U] 
        = __Vtemp_h25758cf1__0[5U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U] 
        = __Vtemp_h25758cf1__0[6U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U] 
        = __Vtemp_h25758cf1__0[7U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT___GEN_159 
        = ((0x15U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_21)
            : ((0x14U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_20)
                : ((0x13U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                    ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_19)
                    : ((0x12U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                        ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_18)
                        : ((0x11U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_17)
                            : ((0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_16)
                                : ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_15)
                                    : ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_14)
                                        : ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_13)
                                            : ((0xcU 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_12)
                                                : (
                                                   (0xbU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_11)
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_10)
                                                     : 
                                                    ((9U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_9)
                                                      : 
                                                     ((8U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_8)
                                                       : 
                                                      ((7U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_7)
                                                        : 
                                                       ((6U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_6)
                                                         : 
                                                        ((5U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_5)
                                                          : 
                                                         ((4U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                           ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_4)
                                                           : 
                                                          ((3U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_3)
                                                            : 
                                                           ((2U 
                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_2)
                                                             : 
                                                            ((1U 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                              ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_1)
                                                              : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_0))))))))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__d_replace 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__d_first_counter)) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__d_cam_sel_match_0)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__d_drop 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__d_first_counter)) 
           & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__d_cam_sel_match_0)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q_io_enq_bits_data 
        = ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__state))
            ? ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_opcode))
                ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide[0U]
                : vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_data)
            : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__state))
                ? 0U : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__state))
                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__maybe_full)
                             ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_address
                            [0U] : vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_address)
                         : vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__header)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT___T_679 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor_io_in_a_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__a_first_counter_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT___a_first_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__a__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor_io_in_a_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_data_MPORT_data 
        = (((1U & ((((IData)(7U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_size)) 
                    >> 2U) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_count)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_hold_r)
                               : ((0x3fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_63)
                                   : ((0x3eU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_62)
                                       : ((0x3dU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                           ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_sel_sel_sources_61)
                                           : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT___GEN_198))))))) 
            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_count))
            ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_data 
                       >> 0x20U)) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater_io_enq_bits_data));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT___beatsLeft_T_4 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__beatsLeft) 
                 - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___d_first_T)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2547 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___d_first_T) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_3)) 
              & (IData)((4U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___d_first_T) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_2)) 
              & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT____VdfgTmp_h3e9bf6c5__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___d_first_T) 
           & ((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)) 
              & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___d_first_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_ready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__last)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_ready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2543 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_3)) 
              & (IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2542)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2543 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_3)) 
              & (IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2542)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2541 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_3)) 
              & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                     | (IData)(__VdfgTmp_hc81eae13__0))) 
                 & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source)) 
                    & (IData)(__VdfgTmp_hc940793c__0)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_2)) 
              & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2)) 
              & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_2)) 
              & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT____VdfgTmp_h3e9bf6c5__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T) 
           & ((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
              & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_h3e9bf6c5__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T) 
           & ((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
              & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT____VdfgTmp_h3e9bf6c5__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T) 
           & ((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_d_bits_opcode)) 
              & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__d_first_counter_1))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___T_2394 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_d_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___T_2483 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_d_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_d_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT___T_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_d_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_d_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_d_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_mask_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_readys_T_2)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__requests));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__first) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__allowed 
            = (0x3fU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_readys_T_2)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__grant 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_mask_T;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__allowed 
            = (0x3fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__state));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__grant 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__state;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q_io_deq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___ioX_first_T_4 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q_io_deq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT___valid_0_T_6 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT___wen_T) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT___wen_T_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_1) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT___wen_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT___wen_T_10 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT___wen_T) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_1));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT___wen_T_13 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT___wen_T) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___ioX_first_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q_io_deq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT___valid_0_T_6 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT___wen_T) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT___wen_T_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_1) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT___wen_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT___wen_T_10 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT___wen_T) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_1));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT___wen_T_13 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT___wen_T) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___ioX_first_T_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q_io_deq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT___valid_0_T_6 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT___wen_T) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT___wen_T_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_1) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT___wen_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT___wen_T_10 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT___wen_T) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_1));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT___wen_T_13 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT___wen_T) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q_io_deq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__valid_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___ioX_first_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q_io_deq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__valid_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT___valid_0_T_6 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT___wen_T) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT___wen_T_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_1) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT___wen_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT___wen_T_10 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT___wen_T) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_1));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT___wen_T_13 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT___wen_T) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q_io_deq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___ioX_first_T_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q_io_deq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT___valid_0_T_6 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT___wen_T) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT___wen_T_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_1) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT___wen_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT___wen_T_10 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT___wen_T) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_1));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT___wen_T_13 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT___wen_T) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___readys_mask_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___readys_readys_T_2)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__requests));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__first) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__allowed 
            = (0x3fU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___readys_readys_T_2)));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__grant 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___readys_mask_T;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__allowed 
            = (0x3fU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__state));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__grant 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__state;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q_io_deq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___ioX_first_T_4 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q_io_deq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__valid_0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT___valid_0_T_6 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT___wen_T) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT___wen_T_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_1) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT___wen_T));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT___wen_T_10 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT___wen_T) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_1));
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT___wen_T_13 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT___wen_T) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___ioX_first_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q_io_deq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT___valid_0_T_6 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT___wen_T) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT___wen_T_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_1) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT___wen_T));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT___wen_T_10 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT___wen_T) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_1));
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT___wen_T_13 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT___wen_T) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___ioX_first_T_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q_io_deq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT___valid_0_T_6 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT___wen_T) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT___wen_T_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_1) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT___wen_T));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT___wen_T_10 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT___wen_T) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_1));
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT___wen_T_13 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT___wen_T) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q_io_deq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__valid_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___ioX_first_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q_io_deq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__valid_0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT___valid_0_T_6 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT___wen_T) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT___wen_T_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_1) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT___wen_T));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT___wen_T_10 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT___wen_T) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_1));
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT___wen_T_13 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT___wen_T) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q_io_deq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___ioX_first_T_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q_io_deq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__valid_0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT___valid_0_T_6 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT___wen_T) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT___wen_T_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_1) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT___wen_T));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT___wen_T_10 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT___wen_T) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_1));
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT___wen_T_13 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT___wen_T) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___GEN_58 
        = ((5U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                         >> 1U))) ? 2U : ((4U == (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                     >> 1U)))
                                           ? 1U : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___GEN_58 
        = ((5U == (7U & ((VysyxSoCFull__ConstPool__CONST_h57168600_0[0U] 
                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U]) 
                         >> 1U))) ? 2U : ((4U == (7U 
                                                  & ((VysyxSoCFull__ConstPool__CONST_h57168600_0[0U] 
                                                      & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U]) 
                                                     >> 1U)))
                                           ? 1U : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & ((VysyxSoCFull__ConstPool__CONST_h57168600_0[0U] 
                                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U]) 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((VysyxSoCFull__ConstPool__CONST_h57168600_0[0U] 
                                                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U]) 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___GEN_58 
        = ((5U == (7U & ((VysyxSoCFull__ConstPool__CONST_h57168600_0[0U] 
                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                         >> 1U))) ? 2U : ((4U == (7U 
                                                  & ((VysyxSoCFull__ConstPool__CONST_h57168600_0[0U] 
                                                      & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                     >> 1U)))
                                           ? 1U : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & ((VysyxSoCFull__ConstPool__CONST_h57168600_0[0U] 
                                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((VysyxSoCFull__ConstPool__CONST_h57168600_0[0U] 
                                                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0U))));
    ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT___GEN_180 
        = ((0x2aU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_42)
            : ((0x29U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_41)
                : ((0x28U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                    ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_40)
                    : ((0x27U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                        ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_39)
                        : ((0x26U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_38)
                            : ((0x25U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_37)
                                : ((0x24U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_36)
                                    : ((0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_35)
                                        : ((0x22U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_34)
                                            : ((0x21U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_33)
                                                : (
                                                   (0x20U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_32)
                                                    : 
                                                   ((0x1fU 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_31)
                                                     : 
                                                    ((0x1eU 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_30)
                                                      : 
                                                     ((0x1dU 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_29)
                                                       : 
                                                      ((0x1cU 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_28)
                                                        : 
                                                       ((0x1bU 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_27)
                                                         : 
                                                        ((0x1aU 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_26)
                                                          : 
                                                         ((0x19U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                           ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_25)
                                                           : 
                                                          ((0x18U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_24)
                                                            : 
                                                           ((0x17U 
                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_23)
                                                             : 
                                                            ((0x16U 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                              ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_22)
                                                              : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT___GEN_159))))))))))))))))))))));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__d_replace) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_denied) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_corrupt));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_denied 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_denied) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_denied));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_enq_bits_data 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode = 1U;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_corrupt;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_denied 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_denied;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_enq_bits_data 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_auto_in_d_bits_data;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_beats1_opdata 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__d_replace) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)));
    __VdfgTmp_h17c71574__0 = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__d_replace)) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode) 
                                 >> 2U));
    __VdfgTmp_h1606c44b__0 = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__d_replace)) 
                                    & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode) 
                                       >> 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__d_drop)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_ready) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__d_drop));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT___T_682 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT___a_first_T) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__a_first_counter_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_last 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode)) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_count) 
                    == (1U & (~ (1U & (((IData)(7U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_size)) 
                                       >> 2U)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___T_1376 
        = (IData)((4U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))));
    VL_SHIFTL_WWI(512,512,9, __Vtemp_h064b736b__0, VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT____VdfgTmp_h3e9bf6c5__0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_1[0U] 
            = (~ __Vtemp_h064b736b__0[0U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_1[1U] 
            = (~ __Vtemp_h064b736b__0[1U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_1[2U] 
            = (~ __Vtemp_h064b736b__0[2U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_1[3U] 
            = (~ __Vtemp_h064b736b__0[3U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_1[4U] 
            = (~ __Vtemp_h064b736b__0[4U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_1[5U] 
            = (~ __Vtemp_h064b736b__0[5U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_1[6U] 
            = (~ __Vtemp_h064b736b__0[6U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_1[7U] 
            = (~ __Vtemp_h064b736b__0[7U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_1[8U] 
            = (~ __Vtemp_h064b736b__0[8U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_1[9U] 
            = (~ __Vtemp_h064b736b__0[9U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_1[0xaU] 
            = (~ __Vtemp_h064b736b__0[0xaU]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_1[0xbU] 
            = (~ __Vtemp_h064b736b__0[0xbU]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_1[0xcU] 
            = (~ __Vtemp_h064b736b__0[0xcU]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_1[0xdU] 
            = (~ __Vtemp_h064b736b__0[0xdU]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_1[0xeU] 
            = (~ __Vtemp_h064b736b__0[0xeU]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_1[0xfU] 
            = (~ __Vtemp_h064b736b__0[0xfU]);
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_1[0U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_1[1U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_1[2U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_1[3U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[3U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_1[4U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[4U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_1[5U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[5U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_1[6U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[6U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_1[7U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[7U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_1[8U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[8U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_1[9U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[9U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_1[0xaU] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xaU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_1[0xbU] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xbU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_1[0xcU] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xcU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_1[0xdU] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xdU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_1[0xeU] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xeU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_1[0xfU] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xfU];
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2407 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_3)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2406)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2)) 
              & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT____VdfgTmp_h3e9bf6c5__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
           & ((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode)) 
              & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__latch 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__beatsLeft)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_ready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__do_deq 
        = (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c_last)) 
            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_ready) 
               & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__beatsLeft))
                   ? (~ (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___readys_T_3) 
                               << 1U))) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__state_0)))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__out_1_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_ready) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__beatsLeft))
               ? (~ (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___readys_T_3)))
               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__state_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___d_first_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid));
    VL_SHIFTL_WWI(512,512,9, __Vtemp_h064b736b__1, VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT____VdfgTmp_h3e9bf6c5__0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_1[0U] 
            = (~ __Vtemp_h064b736b__1[0U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_1[1U] 
            = (~ __Vtemp_h064b736b__1[1U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_1[2U] 
            = (~ __Vtemp_h064b736b__1[2U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_1[3U] 
            = (~ __Vtemp_h064b736b__1[3U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_1[4U] 
            = (~ __Vtemp_h064b736b__1[4U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_1[5U] 
            = (~ __Vtemp_h064b736b__1[5U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_1[6U] 
            = (~ __Vtemp_h064b736b__1[6U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_1[7U] 
            = (~ __Vtemp_h064b736b__1[7U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_1[8U] 
            = (~ __Vtemp_h064b736b__1[8U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_1[9U] 
            = (~ __Vtemp_h064b736b__1[9U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_1[0xaU] 
            = (~ __Vtemp_h064b736b__1[0xaU]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_1[0xbU] 
            = (~ __Vtemp_h064b736b__1[0xbU]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_1[0xcU] 
            = (~ __Vtemp_h064b736b__1[0xcU]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_1[0xdU] 
            = (~ __Vtemp_h064b736b__1[0xdU]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_1[0xeU] 
            = (~ __Vtemp_h064b736b__1[0xeU]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_1[0xfU] 
            = (~ __Vtemp_h064b736b__1[0xfU]);
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_1[0U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_1[1U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_1[2U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_1[3U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[3U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_1[4U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[4U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_1[5U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[5U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_1[6U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[6U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_1[7U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[7U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_1[8U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[8U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_1[9U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[9U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_1[0xaU] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xaU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_1[0xbU] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xbU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_1[0xcU] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xcU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_1[0xdU] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xdU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_1[0xeU] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xeU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_opcodes_T_1[0xfU] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xfU];
    }
    VL_SHIFTL_WWI(512,512,9, __Vtemp_h064b736b__2, VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_h3e9bf6c5__0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_1[0U] 
            = (~ __Vtemp_h064b736b__2[0U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_1[1U] 
            = (~ __Vtemp_h064b736b__2[1U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_1[2U] 
            = (~ __Vtemp_h064b736b__2[2U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_1[3U] 
            = (~ __Vtemp_h064b736b__2[3U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_1[4U] 
            = (~ __Vtemp_h064b736b__2[4U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_1[5U] 
            = (~ __Vtemp_h064b736b__2[5U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_1[6U] 
            = (~ __Vtemp_h064b736b__2[6U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_1[7U] 
            = (~ __Vtemp_h064b736b__2[7U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_1[8U] 
            = (~ __Vtemp_h064b736b__2[8U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_1[9U] 
            = (~ __Vtemp_h064b736b__2[9U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_1[0xaU] 
            = (~ __Vtemp_h064b736b__2[0xaU]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_1[0xbU] 
            = (~ __Vtemp_h064b736b__2[0xbU]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_1[0xcU] 
            = (~ __Vtemp_h064b736b__2[0xcU]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_1[0xdU] 
            = (~ __Vtemp_h064b736b__2[0xdU]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_1[0xeU] 
            = (~ __Vtemp_h064b736b__2[0xeU]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_1[0xfU] 
            = (~ __Vtemp_h064b736b__2[0xfU]);
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_1[0U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_1[1U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_1[2U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_1[3U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[3U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_1[4U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[4U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_1[5U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[5U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_1[6U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[6U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_1[7U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[7U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_1[8U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[8U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_1[9U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[9U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_1[0xaU] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xaU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_1[0xbU] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xbU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_1[0xcU] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xcU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_1[0xdU] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xdU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_1[0xeU] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xeU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_opcodes_T_1[0xfU] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xfU];
    }
    VL_SHIFTL_WWI(256,256,8, __Vtemp_h6dd39924__0, VysyxSoCFull__ConstPool__CONST_h57168600_0, 
                  (0xfcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                            << 1U)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT____VdfgTmp_h3e9bf6c5__0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_opcodes_T_1[0U] 
            = (~ __Vtemp_h6dd39924__0[0U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_opcodes_T_1[1U] 
            = (~ __Vtemp_h6dd39924__0[1U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_opcodes_T_1[2U] 
            = (~ __Vtemp_h6dd39924__0[2U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_opcodes_T_1[3U] 
            = (~ __Vtemp_h6dd39924__0[3U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_opcodes_T_1[4U] 
            = (~ __Vtemp_h6dd39924__0[4U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_opcodes_T_1[5U] 
            = (~ __Vtemp_h6dd39924__0[5U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_opcodes_T_1[6U] 
            = (~ __Vtemp_h6dd39924__0[6U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_opcodes_T_1[7U] 
            = (~ __Vtemp_h6dd39924__0[7U]);
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_opcodes_T_1[0U] 
            = VysyxSoCFull__ConstPool__CONST_h5b979007_0[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_opcodes_T_1[1U] 
            = VysyxSoCFull__ConstPool__CONST_h5b979007_0[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_opcodes_T_1[2U] 
            = VysyxSoCFull__ConstPool__CONST_h5b979007_0[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_opcodes_T_1[3U] 
            = VysyxSoCFull__ConstPool__CONST_h5b979007_0[3U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_opcodes_T_1[4U] 
            = VysyxSoCFull__ConstPool__CONST_h5b979007_0[4U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_opcodes_T_1[5U] 
            = VysyxSoCFull__ConstPool__CONST_h5b979007_0[5U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_opcodes_T_1[6U] 
            = VysyxSoCFull__ConstPool__CONST_h5b979007_0[6U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_opcodes_T_1[7U] 
            = VysyxSoCFull__ConstPool__CONST_h5b979007_0[7U];
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___T_1321 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_2)) 
              & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___T_1233 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
           & ((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode)) 
              & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_1))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__dec_hi_hi_lo 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT___T_3) 
           & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__counter_3)) 
              | (0U == ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))
                         ? (0xfU & (~ (0xfU & (((IData)(0x3fU) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_size)) 
                                               >> 2U))))
                         : 0U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT___T_3) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter_2)) 
              & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT____VdfgTmp_h68723d34__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT___T_3) 
           & ((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode)) 
              & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2394 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2483 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__maybe_full));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_mask_T_3 
        = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_mask_T) 
                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_mask_T) 
                       << 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ_io_deq_ready 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__allowed) 
            >> 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__allowReturn));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_4 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___ioX_first_T_4)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_0_last)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_first_4));
    if ((0x10U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__allowed))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__wen 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT___wen_T_3;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__wen_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT___wen_T_10;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__wen 
            = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_0)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT___wen_T));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__wen_1 
            = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_1)) 
               & (IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT___wen_T_13));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT___valid_1_T_6 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT___wen_T_13) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___ioX_first_T)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_0_last)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_first));
    if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__allowed))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__wen 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT___wen_T_3;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__wen_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT___wen_T_10;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__wen 
            = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_0)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT___wen_T));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__wen_1 
            = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_1)) 
               & (IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT___wen_T_13));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT___valid_1_T_6 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT___wen_T_13) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___ioX_first_T_3)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_0_last)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_first_3));
    if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__allowed))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__wen 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT___wen_T_3;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__wen_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT___wen_T_10;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__wen 
            = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_0)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT___wen_T));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__wen_1 
            = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_1)) 
               & (IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT___wen_T_13));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT___valid_1_T_6 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT___wen_T_13) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___ioX_first_T_1)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_0_last)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_first_1));
    if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__allowed))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__wen 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT___wen_T_3;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__wen_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT___wen_T_10;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__wen 
            = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_0)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT___wen_T));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__wen_1 
            = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_1)) 
               & (IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT___wen_T_13));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT___valid_1_T_6 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT___wen_T_13) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___ioX_first_T_2)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_0_last)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_first_2));
    if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__allowed))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__wen 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT___wen_T_3;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__wen_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT___wen_T_10;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__wen 
            = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_0)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT___wen_T));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__wen_1 
            = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_1)) 
               & (IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT___wen_T_13));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT___valid_1_T_6 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT___wen_T_13) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_1));
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___readys_mask_T_3 
        = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___readys_mask_T) 
                    | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___readys_mask_T) 
                       << 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ_io_deq_ready 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__allowed) 
            >> 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__allowReturn));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___GEN_4 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___ioX_first_T_4)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_0_last)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_first_4));
    if ((0x10U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__allowed))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__wen 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT___wen_T_3;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__wen_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT___wen_T_10;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__wen 
            = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_0)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT___wen_T));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__wen_1 
            = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_1)) 
               & (IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT___wen_T_13));
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT___valid_1_T_6 
        = ((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT___wen_T_13) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___GEN_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___ioX_first_T)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_0_last)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_first));
    if ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__allowed))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__wen 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT___wen_T_3;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__wen_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT___wen_T_10;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__wen 
            = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_0)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT___wen_T));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__wen_1 
            = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_1)) 
               & (IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT___wen_T_13));
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT___valid_1_T_6 
        = ((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT___wen_T_13) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___GEN_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___ioX_first_T_3)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_0_last)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_first_3));
    if ((8U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__allowed))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__wen 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT___wen_T_3;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__wen_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT___wen_T_10;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__wen 
            = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_0)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT___wen_T));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__wen_1 
            = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_1)) 
               & (IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT___wen_T_13));
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT___valid_1_T_6 
        = ((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT___wen_T_13) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___GEN_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___ioX_first_T_1)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_0_last)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_first_1));
    if ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__allowed))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__wen 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT___wen_T_3;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__wen_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT___wen_T_10;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__wen 
            = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_0)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT___wen_T));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__wen_1 
            = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_1)) 
               & (IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT___wen_T_13));
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT___valid_1_T_6 
        = ((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT___wen_T_13) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___GEN_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___ioX_first_T_2)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_0_last)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_first_2));
    if ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__allowed))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__wen 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT___wen_T_3;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__wen_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT___wen_T_10;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__wen 
            = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_0)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT___wen_T));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__wen_1 
            = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_1)) 
               & (IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT___wen_T_13));
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT___valid_1_T_6 
        = ((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT___wen_T_13) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT___GEN_198 
        = ((0x3cU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_60)
            : ((0x3bU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_59)
                : ((0x3aU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                    ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_58)
                    : ((0x39U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                        ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_57)
                        : ((0x38U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_56)
                            : ((0x37U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_55)
                                : ((0x36U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_54)
                                    : ((0x35U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_53)
                                        : ((0x34U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_52)
                                            : ((0x33U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_51)
                                                : (
                                                   (0x32U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_50)
                                                    : 
                                                   ((0x31U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_49)
                                                     : 
                                                    ((0x30U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_48)
                                                      : 
                                                     ((0x2fU 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_47)
                                                       : 
                                                      ((0x2eU 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_46)
                                                        : 
                                                       ((0x2dU 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_45)
                                                         : 
                                                        ((0x2cU 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_44)
                                                          : 
                                                         ((0x2bU 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                                           ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_43)
                                                           : (IData)(ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT___GEN_180)))))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_beats1_opdata 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_beats1_opdata));
    ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2678 
        = ((~ (IData)(__VdfgTmp_h1606c44b__0)) & (IData)(__VdfgTmp_h17c71574__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__d_first 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__d_first_counter)) 
           & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)));
    vlSelf->__VdfgTmp_h12f687c7__0 = ((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
                                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode 
        = ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source))
            ? 2U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__full) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_denied 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__saved_denied;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_data 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__saved_data;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__saved_opcode;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_denied 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_denied;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_data 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_enq_bits_data;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2532 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2621 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_2)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2532 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2621 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2535 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2624 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_2)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_d_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__full) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__latch 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__beatsLeft)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_ready));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_ready) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__beatsLeft))
               ? (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT___readys_readys_T_2) 
                     >> 2U)) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__state_2)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_ready) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__beatsLeft))
               ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT___readys_readys_T_2))
               : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__state_0)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_ready) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__beatsLeft))
               ? (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT___readys_readys_T_2) 
                     >> 1U)) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__state_1)));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT___T_682) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__a_opcodes_set_interm 
            = (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_opcode) 
                     << 1U));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__a_sizes_set_interm 
            = (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_size) 
                     << 1U));
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__a_opcodes_set_interm = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__a_sizes_set_interm = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT___GEN_0 
        = (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_last)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___d_first_T)) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___T_2541 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT___T_3) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__d_first_counter_3)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___T_1376)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__inc_hi_hi_lo 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT___T_3) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__counter_3)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___T_1376)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__maybe_full) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_size 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_size
            [0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_source
            [0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_opcode
            [0U];
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_size 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_size;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_last 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_last_counter)) 
           | (0U == ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_opcode))
                      ? (0xfU & (~ (0xfU & (((IData)(0x3fU) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_size)) 
                                            >> 2U))))
                      : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_grant 
        = ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_opcode)) 
           | (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_opcode)));
    VL_SHIFTL_WWI(512,512,9, __Vtemp_h92fe3747__0, VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT____VdfgTmp_h3e9bf6c5__0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[0U] 
            = (~ __Vtemp_h92fe3747__0[0U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[1U] 
            = (~ __Vtemp_h92fe3747__0[1U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[2U] 
            = (~ __Vtemp_h92fe3747__0[2U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[3U] 
            = (~ __Vtemp_h92fe3747__0[3U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[4U] 
            = (~ __Vtemp_h92fe3747__0[4U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[5U] 
            = (~ __Vtemp_h92fe3747__0[5U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[6U] 
            = (~ __Vtemp_h92fe3747__0[6U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[7U] 
            = (~ __Vtemp_h92fe3747__0[7U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[8U] 
            = (~ __Vtemp_h92fe3747__0[8U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[9U] 
            = (~ __Vtemp_h92fe3747__0[9U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[0xaU] 
            = (~ __Vtemp_h92fe3747__0[0xaU]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[0xbU] 
            = (~ __Vtemp_h92fe3747__0[0xbU]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[0xcU] 
            = (~ __Vtemp_h92fe3747__0[0xcU]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[0xdU] 
            = (~ __Vtemp_h92fe3747__0[0xdU]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[0xeU] 
            = (~ __Vtemp_h92fe3747__0[0xeU]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[0xfU] 
            = (~ __Vtemp_h92fe3747__0[0xfU]);
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[0U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[1U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[2U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[3U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[3U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[4U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[4U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[5U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[5U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[6U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[6U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[7U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[7U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[8U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[8U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[9U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[9U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[0xaU] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xaU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[0xbU] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xbU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[0xcU] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xcU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[0xdU] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xdU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[0xeU] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xeU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[0xfU] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xfU];
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__do_deq 
        = (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a_last)) 
            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__out_1_ready) 
               & (((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__counter)) 
                   | (0U == ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__beats1_opdata)
                              ? (0xfU & (~ (0xfU & 
                                            (((IData)(0x3fU) 
                                              << vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_size
                                              [0U]) 
                                             >> 2U))))
                              : 0U))) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__idle)))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__out_1_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__da_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___beatsLeft_T_4 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__beatsLeft) 
                   - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___d_first_T)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2407 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___d_first_T) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_3)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2406)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___d_first_T) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_2)) 
              & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT____VdfgTmp_h68723d34__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___d_first_T) 
           & ((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_opcode)) 
              & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_1))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___inflight_sizes_T_5 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___T_1321)
             ? (~ ((IData)(0xfU) << (4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                           << 2U))))
             : 0xfU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__inflight_sizes_1));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___inflight_opcodes_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___T_1233)
            ? (0xfU & (~ ((IData)(0xfU) << (4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                                  << 2U)))))
            : 0xfU);
    VL_SHIFTL_WWI(256,256,8, __Vtemp_hb5d5870d__0, VysyxSoCFull__ConstPool__CONST_h57168600_0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                   << 2U));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT____VdfgTmp_h68723d34__0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_opcodes_T_1[0U] 
            = (~ __Vtemp_hb5d5870d__0[0U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_opcodes_T_1[1U] 
            = (~ __Vtemp_hb5d5870d__0[1U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_opcodes_T_1[2U] 
            = (~ __Vtemp_hb5d5870d__0[2U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_opcodes_T_1[3U] 
            = (~ __Vtemp_hb5d5870d__0[3U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_opcodes_T_1[4U] 
            = (~ __Vtemp_hb5d5870d__0[4U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_opcodes_T_1[5U] 
            = (~ __Vtemp_hb5d5870d__0[5U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_opcodes_T_1[6U] 
            = (~ __Vtemp_hb5d5870d__0[6U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_opcodes_T_1[7U] 
            = (~ __Vtemp_hb5d5870d__0[7U]);
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_opcodes_T_1[0U] 
            = VysyxSoCFull__ConstPool__CONST_h5b979007_0[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_opcodes_T_1[1U] 
            = VysyxSoCFull__ConstPool__CONST_h5b979007_0[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_opcodes_T_1[2U] 
            = VysyxSoCFull__ConstPool__CONST_h5b979007_0[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_opcodes_T_1[3U] 
            = VysyxSoCFull__ConstPool__CONST_h5b979007_0[3U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_opcodes_T_1[4U] 
            = VysyxSoCFull__ConstPool__CONST_h5b979007_0[4U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_opcodes_T_1[5U] 
            = VysyxSoCFull__ConstPool__CONST_h5b979007_0[5U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_opcodes_T_1[6U] 
            = VysyxSoCFull__ConstPool__CONST_h5b979007_0[6U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_opcodes_T_1[7U] 
            = VysyxSoCFull__ConstPool__CONST_h5b979007_0[7U];
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2541 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_3)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___T_1376)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT____VdfgTmp_hbf6a8095__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_2)) 
              & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT____VdfgTmp_h68723d34__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
           & ((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode)) 
              & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_1)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_mask_T_6 
        = (0x3fU & ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_mask_T_3) 
                    | ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_mask_T_3) 
                       << 2U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_8 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__first)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_0)
             : (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___send_T)))
            ? (0U != ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__grant) 
                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_0_last) 
                          << 5U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__elts_0_last) 
                                     << 4U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__elts_0_last) 
                                                << 3U) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__elts_0_last) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__elts_0_last) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__elts_0_last))))))))
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__first));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ_io_deq_ready) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__wen 
            = (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT___wen_T_3));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__wen_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT___wen_T_10;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__wen 
            = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_0)) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__wen_1 
            = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT___wen_T_13));
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___readys_mask_T_6 
        = (0x3fU & ((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___readys_mask_T_3) 
                    | ((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___readys_mask_T_3) 
                       << 2U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___GEN_8 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__first)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_0)
             : (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___send_T)))
            ? (0U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__grant) 
                      & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__elts_0_last) 
                          << 5U) | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__elts_0_last) 
                                     << 4U) | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__elts_0_last) 
                                                << 3U) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__elts_0_last) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__elts_0_last) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__elts_0_last))))))))
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__first));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ_io_deq_ready) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__wen 
            = (1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT___wen_T_3));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__wen_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT___wen_T_10;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__wen 
            = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_0)) 
                     & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1))));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__wen_1 
            = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT___wen_T_13));
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_data_MPORT_data 
        = (((1U & ((((IData)(7U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_size)) 
                    >> 2U) & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_count)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_hold_r)
                               : ((0x3fU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_63)
                                   : ((0x3eU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_62)
                                       : ((0x3dU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source))
                                           ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_sel_sel_sources_61)
                                           : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT___GEN_198))))))) 
            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_count))
            ? (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_deq_bits_data 
                       >> 0x20U)) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater_io_enq_bits_data));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2679 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_3)) 
              & (IData)(ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2678)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2679 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_3)) 
              & (IData)(ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2678)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2682 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_3)) 
              & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                     | (IData)(__VdfgTmp_h1606c44b__0))) 
                 & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source)) 
                    & (IData)(__VdfgTmp_h17c71574__0)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT____VdfgTmp_h32db990d__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_2)) 
              & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_2)) 
              & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT____VdfgTmp_h32db990d__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_2)) 
              & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT____VdfgTmp_h6db1549f__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
           & ((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
              & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_h6db1549f__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
           & ((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode)) 
              & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__d_first_counter_1))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT____VdfgTmp_h6db1549f__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T) 
           & ((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_d_bits_opcode)) 
              & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__d_first_counter_1))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2535 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_d_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2624 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_d_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_2)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_d_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT___T_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__out_d_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_d_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_d_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT___beatsLeft_T_4 
        = (0x1fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__beatsLeft) 
                    - (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2683 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_3)) 
              & (IData)((4U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT____VdfgTmp_h32db990d__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_2)) 
              & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT____VdfgTmp_h6db1549f__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___d_first_T) 
           & ((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)) 
              & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___d_first_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_ready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__last)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_ready)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__bundleOut_0_bready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_beats1_opdata)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_ready));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___d_first_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___T_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4xbar__DOT___T_14)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_ready) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_beats1_opdata)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq_io_deq_ready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__beatsDO_opdata_1)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_ready));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_ready) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__beatsDO_opdata_1)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__locked));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___GEN_1 
        = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__state))
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_last)
                ? 0U : 2U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___io_q_bits_beats_T_8 
        = (0x1fU & ((IData)(1U) + (((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_opcode))
                                     ? ((0x1eU & (((IData)(1U) 
                                                   << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_size)) 
                                                  >> 2U)) 
                                        | (2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_size)))
                                     : 0U) + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_grant))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__isLastState 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__state) 
           == ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_opcode))
                ? 2U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_grant)
                         ? 1U : 0U)));
    VL_SHIFTL_WWI(512,512,9, __Vtemp_h92fe3747__1, VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT____VdfgTmp_h68723d34__0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[0U] 
            = (~ __Vtemp_h92fe3747__1[0U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[1U] 
            = (~ __Vtemp_h92fe3747__1[1U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[2U] 
            = (~ __Vtemp_h92fe3747__1[2U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[3U] 
            = (~ __Vtemp_h92fe3747__1[3U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[4U] 
            = (~ __Vtemp_h92fe3747__1[4U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[5U] 
            = (~ __Vtemp_h92fe3747__1[5U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[6U] 
            = (~ __Vtemp_h92fe3747__1[6U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[7U] 
            = (~ __Vtemp_h92fe3747__1[7U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[8U] 
            = (~ __Vtemp_h92fe3747__1[8U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[9U] 
            = (~ __Vtemp_h92fe3747__1[9U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[0xaU] 
            = (~ __Vtemp_h92fe3747__1[0xaU]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[0xbU] 
            = (~ __Vtemp_h92fe3747__1[0xbU]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[0xcU] 
            = (~ __Vtemp_h92fe3747__1[0xcU]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[0xdU] 
            = (~ __Vtemp_h92fe3747__1[0xdU]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[0xeU] 
            = (~ __Vtemp_h92fe3747__1[0xeU]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[0xfU] 
            = (~ __Vtemp_h92fe3747__1[0xfU]);
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[0U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[1U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[2U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[3U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[3U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[4U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[4U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[5U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[5U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[6U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[6U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[7U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[7U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[8U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[8U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[9U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[9U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[0xaU] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xaU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[0xbU] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xbU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[0xcU] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xcU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[0xdU] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xdU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[0xeU] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xeU];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[0xfU] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xfU];
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___inflight_opcodes_T_2 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___inflight_opcodes_T_1) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__inflight_opcodes));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___inflight_sizes_T_2 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___inflight_opcodes_T_1) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__inflight_sizes));
    VL_SHIFTL_WWI(256,256,8, __Vtemp_hb5d5870d__1, VysyxSoCFull__ConstPool__CONST_h57168600_0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                   << 2U));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT____VdfgTmp_h68723d34__0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_opcodes_T_1[0U] 
            = (~ __Vtemp_hb5d5870d__1[0U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_opcodes_T_1[1U] 
            = (~ __Vtemp_hb5d5870d__1[1U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_opcodes_T_1[2U] 
            = (~ __Vtemp_hb5d5870d__1[2U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_opcodes_T_1[3U] 
            = (~ __Vtemp_hb5d5870d__1[3U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_opcodes_T_1[4U] 
            = (~ __Vtemp_hb5d5870d__1[4U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_opcodes_T_1[5U] 
            = (~ __Vtemp_hb5d5870d__1[5U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_opcodes_T_1[6U] 
            = (~ __Vtemp_hb5d5870d__1[6U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_opcodes_T_1[7U] 
            = (~ __Vtemp_hb5d5870d__1[7U]);
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_opcodes_T_1[0U] 
            = VysyxSoCFull__ConstPool__CONST_h5b979007_0[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_opcodes_T_1[1U] 
            = VysyxSoCFull__ConstPool__CONST_h5b979007_0[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_opcodes_T_1[2U] 
            = VysyxSoCFull__ConstPool__CONST_h5b979007_0[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_opcodes_T_1[3U] 
            = VysyxSoCFull__ConstPool__CONST_h5b979007_0[3U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_opcodes_T_1[4U] 
            = VysyxSoCFull__ConstPool__CONST_h5b979007_0[4U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_opcodes_T_1[5U] 
            = VysyxSoCFull__ConstPool__CONST_h5b979007_0[5U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_opcodes_T_1[6U] 
            = VysyxSoCFull__ConstPool__CONST_h5b979007_0[6U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_opcodes_T_1[7U] 
            = VysyxSoCFull__ConstPool__CONST_h5b979007_0[7U];
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT___valid_0_T_6 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___T) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT___wen_T_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_1) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT___wen_T_10 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___T) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_1));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT___wen_T_13 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___T) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___io_a_tlSource_valid_T_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___T) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_last 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode)) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_count) 
                    == (1U & (~ (1U & (((IData)(7U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_size)) 
                                       >> 2U)))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___T_1517 
        = (IData)((4U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___T_1462 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_2)) 
              & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___T_1374 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
           & ((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode)) 
              & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_1))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__dec_hi_hi_lo 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT___T_3) 
           & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__counter_3)) 
              | (0U == ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))
                         ? (0x3fU & (~ (0x3fU & (((IData)(0xffU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_size)) 
                                                 >> 2U))))
                         : 0U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT____VdfgTmp_h45b941fa__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT___T_3) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_2)) 
              & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT____VdfgTmp_h6c2403bb__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT___T_3) 
           & ((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode)) 
              & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_1))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2535 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2624 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_2)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q_io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_valid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2407 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_3)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___T_2406)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_2)) 
              & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT____VdfgTmp_h3e9bf6c5__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___d_first_T) 
           & ((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)) 
              & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__d_first_counter_1))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__latch 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__beatsLeft)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_ready));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__do_deq 
        = (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c_last)) 
            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_ready) 
               & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__beatsLeft))
                   ? (~ (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT___readys_T_3) 
                               << 1U))) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__state_0)))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__out_1_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_ready) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__beatsLeft))
               ? (~ (1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT___readys_T_3)))
               : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__state_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___d_first_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__do_deq 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__empty)) 
                 & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_echo_real_last_io_deq_bits_MPORT_data)) 
                    | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__bundleOut_0_bready))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____VdfgTmp_h7032f295__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__bundleOut_0_bready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bvalid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___d_first_T) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT____VdfgTmp_h4a0938cf__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT____VdfgTmp_h3e9bf6c5__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___d_first_T) 
           & ((6U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_beats1_opdata)
                       ? 1U : 0U)) & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0 
        = (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_beats1_opdata)) 
            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rlast)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___d_first_T));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___GEN_260 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___T_2)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rlast)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__r_first));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility__DOT__do_deq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility__DOT__empty)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___T_2) 
              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rlast))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__do_deq 
        = (0x7fffU & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__empty)) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___T_2) 
                         & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid)) 
                             >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rlast)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__do_deq 
        = (0x3fffU & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__empty)) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___T_2) 
                         & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid)) 
                             >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rlast)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__do_deq 
        = (0x1fffU & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__empty)) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___T_2) 
                         & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid)) 
                             >> 3U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rlast)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__do_deq 
        = (0xfffU & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__empty)) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___T_2) 
                        & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid)) 
                            >> 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rlast)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__do_deq 
        = (0x7ffU & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__empty)) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___T_2) 
                        & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid)) 
                            >> 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rlast)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__do_deq 
        = (0x3ffU & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__empty)) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___T_2) 
                        & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid)) 
                            >> 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rlast)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__do_deq 
        = (0x1ffU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___T_2) 
                      & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid)) 
                          >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rlast))) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_8__DOT__do_deq 
        = (0xffU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___T_2) 
                     & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid)) 
                         >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rlast))) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_8__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_9__DOT__do_deq 
        = (0x7fU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___T_2) 
                     & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid)) 
                         >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rlast))) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_9__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_10__DOT__do_deq 
        = (0x3fU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___T_2) 
                     & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid)) 
                         >> 0xaU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rlast))) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_10__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_11__DOT__do_deq 
        = (0x1fU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___T_2) 
                     & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid)) 
                         >> 0xbU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rlast))) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_11__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_12__DOT__do_deq 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___T_2) 
                    & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid)) 
                        >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rlast))) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_12__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_13__DOT__do_deq 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___T_2) 
                  & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid)) 
                      >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rlast))) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_13__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_14__DOT__do_deq 
        = (3U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___T_2) 
                  & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid)) 
                      >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rlast))) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_14__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_15__DOT__do_deq 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___T_2) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rlast)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_15__DOT__maybe_full)) 
           & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid)) 
              >> 0xfU));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__do_deq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq_io_deq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__value_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT____VdfgTmp_hdfecc2fe__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT____VdfgTmp_h6db1549f__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T) 
           & ((6U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__beatsDO_opdata_1)
                       ? 1U : 0U)) & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__d_first_counter_1))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0 
        = (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__beatsDO_opdata_1)) 
            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___d_first_T));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_260 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0_io_deq_ready 
            = (1U & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id)));
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_260 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__r_first;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0_io_deq_ready = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1_io_deq_ready 
        = (0x7fffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                       >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2_io_deq_ready 
        = (0x3fffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                       >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3_io_deq_ready 
        = (0x1fffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                       >> 3U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4_io_deq_ready 
        = (0xfffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                      >> 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5_io_deq_ready 
        = (0x7ffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                      >> 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6_io_deq_ready 
        = (0x3ffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                      >> 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7_io_deq_ready 
        = (0x1ffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                      >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8_io_deq_ready 
        = (0xffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                     >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9_io_deq_ready 
        = (0x7fU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                     >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10_io_deq_ready 
        = (0x3fU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                     >> 0xaU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11_io_deq_ready 
        = (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                     >> 0xbU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12_io_deq_ready 
        = (0xfU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                    >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13_io_deq_ready 
        = (7U & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                  >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14_io_deq_ready 
        = (3U & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
                  >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15_io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1) 
           & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id)) 
              >> 0xfU));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q_io_enq_bits_last 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_last) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__isLastState));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_ready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_1)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__isLastState));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_opcode_MPORT_en 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__maybe_full)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T)
            : ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_ready)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q_io_deq_ready) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__wen 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT___wen_T_3;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__wen_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT___wen_T_10;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__wen 
            = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_0)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___T));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__wen_1 
            = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_1)) 
               & (IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT___wen_T_13));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT___valid_1_T_6 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT___wen_T_13) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD_io_a_tlSource_valid 
        = ((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_opcode)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___io_a_tlSource_valid_T_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT___GEN_0 
        = (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_last)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___d_first_T)) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__full));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2682 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT___T_3) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__d_first_counter_3)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___T_1517)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__inc_hi_hi_lo 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT___T_3) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__counter_3)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___T_1517)));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__maybe_full) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_size 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_size
            [0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_source
            [0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_opcode
            [0U];
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_size 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_size;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_last 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_last_counter)) 
           | (0U == ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_opcode))
                      ? (0x3fU & (~ (0x3fU & (((IData)(0xffU) 
                                               << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_size)) 
                                              >> 2U))))
                      : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_grant 
        = ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_opcode)) 
           | (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_opcode)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___inflight_sizes_T_5 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___T_1462)
             ? (~ ((IData)(0xffU) << (8U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                            << 3U))))
             : 0xffU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__inflight_sizes_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___inflight_opcodes_T_2 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___T_1374)
             ? (~ ((IData)(0xfU) << (4U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                           << 2U))))
             : 0xfU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__inflight_opcodes));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___inflight_sizes_T_2 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___T_1374)
             ? (~ ((IData)(0xffU) << (8U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                            << 3U))))
             : 0xffU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__inflight_sizes));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2682 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_3)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___T_1517)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT____VdfgTmp_h45b941fa__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_2)) 
              & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT____VdfgTmp_h6c2403bb__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T) 
           & ((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode)) 
              & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__d_first_counter_1))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT___wen_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_1)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q_io_enq_valid));
    VL_SHIFTL_WWI(512,512,9, __Vtemp_hcd3e0595__0, VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT____VdfgTmp_h3e9bf6c5__0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[0U] 
            = (~ __Vtemp_hcd3e0595__0[0U]);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[1U] 
            = (~ __Vtemp_hcd3e0595__0[1U]);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[2U] 
            = (~ __Vtemp_hcd3e0595__0[2U]);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[3U] 
            = (~ __Vtemp_hcd3e0595__0[3U]);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[4U] 
            = (~ __Vtemp_hcd3e0595__0[4U]);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[5U] 
            = (~ __Vtemp_hcd3e0595__0[5U]);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[6U] 
            = (~ __Vtemp_hcd3e0595__0[6U]);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[7U] 
            = (~ __Vtemp_hcd3e0595__0[7U]);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[8U] 
            = (~ __Vtemp_hcd3e0595__0[8U]);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[9U] 
            = (~ __Vtemp_hcd3e0595__0[9U]);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[0xaU] 
            = (~ __Vtemp_hcd3e0595__0[0xaU]);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[0xbU] 
            = (~ __Vtemp_hcd3e0595__0[0xbU]);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[0xcU] 
            = (~ __Vtemp_hcd3e0595__0[0xcU]);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[0xdU] 
            = (~ __Vtemp_hcd3e0595__0[0xdU]);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[0xeU] 
            = (~ __Vtemp_hcd3e0595__0[0xeU]);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[0xfU] 
            = (~ __Vtemp_hcd3e0595__0[0xfU]);
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[0U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[1U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[2U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[3U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[3U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[4U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[4U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[5U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[5U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[6U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[6U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[7U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[7U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[8U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[8U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[9U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[9U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[0xaU] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xaU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[0xbU] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xbU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[0xcU] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xcU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[0xdU] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xdU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[0xeU] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xeU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_opcodes_T_1[0xfU] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xfU];
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__do_deq 
        = (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a_last)) 
            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__out_1_ready) 
               & (((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__counter)) 
                   | (0U == ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__beats1_opdata)
                              ? (0xfU & (~ (0xfU & 
                                            (((IData)(0x3fU) 
                                              << vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_size
                                              [0U]) 
                                             >> 2U))))
                              : 0U))) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__idle)))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT___T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__out_1_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__da_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT___beatsLeft_T_4 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__beatsLeft) 
                   - (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___d_first_T)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___T_2407 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___d_first_T) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter_3)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___T_2406)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___d_first_T) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter_2)) 
              & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT____VdfgTmp_h68723d34__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___d_first_T) 
           & ((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_opcode)) 
              & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter_1))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__do_deq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__empty)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____VdfgTmp_h7032f295__0) 
              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__do_deq 
        = (0x7fffU & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__empty)) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____VdfgTmp_h7032f295__0) 
                         & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid)) 
                            >> 1U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__do_deq 
        = (0x3fffU & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__empty)) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____VdfgTmp_h7032f295__0) 
                         & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid)) 
                            >> 2U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__do_deq 
        = (0x1fffU & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__empty)) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____VdfgTmp_h7032f295__0) 
                         & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid)) 
                            >> 3U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_20__DOT__do_deq 
        = (0xfffU & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_20__DOT__empty)) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____VdfgTmp_h7032f295__0) 
                        & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid)) 
                           >> 4U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_21__DOT__do_deq 
        = (0x7ffU & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_21__DOT__empty)) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____VdfgTmp_h7032f295__0) 
                        & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid)) 
                           >> 5U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_22__DOT__do_deq 
        = (0x3ffU & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_22__DOT__empty)) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____VdfgTmp_h7032f295__0) 
                        & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid)) 
                           >> 6U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_23__DOT__do_deq 
        = (0x1ffU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____VdfgTmp_h7032f295__0) 
                      & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid)) 
                         >> 7U)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_23__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_24__DOT__do_deq 
        = (0xffU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____VdfgTmp_h7032f295__0) 
                     & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid)) 
                        >> 8U)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_24__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_25__DOT__do_deq 
        = (0x7fU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____VdfgTmp_h7032f295__0) 
                     & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid)) 
                        >> 9U)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_25__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_26__DOT__do_deq 
        = (0x3fU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____VdfgTmp_h7032f295__0) 
                     & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid)) 
                        >> 0xaU)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_26__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_27__DOT__do_deq 
        = (0x1fU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____VdfgTmp_h7032f295__0) 
                     & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid)) 
                        >> 0xbU)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_27__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_28__DOT__do_deq 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____VdfgTmp_h7032f295__0) 
                    & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid)) 
                       >> 0xcU)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_28__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_29__DOT__do_deq 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____VdfgTmp_h7032f295__0) 
                  & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid)) 
                     >> 0xdU)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_29__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_30__DOT__do_deq 
        = (3U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____VdfgTmp_h7032f295__0) 
                  & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid)) 
                     >> 0xeU)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_30__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_31__DOT__do_deq 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT____VdfgTmp_h7032f295__0) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_31__DOT__maybe_full)) 
           & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid)) 
              >> 0xfU));
    __Vtemp_hd2b6c582__2[0U] = 1U;
    __Vtemp_hd2b6c582__2[1U] = 0U;
    __Vtemp_hd2b6c582__2[2U] = 0U;
    __Vtemp_hd2b6c582__2[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hc4ce6e48__0, __Vtemp_hd2b6c582__2, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___inflight_T_5[0U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_hc4ce6e48__0[0U]) : 0xffffffffU) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[0U]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___inflight_T_5[1U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_hc4ce6e48__0[1U]) : 0xffffffffU) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[1U]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___inflight_T_5[2U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_hc4ce6e48__0[2U]) : 0xffffffffU) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[2U]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___inflight_T_5[3U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_hc4ce6e48__0[3U]) : 0xffffffffU) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[3U]);
    VL_SHIFTL_WWI(512,512,9, __Vtemp_h53631281__0, VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___inflight_sizes_T_5[0U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h53631281__0[0U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0U]) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes_1[0U]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___inflight_sizes_T_5[1U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h53631281__0[1U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[1U]) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes_1[1U]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___inflight_sizes_T_5[2U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h53631281__0[2U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[2U]) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes_1[2U]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___inflight_sizes_T_5[3U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h53631281__0[3U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[3U]) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes_1[3U]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___inflight_sizes_T_5[4U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h53631281__0[4U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[4U]) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes_1[4U]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___inflight_sizes_T_5[5U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h53631281__0[5U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[5U]) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes_1[5U]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___inflight_sizes_T_5[6U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h53631281__0[6U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[6U]) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes_1[6U]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___inflight_sizes_T_5[7U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h53631281__0[7U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[7U]) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes_1[7U]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___inflight_sizes_T_5[8U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h53631281__0[8U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[8U]) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes_1[8U]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___inflight_sizes_T_5[9U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h53631281__0[9U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[9U]) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes_1[9U]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___inflight_sizes_T_5[0xaU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h53631281__0[0xaU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xaU]) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes_1[0xaU]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___inflight_sizes_T_5[0xbU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h53631281__0[0xbU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xbU]) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes_1[0xbU]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___inflight_sizes_T_5[0xcU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h53631281__0[0xcU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xcU]) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes_1[0xcU]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___inflight_sizes_T_5[0xdU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h53631281__0[0xdU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xdU]) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes_1[0xdU]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___inflight_sizes_T_5[0xeU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h53631281__0[0xeU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xeU]) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes_1[0xeU]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___inflight_sizes_T_5[0xfU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h53631281__0[0xfU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xfU]) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight_sizes_1[0xfU]);
    VL_SHIFTL_WWI(512,512,9, __Vtemp_h53631281__1, VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT____VdfgTmp_h3e9bf6c5__0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T_1[0U] 
            = (~ __Vtemp_h53631281__1[0U]);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T_1[1U] 
            = (~ __Vtemp_h53631281__1[1U]);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T_1[2U] 
            = (~ __Vtemp_h53631281__1[2U]);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T_1[3U] 
            = (~ __Vtemp_h53631281__1[3U]);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T_1[4U] 
            = (~ __Vtemp_h53631281__1[4U]);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T_1[5U] 
            = (~ __Vtemp_h53631281__1[5U]);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T_1[6U] 
            = (~ __Vtemp_h53631281__1[6U]);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T_1[7U] 
            = (~ __Vtemp_h53631281__1[7U]);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T_1[8U] 
            = (~ __Vtemp_h53631281__1[8U]);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T_1[9U] 
            = (~ __Vtemp_h53631281__1[9U]);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T_1[0xaU] 
            = (~ __Vtemp_h53631281__1[0xaU]);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T_1[0xbU] 
            = (~ __Vtemp_h53631281__1[0xbU]);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T_1[0xcU] 
            = (~ __Vtemp_h53631281__1[0xcU]);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T_1[0xdU] 
            = (~ __Vtemp_h53631281__1[0xdU]);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T_1[0xeU] 
            = (~ __Vtemp_h53631281__1[0xeU]);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T_1[0xfU] 
            = (~ __Vtemp_h53631281__1[0xfU]);
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T_1[0U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T_1[1U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T_1[2U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T_1[3U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[3U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T_1[4U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[4U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T_1[5U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[5U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T_1[6U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[6U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T_1[7U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[7U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T_1[8U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[8U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T_1[9U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[9U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T_1[0xaU] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xaU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T_1[0xbU] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xbU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T_1[0xcU] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xcU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T_1[0xdU] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xdU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T_1[0xeU] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xeU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___inflight_opcodes_T_1[0xfU] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xfU];
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__do_deq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__empty)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__do_deq) 
              & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__do_deq 
        = (0x7fffU & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__empty)) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__do_deq) 
                         & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                            >> 1U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__do_deq 
        = (0x3fffU & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__empty)) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__do_deq) 
                         & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                            >> 2U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__do_deq 
        = (0x1fffU & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__empty)) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__do_deq) 
                         & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                            >> 3U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__do_deq 
        = (0xfffU & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__empty)) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__do_deq) 
                        & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                           >> 4U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__do_deq 
        = (0x7ffU & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__empty)) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__do_deq) 
                        & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                           >> 5U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__do_deq 
        = (0x3ffU & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__empty)) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__do_deq) 
                        & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                           >> 6U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_23__DOT__do_deq 
        = (0x1ffU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__do_deq) 
                      & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                         >> 7U)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_23__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_24__DOT__do_deq 
        = (0xffU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__do_deq) 
                     & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                        >> 8U)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_24__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_25__DOT__do_deq 
        = (0x7fU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__do_deq) 
                     & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                        >> 9U)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_25__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_26__DOT__do_deq 
        = (0x3fU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__do_deq) 
                     & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                        >> 0xaU)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_26__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_27__DOT__do_deq 
        = (0x1fU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__do_deq) 
                     & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                        >> 0xbU)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_27__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_28__DOT__do_deq 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__do_deq) 
                    & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                       >> 0xcU)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_28__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_29__DOT__do_deq 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__do_deq) 
                  & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                     >> 0xdU)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_29__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_30__DOT__do_deq 
        = (3U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__do_deq) 
                  & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                     >> 0xeU)) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_30__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_31__DOT__do_deq 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__do_deq) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_31__DOT__maybe_full)) 
           & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
              >> 0xfU));
    __Vtemp_hd2b6c582__3[0U] = 1U;
    __Vtemp_hd2b6c582__3[1U] = 0U;
    __Vtemp_hd2b6c582__3[2U] = 0U;
    __Vtemp_hd2b6c582__3[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h7fe23cae__0, __Vtemp_hd2b6c582__3, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_T_5[0U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h7fe23cae__0[0U]) : 0xffffffffU) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_1[0U]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_T_5[1U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h7fe23cae__0[1U]) : 0xffffffffU) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_1[1U]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_T_5[2U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h7fe23cae__0[2U]) : 0xffffffffU) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_1[2U]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_T_5[3U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h7fe23cae__0[3U]) : 0xffffffffU) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_1[3U]);
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp_h98f13421__0, VysyxSoCFull__ConstPool__CONST_h7bd5304c_0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[0U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h98f13421__0[0U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0U]) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0U]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[1U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h98f13421__0[1U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[1U]) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[1U]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[2U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h98f13421__0[2U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[2U]) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[2U]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[3U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h98f13421__0[3U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[3U]) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[3U]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[4U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h98f13421__0[4U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[4U]) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[4U]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[5U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h98f13421__0[5U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[5U]) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[5U]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[6U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h98f13421__0[6U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[6U]) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[6U]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[7U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h98f13421__0[7U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[7U]) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[7U]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[8U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h98f13421__0[8U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[8U]) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[8U]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[9U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h98f13421__0[9U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[9U]) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[9U]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[0xaU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h98f13421__0[0xaU]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0xaU]) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0xaU]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[0xbU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h98f13421__0[0xbU]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0xbU]) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0xbU]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[0xcU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h98f13421__0[0xcU]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0xcU]) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0xcU]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[0xdU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h98f13421__0[0xdU]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0xdU]) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0xdU]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[0xeU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h98f13421__0[0xeU]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0xeU]) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0xeU]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[0xfU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h98f13421__0[0xfU]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0xfU]) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0xfU]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[0x10U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h98f13421__0[0x10U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x10U]) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0x10U]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[0x11U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h98f13421__0[0x11U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x11U]) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0x11U]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[0x12U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h98f13421__0[0x12U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x12U]) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0x12U]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[0x13U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h98f13421__0[0x13U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x13U]) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0x13U]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[0x14U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h98f13421__0[0x14U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x14U]) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0x14U]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[0x15U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h98f13421__0[0x15U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x15U]) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0x15U]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[0x16U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h98f13421__0[0x16U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x16U]) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0x16U]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[0x17U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h98f13421__0[0x17U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x17U]) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0x17U]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[0x18U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h98f13421__0[0x18U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x18U]) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0x18U]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[0x19U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h98f13421__0[0x19U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x19U]) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0x19U]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[0x1aU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h98f13421__0[0x1aU]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x1aU]) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0x1aU]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[0x1bU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h98f13421__0[0x1bU]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x1bU]) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0x1bU]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[0x1cU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h98f13421__0[0x1cU]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x1cU]) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0x1cU]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[0x1dU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h98f13421__0[0x1dU]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x1dU]) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0x1dU]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[0x1eU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h98f13421__0[0x1eU]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x1eU]) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0x1eU]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___inflight_sizes_T_5[0x1fU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h98f13421__0[0x1fU]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x1fU]) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_sizes_1[0x1fU]);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0__DOT__do_deq 
        = ((~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0__DOT__maybe_full)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0__DOT__ptr_match))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0_io_deq_ready));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_next 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count) 
                    + (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____VdfgTmp_h9d6996c9__0))) 
                   - ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0_io_deq_ready) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__DOT__do_deq 
        = ((~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__DOT__maybe_full)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__DOT__ptr_match))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1_io_deq_ready));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_next_1 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_1) 
                    + (0x7fffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                   >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____VdfgTmp_h9d6996c9__0)))) 
                   - ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1_io_deq_ready) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__DOT__do_deq 
        = ((~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__DOT__maybe_full)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__DOT__ptr_match))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2_io_deq_ready));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_next_2 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_2) 
                    + (0x3fffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                   >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____VdfgTmp_h9d6996c9__0)))) 
                   - ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2_io_deq_ready) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__DOT__do_deq 
        = ((~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__DOT__maybe_full)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__DOT__ptr_match))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3_io_deq_ready));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_next_3 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_3) 
                    + (0x1fffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                   >> 3U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____VdfgTmp_h9d6996c9__0)))) 
                   - ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3_io_deq_ready) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__DOT__do_deq 
        = ((~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__DOT__maybe_full)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__DOT__ptr_match))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4_io_deq_ready));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_next_4 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_4) 
                    + (0xfffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                  >> 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____VdfgTmp_h9d6996c9__0)))) 
                   - ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4_io_deq_ready) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__DOT__do_deq 
        = ((~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__DOT__maybe_full)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__DOT__ptr_match))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5_io_deq_ready));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_next_5 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_5) 
                    + (0x7ffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                  >> 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____VdfgTmp_h9d6996c9__0)))) 
                   - ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5_io_deq_ready) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__DOT__do_deq 
        = ((~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__DOT__maybe_full)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__DOT__ptr_match))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6_io_deq_ready));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_next_6 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_6) 
                    + (0x3ffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                  >> 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____VdfgTmp_h9d6996c9__0)))) 
                   - ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6_io_deq_ready) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__DOT__do_deq 
        = ((~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__DOT__maybe_full)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__DOT__ptr_match))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7_io_deq_ready));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_next_7 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_7) 
                    + (0x1ffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                  >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____VdfgTmp_h9d6996c9__0)))) 
                   - ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7_io_deq_ready) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__DOT__do_deq 
        = ((~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__DOT__maybe_full)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__DOT__ptr_match))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8_io_deq_ready));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_next_8 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_8) 
                    + (0xffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                 >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____VdfgTmp_h9d6996c9__0)))) 
                   - ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8_io_deq_ready) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__DOT__do_deq 
        = ((~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__DOT__maybe_full)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__DOT__ptr_match))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9_io_deq_ready));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_next_9 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_9) 
                    + (0x7fU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                 >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____VdfgTmp_h9d6996c9__0)))) 
                   - ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9_io_deq_ready) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__DOT__do_deq 
        = ((~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__DOT__maybe_full)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__DOT__ptr_match))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10_io_deq_ready));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_next_10 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_10) 
                    + (0x3fU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                 >> 0xaU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____VdfgTmp_h9d6996c9__0)))) 
                   - ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10_io_deq_ready) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__DOT__do_deq 
        = ((~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__DOT__maybe_full)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__DOT__ptr_match))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11_io_deq_ready));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_next_11 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_11) 
                    + (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                 >> 0xbU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____VdfgTmp_h9d6996c9__0)))) 
                   - ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11_io_deq_ready) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__DOT__do_deq 
        = ((~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__DOT__maybe_full)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__DOT__ptr_match))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12_io_deq_ready));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_next_12 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_12) 
                    + (0xfU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____VdfgTmp_h9d6996c9__0)))) 
                   - ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12_io_deq_ready) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__DOT__do_deq 
        = ((~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__DOT__maybe_full)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__DOT__ptr_match))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13_io_deq_ready));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_next_13 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_13) 
                    + (7U & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                              >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____VdfgTmp_h9d6996c9__0)))) 
                   - ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13_io_deq_ready) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__DOT__do_deq 
        = ((~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__DOT__maybe_full)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__DOT__ptr_match))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14_io_deq_ready));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_next_14 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_14) 
                    + (3U & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                              >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____VdfgTmp_h9d6996c9__0)))) 
                   - ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14_io_deq_ready) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__DOT__do_deq 
        = ((~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__DOT__maybe_full)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__DOT__ptr_match))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15_io_deq_ready));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_next_15 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_15) 
                    + (1U & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                              >> 0xfU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____VdfgTmp_h9d6996c9__0)))) 
                   - ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15_io_deq_ready) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT___do_deq_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___GEN_1 
        = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__state))
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_last)
                ? 0U : 2U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__state));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___io_q_bits_beats_T_8 
        = (0x1fU & ((IData)(1U) + (((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_opcode))
                                     ? ((0x1eU & (((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_size))) 
                                                  >> 2U)) 
                                        | (2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_size)))
                                     : 0U) + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_grant))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__isLastState 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__state) 
           == ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_opcode))
                ? 2U : ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_grant)
                         ? 1U : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT___valid_0_T_6 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT___wen_T) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT___wen_T_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_1) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT___wen_T));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT___wen_T_10 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT___wen_T) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_1));
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT___wen_T_13 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT___wen_T) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___io_a_tlSource_valid_T_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT___wen_T) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__state)));
    VL_SHIFTL_WWI(512,512,9, __Vtemp_hcd3e0595__1, VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT____VdfgTmp_h68723d34__0) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[0U] 
            = (~ __Vtemp_hcd3e0595__1[0U]);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[1U] 
            = (~ __Vtemp_hcd3e0595__1[1U]);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[2U] 
            = (~ __Vtemp_hcd3e0595__1[2U]);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[3U] 
            = (~ __Vtemp_hcd3e0595__1[3U]);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[4U] 
            = (~ __Vtemp_hcd3e0595__1[4U]);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[5U] 
            = (~ __Vtemp_hcd3e0595__1[5U]);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[6U] 
            = (~ __Vtemp_hcd3e0595__1[6U]);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[7U] 
            = (~ __Vtemp_hcd3e0595__1[7U]);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[8U] 
            = (~ __Vtemp_hcd3e0595__1[8U]);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[9U] 
            = (~ __Vtemp_hcd3e0595__1[9U]);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[0xaU] 
            = (~ __Vtemp_hcd3e0595__1[0xaU]);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[0xbU] 
            = (~ __Vtemp_hcd3e0595__1[0xbU]);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[0xcU] 
            = (~ __Vtemp_hcd3e0595__1[0xcU]);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[0xdU] 
            = (~ __Vtemp_hcd3e0595__1[0xdU]);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[0xeU] 
            = (~ __Vtemp_hcd3e0595__1[0xeU]);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[0xfU] 
            = (~ __Vtemp_hcd3e0595__1[0xfU]);
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[0U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[1U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[1U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[2U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[2U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[3U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[3U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[4U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[4U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[5U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[5U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[6U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[6U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[7U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[7U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[8U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[8U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[9U] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[9U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[0xaU] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xaU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[0xbU] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xbU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[0xcU] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xcU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[0xdU] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xdU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[0xeU] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xeU];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_opcodes_T_1[0xfU] 
            = VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xfU];
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending 
        = (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_next_15)) 
            << 0xfU) | (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_next_14)) 
                         << 0xeU) | (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_next_13)) 
                                      << 0xdU) | ((
                                                   (0U 
                                                    != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_next_12)) 
                                                   << 0xcU) 
                                                  | (((0U 
                                                       != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_next_11)) 
                                                      << 0xbU) 
                                                     | (((0U 
                                                          != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_next_10)) 
                                                         << 0xaU) 
                                                        | (((0U 
                                                             != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_next_9)) 
                                                            << 9U) 
                                                           | (((0U 
                                                                != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_next_8)) 
                                                               << 8U) 
                                                              | (((0U 
                                                                   != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_next_7)) 
                                                                  << 7U) 
                                                                 | (((0U 
                                                                      != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_next_6)) 
                                                                     << 6U) 
                                                                    | (((0U 
                                                                         != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_next_5)) 
                                                                        << 5U) 
                                                                       | (((0U 
                                                                            != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_next_4)) 
                                                                           << 4U) 
                                                                          | (((0U 
                                                                               != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_next_3)) 
                                                                              << 3U) 
                                                                             | (((0U 
                                                                                != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_next_2)) 
                                                                                << 2U) 
                                                                                | (((0U 
                                                                                != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_next_1)) 
                                                                                << 1U) 
                                                                                | (0U 
                                                                                != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_next)))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__do_deq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__maybe_full) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT___do_deq_T));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q_io_enq_bits_last 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_last) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__isLastState));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_ready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_1)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__isLastState));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_opcode_MPORT_en 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__maybe_full)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T)
            : ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_ready)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___d_first_T)));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q_io_deq_ready) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__wen 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT___wen_T_3;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__wen_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT___wen_T_10;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__wen 
            = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_0)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT___wen_T));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__wen_1 
            = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_1)) 
               & (IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT___wen_T_13));
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT___valid_1_T_6 
        = ((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT___wen_T_13) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__valid_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD_io_a_tlSource_valid 
        = ((6U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_opcode)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___io_a_tlSource_valid_T_2));
    ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___winner_T_2 
        = (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending) 
                      | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending) 
                         << 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT___do_deq_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q_io_enq_valid));
    ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___winner_T_5 
        = (0xffffU & ((IData)(ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___winner_T_2) 
                      | ((IData)(ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___winner_T_2) 
                         << 2U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__do_deq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__maybe_full) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT___do_deq_T));
    ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___winner_T_8 
        = (0xffffU & ((IData)(ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___winner_T_5) 
                      | ((IData)(ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___winner_T_5) 
                         << 4U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__winner 
        = ((~ (0x1fffeU & (((IData)(ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___winner_T_8) 
                            << 1U) | ((IData)(ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___winner_T_8) 
                                      << 9U)))) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___deq_id_T 
        = (0xffffU & ((1U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__winner 
                             >> 0x10U)) | vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__winner));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___deq_id_T_1 
        = (0xffU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___deq_id_T) 
                     >> 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___deq_id_T)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___deq_id_T_2 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___deq_id_T_1) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___deq_id_T_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___GEN_1 
        = ((1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__locked)) 
                  | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___pending_dec_T_1) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast))))
            ? ((0x10U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__winner 
                         >> 0xcU)) | (((IData)((0U 
                                                != 
                                                (0xffU 
                                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___deq_id_T) 
                                                    >> 8U)))) 
                                       << 3U) | (((IData)(
                                                          (0U 
                                                           != 
                                                           (0xfU 
                                                            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___deq_id_T_1) 
                                                               >> 4U)))) 
                                                  << 2U) 
                                                 | (((IData)(
                                                             (0U 
                                                              != 
                                                              (3U 
                                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___deq_id_T_2) 
                                                                  >> 2U)))) 
                                                     << 1U) 
                                                    | (IData)(
                                                              (0U 
                                                               != 
                                                               (0xaU 
                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT___deq_id_T_2))))))))
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__deq_id));
}
