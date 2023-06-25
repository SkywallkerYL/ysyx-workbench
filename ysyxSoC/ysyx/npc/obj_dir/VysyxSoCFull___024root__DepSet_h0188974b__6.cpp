// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull___024root.h"

extern const VlUnpacked<CData/*1:0*/, 64> VysyxSoCFull__ConstPool__TABLE_hbafcec00_0;
extern const VlUnpacked<CData/*1:0*/, 256> VysyxSoCFull__ConstPool__TABLE_h16da4ece_0;
extern const VlUnpacked<CData/*1:0*/, 1024> VysyxSoCFull__ConstPool__TABLE_heacec875_0;

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__9(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__9\n"); );
    // Init
    QData/*63:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___inflight_opcodes_T_1;
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___inflight_opcodes_T_1 = 0;
    QData/*63:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___inflight_opcodes_T_1;
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___inflight_opcodes_T_1 = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT___bundleOut_0_a_valid_T_1;
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT___bundleOut_0_a_valid_T_1 = 0;
    QData/*63:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___inflight_opcodes_T_1;
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___inflight_opcodes_T_1 = 0;
    QData/*63:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___inflight_opcodes_T_1;
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___inflight_opcodes_T_1 = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT___wen_T_13;
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT___wen_T_13 = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT____VdfgTmp_h53ad6d35__0;
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT____VdfgTmp_h53ad6d35__0 = 0;
    QData/*63:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___inflight_opcodes_T_1;
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___inflight_opcodes_T_1 = 0;
    QData/*63:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___inflight_opcodes_T_1;
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___inflight_opcodes_T_1 = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____VdfgTmp_ha9af371e__0;
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____VdfgTmp_ha9af371e__0 = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____VdfgTmp_hb7fd6708__0;
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____VdfgTmp_hb7fd6708__0 = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____VdfgTmp_h5a258ae8__0;
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____VdfgTmp_h5a258ae8__0 = 0;
    CData/*7:0*/ ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_unready_T_1;
    ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_unready_T_1 = 0;
    CData/*7:0*/ ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_unready_T_8;
    ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_unready_T_8 = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_4;
    ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_4 = 0;
    CData/*3:0*/ ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_mask_T;
    ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_mask_T = 0;
    CData/*3:0*/ ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_mask_T_8;
    ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_mask_T_8 = 0;
    SData/*9:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*7:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    VlWide<4>/*127:0*/ __Vtemp_h65aa16c4__0;
    VlWide<4>/*127:0*/ __Vtemp_h63754c62__0;
    VlWide<4>/*127:0*/ __Vtemp_h65aa16c4__1;
    VlWide<4>/*127:0*/ __Vtemp_he2e2b284__0;
    VlWide<4>/*127:0*/ __Vtemp_h39716164__0;
    VlWide<4>/*127:0*/ __Vtemp_hb7dd74f8__0;
    VlWide<4>/*127:0*/ __Vtemp_heeb33ca7__0;
    // Body
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT___bundleOut_0_a_valid_T_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__stall)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass)) 
           & (IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT___bundleOut_0_a_valid_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT___bundleOut_0_a_valid_T_1) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___T_739 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_first_counter_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___a_first_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_a_valid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__da_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__a_last) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__idle)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_opcode_MPORT_en 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__maybe_full)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___a_first_T)
            : ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_ready)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___a_first_T)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___T_742 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___a_first_T) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_first_counter_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__do_deq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__maybe_full) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_ready) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___T_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_o_ready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_1)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__earlyWinner_1 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__da_valid;
    if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__beatsLeft))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_valid 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__da_valid;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_denied 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__earlyWinner_1;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_valid 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__state_1) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__da_valid));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_denied 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__state_1;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___T_742) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_opcodes_set_interm 
            = (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode) 
                     << 1U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_sizes_set_interm 
            = (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size) 
                     << 1U));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_opcodes_set_interm = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_sizes_set_interm = 0U;
    }
    if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_opcode))) {
        if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___T_3) {
            if ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__state) 
                  >> 3U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__last))) {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___GEN_8[0U] = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___GEN_8[1U] = 0U;
                vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___GEN_8[2U] = 0U;
            } else {
                vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___GEN_8[0U] 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide[1U];
                vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___GEN_8[1U] 
                    = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide[2U];
                vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___GEN_8[2U] 
                    = (7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide[3U]);
            }
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___GEN_8[0U] 
                = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__shift;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___GEN_8[1U] = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___GEN_8[2U] = 0U;
        }
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___GEN_8[0U] 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__shift;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___GEN_8[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT___GEN_8[2U] = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT___valid_0_T_6 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___T) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT___wen_T_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_1) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT___wen_T_10 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___T) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_1));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT___wen_T_13 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___T) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___T_690 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__d_first_counter_1)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q_io_deq_ready) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__wen 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT___wen_T_3;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__wen_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT___wen_T_10;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__wen 
            = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_0)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___T));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__wen_1 
            = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_1)) 
               & (IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT___wen_T_13));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT___valid_1_T_6 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT___wen_T_13) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_1));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_denied) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_d_bits_corrupt 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__beats1_opdata;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_d_bits_source 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_size 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__da_bits_opcode;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_d_bits_corrupt = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_d_bits_source = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_size = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_opcode = 0U;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_valid;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_denied 
            = (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_denied));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_corrupt 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_d_bits_corrupt;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_source 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_d_bits_source;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_size 
            = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_size));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_opcode;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_denied 
            = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_2) 
                     >> 2U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_corrupt 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_corrupt;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_source 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_source;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_size 
            = (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___GEN_3));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___T_750 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first_counter_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__readys_filter_lo 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_valid) 
            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___a_opcode_lookup_T_1 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__inflight_opcodes 
           >> ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_d_bits_source) 
               << 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT____VdfgTmp_heef927f8__0 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__d_first_counter_2)) 
           & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_opcode)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__beatsLeft))
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_valid))
            : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__state_0)) 
               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_valid) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__state_1))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_830 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___T_830 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__d_first_counter_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__readys_filter 
        = ((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__readys_mask)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__readys_filter_lo)) 
            << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__readys_filter_lo));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & (IData)((7ULL & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                         >> 1U)))))
            ? 2U : ((4U == (7U & (IData)((7ULL & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                  >> 1U)))))
                     ? 1U : ((3U == (7U & (IData)((7ULL 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                      >> 1U)))))
                              ? 1U : ((2U == (7U & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                       ? 1U : 0U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__inflight_opcodes 
           >> ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_source) 
               << 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT____VdfgTmp_h5d3bc996__0 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first_counter_2)) 
           & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__readys_unready 
        = (0xfU & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__readys_filter) 
                     >> 1U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__readys_filter) 
                               >> 2U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__readys_mask) 
                                          << 2U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & (IData)((7ULL & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                         >> 1U)))))
            ? 2U : ((4U == (7U & (IData)((7ULL & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                  >> 1U)))))
                     ? 1U : ((3U == (7U & (IData)((7ULL 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                      >> 1U)))))
                              ? 1U : ((2U == (7U & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                       ? 1U : 0U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT___readys_readys_T_2 
        = (3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__readys_unready) 
                  >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__readys_unready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT___readys_mask_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__readys_filter_lo) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT___readys_readys_T_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__earlyWinner_1 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT___readys_readys_T_2) 
               >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__earlyWinner_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT___readys_readys_T_2)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid));
    if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__beatsLeft))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__muxStateEarly_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__earlyWinner_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__muxStateEarly_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__earlyWinner_0;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__muxStateEarly_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__state_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__muxStateEarly_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__state_0;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__muxStateEarly_0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_param;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_data 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass)
                ? 0U : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg);
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_param = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_data = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_sink 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__muxStateEarly_0)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_sink)
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__muxStateEarly_1)
                       ? 0x20U : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_denied 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__muxStateEarly_0) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_denied)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__muxStateEarly_1) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_denied)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_corrupt 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__muxStateEarly_0) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_corrupt)) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__muxStateEarly_1) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__beatsDO_opdata_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__muxStateEarly_0)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_source)
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__muxStateEarly_1)
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_source)
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_size 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__muxStateEarly_0)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_size)
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__muxStateEarly_1)
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_size)
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__muxStateEarly_0)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode)
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__muxStateEarly_1)
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_opcode)
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor_io_in_d_bits_corrupt 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_corrupt) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__corrupt_reg));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___same_cycle_resp_T_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__inflight_opcodes 
           >> ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source) 
               << 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__inflight_opcodes 
           >> ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source) 
               << 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___a_opcode_lookup_T_1 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__inflight_opcodes 
           >> ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source) 
               << 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__bundleIn_0_d_bits_data_masked_enable_0 
        = (1U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__count) 
                     & (~ (1U & (((IData)(7U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_size)) 
                                 >> 2U))))) | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__bundleIn_0_d_bits_data_rdata_written_once))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__d_first 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__d_first_counter)) 
           & (6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT____VdfgTmp_h5d3bc996__0 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter_2)) 
           & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT____VdfgTmp_h5d3bc996__0 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__d_first_counter_2)) 
           & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT____VdfgTmp_h4a0938cf__0 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__d_first_counter_2)) 
           & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor_io_in_d_ready 
        = (1U & ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))
                  ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__maybe_full))
                  : (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq__DOT__maybe_full))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__ram_last_MPORT_data 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__d_last_counter)) 
           | (0U == ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode))
                      ? (7U & (~ (7U & (((IData)(0x3fU) 
                                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_size)) 
                                        >> 3U)))) : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__last 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__count) 
                    == (1U & (~ (1U & (((IData)(7U) 
                                        << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_size)) 
                                       >> 2U)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__ram_resp_MPORT_data 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor_io_in_d_bits_corrupt) 
            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_denied))
            ? 2U : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & (IData)((7ULL & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                         >> 1U)))))
            ? 2U : ((4U == (7U & (IData)((7ULL & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                  >> 1U)))))
                     ? 1U : ((3U == (7U & (IData)((7ULL 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                      >> 1U)))))
                              ? 1U : ((2U == (7U & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                       ? 1U : 0U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & (IData)((7ULL & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                         >> 1U)))))
            ? 2U : ((4U == (7U & (IData)((7ULL & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                  >> 1U)))))
                     ? 1U : ((3U == (7U & (IData)((7ULL 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                      >> 1U)))))
                              ? 1U : ((2U == (7U & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                       ? 1U : 0U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & (IData)((7ULL & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                         >> 1U)))))
            ? 2U : ((4U == (7U & (IData)((7ULL & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                  >> 1U)))))
                     ? 1U : ((3U == (7U & (IData)((7ULL 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                      >> 1U)))))
                              ? 1U : ((2U == (7U & (IData)(
                                                           (7ULL 
                                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                       ? 1U : 0U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_id 
        = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq__DOT__maybe_full)
                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq__DOT__ram_id
                 [0U] : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source) 
                         >> 3U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__b_allow 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_id)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__b_count_1)
             : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__b_count_0)) 
           != ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_id)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_count_1)
                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_count_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_in_becho_real_last 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_id)
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__empty)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ram_real_last_MPORT_data)
                : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ram_real_last
               [vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__deq_ptr_value])
            : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__empty)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ram_real_last_MPORT_data)
                : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ram_real_last
               [vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__deq_ptr_value]));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__ram_data_MPORT_data 
        = (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_data)) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__bundleIn_0_d_bits_data_masked_enable_0)
                                          ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_data
                                          : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__bundleIn_0_d_bits_data_rdata_0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_ready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__last)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor_io_in_d_ready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__last));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__latch 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__beatsLeft)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_ready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT___d_first_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT___T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___d_first_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___d_first_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_ready) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__beatsLeft))
               ? (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT___readys_readys_T_2) 
                     >> 1U)) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__state_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_ready) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__beatsLeft))
               ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT___readys_readys_T_2))
               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__state_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___T_830 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__d_first_counter_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___d_first_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor_io_in_d_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_enq_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_enq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_auto_in_d_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_resp 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq__DOT__maybe_full)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq__DOT__ram_resp
           [0U] : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__ram_resp_MPORT_data));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___error_0_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_resp) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__error_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___error_1_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_resp) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__error_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT___GEN_10 
        = (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__last)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT___T)) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__bundleIn_0_d_bits_data_rdata_written_once));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___d_first_T) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT____VdfgTmp_h5d3bc996__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT____VdfgTmp_h68723d34__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___d_first_T) 
           & ((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)) 
              & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__d_first_counter_1))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT___beatsLeft_T_4 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__beatsLeft) 
                   - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___d_first_T)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___d_first_T) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT____VdfgTmp_h5d3bc996__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT____VdfgTmp_h68723d34__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___d_first_T) 
           & ((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)) 
              & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__d_first_counter_1))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__latch 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__beatsLeft)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_ready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__out_1_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_ready) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__beatsLeft))
               ? 0xffffffffU : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__state_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___d_first_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___d_first_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_ready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_ready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_d_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___d_first_T) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT____VdfgTmp_h4a0938cf__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT____VdfgTmp_h3e9bf6c5__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___d_first_T) 
           & ((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_in_d_bits_opcode)) 
              & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__d_first_counter_1))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq__DOT___do_enq_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_enq_valid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT___do_enq_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_enq_valid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___inflight_T_5 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source)))
             : 0xffffU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__inflight_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___inflight_sizes_T_5 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ (0xfULL << ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source) 
                              << 2U))) : 0xffffffffffffffffULL) 
           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__inflight_sizes_1);
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___inflight_opcodes_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT____VdfgTmp_h68723d34__0)
            ? (~ (0xfULL << ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source) 
                             << 2U))) : 0xffffffffffffffffULL);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___inflight_T_5 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source)))
             : 0xffffU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__inflight_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___inflight_sizes_T_5 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ (0xfULL << ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source) 
                              << 2U))) : 0xffffffffffffffffULL) 
           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__inflight_sizes_1);
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___inflight_opcodes_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT____VdfgTmp_h68723d34__0)
            ? (~ (0xfULL << ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source) 
                             << 2U))) : 0xffffffffffffffffULL);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT___T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__out_1_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__da_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__a__DOT__do_deq 
        = (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__a_last)) 
            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__out_1_ready) 
               & (((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__counter)) 
                   | (0U == ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__beats1_opdata)
                              ? (0xfU & (~ (0xfU & 
                                            (((IData)(0x3fU) 
                                              << vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__a__DOT__ram_size
                                              [0U]) 
                                             >> 2U))))
                              : 0U))) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__idle)))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__a__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT___beatsLeft_T_4 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__beatsLeft) 
                   - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___d_first_T)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___d_first_T) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT____VdfgTmp_h5d3bc996__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT____VdfgTmp_h68723d34__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___d_first_T) 
           & ((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_opcode)) 
              & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__d_first_counter_1))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___d_first_T) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT____VdfgTmp_h5d3bc996__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__inc_lo 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___d_first_T) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__counter_3)) 
              & (IData)((4U == (6U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT____VdfgTmp_h68723d34__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___d_first_T) 
           & ((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode)) 
              & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__d_first_counter_1))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_MPORT_en 
        = ((0U != vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__free) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__q_grant) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__d_first) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__xmit) 
                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_ready) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_valid))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___q_last_T 
        = (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__xmit)) 
            | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__stall)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_ready))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___d_first_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__latch 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__beatsLeft)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_d_ready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___d_first_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_d_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__out_1_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_d_ready) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__beatsLeft))
               ? 0xffffffffU : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__state_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___inflight_T_5 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source)))
             : 0xffffU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__inflight_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___inflight_sizes_T_5 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ (0xfULL << ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source) 
                              << 2U))) : 0xffffffffffffffffULL) 
           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__inflight_sizes_1);
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___inflight_opcodes_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT____VdfgTmp_h3e9bf6c5__0)
            ? (~ (0xfULL << ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source) 
                             << 2U))) : 0xffffffffffffffffULL);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__bundleIn_0_bvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__b_allow));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_deq_valid) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_1_rvalid) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lps2__DOT__mps2__DOT__srdataEn) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__hvga__DOT__mvga_ctrl_io_slave_rvalid))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_filter_lo 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__hvga__DOT__mvga_ctrl_io_slave_rvalid) 
            << 3U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lps2__DOT__mps2__DOT__srdataEn) 
                       << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_1_rvalid) 
                                  << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_deq_valid))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT___GEN_12 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT___T) 
               & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__da_bits_opcode)))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__idle));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___inflight_T_5 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_source)))
             : 0xffffU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__inflight_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___inflight_sizes_T_5 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ (0xfULL << ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_source) 
                              << 2U))) : 0xffffffffffffffffULL) 
           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__inflight_sizes_1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___inflight_T_2 
        = (0xffffU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT____VdfgTmp_h68723d34__0)
                        ? (~ ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_source)))
                        : 0xffffU) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__inflight) 
                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___T_682)
                                          ? ((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source))
                                          : 0U))));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___inflight_opcodes_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT____VdfgTmp_h68723d34__0)
            ? (~ (0xfULL << ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_d_bits_source) 
                             << 2U))) : 0xffffffffffffffffULL);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___inflight_T_5 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_source)))
             : 0xffffU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__inflight_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___inflight_sizes_T_5 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ (0xfULL << ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_source) 
                              << 2U))) : 0xffffffffffffffffULL) 
           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__inflight_sizes_1);
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___inflight_opcodes_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT____VdfgTmp_h68723d34__0)
            ? (~ (0xfULL << ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_source) 
                             << 2U))) : 0xffffffffffffffffULL);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT___free_T_1 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data_MPORT_en)
             ? (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__free_sel)
             : 0x1ffffffffULL) & (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__free)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT___ridx_incremented_T_1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_ridx_bin) 
                   + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT___q_last_T)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___d_first_T) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT____VdfgTmp_h5d3bc996__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT____VdfgTmp_h68723d34__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___d_first_T) 
           & ((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_opcode)) 
              & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter_1))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT___beatsLeft_T_4 
        = (0x3ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__beatsLeft) 
                     - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___d_first_T)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT____VdfgTmp_h2d2fe633__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___d_first_T) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT____VdfgTmp_heef927f8__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT____VdfgTmp_h6a74e6bc__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___d_first_T) 
           & ((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error_auto_in_d_bits_opcode)) 
              & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__d_first_counter_1))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT___T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__out_1_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__da_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_a_ready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__a_last)) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__out_1_ready) 
                    & (((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__counter)) 
                        | (0U == ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__beats1_opdata)
                                   ? (0x3ffU & (~ (0x3ffU 
                                                   & (((IData)(0xfffU) 
                                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                                                      >> 2U))))
                                   : 0U))) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__idle)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_in_bvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_in_becho_real_last) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__bundleIn_0_bvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_filter 
        = ((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_filter_lo)) 
            << 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_filter_lo));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___inflight_opcodes_T_2 
        = (ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___inflight_opcodes_T_1 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__inflight_opcodes 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___T_682)
                  ? ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__a_opcodes_set_interm)) 
                     << ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                         << 2U)) : 0ULL)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___inflight_sizes_T_2 
        = (ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___inflight_opcodes_T_1 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__inflight_sizes 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___T_682)
                  ? ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__a_sizes_set_interm)) 
                     << ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                         << 2U)) : 0ULL)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_incremented 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT___ridx_incremented_T_1)
            : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___inflight_T_5 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_source)))
             : 0xffffU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__inflight_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___inflight_sizes_T_5 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ (0xfULL << ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_source) 
                              << 2U))) : 0xffffffffffffffffULL) 
           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__inflight_sizes_1);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___inflight_T_2 
        = (0xffffU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT____VdfgTmp_h68723d34__0)
                        ? (~ ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_source)))
                        : 0xffffU) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__inflight) 
                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___T_742)
                                          ? ((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source))
                                          : 0U))));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___inflight_opcodes_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT____VdfgTmp_h68723d34__0)
            ? (~ (0xfULL << ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_bits_source) 
                             << 2U))) : 0xffffffffffffffffULL);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___inflight_T_5 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT____VdfgTmp_h2d2fe633__0)
             ? (~ ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_d_bits_source)))
             : 0xffffU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__inflight_1));
    __Vtemp_h65aa16c4__0[0U] = 0xffU;
    __Vtemp_h65aa16c4__0[1U] = 0U;
    __Vtemp_h65aa16c4__0[2U] = 0U;
    __Vtemp_h65aa16c4__0[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h63754c62__0, __Vtemp_h65aa16c4__0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___inflight_sizes_T_5[0U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT____VdfgTmp_h2d2fe633__0)
             ? (~ __Vtemp_h63754c62__0[0U]) : 0xffffffffU) 
           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__inflight_sizes_1[0U]);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___inflight_sizes_T_5[1U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT____VdfgTmp_h2d2fe633__0)
             ? (~ __Vtemp_h63754c62__0[1U]) : 0xffffffffU) 
           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__inflight_sizes_1[1U]);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___inflight_sizes_T_5[2U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT____VdfgTmp_h2d2fe633__0)
             ? (~ __Vtemp_h63754c62__0[2U]) : 0xffffffffU) 
           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__inflight_sizes_1[2U]);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___inflight_sizes_T_5[3U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT____VdfgTmp_h2d2fe633__0)
             ? (~ __Vtemp_h63754c62__0[3U]) : 0xffffffffU) 
           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__inflight_sizes_1[3U]);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT___GEN_12 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT___T) 
               & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__da_bits_opcode)))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__idle));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_a_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_0_a_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_a_ready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__stall)) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__bypass)
                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_a_ready)
                     : (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__maybe_full)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_in_bvalid) 
           | ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)) 
              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__hvga__DOT__mvga_ctrl_io_slave_bvalid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_filter_lo_1 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__hvga__DOT__mvga_ctrl_io_slave_bvalid) 
            << 3U) | (((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)) 
                       << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_in_bvalid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_in_rvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid)
            : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_deq_valid) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_0)) 
               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_1_rvalid) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_1)) 
                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lps2__DOT__mps2__DOT__srdataEn) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_2)) 
                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__hvga__DOT__mvga_ctrl_io_slave_rvalid) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_3))))));
    __Vtableidx2 = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_in_rvalid) 
                     << 5U) | (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__Rstate)) 
                                << 4U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DevSram_ar_valid) 
                                           << 3U) | 
                                          (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_in_arready) 
                                            << 2U) 
                                           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__Rstate)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__Rnext 
        = VysyxSoCFull__ConstPool__TABLE_hbafcec00_0
        [__Vtableidx2];
    ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_4 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_r_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_in_rvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hb3cc7068__0 
        = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__Rstate)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_in_rvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____VdfgTmp_h1373a480__0 
        = ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__state)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_in_rvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_r_valid 
        = ((4U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__state)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_in_rvalid));
    ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_unready_T_1 
        = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_filter) 
                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_filter) 
                       >> 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_incremented) 
                   ^ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_incremented) 
                      >> 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___inflight_opcodes_T_2 
        = (ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___inflight_opcodes_T_1 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__inflight_opcodes 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___T_742)
                  ? ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_opcodes_set_interm)) 
                     << ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                         << 2U)) : 0ULL)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___inflight_sizes_T_2 
        = (ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___inflight_opcodes_T_1 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__inflight_sizes 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___T_742)
                  ? ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__a_sizes_set_interm)) 
                     << ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                         << 2U)) : 0ULL)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___T_682 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___a_first_T) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_first_counter_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_a_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_ready 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__requestAIO_0_0) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_a_ready)) 
           | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__a__DOT__maybe_full)) 
              & (0U == (0xc0000000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_filter_1 
        = ((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_filter_lo_1)) 
            << 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_filter_lo_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_84 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_4) 
           | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__sram1_ram__DOT__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____VdfgTmp_h1373a480__0) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__dirtyWriteData));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag0Wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____VdfgTmp_h1373a480__0) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__chooseway)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag1Wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____VdfgTmp_h1373a480__0) 
           & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__chooseway)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag2Wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____VdfgTmp_h1373a480__0) 
           & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__chooseway)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag3Wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____VdfgTmp_h1373a480__0) 
           & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__chooseway)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__sram0_ram__DOT__wen 
        = ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__state)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_r_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready 
        = (0xffU & ((((IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_unready_T_1) 
                      >> 1U) | ((IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_unready_T_1) 
                                >> 3U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask) 
                                           << 4U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__index 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx) 
                 ^ (4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx) 
                          >> 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___inflight_T_2 
        = (0xffffU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT____VdfgTmp_h6a74e6bc__0)
                        ? (~ ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_d_bits_source)))
                        : 0xffffU) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__inflight) 
                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___T_682)
                                          ? ((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source))
                                          : 0U))));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___T_682) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_opcodes_set_interm 
            = (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode) 
                     << 1U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_sizes_set_interm 
            = (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size) 
                     << 1U));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_opcodes_set_interm = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_sizes_set_interm = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__next_flight 
        = (0x3fU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__flight) 
                     + (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__inc_lo) 
                              + ((0x7fffffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___a_first_T) 
                                                 & (0U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__counter)))) 
                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__inc_lo) 
                                    >> 1U))))) - (3U 
                                                  & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___d_first_T) 
                                                      & ((1U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__counter_3)) 
                                                         | (0U 
                                                            == 
                                                            ((1U 
                                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode))
                                                              ? 
                                                             (0xfU 
                                                              & (~ 
                                                                 (0xfU 
                                                                  & (((IData)(0x3fU) 
                                                                      << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_size)) 
                                                                     >> 2U))))
                                                              : 0U)))) 
                                                     + 
                                                     (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___d_first_T) 
                                                       & ((1U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__counter_3)) 
                                                          | (0U 
                                                             == 
                                                             ((1U 
                                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_opcode))
                                                               ? 
                                                              (0xfU 
                                                               & (~ 
                                                                  (0xfU 
                                                                   & (((IData)(0x3fU) 
                                                                       << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_d_bits_size)) 
                                                                      >> 2U))))
                                                               : 0U)))) 
                                                      >> 1U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___T_742 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___a_first_T) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_first_counter_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor_io_in_a_ready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__stall)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_ready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DevSram_b_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_5)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1)
            : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_in_bvalid) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_5_0)) 
               | (((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_5_1)) 
                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_5_3) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__hvga__DOT__mvga_ctrl_io_slave_bvalid)))));
    __Vtableidx3 = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DevSram_aw_valid) 
                     << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_in_awready) 
                                << 6U) | (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__Wstate)) 
                                           << 5U) | 
                                          (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DevSram_w_ready) 
                                            << 4U) 
                                           | (((3U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__Wstate)) 
                                               << 3U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DevSram_b_valid) 
                                                  << 2U) 
                                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__Wstate)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__Wnext 
        = VysyxSoCFull__ConstPool__TABLE_h16da4ece_0
        [__Vtableidx3];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_b_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DevSram_b_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__fnext 
        = ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__fstate))
            ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__fstate))
                ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DevSram_b_valid) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Lsu_b_ready))
                    ? 1U : 3U) : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Lsu_w_valid) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Lsu_w_ready))
                                   ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Lsu_w_valid)
                                       ? 3U : 2U) : 2U))
            : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__fstate))
                ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Lsu_aw_valid) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Lsu_aw_ready))
                    ? 2U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Lsu_aw_valid)
                             ? 1U : ((0x3fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__fencecnt))
                                      ? 0U : 1U))) : 
               ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_fence) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RLSWB_flush)) 
                 & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__state)))
                 ? 1U : 0U)));
    ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_unready_T_8 
        = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_filter_1) 
                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_filter_1) 
                       >> 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag0en[0U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag0Wen) 
           & (0U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag0en[1U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag0Wen) 
           & (0x10U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag0en[2U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag0Wen) 
           & (0x20U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag0en[3U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag0Wen) 
           & (0x30U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag0en[4U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag0Wen) 
           & (0x40U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag0en[5U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag0Wen) 
           & (0x50U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag0en[6U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag0Wen) 
           & (0x60U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag0en[7U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag0Wen) 
           & (0x70U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag0en[8U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag0Wen) 
           & (0x80U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag0en[9U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag0Wen) 
           & (0x90U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag0en[0xaU] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag0Wen) 
           & (0xa0U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag0en[0xbU] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag0Wen) 
           & (0xb0U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag0en[0xcU] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag0Wen) 
           & (0xc0U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag0en[0xdU] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag0Wen) 
           & (0xd0U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag0en[0xeU] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag0Wen) 
           & (0xe0U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag0en[0xfU] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag0Wen) 
           & (0xf0U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag1en[0U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag1Wen) 
           & (0U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag1en[1U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag1Wen) 
           & (0x10U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag1en[2U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag1Wen) 
           & (0x20U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag1en[3U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag1Wen) 
           & (0x30U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag1en[4U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag1Wen) 
           & (0x40U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag1en[5U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag1Wen) 
           & (0x50U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag1en[6U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag1Wen) 
           & (0x60U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag1en[7U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag1Wen) 
           & (0x70U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag1en[8U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag1Wen) 
           & (0x80U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag1en[9U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag1Wen) 
           & (0x90U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag1en[0xaU] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag1Wen) 
           & (0xa0U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag1en[0xbU] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag1Wen) 
           & (0xb0U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag1en[0xcU] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag1Wen) 
           & (0xc0U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag1en[0xdU] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag1Wen) 
           & (0xd0U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag1en[0xeU] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag1Wen) 
           & (0xe0U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag1en[0xfU] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag1Wen) 
           & (0xf0U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag2en[0U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag2Wen) 
           & (0U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag2en[1U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag2Wen) 
           & (0x10U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag2en[2U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag2Wen) 
           & (0x20U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag2en[3U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag2Wen) 
           & (0x30U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag2en[4U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag2Wen) 
           & (0x40U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag2en[5U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag2Wen) 
           & (0x50U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag2en[6U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag2Wen) 
           & (0x60U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag2en[7U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag2Wen) 
           & (0x70U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag2en[8U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag2Wen) 
           & (0x80U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag2en[9U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag2Wen) 
           & (0x90U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag2en[0xaU] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag2Wen) 
           & (0xa0U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag2en[0xbU] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag2Wen) 
           & (0xb0U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag2en[0xcU] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag2Wen) 
           & (0xc0U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag2en[0xdU] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag2Wen) 
           & (0xd0U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag2en[0xeU] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag2Wen) 
           & (0xe0U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag2en[0xfU] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag2Wen) 
           & (0xf0U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag3en[0U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag3Wen) 
           & (0U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag3en[1U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag3Wen) 
           & (0x10U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag3en[2U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag3Wen) 
           & (0x20U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag3en[3U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag3Wen) 
           & (0x30U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag3en[4U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag3Wen) 
           & (0x40U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag3en[5U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag3Wen) 
           & (0x50U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag3en[6U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag3Wen) 
           & (0x60U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag3en[7U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag3Wen) 
           & (0x70U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag3en[8U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag3Wen) 
           & (0x80U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag3en[9U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag3Wen) 
           & (0x90U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag3en[0xaU] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag3Wen) 
           & (0xa0U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag3en[0xbU] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag3Wen) 
           & (0xb0U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag3en[0xcU] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag3Wen) 
           & (0xc0U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag3en[0xdU] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag3Wen) 
           & (0xd0U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag3en[0xeU] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag3Wen) 
           & (0xe0U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag3en[0xfU] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Tag3Wen) 
           & (0xf0U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__sram0_ram__DOT__wen) {
        if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Reglen))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__sram0_ram__DOT__bwen[0U] = 0xffffffffU;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__sram0_ram__DOT__bwen[1U] = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__sram0_ram__DOT__bwen[2U] = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__sram0_ram__DOT__bwen[3U] = 0U;
        } else if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Reglen))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__sram0_ram__DOT__bwen[0U] = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__sram0_ram__DOT__bwen[1U] = 0xffffffffU;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__sram0_ram__DOT__bwen[2U] = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__sram0_ram__DOT__bwen[3U] = 0U;
        } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Reglen))) {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__sram0_ram__DOT__bwen[0U] = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__sram0_ram__DOT__bwen[1U] = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__sram0_ram__DOT__bwen[2U] = 0xffffffffU;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__sram0_ram__DOT__bwen[3U] = 0U;
        } else {
            vlSelf->ysyxSoCFull__DOT__asic__DOT__sram0_ram__DOT__bwen[0U] = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__sram0_ram__DOT__bwen[1U] = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__sram0_ram__DOT__bwen[2U] = 0U;
            vlSelf->ysyxSoCFull__DOT__asic__DOT__sram0_ram__DOT__bwen[3U] 
                = ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Reglen))
                    ? 0xffffffffU : 0U);
        }
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag0Wen 
            = (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__chooseway));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag1Wen 
            = (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__chooseway));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag2Wen 
            = (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__chooseway));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag3Wen 
            = (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__chooseway));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__sram0_ram__DOT__bwen[0U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__sram0_ram__DOT__bwen[1U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__sram0_ram__DOT__bwen[2U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__sram0_ram__DOT__bwen[3U] = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag0Wen = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag1Wen = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag2Wen = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag3Wen = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_readys_T_2 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready) 
                    >> 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___inflight_opcodes_T_2 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT____VdfgTmp_h6a74e6bc__0)
             ? (~ (0xfULL << ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_d_bits_source) 
                              << 2U))) : 0xffffffffffffffffULL) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__inflight_opcodes 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___T_682)
                  ? ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_opcodes_set_interm)) 
                     << ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                         << 2U)) : 0ULL)));
    __Vtemp_h65aa16c4__1[0U] = 0xffU;
    __Vtemp_h65aa16c4__1[1U] = 0U;
    __Vtemp_h65aa16c4__1[2U] = 0U;
    __Vtemp_h65aa16c4__1[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_he2e2b284__0, __Vtemp_h65aa16c4__1, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    __Vtemp_h39716164__0[0U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__a_sizes_set_interm;
    __Vtemp_h39716164__0[1U] = 0U;
    __Vtemp_h39716164__0[2U] = 0U;
    __Vtemp_h39716164__0[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hb7dd74f8__0, __Vtemp_h39716164__0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                   << 3U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT____VdfgTmp_h6a74e6bc__0)
             ? (~ __Vtemp_he2e2b284__0[0U]) : 0xffffffffU) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__inflight_sizes[0U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___T_682)
                  ? __Vtemp_hb7dd74f8__0[0U] : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT____VdfgTmp_h6a74e6bc__0)
             ? (~ __Vtemp_he2e2b284__0[1U]) : 0xffffffffU) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__inflight_sizes[1U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___T_682)
                  ? __Vtemp_hb7dd74f8__0[1U] : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT____VdfgTmp_h6a74e6bc__0)
             ? (~ __Vtemp_he2e2b284__0[2U]) : 0xffffffffU) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__inflight_sizes[2U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___T_682)
                  ? __Vtemp_hb7dd74f8__0[2U] : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___inflight_sizes_T_2[3U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT____VdfgTmp_h6a74e6bc__0)
             ? (~ __Vtemp_he2e2b284__0[3U]) : 0xffffffffU) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__inflight_sizes[3U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___T_682)
                  ? __Vtemp_hb7dd74f8__0[3U] : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___inflight_T_2 
        = (0xffffU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT____VdfgTmp_h68723d34__0)
                        ? (~ ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_bits_source)))
                        : 0xffffU) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__inflight) 
                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___T_742)
                                          ? ((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source))
                                          : 0U))));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___T_742) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_opcodes_set_interm 
            = (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode) 
                     << 1U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_sizes_set_interm 
            = (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size) 
                     << 1U));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_opcodes_set_interm = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_sizes_set_interm = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_822 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___a_first_T) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_first_counter_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater__DOT___T_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor_io_in_a_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor_io_in_a_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor_io_in_a_ready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater__DOT__full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor_io_in_a_ready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_87 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4) 
           | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__anyValid_1)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_5)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1 
        = (0xffU & ((((IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_unready_T_8) 
                      >> 1U) | ((IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_unready_T_8) 
                                >> 3U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_mask_1) 
                                           << 4U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag0en[0U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag0Wen) 
           & (0U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag0en[1U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag0Wen) 
           & (0x10U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag0en[2U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag0Wen) 
           & (0x20U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag0en[3U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag0Wen) 
           & (0x30U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag0en[4U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag0Wen) 
           & (0x40U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag0en[5U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag0Wen) 
           & (0x50U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag0en[6U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag0Wen) 
           & (0x60U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag0en[7U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag0Wen) 
           & (0x70U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag0en[8U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag0Wen) 
           & (0x80U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag0en[9U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag0Wen) 
           & (0x90U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag0en[0xaU] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag0Wen) 
           & (0xa0U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag0en[0xbU] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag0Wen) 
           & (0xb0U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag0en[0xcU] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag0Wen) 
           & (0xc0U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag0en[0xdU] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag0Wen) 
           & (0xd0U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag0en[0xeU] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag0Wen) 
           & (0xe0U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag0en[0xfU] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag0Wen) 
           & (0xf0U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag1en[0U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag1Wen) 
           & (0U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag1en[1U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag1Wen) 
           & (0x10U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag1en[2U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag1Wen) 
           & (0x20U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag1en[3U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag1Wen) 
           & (0x30U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag1en[4U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag1Wen) 
           & (0x40U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag1en[5U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag1Wen) 
           & (0x50U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag1en[6U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag1Wen) 
           & (0x60U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag1en[7U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag1Wen) 
           & (0x70U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag1en[8U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag1Wen) 
           & (0x80U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag1en[9U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag1Wen) 
           & (0x90U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag1en[0xaU] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag1Wen) 
           & (0xa0U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag1en[0xbU] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag1Wen) 
           & (0xb0U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag1en[0xcU] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag1Wen) 
           & (0xc0U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag1en[0xdU] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag1Wen) 
           & (0xd0U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag1en[0xeU] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag1Wen) 
           & (0xe0U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag1en[0xfU] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag1Wen) 
           & (0xf0U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag2en[0U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag2Wen) 
           & (0U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag2en[1U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag2Wen) 
           & (0x10U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag2en[2U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag2Wen) 
           & (0x20U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag2en[3U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag2Wen) 
           & (0x30U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag2en[4U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag2Wen) 
           & (0x40U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag2en[5U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag2Wen) 
           & (0x50U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag2en[6U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag2Wen) 
           & (0x60U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag2en[7U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag2Wen) 
           & (0x70U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag2en[8U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag2Wen) 
           & (0x80U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag2en[9U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag2Wen) 
           & (0x90U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag2en[0xaU] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag2Wen) 
           & (0xa0U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag2en[0xbU] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag2Wen) 
           & (0xb0U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag2en[0xcU] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag2Wen) 
           & (0xc0U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag2en[0xdU] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag2Wen) 
           & (0xd0U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag2en[0xeU] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag2Wen) 
           & (0xe0U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag2en[0xfU] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag2Wen) 
           & (0xf0U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag3en[0U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag3Wen) 
           & (0U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag3en[1U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag3Wen) 
           & (0x10U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag3en[2U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag3Wen) 
           & (0x20U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag3en[3U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag3Wen) 
           & (0x30U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag3en[4U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag3Wen) 
           & (0x40U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag3en[5U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag3Wen) 
           & (0x50U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag3en[6U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag3Wen) 
           & (0x60U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag3en[7U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag3Wen) 
           & (0x70U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag3en[8U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag3Wen) 
           & (0x80U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag3en[9U] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag3Wen) 
           & (0x90U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag3en[0xaU] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag3Wen) 
           & (0xa0U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag3en[0xbU] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag3Wen) 
           & (0xb0U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag3en[0xcU] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag3Wen) 
           & (0xc0U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag3en[0xdU] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag3Wen) 
           & (0xd0U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag3en[0xeU] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag3Wen) 
           & (0xe0U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag3en[0xfU] 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag3Wen) 
           & (0xf0U == (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)));
    ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_mask_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_readys_T_2)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_filter_lo));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT___GEN_0 
        = (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT___bundleIn_0_pready_T_4)) 
            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_r_ready) 
               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4)
                   ? (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_readys_T_2) 
                         >> 1U)) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_1))))
            ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_r_ready) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4)
               ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_readys_T_2))
               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_0)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__maybe_full) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_deq_bits_id 
            = (1U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__ram_id
               [0U]);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_deq_bits_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__ram_last
            [0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__ram_id_MPORT_en 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT___do_enq_T;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_deq_bits_id 
            = (1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source) 
                     >> 3U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_deq_bits_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__ram_last_MPORT_data;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__ram_id_MPORT_en 
            = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_deq_ready)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT___do_enq_T));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_readys_T_2)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_1 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_readys_T_2) 
               >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_1_rvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_2 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_readys_T_2) 
               >> 2U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lps2__DOT__mps2__DOT__srdataEn));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_3 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_readys_T_2) 
               >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__hvga__DOT__mvga_ctrl_io_slave_rvalid));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_4) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_4_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_4_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_4_2 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_4_3 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_4_3;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_4_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_4_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_4_2 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_4_3 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_4_3;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___inflight_opcodes_T_2 
        = (ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___inflight_opcodes_T_1 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__inflight_opcodes 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___T_742)
                  ? ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_opcodes_set_interm)) 
                     << ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                         << 2U)) : 0ULL)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___inflight_sizes_T_2 
        = (ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___inflight_opcodes_T_1 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__inflight_sizes 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___T_742)
                  ? ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__a_sizes_set_interm)) 
                     << ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                         << 2U)) : 0ULL)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___inflight_T_2 
        = (0xffffU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT____VdfgTmp_h68723d34__0)
                        ? (~ ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source)))
                        : 0xffffU) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__inflight) 
                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_822)
                                          ? ((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source))
                                          : 0U))));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_822) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_opcodes_set_interm 
            = (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode) 
                     << 1U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_sizes_set_interm 
            = (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size) 
                     << 1U));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_opcodes_set_interm = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_sizes_set_interm = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___T_822 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___a_first_T) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__a_first_counter_1)));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT____VdfgTmp_h53ad6d35__0 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__a_first_counter)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___a_first_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__latch 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__beatsLeft)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor_io_in_a_ready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___beatsLeft_T_4 
        = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__beatsLeft) 
                    - ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor_io_in_a_ready) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor_io_in_a_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__out_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor_io_in_a_ready) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__beatsLeft))
               ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___readys_readys_T_2))
               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__state_0)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__out_1_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor_io_in_a_ready) 
           & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__beatsLeft))
               ? (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___readys_readys_T_2) 
                     >> 1U)) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__state_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_readys_T_5 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1) 
                    >> 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_unready_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_mask_T_3 
        = (0xfU & ((IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_mask_T) 
                   | ((IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_mask_T) 
                      << 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__do_deq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__maybe_full) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_deq_ready) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_deq_valid)));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____VdfgTmp_h5a258ae8__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_deq_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___inflight_opcodes_T_2 
        = (ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___inflight_opcodes_T_1 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__inflight_opcodes 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_822)
                  ? ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_opcodes_set_interm)) 
                     << ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                         << 2U)) : 0ULL)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___inflight_sizes_T_2 
        = (ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___inflight_opcodes_T_1 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__inflight_sizes 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_822)
                  ? ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__a_sizes_set_interm)) 
                     << ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                         << 2U)) : 0ULL)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___inflight_T_2 
        = (0xffffU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT____VdfgTmp_h68723d34__0)
                        ? (~ ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source)))
                        : 0xffffU) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__inflight) 
                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___T_822)
                                          ? ((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source))
                                          : 0U))));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___T_822) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__a_opcodes_set_interm 
            = (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode) 
                     << 1U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__a_sizes_set_interm 
            = (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size) 
                     << 1U));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__a_opcodes_set_interm = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__a_sizes_set_interm = 0U;
    }
    if (ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT____VdfgTmp_h53ad6d35__0) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT___GEN_18 
            = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_0));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT___GEN_19 
            = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_1));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT___GEN_20 
            = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_2));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT___GEN_21 
            = ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_3));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT___GEN_22 
            = ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_4));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT___GEN_23 
            = ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_5));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT___GEN_24 
            = ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_6));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT___GEN_25 
            = ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_7));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT___GEN_26 
            = ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_8));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT___GEN_27 
            = ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_9));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT___GEN_28 
            = ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_10));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT___GEN_29 
            = ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_11));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT___GEN_30 
            = ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_12));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT___GEN_31 
            = ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_13));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT___GEN_32 
            = ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_14));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT___GEN_33 
            = ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source)) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_15));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT___GEN_18 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT___GEN_19 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT___GEN_20 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_2;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT___GEN_21 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_3;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT___GEN_22 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_4;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT___GEN_23 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_5;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT___GEN_24 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_6;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT___GEN_25 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_7;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT___GEN_26 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_8;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT___GEN_27 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_9;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT___GEN_28 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_10;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT___GEN_29 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_11;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT___GEN_30 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_12;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT___GEN_31 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_13;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT___GEN_32 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_14;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT___GEN_33 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_15;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater__DOT___GEN_0 
        = (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeat_last)) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___a_first_T)) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater__DOT__full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___T_822 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___a_first_T) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__a_first_counter_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___T_12 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__out_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_out_arvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_in_arready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__out_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT___GEN_1));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____VdfgTmp_hb7fd6708__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__out_ready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_in_wready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__out_1_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_out_awvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__bundleIn_0_awready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__out_1_ready) 
           & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_todo)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_wvalid)));
    ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_mask_T_8 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_readys_T_5)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__readys_filter_lo_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT___GEN_6 
        = ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_1_wvalid)
                ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
            : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT___bundleIn_0_pready_T_4)
                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)
                    : 5U) : ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                              ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_b_ready) 
                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_5)
                                      ? (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_readys_T_5) 
                                            >> 1U))
                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_5_1)))
                                  ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                              : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__bundleOut_0_bready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_in_becho_real_last)) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_b_ready) 
                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_5)
                        ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_readys_T_5))
                        : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_5_0)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_5_1 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_readys_T_5) 
               >> 1U)) & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_5_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_readys_T_5)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_in_bvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_5_3 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_readys_T_5) 
               >> 3U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__hvga__DOT__mvga_ctrl_io_slave_bvalid));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__idle_5) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_5_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_5_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_5_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_5_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_5_3 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__winner_5_3;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_5_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_5_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_5_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_5_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_5_3 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__state_5_3;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_io_deq_ready 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____VdfgTmp_h5a258ae8__0) 
           & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_deq_bits_id)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_deq_bits_last)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1_io_deq_ready 
        = (((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____VdfgTmp_h5a258ae8__0) 
            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_deq_bits_last)) 
           & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_deq_bits_id)) 
              >> 1U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DevSram_r_rdata 
        = (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_4_0)
               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__maybe_full)
                   ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__ram_data
                  [0U] : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__ram_data_MPORT_data)
               : 0ULL) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_4_1)
                           ? (((QData)((IData)((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
                                                  ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data)
                                                  : 0U) 
                                                | ((0U 
                                                    == 
                                                    (0x20001000U 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_in_paddr))
                                                    ? 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart_in_psel)
                                                     ? 
                                                    (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 0x18U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                         << 0x10U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                            << 8U) 
                                                           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                                     : 0U)
                                                    : 0U)))) 
                               << 0x20U) | (QData)((IData)(
                                                           (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
                                                              ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__data)
                                                              : 0U) 
                                                            | ((0U 
                                                                == 
                                                                (0x20001000U 
                                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar_auto_in_paddr))
                                                                ? 
                                                               ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart_in_psel)
                                                                 ? 
                                                                (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                                  << 0x18U) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                                     << 0x10U) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                                        << 8U) 
                                                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                                                 : 0U)
                                                                : 0U)))))
                           : 0ULL)) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_4_2)
                                        ? (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lps2__DOT__mps2__DOT__srdata))
                                        : 0ULL)) | 
           ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_4_3)
             ? vlSelf->ysyxSoCFull__DOT__asic__DOT__hvga__DOT__mvga_ctrl_io_slave_rdata
             : 0ULL));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid 
        = (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_4_0)
               ? ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_deq_bits_id)
                     ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__empty)
                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ram_extra_id_MPORT_data)
                         : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ram_extra_id
                        [vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__deq_ptr_value])
                     : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__empty)
                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ram_extra_id_MPORT_data)
                         : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__ram_extra_id
                        [vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__deq_ptr_value])) 
                   << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_deq_bits_id))
               : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_4_1)
                         ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg)
                         : 0U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_4_2)
                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lps2__DOT__mps2__DOT__srid)
                                    : 0U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_4_3)
                                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__hvga__DOT__mvga_ctrl_io_slave_rid)
                                               : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_r_last 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_4_0) 
            & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_deq_bits_id)
                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__empty)
                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ram_real_last_MPORT_data)
                     : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ram_real_last
                    [vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__deq_ptr_value])
                 : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__empty)
                     ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ram_real_last_MPORT_data)
                     : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__ram_real_last
                    [vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__deq_ptr_value])) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_deq_bits_last))) 
           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_4_1) 
              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_4_2) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lps2__DOT__mps2__DOT__srlast)) 
                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_4_3) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__hvga__DOT__mvga_ctrl_io_slave_rlast)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___inflight_opcodes_T_2 
        = (ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___inflight_opcodes_T_1 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__inflight_opcodes 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___T_822)
                  ? ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__a_opcodes_set_interm)) 
                     << ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                         << 2U)) : 0ULL)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___inflight_sizes_T_2 
        = (ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___inflight_opcodes_T_1 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__inflight_sizes 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___T_822)
                  ? ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__a_sizes_set_interm)) 
                     << ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                         << 2U)) : 0ULL)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___inflight_T_2 
        = (0xffffU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT____VdfgTmp_h3e9bf6c5__0)
                        ? (~ ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_d_bits_source)))
                        : 0xffffU) & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__inflight) 
                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___T_822)
                                          ? ((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_source))
                                          : 0U))));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___T_822) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__a_opcodes_set_interm 
            = (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode) 
                     << 1U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__a_sizes_set_interm 
            = (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size) 
                     << 1U));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__a_opcodes_set_interm = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__a_sizes_set_interm = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___T_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_in_arready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_in_arready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ram_real_last_MPORT_data));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_io_enq_valid 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____VdfgTmp_hb7fd6708__0) 
           & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_id)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1_io_enq_valid 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____VdfgTmp_hb7fd6708__0) 
           & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_id)) 
              >> 1U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq_io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_in_wready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___bundleOut_0_wvalid_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___T_36 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__bundleIn_0_awready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_out_awvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_in_awready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__bundleIn_0_awready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT___GEN_9));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____VdfgTmp_ha9af371e__0 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__bundleIn_0_awready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_mask_T_11 
        = (0xfU & ((IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_mask_T_8) 
                   | ((IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___readys_mask_T_8) 
                      << 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__bundleOut_0_bready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__b_allow));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq__DOT__ram_id_MPORT_en 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq__DOT__maybe_full)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq__DOT___do_enq_T)
            : ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_ready)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq__DOT___do_enq_T)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___T_90 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__bundleOut_0_bready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__bundleIn_0_bvalid));
    VL_SHIFTR_WWI(128,128,7, __Vtemp_heeb33ca7__0, vlSelf->ysyxSoCFull__DOT__asic__DOT__sram1_ram_Q, 
                  (0x78U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr 
                            << 3U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__LsuData 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Cache_DataOk)
            ? (((QData)((IData)(__Vtemp_heeb33ca7__0[1U])) 
                << 0x20U) | (QData)((IData)(__Vtemp_heeb33ca7__0[0U])))
            : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hb3cc7068__0)
                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__reglen)
                    ? (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DevSram_r_rdata)) 
                        << 0x20U) | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__tmpdevicedata)))
                    : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DevSram_r_rdata)
                : 0ULL));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h906b61fd__0 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_4) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_r_last));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteData 
        = ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__state)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_r_last) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_r_valid) 
                 & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Reglen)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteData 
        = ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__state)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_r_last) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_in_rvalid) 
                 & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Reglen)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___inflight_opcodes_T_2 
        = (ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___inflight_opcodes_T_1 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__inflight_opcodes 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___T_822)
                  ? ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__a_opcodes_set_interm)) 
                     << ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_source) 
                         << 2U)) : 0ULL)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___inflight_sizes_T_2 
        = (ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___inflight_opcodes_T_1 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__inflight_sizes 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___T_822)
                  ? ((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__a_sizes_set_interm)) 
                     << ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_source) 
                         << 2U)) : 0ULL)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___GEN_4 
        = (0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___T_2)
                      ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__len) 
                         - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__beats))
                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__r_len)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__maybe_full) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__ram_id_MPORT_en 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT___do_enq_T;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__do_deq 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_ready) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_valid));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__ram_id_MPORT_en 
            = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_ready)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT___do_enq_T));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__do_deq = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_io_deq_valid 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__empty)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_io_enq_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT___do_enq_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1_io_deq_valid 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__empty)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1_io_enq_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT___do_enq_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1_io_enq_valid));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__maybe_full) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__ram_data_MPORT_en 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT___do_enq_T;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__do_deq 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq_io_deq_ready) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq_io_deq_valid));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__ram_data_MPORT_en 
            = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq_io_deq_ready)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT___do_enq_T));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__do_deq = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_awready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_in_awready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___in_awready_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2_io_enq_valid 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____VdfgTmp_ha9af371e__0) 
           & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_id)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3_io_enq_valid 
        = ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT____VdfgTmp_ha9af371e__0) 
           & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_id)) 
              >> 1U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq__DOT__do_deq 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq__DOT__maybe_full) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_ready) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2_io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___T_90) 
           & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_id)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3_io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___T_90) 
           & (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_id)) 
              >> 1U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_5_0)
              ? ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_id)
                    ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__empty)
                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ram_extra_id_MPORT_data)
                        : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ram_extra_id
                       [vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__deq_ptr_value])
                    : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__empty)
                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ram_extra_id_MPORT_data)
                        : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ram_extra_id
                       [vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__deq_ptr_value])) 
                  << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_id))
              : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_5_1)
                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg)
                        : 0U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_5_3)
                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__hvga__DOT__mvga_ctrl_io_slave_bid)
                                   : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__next 
        = ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__state))
            ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__state))
                ? 0U : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__state))
                         ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DevSram_b_valid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Lsu_b_ready))
                             ? ((0U == (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_5_0)
                                          ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_resp) 
                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_id)
                                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__error_1)
                                                 : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__error_0)))
                                          : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__muxState_5_3)
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__hvga__DOT__mvga_ctrl_io_slave_bresp)
                                                    : 0U)))
                                 ? 2U : 0U) : 5U) : 
                        (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_in_rvalid) 
                          & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__state)))
                          ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_r_last)
                              ? ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Reglen))
                                  ? 1U : 2U) : 4U) : 4U)))
            : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__state))
                ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__state))
                    ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Lsu_w_valid) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Lsu_w_ready))
                        ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Lsu_w_valid)
                            ? 5U : 3U) : 3U) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__axivalid)
                                                 ? 
                                                (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Lsu_aw_valid) 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Lsu_aw_ready))
                                                  ? 3U
                                                  : 2U)
                                                 : 
                                                (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Lsu_ar_valid) 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Lsu_ar_ready))
                                                  ? 4U
                                                  : 2U)))
                : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__state))
                    ? ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__hit))
                        ? 0U : 2U) : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Lsu_Cache_valid) 
                                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__fnext)))
                                       ? 1U : 0U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_15_count_T_3 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_15_count) 
                 - (1U & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                           >> 0xfU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h906b61fd__0)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_14_count_T_3 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_14_count) 
                 - (3U & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                           >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h906b61fd__0)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_13_count_T_3 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_13_count) 
                 - (7U & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                           >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h906b61fd__0)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_12_count_T_3 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_12_count) 
                 - (0xfU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                             >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h906b61fd__0)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_11_count_T_3 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_11_count) 
                 - (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                              >> 0xbU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h906b61fd__0)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_10_count_T_3 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_10_count) 
                 - (0x3fU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                              >> 0xaU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h906b61fd__0)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_9_count_T_3 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_9_count) 
                 - (0x7fU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                              >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h906b61fd__0)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_8_count_T_3 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_8_count) 
                 - (0xffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                              >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h906b61fd__0)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_7_count_T_3 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_7_count) 
                 - (0x1ffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                               >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h906b61fd__0)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_6_count_T_3 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_6_count) 
                 - (0x3ffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                               >> 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h906b61fd__0)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_5_count_T_3 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_5_count) 
                 - (0x7ffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                               >> 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h906b61fd__0)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_4_count_T_3 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_4_count) 
                 - (0xfffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                               >> 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h906b61fd__0)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_3_count_T_3 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_3_count) 
                 - (0x1fffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                                >> 3U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h906b61fd__0)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_2_count_T_3 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_2_count) 
                 - (0x3fffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                                >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h906b61fd__0)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_1_count_T_3 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_1_count) 
                 - (0x7fffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                                >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h906b61fd__0)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_count_T_3 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count) 
                  + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_1)) 
                 - (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_rid)) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h906b61fd__0))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteData) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____VdfgTmp_h0f0f23a0__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteData) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____VdfgTmp_h0f0f23a0__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__do_deq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__empty)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_io_deq_ready) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_io_deq_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__ram_extra_id_MPORT_en 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT__empty)
            ? ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_io_deq_ready)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT___do_enq_T))
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility__DOT___do_enq_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__do_deq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__empty)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1_io_deq_ready) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1_io_deq_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ram_extra_id_MPORT_en 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__empty)
            ? ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1_io_deq_ready)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT___do_enq_T))
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT___do_enq_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___T_5 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_awready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_awready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ram_real_last_MPORT_data));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2_io_deq_valid 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__empty)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2_io_enq_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT___do_enq_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2_io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3_io_deq_valid 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__empty)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3_io_enq_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT___do_enq_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3_io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_15_count_T_3 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_15_count) 
                 - (1U & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                           >> 0xfU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_14_count_T_3 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_14_count) 
                 - (3U & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                           >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_13_count_T_3 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_13_count) 
                 - (7U & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                           >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_12_count_T_3 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_12_count) 
                 - (0xfU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                             >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_11_count_T_3 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_11_count) 
                 - (0x1fU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                              >> 0xbU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_10_count_T_3 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_10_count) 
                 - (0x3fU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                              >> 0xaU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_9_count_T_3 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_9_count) 
                 - (0x7fU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                              >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_8_count_T_3 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_8_count) 
                 - (0xffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                              >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_7_count_T_3 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_7_count) 
                 - (0x1ffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                               >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_6_count_T_3 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_6_count) 
                 - (0x3ffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                               >> 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_5_count_T_3 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_5_count) 
                 - (0x7ffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                               >> 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_4_count_T_3 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_4_count) 
                 - (0xfffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                               >> 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_3_count_T_3 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_3_count) 
                 - (0x1fffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                                >> 3U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_2_count_T_3 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_2_count) 
                 - (0x3fffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                                >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_1_count_T_3 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_1_count) 
                 - (0x7fffU & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                                >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_count_T_3 
        = (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count) 
                  + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_1)) 
                 - (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_bid)) 
                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_4))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__lsubusy 
        = ((((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__Rstate)) 
             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_in_arready) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DevSram_ar_valid))) 
            | ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__Rstate)) 
               | (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hb3cc7068__0)) 
                   & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__Rstate))) 
                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hb3cc7068__0) 
                     & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__reglen)) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__loaddouble)))))) 
           | ((((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__Wstate)) 
                & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_in_awready) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DevSram_aw_valid))) 
               | ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__Wstate)) 
                  | ((~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__reglen)) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__storedouble))) 
                     & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__Wstate))))) 
              | (((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__next)) 
                  | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__fnext))) 
                 | (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__Cache)) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Lsu_Cache_valid)) 
                    | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Cache_DataOk)) 
                       & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__Cache)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__63__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (0x3fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__62__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (0x3eU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__61__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (0x3dU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__60__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (0x3cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__59__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (0x3bU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__58__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (0x3aU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__57__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (0x39U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__56__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (0x38U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__55__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (0x37U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__54__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (0x36U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__53__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (0x35U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__52__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (0x34U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__51__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (0x33U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__50__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (0x32U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__49__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (0x31U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__48__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (0x30U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__47__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (0x2fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__46__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (0x2eU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__45__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (0x2dU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__44__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (0x2cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__43__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (0x2bU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__42__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (0x2aU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__41__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (0x29U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__40__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (0x28U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__39__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (0x27U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__38__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (0x26U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__37__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (0x25U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__36__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (0x24U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__35__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__34__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (0x22U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__33__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (0x21U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__32__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (0x20U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__31__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (0x1fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__30__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (0x1eU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__29__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (0x1dU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__28__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__27__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (0x1bU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__26__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (0x1aU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__25__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (0x19U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__24__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (0x18U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__23__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__22__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__21__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (0x15U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__20__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (0x14U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__19__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (0x13U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__18__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (0x12U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__17__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (0x11U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__16__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__15__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__14__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__13__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__12__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__11__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__10__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__9__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__8__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__7__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__6__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__5__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__4__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__3__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__2__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__1__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__0__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validWriteEn) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__63__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (0x3fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__62__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (0x3eU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__61__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (0x3dU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__60__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (0x3cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__59__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (0x3bU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__58__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (0x3aU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__57__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (0x39U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__56__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (0x38U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__55__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (0x37U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__54__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (0x36U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__53__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (0x35U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__52__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (0x34U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__51__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (0x33U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__50__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (0x32U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__49__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (0x31U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__48__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (0x30U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__47__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (0x2fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__46__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (0x2eU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__45__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (0x2dU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__44__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (0x2cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__43__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (0x2bU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__42__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (0x2aU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__41__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (0x29U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__40__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (0x28U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__39__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (0x27U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__38__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (0x26U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__37__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (0x25U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__36__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (0x24U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__35__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__34__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (0x22U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__33__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (0x21U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__32__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (0x20U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__31__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (0x1fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__30__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (0x1eU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__29__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (0x1dU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__28__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__27__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (0x1bU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__26__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (0x1aU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__25__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (0x19U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__24__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (0x18U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__23__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__22__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__21__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (0x15U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__20__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (0x14U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__19__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (0x13U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__18__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (0x12U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__17__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (0x11U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__16__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__15__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__14__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__13__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__12__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__11__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__10__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__9__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__8__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__7__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__6__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__5__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__4__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__3__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__2__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__1__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__0__KET____DOT__regvalid__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validWriteEn) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Dcache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___GEN_9 
        = (0x1ffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___T_5)
                      ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__len_1) 
                         - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_beats))
                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__r_len_1)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__maybe_full) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__ram_id_MPORT_en 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT___do_enq_T;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__do_deq 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_ready) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_valid));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__ram_id_MPORT_en 
            = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_ready)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT___do_enq_T));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__do_deq = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__do_deq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__empty)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2_io_deq_ready) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2_io_deq_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ram_extra_id_MPORT_en 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__empty)
            ? ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2_io_deq_ready)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT___do_enq_T))
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT___do_enq_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__do_deq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__empty)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3_io_deq_ready) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3_io_deq_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ram_extra_id_MPORT_en 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__empty)
            ? ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3_io_deq_ready)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT___do_enq_T))
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3__DOT___do_enq_T));
    __Vtableidx1 = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT____VdfgExtracted_hf2dbe3cc__0) 
                     << 9U) | (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__state)) 
                                << 8U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__divvalid) 
                                           << 7U) | 
                                          (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Multi__DOT__state)) 
                                            << 6U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__mulvalid) 
                                               << 5U) 
                                              | (((2U 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Divder__DOT__state)) 
                                                  << 4U) 
                                                 | (((2U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__Multi__DOT__state)) 
                                                     << 3U) 
                                                    | ((4U 
                                                        & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__lsubusy)) 
                                                           << 2U)) 
                                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__state)))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__next 
        = VysyxSoCFull__ConstPool__TABLE_heacec875_0
        [__Vtableidx1];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_ID_ready 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EXU__DOT__alubusy)) 
                 & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__lsubusy))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__validen 
        = (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__63__KET____DOT__regvalid__wen)) 
            << 0x3fU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__62__KET____DOT__regvalid__wen)) 
                          << 0x3eU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__61__KET____DOT__regvalid__wen)) 
                                        << 0x3dU) | 
                                       (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__60__KET____DOT__regvalid__wen)) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__59__KET____DOT__regvalid__wen)) 
                                            << 0x3bU) 
                                           | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__58__KET____DOT__regvalid__wen)) 
                                               << 0x3aU) 
                                              | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__57__KET____DOT__regvalid__wen)) 
                                                  << 0x39U) 
                                                 | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__56__KET____DOT__regvalid__wen)) 
                                                     << 0x38U) 
                                                    | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__55__KET____DOT__regvalid__wen)) 
                                                        << 0x37U) 
                                                       | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__54__KET____DOT__regvalid__wen)) 
                                                           << 0x36U) 
                                                          | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__53__KET____DOT__regvalid__wen)) 
                                                              << 0x35U) 
                                                             | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__52__KET____DOT__regvalid__wen)) 
                                                                 << 0x34U) 
                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__51__KET____DOT__regvalid__wen)) 
                                                                    << 0x33U) 
                                                                   | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__50__KET____DOT__regvalid__wen)) 
                                                                       << 0x32U) 
                                                                      | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__49__KET____DOT__regvalid__wen)) 
                                                                          << 0x31U) 
                                                                         | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__48__KET____DOT__regvalid__wen)) 
                                                                             << 0x30U) 
                                                                            | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__47__KET____DOT__regvalid__wen)) 
                                                                                << 0x2fU) 
                                                                               | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__46__KET____DOT__regvalid__wen)) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__45__KET____DOT__regvalid__wen)) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__44__KET____DOT__regvalid__wen)) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__43__KET____DOT__regvalid__wen)) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__42__KET____DOT__regvalid__wen)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__41__KET____DOT__regvalid__wen)) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__40__KET____DOT__regvalid__wen)) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__39__KET____DOT__regvalid__wen)) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__38__KET____DOT__regvalid__wen)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__37__KET____DOT__regvalid__wen)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__36__KET____DOT__regvalid__wen)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__35__KET____DOT__regvalid__wen)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__34__KET____DOT__regvalid__wen)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__33__KET____DOT__regvalid__wen)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__32__KET____DOT__regvalid__wen)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__31__KET____DOT__regvalid__wen) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__30__KET____DOT__regvalid__wen) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__29__KET____DOT__regvalid__wen) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__28__KET____DOT__regvalid__wen) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__27__KET____DOT__regvalid__wen) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__26__KET____DOT__regvalid__wen) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__25__KET____DOT__regvalid__wen) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__24__KET____DOT__regvalid__wen) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__23__KET____DOT__regvalid__wen) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__22__KET____DOT__regvalid__wen) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__21__KET____DOT__regvalid__wen) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__20__KET____DOT__regvalid__wen) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__19__KET____DOT__regvalid__wen) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__18__KET____DOT__regvalid__wen) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__17__KET____DOT__regvalid__wen) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__16__KET____DOT__regvalid__wen) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__15__KET____DOT__regvalid__wen) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__14__KET____DOT__regvalid__wen) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__13__KET____DOT__regvalid__wen) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__12__KET____DOT__regvalid__wen) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__11__KET____DOT__regvalid__wen) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__10__KET____DOT__regvalid__wen) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__9__KET____DOT__regvalid__wen) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__8__KET____DOT__regvalid__wen) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__7__KET____DOT__regvalid__wen) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__6__KET____DOT__regvalid__wen) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__5__KET____DOT__regvalid__wen) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__4__KET____DOT__regvalid__wen) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__3__KET____DOT__regvalid__wen) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__2__KET____DOT__regvalid__wen) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__1__KET____DOT__regvalid__wen) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__0__KET____DOT__regvalid__wen))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__validen 
        = (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__63__KET____DOT__regvalid__wen)) 
            << 0x3fU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__62__KET____DOT__regvalid__wen)) 
                          << 0x3eU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__61__KET____DOT__regvalid__wen)) 
                                        << 0x3dU) | 
                                       (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__60__KET____DOT__regvalid__wen)) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__59__KET____DOT__regvalid__wen)) 
                                            << 0x3bU) 
                                           | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__58__KET____DOT__regvalid__wen)) 
                                               << 0x3aU) 
                                              | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__57__KET____DOT__regvalid__wen)) 
                                                  << 0x39U) 
                                                 | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__56__KET____DOT__regvalid__wen)) 
                                                     << 0x38U) 
                                                    | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__55__KET____DOT__regvalid__wen)) 
                                                        << 0x37U) 
                                                       | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__54__KET____DOT__regvalid__wen)) 
                                                           << 0x36U) 
                                                          | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__53__KET____DOT__regvalid__wen)) 
                                                              << 0x35U) 
                                                             | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__52__KET____DOT__regvalid__wen)) 
                                                                 << 0x34U) 
                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__51__KET____DOT__regvalid__wen)) 
                                                                    << 0x33U) 
                                                                   | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__50__KET____DOT__regvalid__wen)) 
                                                                       << 0x32U) 
                                                                      | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__49__KET____DOT__regvalid__wen)) 
                                                                          << 0x31U) 
                                                                         | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__48__KET____DOT__regvalid__wen)) 
                                                                             << 0x30U) 
                                                                            | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__47__KET____DOT__regvalid__wen)) 
                                                                                << 0x2fU) 
                                                                               | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__46__KET____DOT__regvalid__wen)) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__45__KET____DOT__regvalid__wen)) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__44__KET____DOT__regvalid__wen)) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__43__KET____DOT__regvalid__wen)) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__42__KET____DOT__regvalid__wen)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__41__KET____DOT__regvalid__wen)) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__40__KET____DOT__regvalid__wen)) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__39__KET____DOT__regvalid__wen)) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__38__KET____DOT__regvalid__wen)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__37__KET____DOT__regvalid__wen)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__36__KET____DOT__regvalid__wen)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__35__KET____DOT__regvalid__wen)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__34__KET____DOT__regvalid__wen)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__33__KET____DOT__regvalid__wen)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__32__KET____DOT__regvalid__wen)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__31__KET____DOT__regvalid__wen) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__30__KET____DOT__regvalid__wen) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__29__KET____DOT__regvalid__wen) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__28__KET____DOT__regvalid__wen) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__27__KET____DOT__regvalid__wen) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__26__KET____DOT__regvalid__wen) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__25__KET____DOT__regvalid__wen) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__24__KET____DOT__regvalid__wen) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__23__KET____DOT__regvalid__wen) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__22__KET____DOT__regvalid__wen) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__21__KET____DOT__regvalid__wen) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__20__KET____DOT__regvalid__wen) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__19__KET____DOT__regvalid__wen) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__18__KET____DOT__regvalid__wen) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__17__KET____DOT__regvalid__wen) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__16__KET____DOT__regvalid__wen) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__15__KET____DOT__regvalid__wen) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__14__KET____DOT__regvalid__wen) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__13__KET____DOT__regvalid__wen) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__12__KET____DOT__regvalid__wen) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__11__KET____DOT__regvalid__wen) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__10__KET____DOT__regvalid__wen) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__9__KET____DOT__regvalid__wen) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__8__KET____DOT__regvalid__wen) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__7__KET____DOT__regvalid__wen) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__6__KET____DOT__regvalid__wen) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__5__KET____DOT__regvalid__wen) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__4__KET____DOT__regvalid__wen) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__3__KET____DOT__regvalid__wen) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__2__KET____DOT__regvalid__wen) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__1__KET____DOT__regvalid__wen) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____Vcellinp__valid_dirty__BRA__0__KET____DOT__regvalid__wen))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Id_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_ID_ready) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__realbusy1)) 
              & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__realbusy2))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Score_RScore_wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_IDNPC_valid) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__idex_wen) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__EX_ID_ready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Id_ready) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Cache_DataOk)) 
              & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__realflush))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ScoreBoard__DOT____Vcellinp__regfile__BRA__31__KET____DOT__regi__din 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Score_RScore_wen) 
           & (0x1fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rd)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ScoreBoard__DOT____Vcellinp__regfile__BRA__30__KET____DOT__regi__din 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Score_RScore_wen) 
           & (0x1eU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rd)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ScoreBoard__DOT____Vcellinp__regfile__BRA__29__KET____DOT__regi__din 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Score_RScore_wen) 
           & (0x1dU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rd)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ScoreBoard__DOT____Vcellinp__regfile__BRA__28__KET____DOT__regi__din 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Score_RScore_wen) 
           & (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rd)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ScoreBoard__DOT____Vcellinp__regfile__BRA__27__KET____DOT__regi__din 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Score_RScore_wen) 
           & (0x1bU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rd)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ScoreBoard__DOT____Vcellinp__regfile__BRA__26__KET____DOT__regi__din 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Score_RScore_wen) 
           & (0x1aU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rd)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ScoreBoard__DOT____Vcellinp__regfile__BRA__25__KET____DOT__regi__din 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Score_RScore_wen) 
           & (0x19U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rd)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ScoreBoard__DOT____Vcellinp__regfile__BRA__24__KET____DOT__regi__din 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Score_RScore_wen) 
           & (0x18U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rd)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ScoreBoard__DOT____Vcellinp__regfile__BRA__23__KET____DOT__regi__din 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Score_RScore_wen) 
           & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rd)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ScoreBoard__DOT____Vcellinp__regfile__BRA__22__KET____DOT__regi__din 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Score_RScore_wen) 
           & (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rd)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ScoreBoard__DOT____Vcellinp__regfile__BRA__21__KET____DOT__regi__din 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Score_RScore_wen) 
           & (0x15U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rd)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ScoreBoard__DOT____Vcellinp__regfile__BRA__20__KET____DOT__regi__din 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Score_RScore_wen) 
           & (0x14U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rd)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ScoreBoard__DOT____Vcellinp__regfile__BRA__19__KET____DOT__regi__din 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Score_RScore_wen) 
           & (0x13U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rd)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ScoreBoard__DOT____Vcellinp__regfile__BRA__18__KET____DOT__regi__din 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Score_RScore_wen) 
           & (0x12U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rd)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ScoreBoard__DOT____Vcellinp__regfile__BRA__17__KET____DOT__regi__din 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Score_RScore_wen) 
           & (0x11U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rd)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ScoreBoard__DOT____Vcellinp__regfile__BRA__16__KET____DOT__regi__din 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Score_RScore_wen) 
           & (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rd)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ScoreBoard__DOT____Vcellinp__regfile__BRA__15__KET____DOT__regi__din 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Score_RScore_wen) 
           & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rd)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ScoreBoard__DOT____Vcellinp__regfile__BRA__14__KET____DOT__regi__din 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Score_RScore_wen) 
           & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rd)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ScoreBoard__DOT____Vcellinp__regfile__BRA__13__KET____DOT__regi__din 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Score_RScore_wen) 
           & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rd)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ScoreBoard__DOT____Vcellinp__regfile__BRA__12__KET____DOT__regi__din 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Score_RScore_wen) 
           & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rd)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ScoreBoard__DOT____Vcellinp__regfile__BRA__11__KET____DOT__regi__din 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Score_RScore_wen) 
           & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rd)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ScoreBoard__DOT____Vcellinp__regfile__BRA__10__KET____DOT__regi__din 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Score_RScore_wen) 
           & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rd)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ScoreBoard__DOT____Vcellinp__regfile__BRA__9__KET____DOT__regi__din 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Score_RScore_wen) 
           & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rd)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ScoreBoard__DOT____Vcellinp__regfile__BRA__8__KET____DOT__regi__din 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Score_RScore_wen) 
           & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rd)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ScoreBoard__DOT____Vcellinp__regfile__BRA__7__KET____DOT__regi__din 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Score_RScore_wen) 
           & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rd)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ScoreBoard__DOT____Vcellinp__regfile__BRA__6__KET____DOT__regi__din 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Score_RScore_wen) 
           & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rd)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ScoreBoard__DOT____Vcellinp__regfile__BRA__5__KET____DOT__regi__din 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Score_RScore_wen) 
           & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rd)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ScoreBoard__DOT____Vcellinp__regfile__BRA__4__KET____DOT__regi__din 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Score_RScore_wen) 
           & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rd)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ScoreBoard__DOT____Vcellinp__regfile__BRA__3__KET____DOT__regi__din 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Score_RScore_wen) 
           & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rd)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ScoreBoard__DOT____Vcellinp__regfile__BRA__2__KET____DOT__regi__din 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Score_RScore_wen) 
           & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rd)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ScoreBoard__DOT____Vcellinp__regfile__BRA__1__KET____DOT__regi__din 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Score_RScore_wen) 
           & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__rd)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__next 
        = ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__state))
            ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__state))
                ? 0U : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__state))
                         ? 5U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_r_valid) 
                                  & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__state)))
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_r_last)
                                      ? ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Reglen))
                                          ? 1U : 2U)
                                      : 4U) : 4U)))
            : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__state))
                ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__state))
                    ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_w_valid) 
                        & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_w_ready))
                        ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_w_valid)
                            ? 5U : 3U) : 3U) : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__axivalid)
                                                 ? 
                                                (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_aw_valid) 
                                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_aw_ready))
                                                  ? 3U
                                                  : 2U)
                                                 : 
                                                (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_ar_valid) 
                                                  & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Lsu_ar_valid)) 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Lsu_ar_ready)))
                                                  ? 4U
                                                  : 2U)))
                : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__state))
                    ? ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__hit))
                        ? 0U : 2U) : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache_valid) 
                                       & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__fnext)))
                                       ? 1U : 0U))));
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__30(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__30\n"); );
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain_reset 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain_reset 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_));
}

void VysyxSoCFull___024root___nba_sequent__TOP__0(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__1(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__2(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__3(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__4(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__5(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__6(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__7(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__8(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__9(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__10(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__11(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__12(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__13(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__14(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__15(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__16(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__17(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__18(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__19(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__20(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__0(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__1(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__21(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__22(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__23(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__2(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__3(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__24(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__25(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__4(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__5(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__26(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__6(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__7(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__27(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__28(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_sequent__TOP__29(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___nba_comb__TOP__8(VysyxSoCFull___024root* vlSelf);

void VysyxSoCFull___024root___eval_nba(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        VysyxSoCFull___024root___nba_sequent__TOP__1(vlSelf);
        VysyxSoCFull___024root___nba_sequent__TOP__2(vlSelf);
        VysyxSoCFull___024root___nba_sequent__TOP__3(vlSelf);
        VysyxSoCFull___024root___nba_sequent__TOP__4(vlSelf);
        VysyxSoCFull___024root___nba_sequent__TOP__5(vlSelf);
        VysyxSoCFull___024root___nba_sequent__TOP__6(vlSelf);
        VysyxSoCFull___024root___nba_sequent__TOP__7(vlSelf);
        VysyxSoCFull___024root___nba_sequent__TOP__8(vlSelf);
        VysyxSoCFull___024root___nba_sequent__TOP__9(vlSelf);
        VysyxSoCFull___024root___nba_sequent__TOP__10(vlSelf);
        VysyxSoCFull___024root___nba_sequent__TOP__11(vlSelf);
        VysyxSoCFull___024root___nba_sequent__TOP__12(vlSelf);
        VysyxSoCFull___024root___nba_sequent__TOP__13(vlSelf);
        VysyxSoCFull___024root___nba_sequent__TOP__14(vlSelf);
        VysyxSoCFull___024root___nba_sequent__TOP__15(vlSelf);
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_sequent__TOP__16(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_sequent__TOP__17(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_sequent__TOP__18(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_sequent__TOP__19(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_sequent__TOP__20(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
    if ((0x22ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_sequent__TOP__21(vlSelf);
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_sequent__TOP__22(vlSelf);
        vlSelf->__Vm_traceActivity[0xbU] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_sequent__TOP__23(vlSelf);
        vlSelf->__Vm_traceActivity[0xcU] = 1U;
    }
    if ((0x24ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((6ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_comb__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[0xdU] = 1U;
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_sequent__TOP__24(vlSelf);
        vlSelf->__Vm_traceActivity[0xeU] = 1U;
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_sequent__TOP__25(vlSelf);
        vlSelf->__Vm_traceActivity[0xfU] = 1U;
    }
    if ((0x60ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_comb__TOP__4(vlSelf);
    }
    if ((0x42ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_comb__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[0x10U] = 1U;
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_sequent__TOP__26(vlSelf);
        vlSelf->__Vm_traceActivity[0x11U] = 1U;
    }
    if ((0x22ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_comb__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[0x12U] = 1U;
    }
    if ((0x26ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_comb__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[0x13U] = 1U;
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_sequent__TOP__27(vlSelf);
        vlSelf->__Vm_traceActivity[0x14U] = 1U;
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_sequent__TOP__28(vlSelf);
        vlSelf->__Vm_traceActivity[0x15U] = 1U;
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_sequent__TOP__29(vlSelf);
    }
    if ((0x62ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_comb__TOP__8(vlSelf);
        vlSelf->__Vm_traceActivity[0x16U] = 1U;
    }
    if ((0x27ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_comb__TOP__9(vlSelf);
        vlSelf->__Vm_traceActivity[0x17U] = 1U;
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VysyxSoCFull___024root___nba_sequent__TOP__30(vlSelf);
    }
}

void VysyxSoCFull___024root___eval_triggers__ico(VysyxSoCFull___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__ico(VysyxSoCFull___024root* vlSelf);
#endif  // VL_DEBUG
void VysyxSoCFull___024root___eval_ico(VysyxSoCFull___024root* vlSelf);
void VysyxSoCFull___024root___eval_triggers__act(VysyxSoCFull___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__act(VysyxSoCFull___024root* vlSelf);
#endif  // VL_DEBUG
void VysyxSoCFull___024root___eval_act(VysyxSoCFull___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__nba(VysyxSoCFull___024root* vlSelf);
#endif  // VL_DEBUG

void VysyxSoCFull___024root___eval(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<10> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        VysyxSoCFull___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VysyxSoCFull___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 147362, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VysyxSoCFull___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VysyxSoCFull___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VysyxSoCFull___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 147362, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                VysyxSoCFull___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VysyxSoCFull___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 147362, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VysyxSoCFull___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VysyxSoCFull___024root___eval_debug_assertions(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
