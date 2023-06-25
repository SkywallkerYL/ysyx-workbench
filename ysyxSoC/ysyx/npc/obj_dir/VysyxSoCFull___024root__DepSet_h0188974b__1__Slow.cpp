// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull___024root.h"

extern const VlWide<16>/*511:0*/ VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0;
extern const VlWide<8>/*255:0*/ VysyxSoCFull__ConstPool__CONST_h57168600_0;

VL_ATTR_COLD void VysyxSoCFull___024root___stl_sequent__TOP__1(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___stl_sequent__TOP__1\n"); );
    // Init
    CData/*2:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_42;
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_42 = 0;
    IData/*31:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_11;
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_11 = 0;
    IData/*19:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_7;
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_7 = 0;
    IData/*19:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_18;
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_18 = 0;
    IData/*19:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_29;
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_29 = 0;
    IData/*19:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_40;
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_40 = 0;
    IData/*19:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_51;
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_51 = 0;
    SData/*11:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_unready_T_1;
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_unready_T_1 = 0;
    SData/*11:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_unready_T_3;
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_unready_T_3 = 0;
    CData/*5:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_mask_T_3;
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_mask_T_3 = 0;
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
    CData/*7:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___fillLow_T_1;
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___fillLow_T_1 = 0;
    CData/*7:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_3;
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_3 = 0;
    CData/*4:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___GEN_22;
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___GEN_22 = 0;
    CData/*4:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___GEN_43;
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___GEN_43 = 0;
    CData/*1:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___readys_T;
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___readys_T = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2542;
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2542 = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT___GEN_159;
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT___GEN_159 = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT___GEN_180;
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT___GEN_180 = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h950ae05f__0;
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h950ae05f__0 = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgTmp_h44b1a724__0;
    ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgTmp_h44b1a724__0 = 0;
    CData/*5:0*/ ysyxSoCFull__DOT__fpga__DOT__xbar__DOT___readys_unready_T_1;
    ysyxSoCFull__DOT__fpga__DOT__xbar__DOT___readys_unready_T_1 = 0;
    CData/*2:0*/ ysyxSoCFull__DOT__fpga__DOT__xbar__DOT___readys_mask_T;
    ysyxSoCFull__DOT__fpga__DOT__xbar__DOT___readys_mask_T = 0;
    CData/*2:0*/ ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN_30;
    ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor__DOT___GEN_30 = 0;
    IData/*31:0*/ ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_11;
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_11 = 0;
    IData/*19:0*/ ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_7;
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_7 = 0;
    IData/*19:0*/ ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_18;
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_18 = 0;
    IData/*19:0*/ ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_29;
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_29 = 0;
    IData/*19:0*/ ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_40;
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_40 = 0;
    IData/*19:0*/ ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_51;
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_51 = 0;
    SData/*11:0*/ ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___readys_unready_T_1;
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___readys_unready_T_1 = 0;
    SData/*11:0*/ ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___readys_unready_T_3;
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___readys_unready_T_3 = 0;
    CData/*5:0*/ ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___readys_mask_T_3;
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___readys_mask_T_3 = 0;
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
    CData/*4:0*/ ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___GEN_22;
    ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___GEN_22 = 0;
    CData/*2:0*/ ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___GEN_30;
    ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___GEN_30 = 0;
    CData/*7:0*/ ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___fillLow_T_1;
    ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___fillLow_T_1 = 0;
    CData/*7:0*/ ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___wipeHigh_T_3;
    ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___wipeHigh_T_3 = 0;
    CData/*7:0*/ ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___align1_T_2;
    ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___align1_T_2 = 0;
    CData/*7:0*/ ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___fillLow_T_8;
    ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___fillLow_T_8 = 0;
    CData/*7:0*/ ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___wipeHigh_T_14;
    ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___wipeHigh_T_14 = 0;
    CData/*7:0*/ ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___align1_T_12;
    ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___align1_T_12 = 0;
    CData/*1:0*/ ysyxSoCFull__DOT__fpga__DOT__err__DOT___readys_T;
    ysyxSoCFull__DOT__fpga__DOT__err__DOT___readys_T = 0;
    CData/*1:0*/ ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___readys_T;
    ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___readys_T = 0;
    CData/*0:0*/ __VdfgTmp_hc81eae13__0;
    __VdfgTmp_hc81eae13__0 = 0;
    CData/*0:0*/ __VdfgTmp_hc940793c__0;
    __VdfgTmp_hc940793c__0 = 0;
    CData/*0:0*/ __VdfgTmp_hcaf7d2db__0;
    __VdfgTmp_hcaf7d2db__0 = 0;
    CData/*0:0*/ __VdfgTmp_hcc218c8f__0;
    __VdfgTmp_hcc218c8f__0 = 0;
    CData/*0:0*/ __VdfgTmp_h5d042c25__0;
    __VdfgTmp_h5d042c25__0 = 0;
    CData/*0:0*/ __VdfgTmp_h63eab968__0;
    __VdfgTmp_h63eab968__0 = 0;
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
    VlWide<16>/*511:0*/ __Vtemp_hcd010452__0;
    VlWide<4>/*127:0*/ __Vtemp_h5779a382__0;
    VlWide<4>/*127:0*/ __Vtemp_h60d9ac46__0;
    VlWide<4>/*127:0*/ __Vtemp_hf7042704__0;
    VlWide<4>/*127:0*/ __Vtemp_hd756ed55__0;
    VlWide<16>/*511:0*/ __Vtemp_hef43ff45__0;
    VlWide<16>/*511:0*/ __Vtemp_h6194d599__0;
    VlWide<16>/*511:0*/ __Vtemp_ha60e5549__0;
    VlWide<16>/*511:0*/ __Vtemp_h5c3b1f1f__0;
    VlWide<16>/*511:0*/ __Vtemp_h7b4ad598__0;
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
    VlWide<8>/*255:0*/ __Vtemp_hbdce3bef__0;
    VlWide<8>/*255:0*/ __Vtemp_h25758cf1__0;
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free_sel 
        = ((~ (0x1feU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___free_sel_T_5) 
                          << 1U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___free_sel_T_5) 
                                    << 5U)))) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free_sel 
        = ((~ (0x1feU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___free_sel_T_5) 
                          << 1U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___free_sel_T_5) 
                                    << 5U)))) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free_sel 
        = ((~ (0x1feU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___free_sel_T_5) 
                          << 1U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___free_sel_T_5) 
                                    << 5U)))) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free_sel 
        = ((~ (0x1feU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___free_sel_T_5) 
                          << 1U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___free_sel_T_5) 
                                    << 5U)))) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free_sel 
        = ((~ (0x1feU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___free_sel_T_5) 
                          << 1U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___free_sel_T_5) 
                                    << 5U)))) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free_sel 
        = ((~ (0x1feU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___free_sel_T_5) 
                          << 1U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___free_sel_T_5) 
                                    << 5U)))) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free_sel 
        = ((~ (0x1feU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___free_sel_T_5) 
                          << 1U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___free_sel_T_5) 
                                    << 5U)))) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_11 
        = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__state))
            ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_opcode))
                ? 0U : 3U) : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__state))
                               ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_last)
                                   ? 0U : 3U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__xmit 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_last) 
           | (3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__enable_0 
        = (1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__count) 
                    & (~ (1U & (((IData)(7U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size)) 
                                >> 2U))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___out_bits_addr_T_12 
        = ((~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__addr_1) 
           | (7U & (~ ((IData)(7U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_size)))));
    ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___align1_T_12 
        = (0xffU & ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__addr_1 
                     >> 3U) | (0x3ffffffeU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__addr_1 
                                              >> 2U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___out_bits_addr_T_5 
        = ((~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__addr) 
           | (7U & (~ ((IData)(7U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_io_deq_bits_size)))));
    ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___align1_T_2 
        = (0xffU & ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__addr 
                     >> 3U) | (0x3ffffffeU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__addr 
                                              >> 2U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__stall 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass) 
            != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar_io_bypass)) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__stall_counter)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__source_ok 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT____VdfgTmp_h728c09b0__0)) 
           | ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT____VdfgTmp_h728c09b0__0)) 
              | ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT____VdfgTmp_h728c09b0__0)) 
                 | ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT____VdfgTmp_h728c09b0__0)) 
                    | ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT____VdfgTmp_h728c09b0__0)) 
                       | ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT____VdfgTmp_h728c09b0__0)) 
                          | ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT____VdfgTmp_h728c09b0__0)) 
                             | (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT____VdfgTmp_h728c09b0__0)))))))));
    ysyxSoCFull__DOT__fpga__DOT__err__DOT___readys_T 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__da_valid) 
            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__dc_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT___GEN_9 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_id)
                  ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_3__DOT__full))
                  : (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT__full))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__bundleOut_0_wvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__in_wdeq__DOT__maybe_full) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___bundleOut_0_wvalid_T_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_in_arvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq__DOT__maybe_full) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT___GEN_1));
    ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___fillLow_T_8 
        = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__len_1) 
                    | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__len_1) 
                       >> 1U)));
    ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___wipeHigh_T_14 
        = (0xffU & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__len_1)) 
                    | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__len_1)) 
                       << 1U)));
    ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___fillLow_T_1 
        = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__len) 
                    | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__len) 
                       >> 1U)));
    ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___wipeHigh_T_3 
        = (0xffU & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__len)) 
                    | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__len)) 
                       << 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w 
        = (0xffU & ((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_in_paddr)
                     ? ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_in_paddr)
                         ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart_in_pwdata 
                            >> 0x18U) : (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart_in_pwdata 
                                         >> 0x10U))
                     : ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_in_paddr)
                         ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart_in_pwdata 
                            >> 8U) : vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart_in_pwdata)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h4267b00d__0 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
               >> 7U)) & (0U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_in_paddr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r 
        = (0xffU & ((4U & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_in_paddr)
                     ? ((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_in_paddr)
                         ? ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_in_paddr)
                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch)
                             : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr))
                         : ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_in_paddr)
                             ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                 << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                            << 6U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                               << 5U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))))))
                             : 0U)) : ((2U & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_in_paddr)
                                        ? ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_in_paddr)
                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr)
                                            : (0xc0U 
                                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir)))
                                        : ((1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_in_paddr)
                                            ? ((0x80U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl) 
                                                   >> 8U)
                                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier))
                                            : ((0x80U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr))
                                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl)
                                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom])))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart_in_psel 
        = ((0U == (0x20001000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_in_paddr)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bundleOut_0_psel));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0 
        = ((0U == (0x20001000U & (0x1000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_in_paddr))) 
           | (0U == (0x20000000U & (0x20000000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_in_paddr))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__free_sel 
        = ((~ (0x1feU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___free_sel_T_5) 
                          << 1U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___free_sel_T_5) 
                                    << 5U)))) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__free));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free_sel 
        = ((~ (0x1feU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___free_sel_T_5) 
                          << 1U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___free_sel_T_5) 
                                    << 5U)))) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free_sel 
        = ((~ (0x1feU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___free_sel_T_5) 
                          << 1U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___free_sel_T_5) 
                                    << 5U)))) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free_sel 
        = ((~ (0x1feU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___free_sel_T_5) 
                          << 1U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___free_sel_T_5) 
                                    << 5U)))) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free_sel 
        = ((~ (0x1feU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___free_sel_T_5) 
                          << 1U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___free_sel_T_5) 
                                    << 5U)))) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free_sel 
        = ((~ (0x1feU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___free_sel_T_5) 
                          << 1U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___free_sel_T_5) 
                                    << 5U)))) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free_sel 
        = ((~ (0x1feU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___free_sel_T_5) 
                          << 1U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___free_sel_T_5) 
                                    << 5U)))) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free_sel 
        = ((~ (0x1feU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___free_sel_T_5) 
                          << 1U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___free_sel_T_5) 
                                    << 5U)))) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_9 
        = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__state))
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_last)
                ? 0U : 2U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__xmit 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_last) 
           | (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__stall 
        = ((~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_grant)) 
               | (0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__free))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__d_first));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__earlyWinner_1 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__da_valid;
    if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__beatsLeft))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_valid 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__da_valid;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_denied 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__earlyWinner_1;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_valid 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__state_1) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__da_valid));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_denied 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__state_1;
    }
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__stall 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass) 
            != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_io_bypass)) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__stall_counter)));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___fillLow_T_1 
        = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__len) 
                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__len) 
                       >> 1U)));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_3 
        = (0xffU & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__len)) 
                    | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__len)) 
                       << 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT___GEN_9 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_id)
                  ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__full))
                  : (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__full))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT___GEN_1 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_id)
                  ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__full))
                  : (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__full))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__readdevice 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSWB_readflag) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h81482532__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__writedevicedata 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ClintWen) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h81482532__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT____VdfgTmp_h9f22bf10__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__clintintr) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__WBU__io_LSWB_ecallflag));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__irujump 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__clintintr) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__inter));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbmtvec 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__WBU__io_LSWB_csrflag)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__WBU__DOT__csrwrite
            : 0ULL);
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT___q_last_T 
        = (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__xmit)) 
            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__extract_io_i_ready)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT___q_last_T 
        = (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__xmit)) 
            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__extract_io_i_ready)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_legal)
              ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_6 
                 >> 0xcU) : 1U) << 0xcU) | (0xfffU 
                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_6));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__q_legal)
              ? (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___GEN_6 
                 >> 0xcU) : 1U) << 0xcU) | (0xfffU 
                                            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___GEN_6));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_incremented 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_incremented_T_1)
            : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_incremented 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_incremented_T_1)
            : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_incremented 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_incremented_T_1)
            : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_incremented 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_incremented_T_1)
            : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_incremented 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_incremented_T_1)
            : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_incremented 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_incremented_T_1)
            : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_incremented 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_incremented_T_1)
            : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_incremented 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_incremented_T_1)
            : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_incremented 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_incremented_T_1)
            : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_incremented 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_incremented_T_1)
            : 0U);
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_7 
        = (0xfffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_5 
                       | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_5 
                          >> 8U)));
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_7 
        = (0xfffffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_5 
                       | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_5 
                          >> 8U)));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_a_T_8 
        = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_a_T_5) 
                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_a_T_5) 
                       << 4U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_d_T_8 
        = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_d_T_5) 
                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_d_T_5) 
                       << 4U)));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_11 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_8 
           | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_8 
              << 8U));
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_11 
        = (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_8 
           | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_8 
              << 8U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_a_T_8 
        = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_a_T_5) 
                    | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_a_T_5) 
                       << 4U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_d_T_8 
        = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_d_T_5) 
                    | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_d_T_5) 
                       << 4U)));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_18 
        = (0xfffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_16 
                       | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_16 
                          >> 8U)));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_29 
        = (0xfffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_27 
                       | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_27 
                          >> 8U)));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_40 
        = (0xfffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_38 
                       | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_38 
                          >> 8U)));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_51 
        = (0xfffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_49 
                       | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_49 
                          >> 8U)));
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_18 
        = (0xfffffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_16 
                       | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_16 
                          >> 8U)));
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_29 
        = (0xfffffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_27 
                       | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_27 
                          >> 8U)));
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_40 
        = (0xfffffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_38 
                       | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_38 
                          >> 8U)));
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_51 
        = (0xfffffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_49 
                       | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_49 
                          >> 8U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_W0_en 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_flow)) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__full)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq_io_enq_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq_io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__empty)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq_io_enq_valid)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_out_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_W0_en 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_flow)) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__full)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq_io_enq_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq_io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__empty)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq_io_enq_valid)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_out_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_W0_en 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_flow)) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__full)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq_io_enq_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq_io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__empty)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq_io_enq_valid)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_out_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_W0_en 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_flow)) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__full)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq_io_enq_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq_io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__empty)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq_io_enq_valid)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_out_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_W0_en 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_flow)) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__full)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq_io_enq_valid)));
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
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_W0_en 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_flow)) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__full)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq_io_enq_valid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq_io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__empty)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq_io_enq_valid)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_out_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_W0_en 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_flow)) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__full)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq_io_enq_valid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq_io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__empty)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq_io_enq_valid)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_out_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_W0_en 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_flow)) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__full)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq_io_enq_valid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq_io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__empty)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq_io_enq_valid)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_out_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_W0_en 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_flow)) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__full)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq_io_enq_valid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq_io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__empty)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq_io_enq_valid)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_out_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_W0_en 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_flow)) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__full)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq_io_enq_valid)));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___send_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__state) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__requests));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__readys_filter 
        = ((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__readys_mask)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__requests)) 
            << 6U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__requests));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___send_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__state) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__requests));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__readys_filter 
        = ((((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__readys_mask)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__requests)) 
            << 6U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__requests));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___io_key_T 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free_sel) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free_sel)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___io_key_T 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free_sel) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free_sel)));
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
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT___a_opcode_lookup_T_1 
        = (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__inflight_opcodes 
           >> ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_source) 
               << 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_valid) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__stall)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__xmit)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_valid) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__stall)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__xmit)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT____VdfgTmp_h95ec52b7__0 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_first_counter_1)) 
           & (IData)((6U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__ram_opcode_MPORT_data)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___ridx_incremented_T_1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_ridx_bin) 
                   + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2548)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__e_clr 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2554) 
           & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_e_bits_sink)));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeat_last_1 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__ram_opcode_MPORT_data)) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeat_count_1) 
                    == (1U & (~ (1U & (((IData)(7U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__ram_size_MPORT_data)) 
                                       >> 2U)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_ready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__last_1)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_ready)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeat_last_1 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_opcode_MPORT_data)) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeat_count_1) 
                    == (1U & (~ (1U & (((IData)(7U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_size_MPORT_data)) 
                                       >> 2U)))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT____VdfgTmp_h95ec52b7__0 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__c_first_counter_1)) 
           & (IData)((6U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_opcode_MPORT_data)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___ridx_incremented_T_1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_ridx_bin) 
                   + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___ridx_T_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__e_clr 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2690) 
           & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_e_bits_sink)));
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
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__do_deq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__empty)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__do_deq) 
              & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__do_deq 
        = (0x7fffU & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__empty)) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__do_deq) 
                         & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                             >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__do_deq 
        = (0x3fffU & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__empty)) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__do_deq) 
                         & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                             >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__do_deq 
        = (0x1fffU & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__empty)) 
                      & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__do_deq) 
                         & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                             >> 3U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__do_deq 
        = (0xfffU & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__empty)) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__do_deq) 
                        & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                            >> 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__do_deq 
        = (0x7ffU & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__empty)) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__do_deq) 
                        & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                            >> 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__do_deq 
        = (0x3ffU & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__empty)) 
                     & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__do_deq) 
                        & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                            >> 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_7__DOT__do_deq 
        = (0x1ffU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__do_deq) 
                      & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                          >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data))) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_7__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_8__DOT__do_deq 
        = (0xffU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__do_deq) 
                     & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                         >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data))) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_8__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_9__DOT__do_deq 
        = (0x7fU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__do_deq) 
                     & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                         >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data))) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_9__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_10__DOT__do_deq 
        = (0x3fU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__do_deq) 
                     & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                         >> 0xaU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data))) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_10__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_11__DOT__do_deq 
        = (0x1fU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__do_deq) 
                     & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                         >> 0xbU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data))) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_11__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_12__DOT__do_deq 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__do_deq) 
                    & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                        >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data))) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_12__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_13__DOT__do_deq 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__do_deq) 
                  & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                      >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data))) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_13__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_14__DOT__do_deq 
        = (3U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__do_deq) 
                  & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                      >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data))) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_14__DOT__maybe_full)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_15__DOT__do_deq 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__do_deq) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_15__DOT__maybe_full)) 
           & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
              >> 0xfU));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____VdfgTmp_h9d6996c9__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__do_deq) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last_io_deq_bits_MPORT_data));
    VL_SHIFTR_WWI(512,512,9, __Vtemp_hcd010452__0, vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
        = __Vtemp_hcd010452__0[0U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[1U] 
        = __Vtemp_hcd010452__0[1U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[2U] 
        = __Vtemp_hcd010452__0[2U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[3U] 
        = __Vtemp_hcd010452__0[3U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[4U] 
        = __Vtemp_hcd010452__0[4U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[5U] 
        = __Vtemp_hcd010452__0[5U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[6U] 
        = __Vtemp_hcd010452__0[6U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[7U] 
        = __Vtemp_hcd010452__0[7U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[8U] 
        = __Vtemp_hcd010452__0[8U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[9U] 
        = __Vtemp_hcd010452__0[9U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU] 
        = __Vtemp_hcd010452__0[0xaU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU] 
        = __Vtemp_hcd010452__0[0xbU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU] 
        = __Vtemp_hcd010452__0[0xcU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU] 
        = __Vtemp_hcd010452__0[0xdU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU] 
        = __Vtemp_hcd010452__0[0xeU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU] 
        = __Vtemp_hcd010452__0[0xfU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_valid) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__stall)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__xmit)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor_io_in_d_bits_denied 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__beatsLeft))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__earlyWinner_1)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__state_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT___T_690 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor_io_in_d_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__d_first_counter_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___a_opcode_lookup_T_1 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__inflight_opcodes 
           >> ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_source) 
               << 2U));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__do_deq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__empty)) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__empty)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT___bundleIn_0_awready_T_1)));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT___T_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__empty)) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__empty)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT___bundleIn_0_awready_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_valid) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__stall)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__xmit)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__bundleOut_0_a_bits_data_masked_enable_0 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__enable_0) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__bundleOut_0_a_bits_data_rdata_written_once))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__bundleOut_0_a_bits_mask_masked_enable_0 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__enable_0) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__bundleOut_0_a_bits_mask_rdata_written_once))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2260 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2349 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__d_first_counter_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___readys_T_3 
        = (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___readys_T) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___readys_T) 
                    << 1U)));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem_R0_en 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__empty)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__in_arready));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT____VdfgTmp_h4a0938cf__0 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_2)) 
           & (6U == ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_beats1_opdata)
                      ? 1U : 0U)));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_beats1_opdata) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_corrupt 
            = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rresp)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___GEN_261));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount 
            = ((((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid))
                  ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_15__DOT__ram_extra_id
                 [0U] : ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid))
                          ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_14__DOT__ram_extra_id
                         [0U] : ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid))
                                  ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_13__DOT__ram_extra_id
                                 [0U] : ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid))
                                          ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_12__DOT__ram_extra_id
                                         [0U] : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_43))))) 
                << 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_denied 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___GEN_261;
        if ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid))) {
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size 
                = (7U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_15__DOT__ram_tl_state_size
                   [0U]);
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_15__DOT__ram_tl_state_source
                [0U];
        } else if ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid))) {
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size 
                = (7U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_14__DOT__ram_tl_state_size
                   [0U]);
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_14__DOT__ram_tl_state_source
                [0U];
        } else if ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid))) {
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size 
                = (7U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_13__DOT__ram_tl_state_size
                   [0U]);
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_13__DOT__ram_tl_state_source
                [0U];
        } else if ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid))) {
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size 
                = (7U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_12__DOT__ram_tl_state_size
                   [0U]);
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_12__DOT__ram_tl_state_source
                [0U];
        } else if ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid))) {
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size 
                = (7U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_11__DOT__ram_tl_state_size
                   [0U]);
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_11__DOT__ram_tl_state_source
                [0U];
        } else if ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid))) {
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size 
                = (7U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_10__DOT__ram_tl_state_size
                   [0U]);
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_10__DOT__ram_tl_state_source
                [0U];
        } else {
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size 
                = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_73));
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_57;
        }
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid 
            = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4xbar__DOT___T_14)));
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_corrupt = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount 
            = ((((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid))
                  ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_31__DOT__ram_extra_id
                 [0U] : ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid))
                          ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_30__DOT__ram_extra_id
                         [0U] : ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid))
                                  ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_29__DOT__ram_extra_id
                                 [0U] : ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid))
                                          ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_28__DOT__ram_extra_id
                                         [0U] : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_123))))) 
                << 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_denied 
            = (0U != ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_resp_io_deq_bits_MPORT_data) 
                      | ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid))
                          ? (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_15)
                          : ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid))
                              ? (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_14)
                              : ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid))
                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_13)
                                  : ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid))
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_12)
                                      : ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid))
                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_11)
                                          : ((0xaU 
                                              == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid))
                                              ? (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_10)
                                              : ((9U 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid))
                                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_9)
                                                  : 
                                                 ((8U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid))
                                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_8)
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid))
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_7)
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid))
                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_6)
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid))
                                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_5)
                                                      : 
                                                     ((4U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid))
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_4)
                                                       : 
                                                      ((3U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid))
                                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_3)
                                                        : 
                                                       ((2U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid))
                                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_2)
                                                         : 
                                                        ((1U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid))
                                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_1)
                                                          : (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__error_0))))))))))))))))));
        if ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid))) {
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size 
                = (7U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_31__DOT__ram_tl_state_size
                   [0U]);
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_31__DOT__ram_tl_state_source
                [0U];
        } else if ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid))) {
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size 
                = (7U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_30__DOT__ram_tl_state_size
                   [0U]);
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_30__DOT__ram_tl_state_source
                [0U];
        } else if ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid))) {
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size 
                = (7U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_29__DOT__ram_tl_state_size
                   [0U]);
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_29__DOT__ram_tl_state_source
                [0U];
        } else if ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid))) {
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size 
                = (7U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_28__DOT__ram_tl_state_size
                   [0U]);
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_28__DOT__ram_tl_state_source
                [0U];
        } else if ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid))) {
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size 
                = (7U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_27__DOT__ram_tl_state_size
                   [0U]);
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_27__DOT__ram_tl_state_source
                [0U];
        } else if ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid))) {
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size 
                = (7U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_26__DOT__ram_tl_state_size
                   [0U]);
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_26__DOT__ram_tl_state_source
                [0U];
        } else {
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_size 
                = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_153));
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT___GEN_137;
        }
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid 
            = (1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bvalid));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___io_key_T 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__free_sel) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__free_sel)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___io_key_T 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free_sel) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free_sel)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___io_key_T 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free_sel) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free_sel)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___io_key_T 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free_sel) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free_sel)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___io_key_T 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free_sel) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free_sel)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___io_key_T 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free_sel) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free_sel)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___io_key_T 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free_sel) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free_sel)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___io_key_T 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free_sel) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free_sel)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_valid) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__stall)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__xmit)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__bundleOut_0_a_bits_data_masked_enable_0 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__enable_0) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__bundleOut_0_a_bits_data_rdata_written_once))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__bundleOut_0_a_bits_mask_masked_enable_0 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__enable_0) 
                 | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__bundleOut_0_a_bits_mask_rdata_written_once))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___align1_T_15 
        = (0xffU & ((IData)(ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___align1_T_12) 
                    | ((IData)(ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___align1_T_12) 
                       << 2U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___align1_T_5 
        = (0xffU & ((IData)(ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___align1_T_2) 
                    | ((IData)(ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___align1_T_2) 
                       << 2U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__beatsLeft))
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__dc_valid) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__da_valid))
            : (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__state_0) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__dc_valid)) 
               | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__state_1) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__da_valid))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___T_2260 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___T_2349 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__d_first_counter_2)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT___readys_T_3 
        = (3U & ((IData)(ysyxSoCFull__DOT__fpga__DOT__err__DOT___readys_T) 
                 | ((IData)(ysyxSoCFull__DOT__fpga__DOT__err__DOT___readys_T) 
                    << 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_in_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__bundleOut_0_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT___GEN_9));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___fillLow_T_10 
        = (0xffU & ((IData)(ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___fillLow_T_8) 
                    | ((IData)(ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___fillLow_T_8) 
                       >> 2U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___wipeHigh_T_17 
        = (0xffU & ((IData)(ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___wipeHigh_T_14) 
                    | ((IData)(ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___wipeHigh_T_14) 
                       << 2U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___fillLow_T_3 
        = (0xffU & ((IData)(ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___fillLow_T_1) 
                    | ((IData)(ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___fillLow_T_1) 
                       >> 2U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___wipeHigh_T_6 
        = (0xffU & ((IData)(ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___wipeHigh_T_3) 
                    | ((IData)(ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___wipeHigh_T_3) 
                       << 2U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_in 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart_in_pwrite)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart_in_pready 
        = (((0U == (0x20001000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_in_paddr)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_in_penable)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart_in_psel));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_in_penable 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_in_penable));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_in_psel 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bundleOut_0_psel));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___io_key_T 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__free_sel) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__free_sel)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___io_key_T 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free_sel) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free_sel)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___io_key_T 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free_sel) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free_sel)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___io_key_T 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free_sel) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free_sel)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___io_key_T 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free_sel) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free_sel)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___io_key_T 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free_sel) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free_sel)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___io_key_T 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free_sel) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free_sel)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___io_key_T 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free_sel) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free_sel)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask_acc_1) 
             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask_eq_5)) 
            << 3U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask_acc_1) 
                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask_eq_4)) 
                       << 2U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask_acc) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask_eq_3)) 
                                  << 1U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask_acc) 
                                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask_eq_2)))));
    if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_opcode))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_mask 
            = ((8U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                      >> 0x18U)) | ((4U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                           >> 0x10U)) 
                                    | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                              >> 8U)) 
                                       | (1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U]))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_valid 
            = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__state)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_valid));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_mask 
            = (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask_eq_5)) 
                 << 3U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc_1) 
                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask_eq_4)) 
                           << 2U)) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask_eq_3)) 
                                       << 1U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_acc) 
                                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask_eq_2))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_valid 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_valid;
    }
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_44 
        = ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))
            ? 4U : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))
                     ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___GEN_42)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_valid) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__stall)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__xmit)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___T_690 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__d_first_counter_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask_hi_hi) 
            << 3U) | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask_hi_lo) 
                       << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_lo)));
    if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_opcode))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_mask 
            = ((8U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                      >> 0x18U)) | ((4U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                           >> 0x10U)) 
                                    | ((2U & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U] 
                                              >> 8U)) 
                                       | (1U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__wide[0U]))));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_valid 
            = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__state)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_valid));
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_mask 
            = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask_hi_hi) 
                << 3U) | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__mask_hi_lo) 
                           << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_bits_mask_lo)));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_valid 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_valid;
    }
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
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___GEN_44 
        = ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))
            ? 4U : ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode))
                     ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___GEN_42)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___fillLow_T_3 
        = (0xffU & ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___fillLow_T_1) 
                    | ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___fillLow_T_1) 
                       >> 2U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_6 
        = (0xffU & ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_3) 
                    | ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_3) 
                       << 2U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__loaddouble 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__readdevice) 
           & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__REXLS_func3)));
    ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h950ae05f__0 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__Wstate)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__writedevicedata));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__storedouble 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__writedevicedata) 
           & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__REXLS_func3)));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbmip 
        = ((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__REGS__DOT____Vcellout__Rmip__dout 
                          >> 7U))) ? (0xffffffffffffff7fULL 
                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbmtvec)
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__wbmtvec);
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___ridx_incremented_T_1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_ridx_bin) 
                   + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT___q_last_T)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___ridx_incremented_T_1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_ridx_bin) 
                   + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT___q_last_T)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_c_bits_address 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass_c)
            ? 0U : ((0x1000U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_legal)) 
                                 << 0xcU) | (0xfffff000U 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_6))) 
                    | (0xfffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_6)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_address 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass_c)
            ? 0U : ((0x1000U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__q_legal)) 
                                 << 0xcU) | (0xfffff000U 
                                             & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___GEN_6))) 
                    | (0xfffU & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___GEN_6)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_9 
        = (0xfffffU & (ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_7 
                       | (ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_7 
                          >> 0x10U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_9 
        = (0xfffffU & (ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_7 
                       | (ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_7 
                          >> 0x10U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___ioX_first_T_1)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_0_last)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_first_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___ioX_tx_bT_6 
        = (0x1fffffU & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___ioX_first_T_1) 
                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_first_1))
                          ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_delta_1
                          : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__tx_b) 
                        + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink_io_deq_valid)
                            ? (0xfffffU & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                            << 4U) 
                                           | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                              >> 0x1cU)))
                            : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT___valid_1_T_6 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT___wen_T_13) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___ioX_first_T_2)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_0_last)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_first_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___ioX_tx_c_T_6 
        = (0x1fffffU & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___ioX_first_T_2) 
                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_first_2))
                          ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_delta_2
                          : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__tx_c) 
                        + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink_io_deq_valid)
                            ? (0xfffffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                           >> 8U)) : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT___valid_1_T_6 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT___wen_T_13) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_4 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___ioX_first_T_4)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_0_last)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_first_4));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___ioX_tx_e_T_6 
        = (0x1fffffU & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___ioX_first_T_4) 
                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_first_4))
                          ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_delta_4
                          : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__tx_e) 
                        + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink_io_deq_valid)
                            ? (0xfffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U])
                            : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT___valid_1_T_6 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT___wen_T_13) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___GEN_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___ioX_first_T_1)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qb_q__DOT__elts_0_last)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_first_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___ioX_tx_bT_6 
        = (0x1fffffU & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___ioX_first_T_1) 
                          & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_first_1))
                          ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_delta_1
                          : vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__tx_b) 
                        + ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink_io_deq_valid)
                            ? (0xfffffU & ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                            << 4U) 
                                           | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                              >> 0x1cU)))
                            : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT___valid_1_T_6 
        = ((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT___wen_T_13) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_1__DOT__valid_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___GEN_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___ioX_first_T_2)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qc_q__DOT__elts_0_last)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_first_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___ioX_tx_c_T_6 
        = (0x1fffffU & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___ioX_first_T_2) 
                          & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_first_2))
                          ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_delta_2
                          : vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__tx_c) 
                        + ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink_io_deq_valid)
                            ? (0xfffffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                           >> 8U)) : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT___valid_1_T_6 
        = ((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT___wen_T_13) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_2__DOT__valid_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___GEN_4 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___ioX_first_T_4)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qe_q__DOT__elts_0_last)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_first_4));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___ioX_tx_e_T_6 
        = (0x1fffffU & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___ioX_first_T_4) 
                          & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_first_4))
                          ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_delta_4
                          : vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__tx_e) 
                        + ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink_io_deq_valid)
                            ? (0xfffffU & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U])
                            : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT___valid_1_T_6 
        = ((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT___wen_T_13) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_4__DOT__valid_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___ioX_first_T)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_0_last)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_first));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___ioX_tx_a_T_6 
        = (0x1fffffU & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___ioX_first_T) 
                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_first))
                          ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_delta
                          : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__tx_a) 
                        + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink_io_deq_valid)
                            ? (0xfffffU & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                            << 0x10U) 
                                           | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                              >> 0x10U)))
                            : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT___valid_1_T_6 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT___wen_T_13) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___GEN_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___ioX_first_T_3)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_0_last)
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_first_3));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___ioX_tx_d_T_6 
        = (0x1fffffU & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___ioX_first_T_3) 
                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_first_3))
                          ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_delta_3
                          : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__tx_d) 
                        + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink_io_deq_valid)
                            ? (0xfffffU & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                            << 0xcU) 
                                           | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U] 
                                              >> 0x14U)))
                            : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT___valid_1_T_6 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT___wen_T_13) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___GEN_0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___ioX_first_T)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__elts_0_last)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_first));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___ioX_tx_a_T_6 
        = (0x1fffffU & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___ioX_first_T) 
                          & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_first))
                          ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_delta
                          : vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__tx_a) 
                        + ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink_io_deq_valid)
                            ? (0xfffffU & ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                            << 0x10U) 
                                           | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                              >> 0x10U)))
                            : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT___valid_1_T_6 
        = ((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT___wen_T_13) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq__DOT__valid_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___GEN_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___ioX_first_T_3)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qd_q__DOT__elts_0_last)
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_first_3));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___ioX_tx_d_T_6 
        = (0x1fffffU & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___ioX_first_T_3) 
                          & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_first_3))
                          ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_delta_3
                          : vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__tx_d) 
                        + ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink_io_deq_valid)
                            ? (0xfffffU & ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                            << 0xcU) 
                                           | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U] 
                                              >> 0x14U)))
                            : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT___valid_1_T_6 
        = ((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT___wen_T_13) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__ioX_cq_3__DOT__valid_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__a_a_ext 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data 
            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__wide_mask) 
           | (((QData)((IData)(((0x80U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_a_T_8))
                                 ? 0xffU : 0U))) << 0x38U) 
              | (((QData)((IData)(((0x40U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_a_T_8))
                                    ? 0xffU : 0U))) 
                  << 0x30U) | (((QData)((IData)(((0x20U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_a_T_8))
                                                  ? 0xffU
                                                  : 0U))) 
                                << 0x28U) | (((QData)((IData)(
                                                              ((0x10U 
                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_a_T_8))
                                                                ? 0xffU
                                                                : 0U))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((((8U 
                                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_a_T_8))
                                                                   ? 0xffU
                                                                   : 0U) 
                                                                 << 0x18U) 
                                                                | ((((4U 
                                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_a_T_8))
                                                                      ? 0xffU
                                                                      : 0U) 
                                                                    << 0x10U) 
                                                                   | ((((2U 
                                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_a_T_8))
                                                                         ? 0xffU
                                                                         : 0U) 
                                                                       << 8U) 
                                                                      | ((1U 
                                                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_a_T_8))
                                                                          ? 0xffU
                                                                          : 0U)))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__a_d_ext 
        = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data 
            & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__wide_mask) 
           | (((QData)((IData)(((0x80U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_d_T_8))
                                 ? 0xffU : 0U))) << 0x38U) 
              | (((QData)((IData)(((0x40U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_d_T_8))
                                    ? 0xffU : 0U))) 
                  << 0x30U) | (((QData)((IData)(((0x20U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_d_T_8))
                                                  ? 0xffU
                                                  : 0U))) 
                                << 0x28U) | (((QData)((IData)(
                                                              ((0x10U 
                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_d_T_8))
                                                                ? 0xffU
                                                                : 0U))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((((8U 
                                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_d_T_8))
                                                                   ? 0xffU
                                                                   : 0U) 
                                                                 << 0x18U) 
                                                                | ((((4U 
                                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_d_T_8))
                                                                      ? 0xffU
                                                                      : 0U) 
                                                                    << 0x10U) 
                                                                   | ((((2U 
                                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_d_T_8))
                                                                         ? 0xffU
                                                                         : 0U) 
                                                                       << 8U) 
                                                                      | ((1U 
                                                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___signext_d_T_8))
                                                                          ? 0xffU
                                                                          : 0U)))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__free_sel 
        = ((~ ((QData)((IData)((ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_11 
                                | (ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_11 
                                   << 0x10U)))) << 1U)) 
           & (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__free)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__free_sel 
        = ((~ ((QData)((IData)((ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_11 
                                | (ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_sel_T_11 
                                   << 0x10U)))) << 1U)) 
           & (QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__free)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__a_a_ext 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data 
            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__wide_mask) 
           | (((QData)((IData)(((0x80U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_a_T_8))
                                 ? 0xffU : 0U))) << 0x38U) 
              | (((QData)((IData)(((0x40U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_a_T_8))
                                    ? 0xffU : 0U))) 
                  << 0x30U) | (((QData)((IData)(((0x20U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_a_T_8))
                                                  ? 0xffU
                                                  : 0U))) 
                                << 0x28U) | (((QData)((IData)(
                                                              ((0x10U 
                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_a_T_8))
                                                                ? 0xffU
                                                                : 0U))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((((8U 
                                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_a_T_8))
                                                                   ? 0xffU
                                                                   : 0U) 
                                                                 << 0x18U) 
                                                                | ((((4U 
                                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_a_T_8))
                                                                      ? 0xffU
                                                                      : 0U) 
                                                                    << 0x10U) 
                                                                   | ((((2U 
                                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_a_T_8))
                                                                         ? 0xffU
                                                                         : 0U) 
                                                                       << 8U) 
                                                                      | ((1U 
                                                                          & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_a_T_8))
                                                                          ? 0xffU
                                                                          : 0U)))))))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__a_d_ext 
        = ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data 
            & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__wide_mask) 
           | (((QData)((IData)(((0x80U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_d_T_8))
                                 ? 0xffU : 0U))) << 0x38U) 
              | (((QData)((IData)(((0x40U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_d_T_8))
                                    ? 0xffU : 0U))) 
                  << 0x30U) | (((QData)((IData)(((0x20U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_d_T_8))
                                                  ? 0xffU
                                                  : 0U))) 
                                << 0x28U) | (((QData)((IData)(
                                                              ((0x10U 
                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_d_T_8))
                                                                ? 0xffU
                                                                : 0U))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((((8U 
                                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_d_T_8))
                                                                   ? 0xffU
                                                                   : 0U) 
                                                                 << 0x18U) 
                                                                | ((((4U 
                                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_d_T_8))
                                                                      ? 0xffU
                                                                      : 0U) 
                                                                    << 0x10U) 
                                                                   | ((((2U 
                                                                         & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_d_T_8))
                                                                         ? 0xffU
                                                                         : 0U) 
                                                                       << 8U) 
                                                                      | ((1U 
                                                                          & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___signext_d_T_8))
                                                                          ? 0xffU
                                                                          : 0U)))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_20 
        = (0xfffffU & (ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_18 
                       | (ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_18 
                          >> 0x10U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_31 
        = (0xfffffU & (ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_29 
                       | (ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_29 
                          >> 0x10U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_42 
        = (0xfffffU & (ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_40 
                       | (ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_40 
                          >> 0x10U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_53 
        = (0xfffffU & (ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_51 
                       | (ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_51 
                          >> 0x10U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_20 
        = (0xfffffU & (ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_18 
                       | (ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_18 
                          >> 0x10U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_31 
        = (0xfffffU & (ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_29 
                       | (ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_29 
                          >> 0x10U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_42 
        = (0xfffffU & (ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_40 
                       | (ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_40 
                          >> 0x10U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_53 
        = (0xfffffU & (ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_51 
                       | (ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_51 
                          >> 0x10U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_R0_en 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq_io_deq_ready) 
           & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq_io_deq_valid) 
                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__empty))) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__atLeastTwo)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT___do_deq_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq_io_deq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq_io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_R0_en 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq_io_deq_ready) 
           & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq_io_deq_valid) 
                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__empty))) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__atLeastTwo)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT___do_deq_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq_io_deq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq_io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_R0_en 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq_io_deq_ready) 
           & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq_io_deq_valid) 
                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__empty))) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__atLeastTwo)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT___do_deq_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq_io_deq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq_io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_R0_en 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq_io_deq_ready) 
           & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq_io_deq_valid) 
                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__empty))) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__atLeastTwo)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT___do_deq_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq_io_deq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq_io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_R0_en 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq_io_deq_ready) 
           & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq_io_deq_valid) 
                  | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__empty))) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__atLeastTwo)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT___do_deq_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq_io_deq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq_io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram_R0_en 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq_io_deq_ready) 
           & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq_io_deq_valid) 
                  | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__empty))) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__atLeastTwo)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT___do_deq_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq_io_deq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq_io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram_R0_en 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq_io_deq_ready) 
           & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq_io_deq_valid) 
                  | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__empty))) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__atLeastTwo)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT___do_deq_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq_io_deq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq_io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram_R0_en 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq_io_deq_ready) 
           & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq_io_deq_valid) 
                  | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__empty))) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__atLeastTwo)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT___do_deq_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq_io_deq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq_io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram_R0_en 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq_io_deq_ready) 
           & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq_io_deq_valid) 
                  | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__empty))) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__atLeastTwo)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT___do_deq_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq_io_deq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq_io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram_R0_en 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq_io_deq_ready) 
           & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq_io_deq_valid) 
                  | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__empty))) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__atLeastTwo)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT___do_deq_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq_io_deq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq_io_deq_valid));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_unready_T_1 
        = (0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__readys_filter) 
                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__readys_filter) 
                        >> 1U)));
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___readys_unready_T_1 
        = (0xfffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__readys_filter) 
                     | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__readys_filter) 
                        >> 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_MPORT_addr 
        = (((IData)((0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free_sel) 
                                    >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___io_key_T) 
                                     >> 2U)))) << 1U) 
              | (IData)((0U != (0xaU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___io_key_T))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_MPORT_addr 
        = (((IData)((0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free_sel) 
                                    >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___io_key_T) 
                                     >> 2U)))) << 1U) 
              | (IData)((0U != (0xaU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___io_key_T))))));
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
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__DivResIn[0U] 
            = __Vtemp_h60d9ac46__0[0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__DivResIn[1U] 
            = __Vtemp_h60d9ac46__0[1U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__DivResIn[2U] 
            = __Vtemp_h60d9ac46__0[2U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__DivResIn[3U] 
            = __Vtemp_h60d9ac46__0[3U];
    } else if (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT____VdfgTmp_h5bf1badd__0) 
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2470 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT____VdfgTmp_h95ec52b7__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_c_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass_c)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2611 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT____VdfgTmp_h647911d6__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__out_c_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass_c)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_incremented 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___ridx_incremented_T_1)
            : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_ready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass_c)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_ready));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_incremented 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___ridx_incremented_T_1)
            : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_ready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass_c)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_ready));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                         >> 1U))) ? 2U : ((4U == (7U 
                                                  & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                      & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                     >> 1U)))
                                           ? 1U : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT___T_750 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__d_first_counter_1)));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor_io_in_d_bits_denied) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__beatsDO_opdata_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__beats1_opdata;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor_io_in_d_bits_source 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__a__DOT__ram_source
            [0U];
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__beatsDO_opdata_1 = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor_io_in_d_bits_source = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_param 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass)
            ? 0U : (3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT___GEN_2)));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor_io_in_d_bits_denied) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor_io_in_d_bits_size 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__a__DOT__ram_size
            [0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor_io_in_d_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__da_bits_opcode;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor_io_in_d_bits_size = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor_io_in_d_bits_opcode = 0U;
    }
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
    vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT___GEN_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT___T_1) 
           | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT___T)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__w_full)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_a_bits_data 
        = (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_data)) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__bundleOut_0_a_bits_data_masked_enable_0)
                                          ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_data
                                          : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__bundleOut_0_a_bits_data_rdata_0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__earlyWinner_0 
        = ((~ (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___readys_T_3) 
                     << 1U))) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__dc_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__earlyWinner_1 
        = ((~ (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___readys_T_3))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__da_valid));
    vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT___GEN_41 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem_R0_en) 
           | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT___T_13)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__srams__DOT__r_full)));
    VL_SHIFTR_WWI(512,512,9, __Vtemp_hef43ff45__0, vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
        = __Vtemp_hef43ff45__0[0U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[1U] 
        = __Vtemp_hef43ff45__0[1U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[2U] 
        = __Vtemp_hef43ff45__0[2U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[3U] 
        = __Vtemp_hef43ff45__0[3U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[4U] 
        = __Vtemp_hef43ff45__0[4U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[5U] 
        = __Vtemp_hef43ff45__0[5U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[6U] 
        = __Vtemp_hef43ff45__0[6U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[7U] 
        = __Vtemp_hef43ff45__0[7U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[8U] 
        = __Vtemp_hef43ff45__0[8U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[9U] 
        = __Vtemp_hef43ff45__0[9U];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU] 
        = __Vtemp_hef43ff45__0[0xaU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU] 
        = __Vtemp_hef43ff45__0[0xbU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU] 
        = __Vtemp_hef43ff45__0[0xcU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU] 
        = __Vtemp_hef43ff45__0[0xdU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU] 
        = __Vtemp_hef43ff45__0[0xeU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU] 
        = __Vtemp_hef43ff45__0[0xfU];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___T_1227 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_MPORT_addr 
        = (((IData)((0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__free_sel) 
                                    >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___io_key_T) 
                                     >> 2U)))) << 1U) 
              | (IData)((0U != (0xaU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___io_key_T))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_MPORT_addr 
        = (((IData)((0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free_sel) 
                                    >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___io_key_T) 
                                     >> 2U)))) << 1U) 
              | (IData)((0U != (0xaU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___io_key_T))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_MPORT_addr 
        = (((IData)((0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free_sel) 
                                    >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___io_key_T) 
                                     >> 2U)))) << 1U) 
              | (IData)((0U != (0xaU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___io_key_T))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_MPORT_addr 
        = (((IData)((0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free_sel) 
                                    >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___io_key_T) 
                                     >> 2U)))) << 1U) 
              | (IData)((0U != (0xaU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___io_key_T))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data_MPORT_addr 
        = (((IData)((0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free_sel) 
                                    >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___io_key_T) 
                                     >> 2U)))) << 1U) 
              | (IData)((0U != (0xaU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___io_key_T))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_MPORT_addr 
        = (((IData)((0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free_sel) 
                                    >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___io_key_T) 
                                     >> 2U)))) << 1U) 
              | (IData)((0U != (0xaU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___io_key_T))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_MPORT_addr 
        = (((IData)((0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free_sel) 
                                    >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___io_key_T) 
                                     >> 2U)))) << 1U) 
              | (IData)((0U != (0xaU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___io_key_T))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_MPORT_addr 
        = (((IData)((0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free_sel) 
                                    >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___io_key_T) 
                                     >> 2U)))) << 1U) 
              | (IData)((0U != (0xaU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___io_key_T))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_a_bits_data 
        = (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_data)) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__bundleOut_0_a_bits_data_masked_enable_0)
                                          ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_data
                                          : vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__bundleOut_0_a_bits_data_rdata_0))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__earlyWinner_0 
        = ((~ (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT___readys_T_3) 
                     << 1U))) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__dc_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__earlyWinner_1 
        = ((~ (1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT___readys_T_3))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__da_valid));
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
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_out_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_in_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__bundleOut_0_wvalid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__beats_lo_1 
        = (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_burst)) 
            | (3U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_size)))
            ? 0U : (7U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___align1_T_15) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___align1_T_15) 
                                 << 4U))) & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___wipeHigh_T_17) 
                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___wipeHigh_T_17) 
                                                    << 4U))) 
                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___fillLow_T_10) 
                                                 >> 1U) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___fillLow_T_10) 
                                                   >> 5U))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__beats_lo 
        = (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_io_deq_bits_burst)) 
            | (3U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_io_deq_bits_size)))
            ? 0U : (7U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___align1_T_5) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___align1_T_5) 
                                 << 4U))) & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___wipeHigh_T_6) 
                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___wipeHigh_T_6) 
                                                    << 4U))) 
                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___fillLow_T_3) 
                                                 >> 1U) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___fillLow_T_3) 
                                                   >> 5U))))));
    ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgTmp_h44b1a724__0 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart_in_pready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__ren 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart_in_pwrite)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_in_psel));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data_MPORT_addr 
        = (((IData)((0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__free_sel) 
                                    >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___io_key_T) 
                                     >> 2U)))) << 1U) 
              | (IData)((0U != (0xaU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT___io_key_T))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data_MPORT_addr 
        = (((IData)((0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__free_sel) 
                                    >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___io_key_T) 
                                     >> 2U)))) << 1U) 
              | (IData)((0U != (0xaU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT___io_key_T))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data_MPORT_addr 
        = (((IData)((0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__free_sel) 
                                    >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___io_key_T) 
                                     >> 2U)))) << 1U) 
              | (IData)((0U != (0xaU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT___io_key_T))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_MPORT_addr 
        = (((IData)((0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__free_sel) 
                                    >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___io_key_T) 
                                     >> 2U)))) << 1U) 
              | (IData)((0U != (0xaU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT___io_key_T))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data_MPORT_addr 
        = (((IData)((0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__free_sel) 
                                    >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___io_key_T) 
                                     >> 2U)))) << 1U) 
              | (IData)((0U != (0xaU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT___io_key_T))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_MPORT_addr 
        = (((IData)((0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__free_sel) 
                                    >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___io_key_T) 
                                     >> 2U)))) << 1U) 
              | (IData)((0U != (0xaU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT___io_key_T))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_MPORT_addr 
        = (((IData)((0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__free_sel) 
                                    >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___io_key_T) 
                                     >> 2U)))) << 1U) 
              | (IData)((0U != (0xaU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT___io_key_T))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_MPORT_addr 
        = (((IData)((0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__free_sel) 
                                    >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___io_key_T) 
                                     >> 2U)))) << 1U) 
              | (IData)((0U != (0xaU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT___io_key_T))))));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___T_750 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter_1)));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_param 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass)
            ? 0U : (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2)));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_mask = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_mask 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_mask;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_address;
    }
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_incremented 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___ridx_incremented_T_1)
            : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_incremented 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___ridx_incremented_T_1)
            : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_z 
        = (0x1fffffU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1)
                          ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_a
                          : (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_a 
                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_9 
                                >> 1U))) + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink_io_deq_valid)
                                             ? (0xfffffU 
                                                & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                    << 0x10U) 
                                                   | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                      >> 0x10U)))
                                             : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msbOH_T_1 
        = (0xfffffU & ((~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_a) 
                       | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_9 
                          >> 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rx_z 
        = (0x1fffffU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1)
                          ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rx_a
                          : (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rx_a 
                             & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_9 
                                >> 1U))) + ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink_io_deq_valid)
                                             ? (0xfffffU 
                                                & ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[3U] 
                                                    << 0x10U) 
                                                   | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                      >> 0x10U)))
                                             : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msbOH_T_1 
        = (0xfffffU & ((~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rx_a) 
                       | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_9 
                          >> 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__adder_out 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__a_a_ext 
           + ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_param))
               ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__a_d_ext
               : (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__a_d_ext)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_address 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass_c)
            ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T 
        = (0xffffU & ((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__free_sel 
                               >> 0x10U)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__free_sel)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_address 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass_c)
            ? 0U : vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_address);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T 
        = (0xffffU & ((IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__free_sel 
                               >> 0x10U)) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__free_sel)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__adder_out 
        = (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__a_a_ext 
           + ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_param))
               ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__a_d_ext
               : (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__a_d_ext)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_z_1 
        = (0x1fffffU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1)
                          ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_b
                          : (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_b 
                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_20 
                                >> 1U))) + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink_io_deq_valid)
                                             ? (0xfffffU 
                                                & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                    << 4U) 
                                                   | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                                      >> 0x1cU)))
                                             : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msbOH_T_3 
        = (0xfffffU & ((~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_b) 
                       | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_20 
                          >> 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_z_2 
        = (0x1fffffU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1)
                          ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_c
                          : (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_c 
                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_31 
                                >> 1U))) + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink_io_deq_valid)
                                             ? (0xfffffU 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                                   >> 8U))
                                             : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msbOH_T_5 
        = (0xfffffU & ((~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_c) 
                       | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_31 
                          >> 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_z_3 
        = (0x1fffffU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1)
                          ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_d
                          : (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_d 
                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_42 
                                >> 1U))) + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink_io_deq_valid)
                                             ? (0xfffffU 
                                                & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                                    << 0xcU) 
                                                   | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U] 
                                                      >> 0x14U)))
                                             : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msbOH_T_7 
        = (0xfffffU & ((~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_d) 
                       | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_42 
                          >> 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_z_4 
        = (0x1fffffU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1)
                          ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_e
                          : (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_e 
                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_53 
                                >> 1U))) + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink_io_deq_valid)
                                             ? (0xfffffU 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U])
                                             : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msbOH_T_9 
        = (0xfffffU & ((~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rx_e) 
                       | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___mask_T_53 
                          >> 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rx_z_1 
        = (0x1fffffU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1)
                          ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rx_b
                          : (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rx_b 
                             & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_20 
                                >> 1U))) + ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink_io_deq_valid)
                                             ? (0xfffffU 
                                                & ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[2U] 
                                                    << 4U) 
                                                   | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                                      >> 0x1cU)))
                                             : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msbOH_T_3 
        = (0xfffffU & ((~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rx_b) 
                       | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_20 
                          >> 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rx_z_2 
        = (0x1fffffU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1)
                          ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rx_c
                          : (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rx_c 
                             & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_31 
                                >> 1U))) + ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink_io_deq_valid)
                                             ? (0xfffffU 
                                                & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                                   >> 8U))
                                             : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msbOH_T_5 
        = (0xfffffU & ((~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rx_c) 
                       | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_31 
                          >> 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rx_z_3 
        = (0x1fffffU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1)
                          ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rx_d
                          : (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rx_d 
                             & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_42 
                                >> 1U))) + ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink_io_deq_valid)
                                             ? (0xfffffU 
                                                & ((vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[1U] 
                                                    << 0xcU) 
                                                   | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U] 
                                                      >> 0x14U)))
                                             : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msbOH_T_7 
        = (0xfffffU & ((~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rx_d) 
                       | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_42 
                          >> 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rx_z_4 
        = (0x1fffffU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_1)
                          ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rx_e
                          : (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rx_e 
                             & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_53 
                                >> 1U))) + ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink_io_deq_valid)
                                             ? (0xfffffU 
                                                & vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg[0U])
                                             : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msbOH_T_9 
        = (0xfffffU & ((~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rx_e) 
                       | (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___mask_T_53 
                          >> 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_deq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_flow)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT___do_deq_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_deq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_flow)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT___do_deq_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_deq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_flow)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT___do_deq_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_deq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_flow)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT___do_deq_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_deq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_flow)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT___do_deq_T));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_deq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__do_flow)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT___do_deq_T));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_deq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__do_flow)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT___do_deq_T));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_deq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__do_flow)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT___do_deq_T));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_deq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__do_flow)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT___do_deq_T));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_deq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__do_flow)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT___do_deq_T));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_unready_T_3 
        = (0xfffU & ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_unready_T_1) 
                     | ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_unready_T_1) 
                        >> 2U)));
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___readys_unready_T_3 
        = (0xfffU & ((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___readys_unready_T_1) 
                     | ((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___readys_unready_T_1) 
                        >> 2U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_release)
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__c_first)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_MPORT_addr)
                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__source_r))
            : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass_c)
            ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T));
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
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__q_release)
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__c_first)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_MPORT_addr)
                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__source_r))
            : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass_c)
            ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___T_2470 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_c_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT____VdfgTmp_h95ec52b7__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT___T_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_c_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_c_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__last_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2611 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__out_c_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT____VdfgTmp_h647911d6__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT___T_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__out_c_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__out_c_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__last_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_incremented) 
                   ^ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_incremented) 
                      >> 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___q_last_T 
        = (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__xmit)) 
            | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__stall)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_ready))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_MPORT_en 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_release) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__c_first) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__xmit) 
                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_ready) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_valid))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_incremented) 
                   ^ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_incremented) 
                      >> 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___ridx_T_1 
        = (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__xmit)) 
            | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__stall)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_ready))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_MPORT_en 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__q_release) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__c_first) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__xmit) 
                    & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_ready) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_valid))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT___a_opcode_lookup_T_1 
        = (vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__inflight_opcodes 
           >> ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor_io_in_d_bits_source) 
               << 2U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT____VdfgTmp_h5d3bc996__0 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor__DOT__d_first_counter_2)) 
           & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor_io_in_d_bits_opcode)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2383 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__stall)) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_valid)));
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
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                         >> 1U))) ? 2U : ((4U == (7U 
                                                  & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                      & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                     >> 1U)))
                                           ? 1U : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0[0U] 
                                                          & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___a_opcode_lookup_T_1[0U]) 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT___GEN_19 
        = ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT____VdfgTmp_h728c09b0__0))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_MPORT_addr)
            : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT____VdfgTmp_h728c09b0__0))
                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_MPORT_addr)
                : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT____VdfgTmp_h728c09b0__0))
                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_MPORT_addr)
                    : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT____VdfgTmp_h728c09b0__0))
                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data_MPORT_addr)
                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_MPORT_addr)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2524 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__out_a_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__stall)) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_valid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__readys_filter_lo 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__w_out_valid) 
            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl_auto_in_arvalid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_2__DOT__ram_real_last_MPORT_data 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__beats_lo_1) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__len_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__w_beats 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__beats_lo_1)) 
           & (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__beats_lo_1) 
                    << 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize1_T_1 
        = (0x7fffffU & ((0xffU | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__beats_lo_1) 
                                  << 8U)) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_size)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_2__DOT__QueueCompatibility_1__DOT__ram_real_last_MPORT_data 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__beats_lo) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__len));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__beats 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__beats_lo)) 
           & (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__beats_lo) 
                    << 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize1_T_1 
        = (0x7fffffU & ((0xffU | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__beats_lo) 
                                  << 8U)) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_io_deq_bits_size)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgTmp_h44b1a724__0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart_in_pwrite));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart_in_pwrite)) 
           & (IData)(ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____VdfgTmp_h44b1a724__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT___bundleIn_0_pready_T_4 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_in_penable) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__ren))) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)) 
           | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart_in_pready)) 
              & (0U == (0x20001000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_in_paddr))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT___GEN_19 
        = ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT____VdfgTmp_h728c09b0__0))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data_MPORT_addr)
            : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT____VdfgTmp_h728c09b0__0))
                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data_MPORT_addr)
                : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT____VdfgTmp_h728c09b0__0))
                    ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data_MPORT_addr)
                    : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT____VdfgTmp_h728c09b0__0))
                        ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data_MPORT_addr)
                        : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data_MPORT_addr)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_mask 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass)
            ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_mask));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_bits_mask 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__mask) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT____VdfgTmp_he7c815ba__0)
               ? 0xffU : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_mask) 
                           << 4U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__bundleOut_0_a_bits_mask_masked_enable_0)
                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_mask)
                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__bundleOut_0_a_bits_mask_rdata_0)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass)
            ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_address);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_282 
        = ((0U == (0xfffff000U & (0x1000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address))) 
           | (0U == (0x80000000U & (0x80000000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__mapPP 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater__DOT__full) 
           | ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_opcode)) 
              & (0U == (0x80000000U & (0x80000000U 
                                       ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___a_opcode_lookup_T_1 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__inflight_opcodes 
           >> ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_source) 
               << 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT____VdfgTmp_h5d3bc996__0 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__d_first_counter_2)) 
           & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_opcode)));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dataokin 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__state)) 
           & (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__hit)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__axivalid 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__valid
           [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr] 
           & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirty
           [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr]);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__jal 
        = (((0x67U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__opcode)) 
            << 4U) | (((0x73U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IDU__io_IFID_inst) 
                       << 3U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__jump) 
                                  << 2U) | (((0x30200073U 
                                              == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IDU__io_IFID_inst) 
                                             << 1U) 
                                            | (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__InstType))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_incremented) 
                   ^ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_incremented) 
                      >> 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_incremented) 
                   ^ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_incremented) 
                      >> 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_1 
        = ((0x1fU & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msbOH_T_1 
                        >> 0xfU))) | (0xfffeU & ((~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msbOH_T_1) 
                                                 << 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_1 
        = ((0x1fU & (~ (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msbOH_T_1 
                        >> 0xfU))) | (0xfffeU & ((~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msbOH_T_1) 
                                                 << 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_1 
        = (0xffU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T) 
                     >> 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_1 
        = (0xffU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T) 
                     >> 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_6 
        = ((0x1fU & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msbOH_T_3 
                        >> 0xfU))) | (0xfffeU & ((~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msbOH_T_3) 
                                                 << 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_11 
        = ((0x1fU & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msbOH_T_5 
                        >> 0xfU))) | (0xfffeU & ((~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msbOH_T_5) 
                                                 << 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_16 
        = ((0x1fU & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msbOH_T_7 
                        >> 0xfU))) | (0xfffeU & ((~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msbOH_T_7) 
                                                 << 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_21 
        = ((0x1fU & (~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msbOH_T_9 
                        >> 0xfU))) | (0xfffeU & ((~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msbOH_T_9) 
                                                 << 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_6 
        = ((0x1fU & (~ (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msbOH_T_3 
                        >> 0xfU))) | (0xfffeU & ((~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msbOH_T_3) 
                                                 << 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_11 
        = ((0x1fU & (~ (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msbOH_T_5 
                        >> 0xfU))) | (0xfffeU & ((~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msbOH_T_5) 
                                                 << 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_16 
        = ((0x1fU & (~ (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msbOH_T_7 
                        >> 0xfU))) | (0xfffeU & ((~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msbOH_T_7) 
                                                 << 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_21 
        = ((0x1fU & (~ (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msbOH_T_9 
                        >> 0xfU))) | (0xfffeU & ((~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msbOH_T_9) 
                                                 << 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__readys_unready 
        = (0xfffU & ((((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_unready_T_3) 
                       >> 1U) | ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_unready_T_3) 
                                 >> 5U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__readys_mask) 
                                            << 6U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__readys_unready 
        = (0xfffU & ((((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___readys_unready_T_3) 
                       >> 1U) | ((IData)(ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___readys_unready_T_3) 
                                 >> 5U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__readys_mask) 
                                            << 6U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__inc_lo_hi 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT___T_2) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__counter_2)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2475)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___T_2476 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT___T_2) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT____VdfgTmp_h95ec52b7__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__dec_lo_hi 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT___T_2) 
           & (((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__counter_2)) 
               | (0U == ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_first_beats1_opdata)
                          ? (0xfU & (~ (0xfU & (((IData)(0x3fU) 
                                                 << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                                                >> 2U))))
                          : 0U))) & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT____VdfgTmp_hb4aa7579__0)) 
                                     | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT____VdfgTmp_h96e21840__0)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2476 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT____VdfgTmp_h4c740f86__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2472 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT____VdfgTmp_h4c740f86__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2472 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_h4c740f86__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2470 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT____VdfgTmp_h4c740f86__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2336 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT____VdfgTmp_h4c740f86__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_c_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__full) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__inc_lo_hi 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT___T_2) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__counter_2)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2611)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2617 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT___T_2) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT____VdfgTmp_h647911d6__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__dec_lo_hi 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT___T_2) 
           & (((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__counter_2)) 
               | (0U == ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_first_beats1_opdata)
                          ? (0x3fU & (~ (0x3fU & (((IData)(0xffU) 
                                                   << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size)) 
                                                  >> 2U))))
                          : 0U))) & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT____VdfgTmp_hb4aa7579__0)) 
                                     | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT____VdfgTmp_h96e21840__0)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2612 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT____VdfgTmp_hcb13d3f5__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2608 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT____VdfgTmp_hcb13d3f5__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2608 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_hcb13d3f5__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2611 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT____VdfgTmp_hcb13d3f5__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2336 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT____VdfgTmp_h4c740f86__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_c_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1__DOT__full) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1__DOT___T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__index 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx) 
                 ^ (4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx) 
                          >> 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___ridx_incremented_T_1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_ridx_bin) 
                   + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___q_last_T)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2476 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT____VdfgTmp_h95ec52b7__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__index 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx) 
                 ^ (4U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx) 
                          >> 1U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___ridx_incremented_T_1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_ridx_bin) 
                   + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___ridx_T_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2617 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT____VdfgTmp_h647911d6__0));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___T_2383 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_a_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__last));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass)
            ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_source));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater__DOT__full) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_address 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater__DOT__saved_address;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_source 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater__DOT__saved_source;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_address 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_source 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2524 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__out_a_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__a_first_counter_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_a_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__out_a_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__last));
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
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__inc_addr_1 
        = (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__addr_1 
           + (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__w_beats) 
                         << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_1_io_deq_bits_size))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__w_todo 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__w_counter))
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__wbeats_valid)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__w_beats)
                : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__w_counter));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize_T_4 
        = ((~ (0x7fffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize1_T_1 
                          >> 8U))) & (1U | (0xfffeU 
                                            & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize1_T_1 
                                               >> 7U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__inc_addr 
        = (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__addr 
           + (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__beats) 
                         << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT__deq_io_deq_bits_size))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize_T_4 
        = ((~ (0x7fffU & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize1_T_1 
                          >> 8U))) & (1U | (0xfffeU 
                                            & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize1_T_1 
                                               >> 7U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h4267b00d__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT____VdfgTmp_h4267b00d__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (6U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_in_paddr))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (2U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_in_paddr))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re) 
           & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                  >> 7U)) & (5U == (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_in_paddr))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_1_rvalid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT___bundleIn_0_pready_T_4)) 
           & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)));
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
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass)
            ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_source));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__full) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__saved_size;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__saved_address;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__saved_source;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__out_a_bits_size;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_address;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_a_bits_source;
    }
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__index 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx) 
                 ^ (4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx) 
                          >> 1U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__index 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx) 
                 ^ (4U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx) 
                          >> 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_2 
        = (0xffU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_1) 
                     >> 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_2 
        = (0xffU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_1) 
                     >> 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_2 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_1) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_2 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_1) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___io_key_T_1)));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_readys_T_2 
        = (0x3fU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__readys_unready) 
                     >> 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__readys_unready)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___readys_readys_T_2 
        = (0x3fU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__readys_unready) 
                     >> 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__readys_unready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__c_sizes_set_interm 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___T_2476)
            ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_size) 
                     << 1U)) : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT____VdfgTmp_h769f5a89__0 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__dec_lo_hi) 
            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2554));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2336 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_c_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT____VdfgTmp_h95ec52b7__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___c_first_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_c_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT___GEN_0 
        = (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeat_last_1)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T)) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_1__DOT__full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2482 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT____VdfgTmp_h4c740f86__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2478 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT____VdfgTmp_h4c740f86__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2478 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_h4c740f86__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2476 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT____VdfgTmp_h4c740f86__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2342 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___c_first_T) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT____VdfgTmp_h4c740f86__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_sizes_set_interm 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2617)
            ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size) 
                     << 1U)) : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT____VdfgTmp_h689b7916__0 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__dec_lo_hi) 
            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2690));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___T_2336 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_c_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT____VdfgTmp_h95ec52b7__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_opcode_MPORT_en 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_c_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1__DOT___GEN_0 
        = (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeat_last_1)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1__DOT___T)) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1__DOT__full));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2618 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1__DOT___T) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT____VdfgTmp_hcb13d3f5__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2614 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1__DOT___T) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT____VdfgTmp_hcb13d3f5__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2614 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1__DOT___T) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_hcb13d3f5__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2617 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1__DOT___T) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT____VdfgTmp_hcb13d3f5__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2342 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_1__DOT___T) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT____VdfgTmp_h4c740f86__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_incremented 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___ridx_incremented_T_1)
            : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_sizes_set_interm 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2476)
            ? (1U | (0xeU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_3) 
                             << 1U))) : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_incremented 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___ridx_incremented_T_1)
            : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_sizes_set_interm 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2617)
            ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_size) 
                     << 1U)) : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2383 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__a_first_counter_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor_io_in_a_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater__DOT__full) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor_io_in_a_valid));
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
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2524 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_a_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__a_first_counter_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater__DOT__full) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor_io_in_a_valid));
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
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__readys_unready 
        = (0xfU & ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__readys_filter) 
                     >> 1U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__readys_filter) 
                               >> 2U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__readys_mask) 
                                          << 2U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize_T_5 
        = (0xffU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize_T_4) 
                     >> 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize_T_4)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize_T_5 
        = (0xffU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize_T_4) 
                     >> 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize_T_4)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteEn 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteData) 
           | (((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__state)) 
               | (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__fstate))) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Lsu_w_valid) 
                 & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Reglen)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____VdfgTmp_h0f0f23a0__0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Lsu_aw_valid)) 
           & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__fstate)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_pc 
        = (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__jal)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_IDNPC_valid))
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCREG__DOT__jumpc
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__PCREG__DOT__RegPc);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_3 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_2) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___msb_T_2)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_3 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_2) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___msb_T_2)));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2342 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___c_first_T) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT____VdfgTmp_h95ec52b7__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_sizes_set_interm 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2482)
            ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_size) 
                     << 1U)) : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_sizes_set_interm 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2478)
            ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_size) 
                     << 1U)) : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_sizes_set_interm 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2478)
            ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_size) 
                     << 1U)) : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_sizes_set_interm 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2476)
            ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_size) 
                     << 1U)) : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_sizes_set_interm 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2342)
            ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_size) 
                     << 1U)) : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___T_2342 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_opcode_MPORT_en) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT____VdfgTmp_h95ec52b7__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_sizes_set_interm 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2618)
            ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size) 
                     << 1U)) : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_sizes_set_interm 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2614)
            ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size) 
                     << 1U)) : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_sizes_set_interm 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2614)
            ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size) 
                     << 1U)) : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_sizes_set_interm 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2617)
            ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size) 
                     << 1U)) : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_sizes_set_interm 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2342)
            ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_size) 
                     << 1U)) : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_incremented) 
                   ^ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_incremented) 
                      >> 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_incremented) 
                   ^ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_incremented) 
                      >> 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2385 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)));
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
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2521 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__a_first_counter_1)));
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
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___readys_readys_T_2 
        = (3U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__readys_unready) 
                  >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__readys_unready)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize_T_6 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize_T_5) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize_T_5)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize_T_6 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize_T_5) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize_T_5)));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_sink 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_grant)
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__d_first)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_MPORT_addr)
                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__sink_r))
            : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_sink 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass)
            ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_sink));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_sink 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__q_grant)
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__d_first)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_MPORT_addr)
                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__sink_r))
            : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_sink 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass)
            ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_sink));
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
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_mask_T_3 
        = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_mask_T) 
                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___readys_mask_T) 
                       << 1U)));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ_io_deq_ready 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__allowed) 
            >> 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__allowReturn));
    ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___readys_mask_T_3 
        = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___readys_mask_T) 
                    | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___readys_mask_T) 
                       << 1U)));
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
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ_io_deq_ready 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__allowed) 
            >> 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__allowReturn));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_sizes_set_interm 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2342)
            ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__ram_size_MPORT_data) 
                     << 1U)) : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__c_sizes_set_interm 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___T_2342)
            ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_size_MPORT_data) 
                     << 1U)) : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__index 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx) 
                 ^ (4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx) 
                          >> 1U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__index 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx) 
                 ^ (4U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx) 
                          >> 1U))));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_source 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__mapPP));
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
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_1_size 
        = (((IData)((0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize_T_5) 
                                    >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize_T_6) 
                                     >> 2U)))) << 1U) 
              | (IData)((0U != (0xaU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___wsize_T_6))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_sizeOH_shiftAmount 
        = (((IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize_T_6) 
                                  >> 2U)))) << 1U) 
           | (IData)((0U != (0xaU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize_T_6)))));
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
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_source 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__a_repeater_io_deq_bits_source) 
            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__mapPP));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__stall)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor_io_in_a_valid));
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
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_size 
        = (((IData)((0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize_T_5) 
                                    >> 4U)))) << 2U) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_mask_sizeOH_shiftAmount));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__stall)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor_io_in_a_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT___readys_readys_T_2 
        = (3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__readys_unready) 
                  >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__readys_unready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2385 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_i_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__a_allow));
    ysyxSoCFull__DOT__fpga__DOT__xbar__DOT___readys_unready_T_1 
        = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__readys_filter) 
                    | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__readys_filter) 
                       >> 1U)));
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
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor_io_in_a_bits_opcode 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxStateEarly_0)
             ? 4U : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxStateEarly_1)
                            ? 1U : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor_io_in_a_bits_size 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxStateEarly_0)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_size)
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__muxStateEarly_1)
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_1_size)
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_size 
        = (((IData)((0U != (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT___rsize_T_4) 
                                     >> 8U)))) << 3U) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__a_size));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2521 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_i_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__a_allow));
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
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___readys_T 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_i_valid) 
            << 1U) | (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_s_0_state)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__readys_unready 
        = (0x3fU & ((((IData)(ysyxSoCFull__DOT__fpga__DOT__xbar__DOT___readys_unready_T_1) 
                      >> 1U) | ((IData)(ysyxSoCFull__DOT__fpga__DOT__xbar__DOT___readys_unready_T_1) 
                                >> 3U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__readys_mask) 
                                           << 3U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor__DOT___GEN_30 
        = ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor_io_in_a_bits_opcode))
            ? 2U : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor_io_in_a_bits_opcode))
                     ? 1U : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor_io_in_a_bits_opcode))
                              ? 1U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor_io_in_a_bits_opcode))
                                       ? 1U : 0U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_addr 
        = (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__r_size)) 
            & ((0U == (0xfffff000U & (0x1000U ^ (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___out_bits_addr_T_5)))) 
               | ((0U == (0xc0000000U & (0x40000000U 
                                         ^ (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___out_bits_addr_T_5)))) 
                  | (0U == (0x80000000U & (0x80000000U 
                                           ^ (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___out_bits_addr_T_5)))))))
            ? (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___out_bits_addr_T_5)
            : (0x1000U | (7U & (~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4frag__DOT___out_bits_addr_T_5))));
    ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___readys_T 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_i_valid) 
            << 1U) | (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_s_0_state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__beatsLeft))
            ? ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_s_0_state)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_i_valid))
            : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__state_0) 
                & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_s_0_state))) 
               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__state_1) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_i_valid))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2389 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___readys_T_3 
        = (3U & ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___readys_T) 
                 | ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___readys_T) 
                    << 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT___readys_readys_T_2 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__readys_unready) 
                  >> 3U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__readys_unready)));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__repeated_repeater__DOT__full) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__repeated_repeater_io_deq_bits_data 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__repeated_repeater__DOT__saved_data;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_source 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__repeated_repeater__DOT__saved_source;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__repeated_repeater__DOT__saved_opcode;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_size 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__repeated_repeater__DOT__saved_size;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__repeated_repeater_io_deq_bits_data 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__repeated_repeater_io_enq_bits_data;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_source 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor_io_in_a_bits_source;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor_io_in_a_bits_opcode;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_size 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__monitor_io_in_a_bits_size;
    }
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
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__repeat_last 
        = (IData)((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_opcode) 
                    >> 2U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__repeat_count) 
                              == (1U & (~ (1U & (((IData)(7U) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_size)) 
                                                 >> 2U)))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__a_last 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__a_last_counter)) 
           | (0U == ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_opcode))
                      ? 0U : (0x3ffU & (~ (0x3ffU & 
                                           (((IData)(0xfffU) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_size)) 
                                            >> 2U)))))));
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
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_valid 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__beatsLeft))
            ? ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_s_0_state)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_i_valid))
            : (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__state_0) 
                & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_s_0_state))) 
               | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__state_1) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_i_valid))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2525 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__a_first_counter_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___readys_T_3 
        = (3U & ((IData)(ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___readys_T) 
                 | ((IData)(ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___readys_T) 
                    << 1U)));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__earlyWinner_0 
        = ((~ (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___readys_T_3) 
                     << 1U))) & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_s_0_state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__earlyWinner_1 
        = ((~ (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT___readys_T_3))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_i_valid));
    if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__beatsLeft))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__muxStateEarly_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__earlyWinner_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__muxStateEarly_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__earlyWinner_1;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__muxStateEarly_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__state_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__muxStateEarly_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__state_1;
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
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__maybe_full) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_source 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_source
            [0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_opcode
            [0U];
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_source 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_source;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_opcode;
    }
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
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_size 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__maybe_full)
            ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_size
           [0U] : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_bits_size));
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
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__earlyWinner_0 
        = ((~ (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___readys_T_3) 
                     << 1U))) & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_s_0_state)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__earlyWinner_1 
        = ((~ (1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT___readys_T_3))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_i_valid));
    if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__beatsLeft))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxStateEarly_0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__earlyWinner_0;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxStateEarly_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__earlyWinner_1;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxStateEarly_0 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__state_0;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxStateEarly_1 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__state_1;
    }
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
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT___readys_mask_T_3 
        = (7U & ((IData)(ysyxSoCFull__DOT__fpga__DOT__xbar__DOT___readys_mask_T) 
                 | ((IData)(ysyxSoCFull__DOT__fpga__DOT__xbar__DOT___readys_mask_T) 
                    << 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_o_ready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_1)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__isLastState));
    if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_opcode))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_o_last 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__last;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_ready 
            = ((~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__last)) 
                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_last) 
                      | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__state) 
                         >> 3U)))) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_o_ready));
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_o_last 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_last;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_ready 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_o_ready;
    }
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
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__full) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__saved_param;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_size 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__saved_size;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_param;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_size 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_size;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_size 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__maybe_full)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_size
           [0U] : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_size));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source 
        = (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__saved_source)
                     : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                        >> 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__maybe_full)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_source
           [0U] : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source));
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_corrupt 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__muxStateEarly_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_corrupt));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__muxStateEarly_1) {
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__a_isSupported) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_param 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_param;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_opcode;
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_param = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode = 4U;
        }
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_param = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__deq__DOT__ram_data_MPORT_data 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__muxStateEarly_0)
             ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_opcode))
                 ? (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__logic_out_hi)) 
                     << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__logic_out_lo)))
                 : ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_param))
                     ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__adder_out
                     : (((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_param)) 
                         == (1U & (((1U & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__a_a_ext 
                                                   >> 0x3fU))) 
                                    == (1U & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__a_d_ext 
                                                      >> 0x3fU))))
                                    ? (~ (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__adder_out 
                                                  >> 0x3fU)))
                                    : ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_param) 
                                              >> 1U)) 
                                       == (1U & (IData)(
                                                        (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__a_a_ext 
                                                         >> 0x3fU)))))))
                         ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_data
                         : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_d_0_data)))
             : 0ULL) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__muxStateEarly_1)
                         ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics_auto_in_a_bits_data
                         : 0ULL));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_mask 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__muxStateEarly_0)
             ? ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_acc_5) 
                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_eq_5) 
                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_address)) 
                 << 7U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_acc_5) 
                             | ((~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_address) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_eq_5))) 
                            << 6U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_acc_4) 
                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_eq_4) 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_address)) 
                                       << 5U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_acc_4) 
                                                   | ((~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_address) 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_eq_4))) 
                                                  << 4U) 
                                                 | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_acc_3) 
                                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_eq_3) 
                                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_address)) 
                                                     << 3U) 
                                                    | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_acc_3) 
                                                         | ((~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_address) 
                                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_eq_3))) 
                                                        << 2U) 
                                                       | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_acc_2) 
                                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_eq_2) 
                                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_address)) 
                                                           << 1U) 
                                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_acc_2) 
                                                             | ((~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_address) 
                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__source_c_bits_a_mask_eq_2))))))))))
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__muxStateEarly_1)
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_mask)
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__muxStateEarly_0)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_size)
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__muxStateEarly_1)
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_size)
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__muxStateEarly_0)
             ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_address
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__muxStateEarly_1)
                       ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_address
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__muxStateEarly_0)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__cam_a_0_bits_source)
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__muxStateEarly_1)
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_a_bits_source)
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT____VdfgTmp_he7c815ba__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__muxStateEarly_1) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__a_isSupported)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT____VdfgTmp_h6e76a9e1__0)));
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
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__qa_q_io_enq_bits_last 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_o_last) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__isLastState));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT___GEN_2 
        = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__state))
            ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_opcode))
                ? 0U : 3U) : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__state))
                               ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_o_last)
                                   ? 0U : 3U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__state)));
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
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_corrupt 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxStateEarly_0) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_corrupt));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxStateEarly_1) {
        if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__a_isSupported) {
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_param 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_param;
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode 
                = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_opcode;
        } else {
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_param = 0U;
            vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode = 4U;
        }
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_param = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__ram_data_MPORT_data 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxStateEarly_0)
             ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_opcode))
                 ? (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__logic_out_hi)) 
                     << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__logic_out_lo)))
                 : ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_param))
                     ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__adder_out
                     : (((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_param)) 
                         == (1U & (((1U & (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__a_a_ext 
                                                   >> 0x3fU))) 
                                    == (1U & (IData)(
                                                     (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__a_d_ext 
                                                      >> 0x3fU))))
                                    ? (~ (IData)((vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__adder_out 
                                                  >> 0x3fU)))
                                    : ((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_param) 
                                              >> 1U)) 
                                       == (1U & (IData)(
                                                        (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__a_a_ext 
                                                         >> 0x3fU)))))))
                         ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_data
                         : vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_d_0_data)))
             : 0ULL) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxStateEarly_1)
                         ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics_auto_in_a_bits_data
                         : 0ULL));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__ram_strb_MPORT_data 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxStateEarly_0)
             ? ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_acc_5) 
                  | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_eq_5) 
                     & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_address)) 
                 << 7U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_acc_5) 
                             | ((~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_address) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_eq_5))) 
                            << 6U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_acc_4) 
                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_eq_4) 
                                           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_address)) 
                                       << 5U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_acc_4) 
                                                   | ((~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_address) 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_eq_4))) 
                                                  << 4U) 
                                                 | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_acc_3) 
                                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_eq_3) 
                                                         & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_address)) 
                                                     << 3U) 
                                                    | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_acc_3) 
                                                         | ((~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_address) 
                                                            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_eq_3))) 
                                                        << 2U) 
                                                       | ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_acc_2) 
                                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_eq_2) 
                                                               & vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_address)) 
                                                           << 1U) 
                                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_acc_2) 
                                                             | ((~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_address) 
                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__source_c_bits_a_mask_eq_2))))))))))
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxStateEarly_1)
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_mask)
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxStateEarly_0)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_size)
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxStateEarly_1)
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_size)
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxStateEarly_0)
             ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_address
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxStateEarly_1)
                       ? vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_address
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxStateEarly_0)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__cam_a_0_bits_source)
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxStateEarly_1)
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_a_bits_source)
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_he7c815ba__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__muxStateEarly_1) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__a_isSupported)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT____VdfgTmp_h14e6d394__0)));
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
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__full) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_a_bits_param 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__saved_param;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_mask 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__saved_mask;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__saved_opcode;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_size_MPORT_data 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__saved_size;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_a_bits_address 
            = (0x1fffU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__saved_address));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_source_MPORT_data 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__saved_source;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_a_bits_param 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_param;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_mask 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_mask;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_size_MPORT_data 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_a_bits_address 
            = (0x1fffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_source_MPORT_data 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source;
    }
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_42 
        = ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))
            ? 2U : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))
                     ? 1U : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))
                              ? 1U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))
                                       ? 1U : 0U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_282 
        = ((0U == (0xfffff000U & (0x1000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address))) 
           | (0U == (0x80000000U & (0x80000000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_2 
        = (IData)((0U == (6U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_3 
        = (IData)((2U == (6U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_4 
        = (IData)((4U == (6U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_5 
        = (IData)((6U == (6U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc 
        = (1U & ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)) 
                 | (1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address 
                              >> 2U)) & (((IData)(1U) 
                                          << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size))) 
                                         >> 2U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size))) 
                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address) 
                          >> 2U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_a_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
           & (0U == (0x80000000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
           & (0U == (0x80000000U & (0x80000000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok 
        = ((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source) 
                         >> 4U))) | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source) 
                                                   >> 4U))) 
                                     | ((2U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source) 
                                                   >> 4U))) 
                                        | ((3U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source) 
                                                      >> 4U))) 
                                           | ((4U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source) 
                                                   >> 4U))) 
                                              | ((5U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source) 
                                                      >> 4U))) 
                                                 | ((6U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source) 
                                                         >> 4U))) 
                                                    | (7U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source) 
                                                           >> 4U))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_253 
        = (IData)(((0U == (0x70U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))) 
                   & (6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size))));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___GEN_22 
        = ((0x14U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
            ? 0U : ((0x13U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                     ? 0U : ((0x12U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                              ? 0U : ((0x11U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                       ? 0U : ((0x10U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                    ? 0x16U
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                     ? 0x15U
                                                     : 
                                                    ((0xdU 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                      ? 0x14U
                                                      : 
                                                     ((0xcU 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                       ? 0x13U
                                                       : 
                                                      ((0xbU 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                        ? 0x12U
                                                        : 
                                                       ((0xaU 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                         ? 0x11U
                                                         : 
                                                        ((9U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                          ? 0x10U
                                                          : 
                                                         ((8U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                           ? 0xfU
                                                           : 
                                                          ((7U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                            ? 0xeU
                                                            : 
                                                           ((6U 
                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                             ? 0xdU
                                                             : 
                                                            ((5U 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                              ? 0xcU
                                                              : 
                                                             ((4U 
                                                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                               ? 0xbU
                                                               : 
                                                              ((3U 
                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                                ? 0xaU
                                                                : 
                                                               ((2U 
                                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                                 ? 9U
                                                                 : 
                                                                ((1U 
                                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                                  ? 8U
                                                                  : 7U))))))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__deq__DOT__ram_last_MPORT_data 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__counter)) 
           | (0U == ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT____VdfgTmp_he7c815ba__0)
                      ? 0U : (7U & (~ (7U & (((IData)(0x3fU) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)) 
                                             >> 3U)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_3 
        = (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_4)) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__write_3) 
               != (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT____VdfgTmp_he7c815ba__0))))) 
           | (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_4)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_2 
        = (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_3)) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__write_2) 
               != (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT____VdfgTmp_he7c815ba__0))))) 
           | (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_3)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_6 
        = (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_7)) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__write_6) 
               != (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT____VdfgTmp_he7c815ba__0))))) 
           | (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_7)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_5 
        = (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_6)) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__write_5) 
               != (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT____VdfgTmp_he7c815ba__0))))) 
           | (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_6)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_4 
        = (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_5)) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__write_4) 
               != (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT____VdfgTmp_he7c815ba__0))))) 
           | (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_5)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_1 
        = (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_2)) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__write_1) 
               != (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT____VdfgTmp_he7c815ba__0))))) 
           | (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_0 
        = (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_1)) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__write) 
               != (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT____VdfgTmp_he7c815ba__0))))) 
           | (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_1)));
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
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater__DOT__full) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_param 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater__DOT__saved_param;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_mask 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater__DOT__saved_mask;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater__DOT__saved_opcode;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_size_MPORT_data 
            = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater__DOT__saved_size));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_address 
            = (0x1fffU & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater__DOT__saved_address));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater__DOT__saved_source;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_param 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_param;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_mask 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__ram_strb_MPORT_data;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_size_MPORT_data 
            = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_address 
            = (0x1fffU & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source_MPORT_data 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data;
    }
    ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___GEN_30 
        = ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))
            ? 2U : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))
                     ? 1U : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))
                              ? 1U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))
                                       ? 1U : 0U))));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT__maybe_full) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ram_tl_state_size_MPORT_data 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT__ram_echo_tl_state_size
            [0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ram_tl_state_source_MPORT_data 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source
            [0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_wen 
            = (1U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT__ram_wen
               [0U]);
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ram_tl_state_size_MPORT_data 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ram_tl_state_source_MPORT_data 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq_io_deq_bits_wen 
            = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_he7c815ba__0)));
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_size_MPORT_data 
        = ((3U <= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size)))
            ? 3U : (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size)));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__maybe_full) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__ram_tl_state_size_MPORT_data 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_size
            [0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_len 
            = (0xffU & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_len
               [0U]);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_addr 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr
            [0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__ram_tl_state_source_MPORT_data 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source
            [0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_wen 
            = (1U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_wen
               [0U]);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_size 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_size
            [0U];
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__ram_tl_state_size_MPORT_data 
            = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_len 
            = (0xffU & (~ (0xffU & (((IData)(0x7ffU) 
                                     << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size))) 
                                    >> 3U))));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_addr 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__ram_tl_state_source_MPORT_data 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_wen 
            = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_he7c815ba__0)));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_size 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_size_MPORT_data;
    }
    __VdfgTmp_hcaf7d2db__0 = (1U & ((~ (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data 
                                        >> 2U)) & (
                                                   ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size))) 
                                                   >> 2U)));
    __VdfgTmp_hcc218c8f__0 = (1U & ((((IData)(1U) << 
                                      (3U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size))) 
                                     & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data) 
                                    >> 2U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_2 
        = (IData)((0U == (6U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_3 
        = (IData)((2U == (6U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_4 
        = (IData)((4U == (6U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_5 
        = (IData)((6U == (6U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_valid) 
           & (0U == (0xc0000000U & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_a_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_valid) 
           & (0U == (0xc0000000U & (0x40000000U ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_valid) 
           & (0U == (0x80000000U & (0x80000000U ^ vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_259 
        = (IData)(((0U == (0x70U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))) 
                   & (6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___T_242 
        = (IData)(((0U == (0x70U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))) 
                   & (6U >= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__source_ok 
        = ((0U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data) 
                         >> 4U))) | ((1U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data) 
                                                   >> 4U))) 
                                     | ((2U == (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data) 
                                                   >> 4U))) 
                                        | ((3U == (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data) 
                                                      >> 4U))) 
                                           | ((4U == 
                                               (7U 
                                                & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data) 
                                                   >> 4U))) 
                                              | ((5U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data) 
                                                      >> 4U))) 
                                                 | ((6U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data) 
                                                         >> 4U))) 
                                                    | (7U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data) 
                                                           >> 4U))))))))));
    ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___GEN_22 
        = ((0x14U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))
            ? 0U : ((0x13U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))
                     ? 0U : ((0x12U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))
                              ? 0U : ((0x11U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))
                                       ? 0U : ((0x10U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))
                                                ? 0U
                                                : (
                                                   (0xfU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))
                                                    ? 0x16U
                                                    : 
                                                   ((0xeU 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))
                                                     ? 0x15U
                                                     : 
                                                    ((0xdU 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))
                                                      ? 0x14U
                                                      : 
                                                     ((0xcU 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))
                                                       ? 0x13U
                                                       : 
                                                      ((0xbU 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))
                                                        ? 0x12U
                                                        : 
                                                       ((0xaU 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))
                                                         ? 0x11U
                                                         : 
                                                        ((9U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))
                                                          ? 0x10U
                                                          : 
                                                         ((8U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))
                                                           ? 0xfU
                                                           : 
                                                          ((7U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))
                                                            ? 0xeU
                                                            : 
                                                           ((6U 
                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))
                                                             ? 0xdU
                                                             : 
                                                            ((5U 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))
                                                              ? 0xcU
                                                              : 
                                                             ((4U 
                                                               == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))
                                                               ? 0xbU
                                                               : 
                                                              ((3U 
                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))
                                                                ? 0xaU
                                                                : 
                                                               ((2U 
                                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))
                                                                 ? 9U
                                                                 : 
                                                                ((1U 
                                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))
                                                                  ? 8U
                                                                  : 7U))))))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__ram_last_MPORT_data 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__counter)) 
           | (0U == ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_he7c815ba__0)
                      ? 0U : (0x1fU & (~ (0x1fU & (
                                                   ((IData)(0xffU) 
                                                    << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size)) 
                                                   >> 3U)))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__deq__DOT__ram_last_MPORT_data 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__counter)) 
           | (0U == ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_he7c815ba__0)
                      ? 0U : (7U & (~ (7U & (((IData)(0x3fU) 
                                              << (7U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size))) 
                                             >> 3U)))))));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__deq__DOT__maybe_full) {
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT__ram_data_MPORT_data 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__deq__DOT__ram_data
            [0U];
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT__ram_strb_MPORT_data 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__deq__DOT__ram_strb
            [0U];
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT__ram_last_MPORT_data 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__deq__DOT__ram_last
            [0U];
    } else {
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT__ram_data_MPORT_data 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__ram_data_MPORT_data;
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT__ram_strb_MPORT_data 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__ram_strb_MPORT_data;
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT__ram_last_MPORT_data 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__deq__DOT__ram_last_MPORT_data;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_3 
        = (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_4)) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__write_3) 
               != (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_he7c815ba__0))))) 
           | (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_4)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_2 
        = (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_3)) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__write_2) 
               != (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_he7c815ba__0))))) 
           | (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_3)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_3 
        = (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_4)) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__write_3) 
               != (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_he7c815ba__0))))) 
           | (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_4)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_2 
        = (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_3)) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__write_2) 
               != (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_he7c815ba__0))))) 
           | (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_3)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_6 
        = (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_7)) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__write_6) 
               != (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_he7c815ba__0))))) 
           | (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_7)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_5 
        = (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_6)) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__write_5) 
               != (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_he7c815ba__0))))) 
           | (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_6)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_4 
        = (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_5)) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__write_4) 
               != (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_he7c815ba__0))))) 
           | (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_5)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_1 
        = (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_2)) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__write_1) 
               != (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_he7c815ba__0))))) 
           | (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_2)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0 
        = (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_1)) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__write) 
               != (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_he7c815ba__0))))) 
           | (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_6 
        = (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_7)) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__write_6) 
               != (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_he7c815ba__0))))) 
           | (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_7)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_5 
        = (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_6)) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__write_5) 
               != (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_he7c815ba__0))))) 
           | (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_6)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_4 
        = (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_5)) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__write_4) 
               != (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_he7c815ba__0))))) 
           | (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_5)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_1 
        = (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_2)) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__write_1) 
               != (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_he7c815ba__0))))) 
           | (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_2)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_0 
        = (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_1)) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__write) 
               != (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_he7c815ba__0))))) 
           | (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_1)));
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
    vlSelf->__VdfgTmp_hca581437__0 = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___same_cycle_resp_T_8) 
                                         & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))));
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
    if ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_44 = 4U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_52 = 4U;
    } else if ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_44 = 4U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_52 = 5U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_44 
            = ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_42;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_52 
            = ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___GEN_42;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___GEN_42 
        = ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))
            ? 2U : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))
                     ? 1U : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))
                              ? 1U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))
                                       ? 1U : 0U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeat_last 
        = (IData)((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data) 
                    >> 2U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeat_count) 
                              == (1U & (~ (1U & (((IData)(7U) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_size_MPORT_data)) 
                                                 >> 2U)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_a_bits_mask 
        = (0xfU & ((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_a_bits_address) 
                           >> 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeat_count)))
                    ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_mask) 
                       >> 4U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_mask)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__mask_acc 
        = (1U & ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_size_MPORT_data)) 
                 | (1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_a_bits_address) 
                              >> 1U)) & (((IData)(1U) 
                                          << (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_size_MPORT_data))) 
                                         >> 1U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_size_MPORT_data)) 
                 | (1U & ((((IData)(1U) << (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_size_MPORT_data))) 
                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_a_bits_address)) 
                          >> 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size))) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_2))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size))) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_3))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size))) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_4))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size))) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_5))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2249 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_a_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_a_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_a_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_a_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__full) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_a_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___T_1216 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___GEN_43 
        = ((0x29U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
            ? 1U : ((0x28U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                     ? 1U : ((0x27U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                              ? 1U : ((0x26U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                       ? 1U : ((0x25U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                ? 1U
                                                : (
                                                   (0x24U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                    ? 1U
                                                    : 
                                                   ((0x23U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                     ? 1U
                                                     : 
                                                    ((0x22U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                      ? 1U
                                                      : 
                                                     ((0x21U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                       ? 1U
                                                       : 
                                                      ((0x20U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                        ? 1U
                                                        : 
                                                       ((0x1fU 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                         ? 0U
                                                         : 
                                                        ((0x1eU 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                          ? 0U
                                                          : 
                                                         ((0x1dU 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                           ? 0U
                                                           : 
                                                          ((0x1cU 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                            ? 0U
                                                            : 
                                                           ((0x1bU 
                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                             ? 0U
                                                             : 
                                                            ((0x1aU 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                              ? 0U
                                                              : 
                                                             ((0x19U 
                                                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                               ? 0U
                                                               : 
                                                              ((0x18U 
                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                                ? 0U
                                                                : 
                                                               ((0x17U 
                                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                                 ? 0U
                                                                 : 
                                                                ((0x16U 
                                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                                  ? 0U
                                                                  : 
                                                                 ((0x15U 
                                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                                   ? 0U
                                                                   : (IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___GEN_22))))))))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___GEN_151 
        = ((0x15U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_0)
            : ((0x14U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_0)
                : ((0x13U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_0)
                    : ((0x12U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_0)
                        : ((0x11U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_0)
                            : ((0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__idStall_0)
                                : ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_23)
                                    : ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_22)
                                        : ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_21)
                                            : ((0xcU 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_20)
                                                : (
                                                   (0xbU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_19)
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_18)
                                                     : 
                                                    ((9U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_17)
                                                      : 
                                                     ((8U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_16)
                                                       : 
                                                      ((7U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_15)
                                                        : 
                                                       ((6U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_14)
                                                         : 
                                                        ((5U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                          ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_13)
                                                          : 
                                                         ((4U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                           ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_12)
                                                           : 
                                                          ((3U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_11)
                                                            : 
                                                           ((2U 
                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_10)
                                                             : 
                                                            ((1U 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_9)
                                                              : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_8))))))))))))))))))))));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__maybe_full) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_size 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_size
            [0U];
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_source
            [0U];
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_size 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_size;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source;
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
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__monitor_io_in_a_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__stall)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer__DOT__monitor_io_in_a_valid));
    if ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___GEN_32 = 4U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___GEN_40 = 4U;
    } else if ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_bits_opcode))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___GEN_32 = 4U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___GEN_40 = 5U;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___GEN_32 
            = ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___GEN_30;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___GEN_40 
            = ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___GEN_30;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___GEN_42 
        = ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))
            ? 2U : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))
                     ? 1U : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))
                              ? 1U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data))
                                       ? 1U : 0U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeat_last 
        = (IData)((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_opcode_MPORT_data) 
                    >> 2U) | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeat_count) 
                              == (1U & (~ (1U & (((IData)(7U) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_size_MPORT_data)) 
                                                 >> 2U)))))));
    if (vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT__maybe_full) {
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1_io_deq_bits_len 
            = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT__ram_len
            [0U];
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1_io_deq_bits_addr 
            = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT__ram_addr
            [0U];
    } else {
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1_io_deq_bits_len 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_len;
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1_io_deq_bits_addr 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_addr;
    }
    if (vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq__DOT__maybe_full) {
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_io_deq_bits_len 
            = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq__DOT__ram_len
            [0U];
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_io_deq_bits_addr 
            = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq__DOT__ram_addr
            [0U];
    } else {
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_io_deq_bits_len 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_len;
        vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_io_deq_bits_addr 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq_io_deq_bits_addr;
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_mask 
        = (0xfU & ((1U & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_address) 
                           >> 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeat_count)))
                    ? ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_mask) 
                       >> 4U) : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater_io_deq_bits_mask)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__mask_acc 
        = (1U & ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_size_MPORT_data)) 
                 | (1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_address) 
                              >> 1U)) & (((IData)(1U) 
                                          << (1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_size_MPORT_data))) 
                                         >> 1U)))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_size_MPORT_data)) 
                 | (1U & ((((IData)(1U) << (1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_size_MPORT_data))) 
                           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_bits_address)) 
                          >> 1U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_acc 
        = ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size)) 
           | (IData)(__VdfgTmp_hcaf7d2db__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__mask_acc 
        = ((3U <= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size))) 
           | (IData)(__VdfgTmp_hcaf7d2db__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__mask_acc_1 
        = ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size)) 
           | (IData)(__VdfgTmp_hcc218c8f__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__mask_acc_1 
        = ((3U <= (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size))) 
           | (IData)(__VdfgTmp_hcc218c8f__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_6 
        = ((~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_7 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_2) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data);
    vlSelf->__VdfgTmp_h747910fc__0 = (3U & ((((IData)(1U) 
                                              << (3U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size))) 
                                             >> 1U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_2)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_8 
        = ((~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_3));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_9 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_3) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data);
    vlSelf->__VdfgTmp_h7140e95f__0 = (3U & ((((IData)(1U) 
                                              << (3U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size))) 
                                             >> 1U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_3)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_10 
        = ((~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_4));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_11 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_4) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data);
    vlSelf->__VdfgTmp_hdab9007d__0 = (3U & ((((IData)(1U) 
                                              << (3U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size))) 
                                             >> 1U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_4)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_12 
        = ((~ vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_5));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_13 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_5) 
           & vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr_MPORT_data);
    vlSelf->__VdfgTmp_h3986a873__0 = (3U & ((((IData)(1U) 
                                              << (3U 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size))) 
                                             >> 1U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__mask_eq_5)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2249 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater__DOT___T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_a_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeated_repeater__DOT__full) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_a_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT___T_1216 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_a_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor__DOT__a_first_counter_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT___T_1216 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_177 
        = ((0xcU >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_a_bits_size)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor__DOT__source_ok));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___GEN_43 
        = ((0x29U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))
            ? 1U : ((0x28U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))
                     ? 1U : ((0x27U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))
                              ? 1U : ((0x26U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))
                                       ? 1U : ((0x25U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))
                                                ? 1U
                                                : (
                                                   (0x24U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))
                                                    ? 1U
                                                    : 
                                                   ((0x23U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))
                                                     ? 1U
                                                     : 
                                                    ((0x22U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))
                                                      ? 1U
                                                      : 
                                                     ((0x21U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))
                                                       ? 1U
                                                       : 
                                                      ((0x20U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))
                                                        ? 1U
                                                        : 
                                                       ((0x1fU 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))
                                                         ? 0U
                                                         : 
                                                        ((0x1eU 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))
                                                          ? 0U
                                                          : 
                                                         ((0x1dU 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))
                                                           ? 0U
                                                           : 
                                                          ((0x1cU 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))
                                                            ? 0U
                                                            : 
                                                           ((0x1bU 
                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))
                                                             ? 0U
                                                             : 
                                                            ((0x1aU 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))
                                                              ? 0U
                                                              : 
                                                             ((0x19U 
                                                               == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))
                                                               ? 0U
                                                               : 
                                                              ((0x18U 
                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))
                                                                ? 0U
                                                                : 
                                                               ((0x17U 
                                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))
                                                                 ? 0U
                                                                 : 
                                                                ((0x16U 
                                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))
                                                                  ? 0U
                                                                  : 
                                                                 ((0x15U 
                                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))
                                                                   ? 0U
                                                                   : (IData)(ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___GEN_22))))))))))))))))))))));
    if ((0x15U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_151 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___GEN_151 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_0;
    } else if ((0x14U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_151 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___GEN_151 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_0;
    } else if ((0x13U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_151 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___GEN_151 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_0;
    } else if ((0x12U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_151 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___GEN_151 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_0;
    } else if ((0x11U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_151 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___GEN_151 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_0;
    } else if ((0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_151 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__idStall_0;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___GEN_151 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__idStall_0;
    } else if ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_151 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_23;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___GEN_151 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_23;
    } else if ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_151 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_22;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___GEN_151 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_22;
    } else if ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_151 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_21;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___GEN_151 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_21;
    } else if ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_151 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_20;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___GEN_151 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_20;
    } else if ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_151 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_19;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___GEN_151 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_19;
    } else if ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_151 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_18;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___GEN_151 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_18;
    } else if ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_151 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_17;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___GEN_151 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_17;
    } else if ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_151 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_16;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___GEN_151 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_16;
    } else if ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_151 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_15;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___GEN_151 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_15;
    } else if ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_151 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_14;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___GEN_151 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_14;
    } else if ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_151 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_13;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___GEN_151 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_13;
    } else if ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_151 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_12;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___GEN_151 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_12;
    } else if ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_151 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_11;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___GEN_151 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_11;
    } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_151 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_10;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___GEN_151 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_10;
    } else if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source_MPORT_data))) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_151 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_9;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___GEN_151 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_9;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT___GEN_151 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_8;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT___GEN_151 
            = vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_8;
    }
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
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__mask 
        = ((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__mask_acc_1) 
                   << 3U) | (0xfffffff8U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_a_bits_address) 
                                             << 2U) 
                                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_a_bits_address) 
                                               << 3U))))) 
           | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__mask_acc_1) 
                | (2U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_a_bits_address)))) 
               << 2U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__mask_acc) 
                           | (1U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_a_bits_address)))) 
                          << 1U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__mask_acc) 
                                    | (0U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_a_bits_address)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_5) 
             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_5) 
                & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address)) 
            << 7U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_5) 
                        | ((~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address) 
                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_5))) 
                       << 6U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_4) 
                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_4) 
                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address)) 
                                  << 5U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_4) 
                                              | ((~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address) 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_4))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_3) 
                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_3) 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address)) 
                                                << 3U) 
                                               | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_3) 
                                                    | ((~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address) 
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_3))) 
                                                   << 2U) 
                                                  | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_2) 
                                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_2) 
                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address)) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_acc_2) 
                                                        | ((~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address) 
                                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask_eq_2))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT___GEN_0 
        = (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeat_last)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T)) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeated_repeater__DOT__full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2252 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___a_first_T) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__a_first_counter_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2249 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_a_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__a_first_counter_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___a_first_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_a_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___GEN_64 
        = ((0x3eU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
            ? 2U : ((0x3dU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                     ? 2U : ((0x3cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                              ? 2U : ((0x3bU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                       ? 2U : ((0x3aU 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                ? 2U
                                                : (
                                                   (0x39U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                    ? 2U
                                                    : 
                                                   ((0x38U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                     ? 2U
                                                     : 
                                                    ((0x37U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                      ? 2U
                                                      : 
                                                     ((0x36U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                       ? 2U
                                                       : 
                                                      ((0x35U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                        ? 2U
                                                        : 
                                                       ((0x34U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                         ? 2U
                                                         : 
                                                        ((0x33U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                          ? 2U
                                                          : 
                                                         ((0x32U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                           ? 2U
                                                           : 
                                                          ((0x31U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                            ? 2U
                                                            : 
                                                           ((0x30U 
                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                             ? 2U
                                                             : 
                                                            ((0x2fU 
                                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                              ? 1U
                                                              : 
                                                             ((0x2eU 
                                                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                               ? 1U
                                                               : 
                                                              ((0x2dU 
                                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                                ? 1U
                                                                : 
                                                               ((0x2cU 
                                                                 == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                                 ? 1U
                                                                 : 
                                                                ((0x2bU 
                                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                                  ? 1U
                                                                  : 
                                                                 ((0x2aU 
                                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source))
                                                                   ? 1U
                                                                   : (IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT___GEN_43))))))))))))))))))))));
}
