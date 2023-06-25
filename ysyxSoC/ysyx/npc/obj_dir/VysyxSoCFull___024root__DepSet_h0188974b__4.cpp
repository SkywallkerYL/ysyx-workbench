// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull___024root.h"

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__18(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__18\n"); );
    // Init
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin = 0;
    // Body
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin;
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin) 
                 + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source_io_enq_ready))));
    __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin) 
                 + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source_io_enq_ready))));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_widx_bin = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_widx_bin = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_widx_bin = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_widx_bin = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_widx_bin = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_widx_bin 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_incremented_T_1)
                : 0U);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_widx_bin 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_incremented_T_1)
                : 0U);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_widx_bin 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_incremented_T_1)
                : 0U);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_widx_bin 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_incremented_T_1)
                : 0U);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_widx_bin 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_incremented_T_1)
                : 0U);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray 
            = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_incremented) 
                       ^ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_incremented) 
                          >> 1U)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray 
            = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_incremented) 
                       ^ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_incremented) 
                          >> 1U)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray 
            = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_incremented) 
                       ^ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_incremented) 
                          >> 1U)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray 
            = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_incremented) 
                       ^ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_incremented) 
                          >> 1U)));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray 
            = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_incremented) 
                       ^ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_incremented) 
                          >> 1U)));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ready_reg 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
              & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin) 
                     + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source_io_enq_ready))) 
                 != (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ready_reg 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
              & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin) 
                     + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source_io_enq_ready))) 
                 != (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ready_reg 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
              & ((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_incremented) 
                          ^ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_incremented) 
                             >> 1U))) != (0xcU ^ ((
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                                    << 3U) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ready_reg 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
              & ((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_incremented) 
                          ^ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_incremented) 
                             >> 1U))) != (0xcU ^ ((
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                                    << 3U) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ready_reg 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
              & ((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_incremented) 
                          ^ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_incremented) 
                             >> 1U))) != (0xcU ^ ((
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                                    << 3U) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ready_reg 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
              & ((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_incremented) 
                          ^ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_incremented) 
                             >> 1U))) != (0xcU ^ ((
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                                    << 3U) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ready_reg 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
              & ((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_incremented) 
                          ^ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_incremented) 
                             >> 1U))) != (0xcU ^ ((
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                                    << 3U) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_gray 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin) 
                 + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source_io_enq_ready))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_gray 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin) 
                 + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source_io_enq_ready))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin 
        = __Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin;
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__index 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray) 
                 ^ (4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray) 
                          >> 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__index 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray) 
                 ^ (4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray) 
                          >> 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__index 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray) 
                 ^ (4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray) 
                          >> 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__index 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray) 
                 ^ (4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray) 
                          >> 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__index 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray) 
                 ^ (4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray) 
                          >> 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q_io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ready_reg) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q_io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ready_reg) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q_io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ready_reg) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q_io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ready_reg) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q_io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ready_reg) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source_io_enq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ready_reg) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source_io_enq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ready_reg) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__ridx_gray));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__ridx_gray));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_gray) 
              >> 3U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_gray) 
                    >> 2U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_gray) 
                    >> 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_gray)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_gray) 
              >> 3U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_gray) 
                    >> 2U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_gray) 
                    >> 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_gray)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_gray) 
              >> 3U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_gray) 
                    >> 2U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_gray) 
                    >> 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_gray)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_gray) 
              >> 3U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_gray) 
                    >> 2U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_gray) 
                    >> 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_gray)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_gray) 
              >> 3U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_gray) 
                    >> 2U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_gray) 
                    >> 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_gray)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__19(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__19\n"); );
    // Init
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin = 0;
    CData/*0:0*/ __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin = 0;
    // Body
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin;
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin) 
                 + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source_io_enq_ready))));
    __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin) 
                 + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source_io_enq_ready))));
    if (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_widx_bin = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_widx_bin = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_widx_bin = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_widx_bin = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_widx_bin = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray = 0U;
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray = 0U;
    } else {
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_widx_bin 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT___widx_incremented_T_1)
                : 0U);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_widx_bin 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT___widx_incremented_T_1)
                : 0U);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_widx_bin 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT___widx_incremented_T_1)
                : 0U);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_widx_bin 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT___widx_incremented_T_1)
                : 0U);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_widx_bin 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT___widx_incremented_T_1)
                : 0U);
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray 
            = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_incremented) 
                       ^ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_incremented) 
                          >> 1U)));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray 
            = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_incremented) 
                       ^ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_incremented) 
                          >> 1U)));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray 
            = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_incremented) 
                       ^ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_incremented) 
                          >> 1U)));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray 
            = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_incremented) 
                       ^ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_incremented) 
                          >> 1U)));
        vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray 
            = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_incremented) 
                       ^ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_incremented) 
                          >> 1U)));
    }
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ready_reg 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
              & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin) 
                     + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source_io_enq_ready))) 
                 != (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ready_reg 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
              & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin) 
                     + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source_io_enq_ready))) 
                 != (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ready_reg 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
              & ((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_incremented) 
                          ^ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_incremented) 
                             >> 1U))) != (0xcU ^ ((
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                                    << 3U) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ready_reg 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
              & ((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_incremented) 
                          ^ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_incremented) 
                             >> 1U))) != (0xcU ^ ((
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                                    << 3U) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ready_reg 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
              & ((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_incremented) 
                          ^ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_incremented) 
                             >> 1U))) != (0xcU ^ ((
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                                    << 3U) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ready_reg 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
              & ((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_incremented) 
                          ^ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_incremented) 
                             >> 1U))) != (0xcU ^ ((
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                                    << 3U) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ready_reg 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
              & ((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_incremented) 
                          ^ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_incremented) 
                             >> 1U))) != (0xcU ^ ((
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0) 
                                                    << 3U) 
                                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0) 
                                                      << 2U)) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0)))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_gray 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin) 
                 + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source_io_enq_ready))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_gray 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin) 
                 + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source_io_enq_ready))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin 
        = __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__widx_widx_bin;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin 
        = __Vdly__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__widx_widx_bin;
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__index 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray) 
                 ^ (4U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__widx_gray) 
                          >> 1U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__index 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray) 
                 ^ (4U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__widx_gray) 
                          >> 1U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__index 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray) 
                 ^ (4U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__widx_gray) 
                          >> 1U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__index 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray) 
                 ^ (4U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__widx_gray) 
                          >> 1U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__index 
        = (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray) 
                 ^ (4U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__widx_gray) 
                          >> 1U))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q_io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ready_reg) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q_io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ready_reg) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q_io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ready_reg) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q_io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ready_reg) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q_io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ready_reg) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__do_bypass_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_2 
        = (1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source_io_enq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ready_reg) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source_io_enq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ready_reg) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_1 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxInc_sink__DOT__ridx_gray));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__txInc_sink__DOT__ridx_gray));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_gray) 
              >> 3U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_gray) 
                    >> 2U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_gray) 
                    >> 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_e_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_gray)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_gray) 
              >> 3U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_gray) 
                    >> 2U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_gray) 
                    >> 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_d_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_sink__DOT__ridx_gray)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_gray) 
              >> 3U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_gray) 
                    >> 2U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_gray) 
                    >> 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_c_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_gray)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_gray) 
              >> 3U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_gray) 
                    >> 2U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_gray) 
                    >> 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_bsource__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_gray)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_3__DOT__sync_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_gray) 
              >> 3U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_2__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_gray) 
                    >> 2U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain_1__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_gray) 
                    >> 1U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__ridx_ridx_gray__DOT__output_chain__DOT__sync_2 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_sink__DOT__ridx_gray)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_rxc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_2 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_txc_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0));
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__0(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__0\n"); );
    // Init
    CData/*7:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___align1_T_2;
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___align1_T_2 = 0;
    CData/*7:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___fillLow_T_8;
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___fillLow_T_8 = 0;
    CData/*7:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_14;
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_14 = 0;
    CData/*7:0*/ ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___align1_T_12;
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___align1_T_12 = 0;
    CData/*0:0*/ ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h40355eee__0;
    ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h40355eee__0 = 0;
    VlWide<4>/*127:0*/ __Vtemp_h4e59ae1f__0;
    VlWide<4>/*127:0*/ __Vtemp_hb0131719__0;
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache_valid)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__if_pc)
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__RegCacheAddr);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____VdfgTmp_h5515e8c7__0 
        = (((QData)((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr 
                             >> 8U))) << 8U) | (QData)((IData)(
                                                               (0xf0U 
                                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag[0U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag0
        [(0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr 
                  >> 4U))];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag[1U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag1
        [(0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr 
                  >> 4U))];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag[2U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag2
        [(0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr 
                  >> 4U))];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag[3U] 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag3
        [(0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr 
                  >> 4U))];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____VdfgTmp_hd43e32ae__0 
        = (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr 
             >> 8U) == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag3
            [(0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr 
                      >> 4U))]) & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__valid
           [(3U | (0x3cU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr 
                            >> 2U)))]);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____VdfgTmp_h512f6b16__0 
        = (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr 
             >> 8U) == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag2
            [(0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr 
                      >> 4U))]) & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__valid
           [(2U | (0x3cU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr 
                            >> 2U)))]);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____VdfgTmp_he8e6d7ce__0 
        = (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr 
             >> 8U) == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag1
            [(0xfU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr 
                      >> 4U))]) & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__valid
           [(1U | (0x3cU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr 
                            >> 2U)))]);
    if ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__fstate))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__addr 
            = (QData)((IData)(((((0U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__fencecnt)))
                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag0
                                 [(0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__fencecnt) 
                                           >> 2U))]
                                  : ((1U == (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__fencecnt)))
                                      ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag1
                                     [(0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__fencecnt) 
                                               >> 2U))]
                                      : ((2U == (3U 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__fencecnt)))
                                          ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag2
                                         [(0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__fencecnt) 
                                                   >> 2U))]
                                          : ((3U == 
                                              (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__fencecnt)))
                                              ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag3
                                             [(0xfU 
                                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__fencecnt) 
                                                  >> 2U))]
                                              : 0U)))) 
                                << 8U) | (0xf0U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__fencecnt) 
                                                   << 2U)))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__fencecnt;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__addr 
            = (QData)((IData)(((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag
                                [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__chooseway] 
                                << 8U) | (0xf0U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr 
            = (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__state)) 
                | (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__state)))
                ? ((0x3cU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr 
                             >> 2U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____VdfgTmp_hd43e32ae__0)
                                         ? 3U : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____VdfgTmp_h512f6b16__0)
                                                  ? 2U
                                                  : 
                                                 ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____VdfgTmp_he8e6d7ce__0)
                                                   ? 1U
                                                   : 0U))))
                : ((0x3cU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr 
                             >> 2U)) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__chooseway)));
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__hit 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____VdfgTmp_hd43e32ae__0) 
            << 3U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____VdfgTmp_h512f6b16__0) 
                       << 2U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____VdfgTmp_he8e6d7ce__0) 
                                  << 1U) | (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr 
                                              >> 8U) 
                                             == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Tag0
                                             [(0xfU 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr 
                                                  >> 4U))]) 
                                            & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__valid
                                            [(0x3cU 
                                              & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr 
                                                 >> 2U))]))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__63__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (0x3fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__62__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (0x3eU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__61__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (0x3dU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__60__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (0x3cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__59__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (0x3bU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__58__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (0x3aU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__57__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (0x39U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__56__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (0x38U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__55__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (0x37U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__54__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (0x36U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__53__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (0x35U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__52__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (0x34U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__51__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (0x33U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__50__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (0x32U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__49__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (0x31U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__48__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (0x30U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__47__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (0x2fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__46__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (0x2eU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__45__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (0x2dU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__44__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (0x2cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__43__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (0x2bU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__42__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (0x2aU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__41__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (0x29U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__40__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (0x28U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__39__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (0x27U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__38__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (0x26U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__37__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (0x25U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__36__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (0x24U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__35__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (0x23U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__34__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (0x22U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__33__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (0x21U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__32__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (0x20U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__31__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (0x1fU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__30__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (0x1eU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__29__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (0x1dU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__28__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__27__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (0x1bU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__26__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (0x1aU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__25__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (0x19U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__24__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (0x18U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__23__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__22__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (0x16U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__21__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (0x15U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__20__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (0x14U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__19__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (0x13U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__18__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (0x12U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__17__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (0x11U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__16__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (0x10U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__15__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__14__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__13__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__12__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__11__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__10__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__9__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__8__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__7__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__6__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__5__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__4__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__3__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__2__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__1__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__0__KET____DOT__regdirty__wen 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyWriteEn) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__axivalid 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__valid
           [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr] 
           & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirty
           [vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_sram_addr]);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__dirtyen 
        = (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__63__KET____DOT__regdirty__wen)) 
            << 0x3fU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__62__KET____DOT__regdirty__wen)) 
                          << 0x3eU) | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__61__KET____DOT__regdirty__wen)) 
                                        << 0x3dU) | 
                                       (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__60__KET____DOT__regdirty__wen)) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__59__KET____DOT__regdirty__wen)) 
                                            << 0x3bU) 
                                           | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__58__KET____DOT__regdirty__wen)) 
                                               << 0x3aU) 
                                              | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__57__KET____DOT__regdirty__wen)) 
                                                  << 0x39U) 
                                                 | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__56__KET____DOT__regdirty__wen)) 
                                                     << 0x38U) 
                                                    | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__55__KET____DOT__regdirty__wen)) 
                                                        << 0x37U) 
                                                       | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__54__KET____DOT__regdirty__wen)) 
                                                           << 0x36U) 
                                                          | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__53__KET____DOT__regdirty__wen)) 
                                                              << 0x35U) 
                                                             | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__52__KET____DOT__regdirty__wen)) 
                                                                 << 0x34U) 
                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__51__KET____DOT__regdirty__wen)) 
                                                                    << 0x33U) 
                                                                   | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__50__KET____DOT__regdirty__wen)) 
                                                                       << 0x32U) 
                                                                      | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__49__KET____DOT__regdirty__wen)) 
                                                                          << 0x31U) 
                                                                         | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__48__KET____DOT__regdirty__wen)) 
                                                                             << 0x30U) 
                                                                            | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__47__KET____DOT__regdirty__wen)) 
                                                                                << 0x2fU) 
                                                                               | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__46__KET____DOT__regdirty__wen)) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__45__KET____DOT__regdirty__wen)) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__44__KET____DOT__regdirty__wen)) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__43__KET____DOT__regdirty__wen)) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__42__KET____DOT__regdirty__wen)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__41__KET____DOT__regdirty__wen)) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__40__KET____DOT__regdirty__wen)) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__39__KET____DOT__regdirty__wen)) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__38__KET____DOT__regdirty__wen)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__37__KET____DOT__regdirty__wen)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__36__KET____DOT__regdirty__wen)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__35__KET____DOT__regdirty__wen)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__34__KET____DOT__regdirty__wen)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__33__KET____DOT__regdirty__wen)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__32__KET____DOT__regdirty__wen)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__31__KET____DOT__regdirty__wen) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__30__KET____DOT__regdirty__wen) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__29__KET____DOT__regdirty__wen) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__28__KET____DOT__regdirty__wen) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__27__KET____DOT__regdirty__wen) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__26__KET____DOT__regdirty__wen) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__25__KET____DOT__regdirty__wen) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__24__KET____DOT__regdirty__wen) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__23__KET____DOT__regdirty__wen) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__22__KET____DOT__regdirty__wen) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__21__KET____DOT__regdirty__wen) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__20__KET____DOT__regdirty__wen) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__19__KET____DOT__regdirty__wen) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__18__KET____DOT__regdirty__wen) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__17__KET____DOT__regdirty__wen) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__16__KET____DOT__regdirty__wen) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__15__KET____DOT__regdirty__wen) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__14__KET____DOT__regdirty__wen) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__13__KET____DOT__regdirty__wen) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__12__KET____DOT__regdirty__wen) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__11__KET____DOT__regdirty__wen) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__10__KET____DOT__regdirty__wen) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__9__KET____DOT__regdirty__wen) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__8__KET____DOT__regdirty__wen) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__7__KET____DOT__regdirty__wen) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__6__KET____DOT__regdirty__wen) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__5__KET____DOT__regdirty__wen) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__4__KET____DOT__regdirty__wen) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__3__KET____DOT__regdirty__wen) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__2__KET____DOT__regdirty__wen) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__1__KET____DOT__regdirty__wen) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____Vcellinp__valid_dirty__BRA__0__KET____DOT__regdirty__wen))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_ar_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__axivalid)) 
           & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__state)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_aw_valid 
        = (((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__state)) 
            | (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__fstate))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__axivalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Sram_ar_bits_addr 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Lsu_ar_valid)
            ? ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Reglen))
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____VdfgTmp_h5515e8c7__0
                : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Reglen))
                    ? (((QData)((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr 
                                         >> 8U))) << 8U) 
                       | (QData)((IData)((4U | (0xf0U 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)))))
                    : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Reglen))
                        ? (((QData)((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr 
                                             >> 8U))) 
                            << 8U) | (QData)((IData)(
                                                     (8U 
                                                      | (0xf0U 
                                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)))))
                        : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Reglen))
                            ? (((QData)((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr 
                                                 >> 8U))) 
                                << 8U) | (QData)((IData)(
                                                         (0xcU 
                                                          | (0xf0U 
                                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__true_cache_addr)))))
                            : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT____VdfgTmp_h5515e8c7__0))))
            : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_ar_valid)
                ? ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Reglen))
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____VdfgTmp_h5515e8c7__0
                    : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Reglen))
                        ? (((QData)((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr 
                                             >> 8U))) 
                            << 8U) | (QData)((IData)(
                                                     (4U 
                                                      | (0xf0U 
                                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)))))
                        : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Reglen))
                            ? (((QData)((IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr 
                                                 >> 8U))) 
                                << 8U) | (QData)((IData)(
                                                         (8U 
                                                          | (0xf0U 
                                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)))))
                            : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Reglen))
                                ? (((QData)((IData)(
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr 
                                                     >> 8U))) 
                                    << 8U) | (QData)((IData)(
                                                             (0xcU 
                                                              | (0xf0U 
                                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__true_cache_addr)))))
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____VdfgTmp_h5515e8c7__0))))
                : 0ULL));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Sram_ar_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_ar_valid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Lsu_ar_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____VdfgTmp_h0f0f23a0__0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_aw_valid)) 
           & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__fstate)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Sram_aw_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_aw_valid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Lsu_aw_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu_io_master_arvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DevSram_ar_valid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Sram_ar_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_ar_bits_addr 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DevSram_ar_valid)
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_h33d13855__0)
                ? (4ULL + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__REXLS_alures)
                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__REXLS_alures)
            : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Sram_ar_valid)
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Sram_ar_bits_addr
                : 0ULL));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__fencecntin 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____VdfgTmp_h6f19a505__0)
            ? 0U : (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__fencecnt) 
                             + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT____VdfgTmp_h0f0f23a0__0))));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DevSram_aw_valid) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu_io_master_awlen = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu_io_master_awsize = 2U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_aw_bits_addr 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT____VdfgTmp_hceeb7920__0)
                ? (4ULL + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__REXLS_alures)
                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__REXLS_alures);
    } else if (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Sram_aw_valid) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu_io_master_awlen = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu_io_master_awsize = 2U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_aw_bits_addr 
            = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Lsu_aw_valid)
                ? ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Reglen))
                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__addr
                    : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Reglen))
                        ? (4ULL + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__addr)
                        : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Reglen))
                            ? (8ULL + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__addr)
                            : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__Reglen))
                                ? (0xcULL + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__addr)
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__addr))))
                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_aw_valid)
                    ? ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Reglen))
                        ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__addr
                        : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Reglen))
                            ? (4ULL + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__addr)
                            : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Reglen))
                                ? (8ULL + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__addr)
                                : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__Reglen))
                                    ? (0xcULL + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__addr)
                                    : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__addr))))
                    : 0ULL));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu_io_master_awlen = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu_io_master_awsize = 4U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_aw_bits_addr = 0ULL;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu_io_master_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DevSram_aw_valid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Sram_aw_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_addr 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__maybe_full)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__ram_addr
           [0U] : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_ar_bits_addr));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_3 
        = ((0U == (0xffffb000U & (0x10002000U ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_ar_bits_addr)))) 
           | ((0U == (0xfc000000U & (0x1c000000U ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_ar_bits_addr)))) 
              | (0U == (0xf0000000U & (0x20000000U 
                                       ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_ar_bits_addr))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1 
        = ((0U == (0xffffa000U & (0x10000000U ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_ar_bits_addr)))) 
           | (0U == (0xf0000000U & (0x30000000U ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_ar_bits_addr)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0 
        = ((0U == (0xc0000000U & (0x40000000U ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_ar_bits_addr)))) 
           | (0U == (0x80000000U & (0x80000000U ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_ar_bits_addr)))));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__maybe_full) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_len 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__ram_len
            [0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_size 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__ram_size
            [0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_addr 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__ram_addr
            [0U];
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_len 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu_io_master_awlen;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_size 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu_io_master_awsize;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_addr 
            = (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_aw_bits_addr);
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu_io_master_awvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_3 
        = ((0U == (0xffffb000U & (0x10002000U ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_aw_bits_addr)))) 
           | ((0U == (0xfc000000U & (0x1c000000U ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_aw_bits_addr)))) 
              | (0U == (0xf0000000U & (0x20000000U 
                                       ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_aw_bits_addr))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1 
        = ((0U == (0xffffa000U & (0x10000000U ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_aw_bits_addr)))) 
           | (0U == (0xf0000000U & (0x30000000U ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_aw_bits_addr)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0 
        = ((0U == (0xc0000000U & (0x40000000U ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_aw_bits_addr)))) 
           | (0U == (0x80000000U & (0x80000000U ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_aw_bits_addr)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__addr 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__busy)
            ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__r_addr
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_addr);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arTag_hi_1 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_3) 
            << 1U) | (0U == (0xffffb000U & (0x10003000U 
                                            ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_ar_bits_addr)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arTag_lo_1 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1) 
            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__busy_1) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__len_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__r_len_1;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__addr_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__r_addr_1;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__len_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_len;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__addr_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_addr;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wrapMask_T_3 
        = (0x7fffffU & ((0xffU | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_len) 
                                  << 8U)) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_size)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT___do_enq_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_deq_valid 
        = (1U & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty)) 
                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_bits_hi 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_3) 
            << 1U) | (0U == (0xffffb000U & (0x10003000U 
                                            ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_aw_bits_addr)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0) 
            & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__maybe_full))) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bundleIn_0_awready)) 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_3) 
                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__hvga__DOT__mvga_ctrl_io_slave_awready))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_bits_lo 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1) 
            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_5 
        = ((~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__addr) 
           | (7U & (~ ((IData)(7U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_size)))));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___align1_T_2 
        = (0xffU & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__addr 
                     >> 3U) | (0x3ffffffeU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__addr 
                                              >> 2U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arTag 
        = (((IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arTag_hi_1))) 
            << 1U) | (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arTag_hi_1) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arTag_lo_1)) 
                            >> 1U)));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___fillLow_T_8 
        = (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__len_1) 
                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__len_1) 
                       >> 1U)));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_14 
        = (0xffU & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__len_1)) 
                    | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__len_1)) 
                       << 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___GEN_64 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT___do_enq_T) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_w_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_12 
        = ((~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__addr_1) 
           | (7U & (~ ((IData)(7U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_size)))));
    ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___align1_T_12 
        = (0xffU & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__addr_1 
                     >> 3U) | (0x3ffffffeU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__addr_1 
                                              >> 2U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_bits 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_bits_hi) 
            << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_bits_lo));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awTag 
        = (((IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_bits_hi))) 
            << 1U) | (1U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_bits_hi) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_bits_lo)) 
                            >> 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___align1_T_5 
        = (0xffU & ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___align1_T_2) 
                    | ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___align1_T_2) 
                       << 2U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0 
        = (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count)) 
            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_last) 
               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arTag))) 
           & (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0_count)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___fillLow_T_10 
        = (0xffU & ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___fillLow_T_8) 
                    | ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___fillLow_T_8) 
                       >> 2U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_17 
        = (0xffU & ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_14) 
                    | ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_14) 
                       << 2U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___align1_T_15 
        = (0xffU & ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___align1_T_12) 
                    | ((IData)(ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___align1_T_12) 
                       << 2U)));
    ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h40355eee__0 
        = (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__full)) 
            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__latched)) 
           & (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count)) 
               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_last) 
                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awTag))) 
              & (7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awFIFOMap_0_count))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_arlen 
        = (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_burst)) 
            | (3U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_size)))
            ? 0U : (7U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___align1_T_5) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___align1_T_5) 
                                 << 4U))) & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_6) 
                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_6) 
                                                    << 4U))) 
                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___fillLow_T_3) 
                                                 >> 1U) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___fillLow_T_3) 
                                                   >> 5U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_in_arready 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0) 
             & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__maybe_full))) 
            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1) 
                & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))) 
               | (((0U == (0xffffb000U & (0x10003000U 
                                          ^ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_ar_bits_addr)))) 
                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lps2__DOT__mps2__DOT__sraddrEn)) 
                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_3) 
                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__hvga__DOT__mvga_ctrl_io_slave_arready))))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu_io_master_arvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__arFIFOMap_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_awlen 
        = (((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_burst)) 
            | (3U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_size)))
            ? 0U : (7U & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___align1_T_15) 
                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___align1_T_15) 
                                 << 4U))) & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_17) 
                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___wipeHigh_T_17) 
                                                    << 4U))) 
                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___fillLow_T_10) 
                                                 >> 1U) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___fillLow_T_10) 
                                                   >> 5U))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_deq_bits 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty)
            ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_enq_bits)
            : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram
           [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__deq_ptr_value]);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_1_wvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_deq_bits) 
              >> 1U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready 
        = (1U & (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__maybe_full)) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_deq_bits)) 
                 | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_deq_bits) 
                      >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bundleIn_0_wready)) 
                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_deq_bits) 
                        >> 3U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__hvga__DOT__mvga_ctrl_io_slave_wready)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_0_wvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_deq_bits));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_in_awready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awready) 
           & (IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h40355eee__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu_io_master_awvalid) 
           & (IData)(ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT____VdfgTmp_h40355eee__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__beats 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_arlen)) 
           & (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_arlen) 
                    << 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ram_real_last_MPORT_data 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__len) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_arlen));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize1_T_1 
        = (0x7fffffU & ((0xffU | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_arlen) 
                                  << 8U)) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_size)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___arFIFOMap_0_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_in_arready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu_io_master_arvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Lsu_ar_ready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DevSram_ar_valid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_in_arready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__portsAROI_filtered_1_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_0_arvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_arvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestARIO_0_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_beats 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_awlen)) 
           & (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_awlen) 
                    << 1U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ram_real_last_MPORT_data 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__len_1) 
           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_awlen));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize1_T_1 
        = (0x7fffffU & ((0xffU | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_awlen) 
                                  << 8U)) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_size)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT___wdata_reg_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bundleIn_0_wready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_1_wvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_deq_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_w_valid) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_w_bits_last) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__ram_MPORT_en 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty)
            ? ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_deq_ready)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT___do_enq_T))
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT___do_enq_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DevSram_w_ready 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_wready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT___do_enq_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_0_wvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq_io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_0_wvalid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT___awFIFOMap_0_T_1 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_in_awready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu_io_master_awvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Lsu_aw_ready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DevSram_aw_valid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_in_awready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__portsAWOI_filtered_1_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_0_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__in_0_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__requestAWIO_0_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__inc_addr 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__addr 
           + (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__beats) 
                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_size))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_4 
        = ((~ (0x7fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize1_T_1 
                          >> 8U))) & (1U | (0xfffeU 
                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize1_T_1 
                                               >> 7U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT___rid_reg_T 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__portsAROI_filtered_1_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT___do_enq_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_0_arvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_0_arvalid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__inc_addr_1 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__addr_1 
           + (0xffffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_beats) 
                         << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_size))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_4 
        = ((~ (0x7fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize1_T_1 
                          >> 8U))) & (1U | (0xfffeU 
                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize1_T_1 
                                               >> 7U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__do_deq 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0__DOT__empty)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_deq_ready) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__awIn_0_io_deq_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Lsu_w_ready 
        = ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__Wstate)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DevSram_w_ready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_aw_ready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Lsu_aw_valid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Lsu_aw_ready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT___bid_reg_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bundleIn_0_awready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar__DOT__portsAWOI_filtered_1_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT___do_enq_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_0_awvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_auto_out_0_awvalid) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__maybe_full));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_5 
        = (0xffU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_4) 
                     >> 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_4)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_out_arvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT___GEN_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_5 
        = (0xffU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_4) 
                     >> 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_4)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_w_ready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Lsu_w_valid)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Lsu_w_ready));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___in_awready_T));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__wbeats_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__wbeats_latched)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_6 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_5) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_5)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_6 
        = (0xfU & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_5) 
                    >> 4U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_5)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__fnext 
        = ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__fstate))
            ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__fstate))
                ? 3U : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_w_valid) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_w_ready))
                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_w_valid)
                             ? 3U : 2U) : 2U)) : ((1U 
                                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__fstate))
                                                   ? 
                                                  (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_aw_valid) 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_aw_ready))
                                                    ? 2U
                                                    : 
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_aw_valid)
                                                     ? 1U
                                                     : 
                                                    ((0x3fU 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__fencecnt))
                                                      ? 0U
                                                      : 1U)))
                                                   : 
                                                  ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__Icache_fence) 
                                                     & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__RLSWB_flush)) 
                                                    & (0U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__state)))
                                                    ? 1U
                                                    : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_out_awvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT___GEN_9));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___GEN_10 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__wbeats_valid) 
            & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_counter))) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__wbeats_latched));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_todo 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_counter))
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__wbeats_valid)
                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_beats)
                : 0U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_counter));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___bundleOut_0_wvalid_T_1 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__w_counter)) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__wbeats_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_sizeOH_shiftAmount 
        = (((IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_6) 
                                  >> 2U)))) << 1U) 
           | (IData)((0U != (0xaU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_6)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_1_size 
        = (((IData)((0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_5) 
                                    >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_6) 
                                     >> 2U)))) << 1U) 
              | (IData)((0U != (0xaU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_6))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_wvalid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq_io_deq_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___bundleOut_0_wvalid_T_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_size 
        = (((IData)((0U != (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_5) 
                                    >> 4U)))) << 2U) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_sizeOH_shiftAmount));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_out_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_out_awvalid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag_auto_out_wvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_size 
        = (((IData)((0U != (0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___rsize_T_4) 
                                     >> 8U)))) << 3U) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_size));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__readys_filter_lo 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_out_valid) 
            << 1U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_out_arvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr 
        = (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_size)) 
            & ((0U == (0xfffff000U & (0x1000U ^ (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_5)))) 
               | ((0U == (0xc0000000U & (0x40000000U 
                                         ^ (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_5)))) 
                  | (0U == (0x80000000U & (0x80000000U 
                                           ^ (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_5)))))))
            ? (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_5)
            : (0x1000U | (7U & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_5))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid 
        = ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__beatsLeft))
            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_out_arvalid) 
               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_out_valid))
            : (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_out_arvalid) 
                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__state_0)) 
               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__state_1) 
                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_out_valid))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater__DOT__full) 
           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__readys_filter 
        = ((((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__readys_mask)) 
             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__readys_filter_lo)) 
            << 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__readys_filter_lo));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_2 
        = (IData)((0U == (6U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_3 
        = (IData)((2U == (6U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_4 
        = (IData)((4U == (6U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_5 
        = (IData)((6U == (6U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc 
        = (1U & ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_size)) 
                 | (1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr 
                              >> 2U)) & (((IData)(1U) 
                                          << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_sizeOH_shiftAmount)) 
                                         >> 2U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_1 
        = (1U & ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_size)) 
                 | (1U & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_sizeOH_shiftAmount)) 
                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr) 
                          >> 2U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__readys_unready 
        = (0xfU & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__readys_filter) 
                     >> 1U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__readys_filter) 
                               >> 2U)) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__readys_mask) 
                                          << 2U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc) 
           | (3U & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_sizeOH_shiftAmount)) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_2))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc) 
           | (3U & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_sizeOH_shiftAmount)) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_3))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_4 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_1) 
           | (3U & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_sizeOH_shiftAmount)) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_4))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_5 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_1) 
           | (3U & ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_sizeOH_shiftAmount)) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_5))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___readys_readys_T_2 
        = (3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__readys_unready) 
                  >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__readys_unready)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___readys_mask_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__readys_filter_lo) 
           & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___readys_readys_T_2)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__earlyWinner_0 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___readys_readys_T_2)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank_auto_out_arvalid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__earlyWinner_1 
        = ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___readys_readys_T_2) 
               >> 1U)) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_out_valid));
    if ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__beatsLeft))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxStateEarly_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__earlyWinner_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxStateEarly_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__earlyWinner_1;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxStateEarly_0 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__state_0;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxStateEarly_1 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__state_1;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxStateEarly_1) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__cated_bits_data_lo 
            = (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq_io_deq_bits_data);
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_enq_bits_data 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq_io_deq_bits_data;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__cated_bits_data_lo = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_enq_bits_data = 0ULL;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor_io_in_a_bits_mask 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxStateEarly_0)
             ? ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_5) 
                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_5) 
                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr)) 
                 << 7U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_5) 
                             | ((~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_5))) 
                            << 6U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_4) 
                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_4) 
                                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr)) 
                                       << 5U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_4) 
                                                   | ((~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr) 
                                                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_4))) 
                                                  << 4U) 
                                                 | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_3) 
                                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_3) 
                                                         & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr)) 
                                                     << 3U) 
                                                    | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_3) 
                                                         | ((~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr) 
                                                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_3))) 
                                                        << 2U) 
                                                       | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_2) 
                                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_2) 
                                                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr)) 
                                                           << 1U) 
                                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_acc_2) 
                                                             | ((~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr) 
                                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_mask_eq_2))))))))))
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxStateEarly_1)
                       ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__maybe_full)
                           ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__ram_strb
                          [0U] : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__TopSram_w_bits_strb))
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_source 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxStateEarly_0)
             ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_id) 
                 << 3U) | (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_io_deq_bits_id)
                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_count_1)
                                   : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_count_0)) 
                                 << 1U))) : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxStateEarly_1)
                                                    ? 
                                                   (1U 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_id) 
                                                        << 3U) 
                                                       | (6U 
                                                          & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1_io_deq_bits_id)
                                                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_count_1)
                                                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__w_count_0)) 
                                                             << 1U))))
                                                    : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxStateEarly_0)
             ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_size)
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxStateEarly_1)
                       ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_1_size)
                       : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxStateEarly_0)
             ? 4U : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxStateEarly_1)
                            ? 1U : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxStateEarly_0)
             ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__r_addr
             : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__muxStateEarly_1)
                       ? (((6U >= (((IData)((0U != 
                                             (0xffU 
                                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT___wsize_T_4) 
                                                 >> 8U)))) 
                                    << 3U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__a_1_size))) 
                           & ((0U == (0xfffff000U & 
                                      (0x1000U ^ (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_12)))) 
                              | ((0U == (0xc0000000U 
                                         & (0x40000000U 
                                            ^ (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_12)))) 
                                 | (0U == (0x80000000U 
                                           & (0x80000000U 
                                              ^ (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_12)))))))
                           ? (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_12)
                           : (0x1000U | (7U & (~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT___out_bits_addr_T_12))))
                       : 0U));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater__DOT__full) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_data 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater__DOT__saved_data;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_mask 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater__DOT__saved_mask;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater__DOT__saved_source;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater__DOT__saved_size;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater__DOT__saved_opcode;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater__DOT__saved_address;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_data 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_enq_bits_data;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_mask 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor_io_in_a_bits_mask;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_source;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___GEN_30 
        = ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))
            ? 2U : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))
                     ? 1U : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))
                              ? 1U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_opcode))
                                       ? 1U : 0U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT___T_77 
        = ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)) 
           & (0U == (0xfffff000U & (0x1000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_eq_2 
        = (IData)((0U == (6U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_eq_3 
        = (IData)((2U == (6U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_eq_4 
        = (IData)((4U == (6U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_eq_5 
        = (IData)((6U == (6U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_acc 
        = (1U & ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)) 
                 | (1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address 
                              >> 2U)) & (((IData)(1U) 
                                          << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size))) 
                                         >> 2U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size))) 
                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address) 
                          >> 2U))));
    if ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___GEN_30 = 2U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___GEN_30 = 2U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___GEN_30 = 2U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___GEN_30 = 2U;
    } else if ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___GEN_30 = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___GEN_30 = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___GEN_30 = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___GEN_30 = 1U;
    } else if ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___GEN_30 = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___GEN_30 = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___GEN_30 = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___GEN_30 = 1U;
    } else if ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___GEN_30 = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___GEN_30 = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___GEN_30 = 1U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___GEN_30 = 1U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT___GEN_30 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___GEN_30 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___GEN_30 = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___GEN_30 = 0U;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeat_last 
        = (IData)((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode) 
                    >> 2U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeat_count) 
                              == (1U & (~ (1U & (((IData)(7U) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                                                 >> 2U)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__beats1_opdata 
        = ((7U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode)) 
           & ((6U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode)) 
              & ((5U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode)) 
                 & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode)) 
                    | ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode)) 
                       | (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode)))))));
    if ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__da_bits_opcode = 4U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___GEN_32 = 4U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___GEN_32 = 4U;
    } else if ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__da_bits_opcode = 4U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___GEN_32 = 4U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___GEN_32 = 4U;
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__da_bits_opcode 
            = ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                ? 2U : ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                         ? 1U : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                  ? 1U : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                           ? 1U : 0U))));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___GEN_32 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___GEN_30;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___GEN_32 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT___GEN_30;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__a_last 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__a_last_counter)) 
           | (0U == ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                      ? 0U : (0x3ffU & (~ (0x3ffU & 
                                           (((IData)(0xfffU) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                                            >> 2U)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_eq_2))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_eq_3))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_eq_4))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_eq_5))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_461 
        = ((0U == (0xc0000000U & (0x40000000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))) 
           | (0U == (0x80000000U & (0x80000000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT___T_77 
        = ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
           & (0U == (0xfffff000U & (0x1000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT___T_77 
        = ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
           & (0U == (0xfffff000U & (0x1000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__mask_acc 
        = (1U & ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                 | (1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                              >> 1U)) & (((IData)(1U) 
                                          << (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size))) 
                                         >> 1U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                 | (1U & ((((IData)(1U) << (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size))) 
                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address) 
                          >> 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask_acc 
        = (1U & ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                 | (1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                              >> 1U)) & (((IData)(1U) 
                                          << (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size))) 
                                         >> 1U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                 | (1U & ((((IData)(1U) << (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size))) 
                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address) 
                          >> 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__mask_acc 
        = (1U & ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                 | (1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                              >> 1U)) & (((IData)(1U) 
                                          << (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size))) 
                                         >> 1U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                 | (1U & ((((IData)(1U) << (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size))) 
                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address) 
                          >> 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__mask_acc 
        = (1U & ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                 | (1U & ((~ (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                              >> 1U)) & (((IData)(1U) 
                                          << (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size))) 
                                         >> 1U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                 | (1U & ((((IData)(1U) << (1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size))) 
                           & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address) 
                          >> 1U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask_eq_2 
        = (IData)((0U == (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask_eq_3 
        = (IData)((1U == (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask_eq_4 
        = (IData)((2U == (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask_eq_5 
        = (IData)((3U == (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeat_index 
        = (1U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                  >> 2U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeat_count)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__requestAIO_0_0 
        = ((0U == (0xc0000000U & (0x40000000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))) 
           | (0U == (0x80000000U & (0x80000000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__a_id 
        = (((0U == (0xc0000000U & (0x40000000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))) 
            | (0U == (0x80000000U & (0x80000000U ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)))) 
           | ((0U == (0xc0000000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))
               ? 2U : 0U));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__maybe_full) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_source 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_source
            [0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_size 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_size
            [0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_opcode
            [0U];
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_source 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_size 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_opcode 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___io_q_bits_beats_T_13 
        = (0x1fU & ((IData)(3U) + (((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_opcode))
                                     ? 0U : ((0x1eU 
                                              & (((IData)(1U) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_size)) 
                                                 >> 2U)) 
                                             | (2U 
                                                >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_size)))) 
                                   + ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_opcode))
                                       ? ((2U & (((IData)(1U) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_size)) 
                                                 >> 5U)) 
                                          | (5U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_size)))
                                       : 0U))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__header 
        = ((((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_source))
              ? 7U : ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_source))
                       ? 6U : ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_source))
                                ? 5U : ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_source))
                                         ? 4U : ((0xbU 
                                                  == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_source))
                                                  ? 3U
                                                  : 
                                                 ((0xaU 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_source))
                                                   ? 2U
                                                   : 
                                                  ((9U 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_source))
                                                    ? 1U
                                                    : 
                                                   ((8U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_source))
                                                     ? 0U
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_source))
                                                      ? 7U
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_source))
                                                       ? 6U
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_source))
                                                        ? 5U
                                                        : 
                                                       ((4U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_source))
                                                         ? 4U
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_source))
                                                          ? 3U
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_source))
                                                           ? 2U
                                                           : 
                                                          ((1U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_source))
                                                            ? 1U
                                                            : 0U))))))))))))))) 
            << 0x10U) | ((((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_source))
                            ? 2U : ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_source))
                                     ? 2U : ((0xdU 
                                              == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_source))
                                              ? 2U : 
                                             ((0xcU 
                                               == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_source))
                                               ? 2U
                                               : ((0xbU 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_source))
                                                   ? 2U
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_source))
                                                    ? 2U
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_source))
                                                     ? 2U
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_source))
                                                      ? 2U
                                                      : 1U)))))))) 
                          << 0xdU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_size) 
                                       << 9U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__maybe_full)
                                                    ? 
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_param
                                                   [0U]
                                                    : 0U) 
                                                  << 6U) 
                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_opcode) 
                                                    << 3U)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_last 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_last_counter)) 
           | (0U == ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_opcode))
                      ? 0U : (0xfU & (~ (0xfU & (((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_size)) 
                                                 >> 2U)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__isLastState 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__state) 
           == ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_opcode))
                ? 2U : 3U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_acc_5) 
             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_eq_5) 
                & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)) 
            << 7U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_acc_5) 
                        | ((~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address) 
                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_eq_5))) 
                       << 6U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_acc_4) 
                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_eq_4) 
                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)) 
                                  << 5U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_acc_4) 
                                              | ((~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address) 
                                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_eq_4))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_acc_3) 
                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_eq_3) 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)) 
                                                << 3U) 
                                               | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_acc_3) 
                                                    | ((~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address) 
                                                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_eq_3))) 
                                                   << 2U) 
                                                  | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_acc_2) 
                                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_eq_2) 
                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address)) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_acc_2) 
                                                        | ((~ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl_auto_out_a_bits_address) 
                                                           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__monitor__DOT__mask_eq_2))))))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__mask 
        = ((8U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__mask_acc_1) 
                   << 3U) | (0xfffffff8U & ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                             << 2U) 
                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address 
                                               << 3U))))) 
           | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__mask_acc_1) 
                | (2U == (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))) 
               << 2U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__mask_acc) 
                           | (1U == (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))) 
                          << 1U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__monitor__DOT__mask_acc) 
                                    | (0U == (3U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask_acc_1) 
             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask_eq_5)) 
            << 3U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask_acc_1) 
                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask_eq_4)) 
                       << 2U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask_acc) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask_eq_3)) 
                                  << 1U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask_acc) 
                                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask_eq_2)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__mask 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__mask_acc_1) 
             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask_eq_5)) 
            << 3U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__mask_acc_1) 
                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask_eq_4)) 
                       << 2U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__mask_acc) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask_eq_3)) 
                                  << 1U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor__DOT__mask_acc) 
                                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask_eq_2)))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__mask 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__mask_acc_1) 
             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask_eq_5)) 
            << 3U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__mask_acc_1) 
                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask_eq_4)) 
                       << 2U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__mask_acc) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask_eq_3)) 
                                  << 1U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__error__DOT__monitor__DOT__mask_acc) 
                                            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor__DOT__mask_eq_2)))));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeat_index) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask 
            = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_mask) 
                       >> 4U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_a_bits_data 
            = (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_data 
                       >> 0x20U));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask 
            = (0xfU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_mask));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_a_bits_data 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__cated_bits_data_lo;
    }
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__maybe_full) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_mask 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_mask
            [0U];
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_data 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_data
            [0U];
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_mask 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__monitor_io_in_a_bits_mask;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_data 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_in_a_bits_data;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__stall 
        = (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
                >> 3U)) & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__a_first_counter)) 
                           & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_0) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_1) 
                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_2) 
                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_3) 
                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_4) 
                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_5) 
                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_6) 
                                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_7)))))))) 
                              & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__a_id)) 
                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__stalls_id) 
                                    != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__a_id)))))) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_source) 
               >> 3U) & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__a_first_counter)) 
                         & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_8) 
                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_9) 
                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_10) 
                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_11) 
                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_12) 
                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_13) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_14) 
                                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__flight_15)))))))) 
                            & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__a_id)) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__stalls_id_1) 
                                  != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__a_id)))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_o_ready 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q__DOT__valid_1)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__isLastState));
    if ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_opcode))) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_o_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__last;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_ready 
            = ((~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__last)) 
                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_last) 
                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__state) 
                         >> 3U)))) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_o_ready));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_o_last 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_last;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_ready 
            = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_o_ready;
    }
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer__DOT__stall)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q_io_enq_bits_last 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_o_last) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__isLastState));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT___GEN_2 
        = ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__state))
            ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_opcode))
                ? 0U : 3U) : ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__state))
                               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_o_last)
                                   ? 0U : 3U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__state)));
    __Vtemp_h4e59ae1f__0[0U] = (IData)((((QData)((IData)(
                                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_data 
                                                          >> 0x18U))) 
                                         << 0x1cU) 
                                        | (QData)((IData)(
                                                          ((0x8000000U 
                                                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_mask) 
                                                               << 0x18U)) 
                                                           | ((0x7f80000U 
                                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_data 
                                                                  << 3U)) 
                                                              | ((0x40000U 
                                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_mask) 
                                                                     << 0x10U)) 
                                                                 | ((0x3fc00U 
                                                                     & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_data 
                                                                        << 2U)) 
                                                                    | ((0x200U 
                                                                        & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_mask) 
                                                                           << 8U)) 
                                                                       | ((0x1feU 
                                                                           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_data 
                                                                              << 1U)) 
                                                                          | (1U 
                                                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_mask))))))))))));
    __Vtemp_h4e59ae1f__0[1U] = (IData)(((((QData)((IData)(
                                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_data 
                                                           >> 0x18U))) 
                                          << 0x1cU) 
                                         | (QData)((IData)(
                                                           ((0x8000000U 
                                                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_mask) 
                                                                << 0x18U)) 
                                                            | ((0x7f80000U 
                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_data 
                                                                   << 3U)) 
                                                               | ((0x40000U 
                                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_mask) 
                                                                      << 0x10U)) 
                                                                  | ((0x3fc00U 
                                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_data 
                                                                         << 2U)) 
                                                                     | ((0x200U 
                                                                         & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_mask) 
                                                                            << 8U)) 
                                                                        | ((0x1feU 
                                                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_data 
                                                                               << 1U)) 
                                                                           | (1U 
                                                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_mask))))))))))) 
                                        >> 0x20U));
    __Vtemp_h4e59ae1f__0[2U] = 0U;
    __Vtemp_h4e59ae1f__0[3U] = 0U;
    VL_SHIFTL_WWI(99,99,6, __Vtemp_hb0131719__0, __Vtemp_h4e59ae1f__0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__state) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide[0U] 
        = (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__shift 
           | __Vtemp_hb0131719__0[0U]);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide[1U] 
        = __Vtemp_hb0131719__0[1U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide[2U] 
        = __Vtemp_hb0131719__0[2U];
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide[3U] 
        = (7U & __Vtemp_hb0131719__0[3U]);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
           & (0U == (0xc0000000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1_auto_out_0_a_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_auto_out_a_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar_1__DOT__requestAIO_0_0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__qa_q_io_enq_bits_data 
        = ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__state))
            ? ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_opcode))
                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject__DOT__wide[0U]
                : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_bits_data)
            : ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__state))
                ? 0U : ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__state))
                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__maybe_full)
                             ? vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_address
                            [0U] : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_address)
                         : vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__header)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___T_679 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__a_first_counter_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___a_first_T 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__a__DOT__maybe_full)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor_io_in_a_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___T_682 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___a_first_T) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__a_first_counter_1)));
    if (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT___T_682) {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__a_opcodes_set_interm 
            = (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode) 
                     << 1U));
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__a_sizes_set_interm 
            = (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeated_repeater_io_deq_bits_size) 
                     << 1U));
    } else {
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__a_opcodes_set_interm = 0U;
        vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__ferr__DOT__monitor__DOT__a_sizes_set_interm = 0U;
    }
}

extern const VlWide<16>/*511:0*/ VysyxSoCFull__ConstPool__CONST_hffd88623_0;
extern const VlWide<16>/*511:0*/ VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0;
extern const VlWide<16>/*511:0*/ VysyxSoCFull__ConstPool__CONST_h93e1b771_0;
extern const VlWide<8>/*255:0*/ VysyxSoCFull__ConstPool__CONST_h57168600_0;
extern const VlWide<8>/*255:0*/ VysyxSoCFull__ConstPool__CONST_h5b979007_0;
extern const VlWide<8>/*255:0*/ VysyxSoCFull__ConstPool__CONST_h9e67c271_0;
extern const VlWide<32>/*1023:0*/ VysyxSoCFull__ConstPool__CONST_h7bd5304c_0;
extern const VlWide<32>/*1023:0*/ VysyxSoCFull__ConstPool__CONST_ha6258237_0;
extern const VlWide<32>/*1023:0*/ VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0;
extern const VlWide<16>/*511:0*/ VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0;

VL_INLINE_OPT void VysyxSoCFull___024root___nba_comb__TOP__1(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_comb__TOP__1\n"); );
    // Init
    VlWide<16>/*511:0*/ __Vtemp_h60eb240a__0;
    VlWide<16>/*511:0*/ __Vtemp_heefaeec6__0;
    VlWide<16>/*511:0*/ __Vtemp_h3f0b4583__0;
    VlWide<8>/*255:0*/ __Vtemp_hb5d5870d__0;
    VlWide<8>/*255:0*/ __Vtemp_hcbb4492d__0;
    VlWide<8>/*255:0*/ __Vtemp_ha85c2284__0;
    VlWide<16>/*511:0*/ __Vtemp_h60eb240a__1;
    VlWide<16>/*511:0*/ __Vtemp_h18fc88e8__0;
    VlWide<16>/*511:0*/ __Vtemp_h28d0e98f__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__0;
    VlWide<4>/*127:0*/ __Vtemp_haac69bac__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__1;
    VlWide<4>/*127:0*/ __Vtemp_h7a2dfbd6__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__2;
    VlWide<4>/*127:0*/ __Vtemp_h042d7f7e__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__3;
    VlWide<4>/*127:0*/ __Vtemp_hfefa9ade__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__4;
    VlWide<4>/*127:0*/ __Vtemp_hbd11f9cb__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__5;
    VlWide<4>/*127:0*/ __Vtemp_h05e8feab__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__6;
    VlWide<4>/*127:0*/ __Vtemp_h374d78d0__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__7;
    VlWide<4>/*127:0*/ __Vtemp_he75cff79__0;
    VlWide<8>/*255:0*/ __Vtemp_hb5d5870d__1;
    VlWide<8>/*255:0*/ __Vtemp_h6345fb0f__0;
    VlWide<8>/*255:0*/ __Vtemp_h3548a753__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__8;
    VlWide<4>/*127:0*/ __Vtemp_hab503110__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__9;
    VlWide<4>/*127:0*/ __Vtemp_h1e54f44f__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__10;
    VlWide<4>/*127:0*/ __Vtemp_hbdf88bad__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__11;
    VlWide<4>/*127:0*/ __Vtemp_h991c2491__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__12;
    VlWide<4>/*127:0*/ __Vtemp_ha46e8e7e__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__13;
    VlWide<4>/*127:0*/ __Vtemp_hc47fd079__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__14;
    VlWide<4>/*127:0*/ __Vtemp_h4a0d37f4__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__15;
    VlWide<4>/*127:0*/ __Vtemp_ha5921605__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__16;
    VlWide<4>/*127:0*/ __Vtemp_hc73bce29__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__17;
    VlWide<4>/*127:0*/ __Vtemp_h194c40db__0;
    VlWide<32>/*1023:0*/ __Vtemp_h1044627f__0;
    VlWide<32>/*1023:0*/ __Vtemp_h0a647d74__0;
    VlWide<32>/*1023:0*/ __Vtemp_h2dd64540__0;
    VlWide<32>/*1023:0*/ __Vtemp_h1044627f__1;
    VlWide<32>/*1023:0*/ __Vtemp_h573c882e__0;
    VlWide<32>/*1023:0*/ __Vtemp_ha958f336__0;
    VlWide<32>/*1023:0*/ __Vtemp_h1044627f__2;
    VlWide<32>/*1023:0*/ __Vtemp_h99a08fe7__0;
    VlWide<32>/*1023:0*/ __Vtemp_hcd780bb8__0;
    VlWide<16>/*511:0*/ __Vtemp_h68fdfb23__0;
    VlWide<16>/*511:0*/ __Vtemp_h1c13dfc3__0;
    VlWide<16>/*511:0*/ __Vtemp_hae827845__0;
    VlWide<16>/*511:0*/ __Vtemp_hcd3e0595__0;
    VlWide<16>/*511:0*/ __Vtemp_h6c69caa1__0;
    VlWide<16>/*511:0*/ __Vtemp_h5aff5c72__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__18;
    VlWide<4>/*127:0*/ __Vtemp_he1d30aa8__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__19;
    VlWide<4>/*127:0*/ __Vtemp_h2755c3c1__0;
    VlWide<16>/*511:0*/ __Vtemp_h064b736b__0;
    VlWide<16>/*511:0*/ __Vtemp_h7bcab632__0;
    VlWide<16>/*511:0*/ __Vtemp_hbad014cf__0;
    VlWide<16>/*511:0*/ __Vtemp_h064b736b__1;
    VlWide<16>/*511:0*/ __Vtemp_hf4cd7c01__0;
    VlWide<16>/*511:0*/ __Vtemp_hb47bbe68__0;
    VlWide<16>/*511:0*/ __Vtemp_h064b736b__2;
    VlWide<16>/*511:0*/ __Vtemp_h089248f9__0;
    VlWide<16>/*511:0*/ __Vtemp_h55b07938__0;
    VlWide<8>/*255:0*/ __Vtemp_h6dd39924__0;
    VlWide<8>/*255:0*/ __Vtemp_h132c8ac8__0;
    VlWide<8>/*255:0*/ __Vtemp_h16e7d29b__0;
    VlWide<16>/*511:0*/ __Vtemp_h92fe3747__0;
    VlWide<16>/*511:0*/ __Vtemp_hecbdfaee__0;
    VlWide<16>/*511:0*/ __Vtemp_h648dca23__0;
    VlWide<16>/*511:0*/ __Vtemp_hcd3e0595__1;
    VlWide<16>/*511:0*/ __Vtemp_h5ff39152__0;
    VlWide<16>/*511:0*/ __Vtemp_hb3630b24__0;
    VlWide<16>/*511:0*/ __Vtemp_h92fe3747__1;
    VlWide<16>/*511:0*/ __Vtemp_he22596d6__0;
    VlWide<16>/*511:0*/ __Vtemp_hb36275cc__0;
    // Body
    vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram
        [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom];
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT___q_last_T 
        = (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__xmit)) 
            | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT__extract_io_i_ready)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT___q_last_T 
        = (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__xmit)) 
            | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT__extract_io_i_ready)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___ridx_T_1 
        = (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass_c)) 
            & (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_e_bits_sink))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_e_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2690 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_e_bits_sink)) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass_c)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_e_valid)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2548 
        = (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass_c)) 
            & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_e_bits_sink))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_e_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2554 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_e_bits_sink)) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass_c)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_e_valid)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_valid) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__stall)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__xmit)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___ridx_T_1 
        = (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__xmit)) 
            | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__stall)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_ready))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_MPORT_en 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__q_release) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__c_first) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__xmit) 
                    & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_ready) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_valid))))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_valid) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__stall)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__xmit)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___q_last_T 
        = (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__xmit)) 
            | ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__stall)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_ready))) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_MPORT_en 
        = ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free)) 
           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__q_release) 
              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__c_first) 
                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__xmit) 
                    & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_ready) 
                       & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_valid))))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD_io_q_valid) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__stall)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__xmit)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA_io_q_valid) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__stall)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__xmit)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA_io_q_valid) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__stall)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__xmit)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD_io_q_valid) 
           & ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__stall)) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__xmit)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___ridx_incremented_T_1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_ridx_bin) 
                   + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceB__DOT___q_last_T)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT___ridx_incremented_T_1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB_io_q_sink__DOT__ridx_ridx_bin) 
                   + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceB__DOT___q_last_T)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___ridx_incremented_T_1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_ridx_bin) 
                   + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___ridx_T_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__e_clr 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2690) 
           & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_e_bits_sink)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT___GEN_13 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2690) 
           | ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT___T) 
                  & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__da_bits_opcode)))) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__idle)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT___ridx_incremented_T_1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceE_io_q_sink__DOT__ridx_ridx_bin) 
                   + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2548)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__e_clr 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2554) 
           & ((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_e_bits_sink)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___GEN_13 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2554) 
           | ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT___T) 
                  & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__da_bits_opcode)))) 
              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__idle)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2611 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT____VdfgTmp_h647911d6__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__out_c_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__bypass_c)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___ridx_incremented_T_1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_ridx_bin) 
                   + (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___ridx_T_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___free_T_2 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_MPORT_en)
              ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free_sel))
              : 0x1ffU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT___io_a_tlSource_valid_T_2) 
               & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_opcode)))
               ? (0xffU & ((IData)(1U) << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))))
               : 0U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2470 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT____VdfgTmp_h95ec52b7__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_c_valid 
        = ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__bypass_c)) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT___ridx_incremented_T_1 
        = (0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC_io_q_sink__DOT__ridx_ridx_bin) 
                   + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___q_last_T)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT___free_T_2 
        = ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data_MPORT_en)
              ? (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free_sel))
              : 0x1ffU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__free)) 
           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT___io_a_tlSource_valid_T_2) 
               & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_opcode)))
               ? (0xffU & ((IData)(1U) << (7U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d_io_deq_bits_source))))
               : 0U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT___T_750 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__monitor__DOT__d_first_counter_1)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_valid 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_opcode))
            ? ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__state)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_valid))
            : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_valid 
        = ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_bits_opcode))
            ? ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract__DOT__state)) 
               & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_valid))
            : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__extract_io_i_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT___T_750 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sbypass__DOT__bar_auto_out_1_d_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__monitor__DOT__d_first_counter_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2611 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__out_c_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT____VdfgTmp_h647911d6__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT___T_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__out_c_valid));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__out_c_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__last_1));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2617 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT____VdfgTmp_h647911d6__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___T_2470 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_c_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT____VdfgTmp_h95ec52b7__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT___T_2 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_ready) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_c_valid));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__out_c_valid) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__last_1));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2476 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___c_first_T) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT____VdfgTmp_h95ec52b7__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2383 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2524 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_a_valid) 
           & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__a_first_counter_1)));
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
    vlSelf->__VdfgTmp_hdc4243a0__0 = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_valid) 
                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___same_cycle_resp_T_8) 
                                         & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_sizes_set_interm 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2617)
            ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_c_bits_size) 
                     << 1U)) : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_T_5 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT____VdfgTmp_h45b941fa__0)
             ? (~ (1ULL << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source)))
             : 0xffffffffffffffffULL) & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_1 
                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2617)
                                             ? (1ULL 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T))
                                             : 0ULL)));
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
    vlSelf->__VdfgTmp_hca581437__0 = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_valid) 
                                      & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___same_cycle_resp_T_8) 
                                         & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_sizes_set_interm 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2476)
            ? (1U | (0xeU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___GEN_3) 
                             << 1U))) : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_T_5 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ (1ULL << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source)))
             : 0xffffffffffffffffULL) & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_1 
                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2476)
                                             ? (1ULL 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T))
                                             : 0ULL)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_sizes_set_interm 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2617)
            ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size) 
                     << 1U)) : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_T_5 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT____VdfgTmp_h45b941fa__0)
             ? (~ (1ULL << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source)))
             : 0xffffffffffffffffULL) & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_1 
                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2617)
                                             ? (1ULL 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source))
                                             : 0ULL)));
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
    VL_SHIFTL_WWI(512,512,9, __Vtemp_h60eb240a__0, VysyxSoCFull__ConstPool__CONST_hffd88623_0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                   << 3U));
    __Vtemp_heefaeec6__0[0U] = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_sizes_set_interm;
    __Vtemp_heefaeec6__0[1U] = 0U;
    __Vtemp_heefaeec6__0[2U] = 0U;
    __Vtemp_heefaeec6__0[3U] = 0U;
    __Vtemp_heefaeec6__0[4U] = 0U;
    __Vtemp_heefaeec6__0[5U] = 0U;
    __Vtemp_heefaeec6__0[6U] = 0U;
    __Vtemp_heefaeec6__0[7U] = 0U;
    __Vtemp_heefaeec6__0[8U] = 0U;
    __Vtemp_heefaeec6__0[9U] = 0U;
    __Vtemp_heefaeec6__0[0xaU] = 0U;
    __Vtemp_heefaeec6__0[0xbU] = 0U;
    __Vtemp_heefaeec6__0[0xcU] = 0U;
    __Vtemp_heefaeec6__0[0xdU] = 0U;
    __Vtemp_heefaeec6__0[0xeU] = 0U;
    __Vtemp_heefaeec6__0[0xfU] = 0U;
    VL_SHIFTL_WWI(512,512,9, __Vtemp_h3f0b4583__0, __Vtemp_heefaeec6__0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                   << 3U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[0U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT____VdfgTmp_h45b941fa__0)
             ? (~ __Vtemp_h60eb240a__0[0U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[0U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2617)
                  ? __Vtemp_h3f0b4583__0[0U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[1U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT____VdfgTmp_h45b941fa__0)
             ? (~ __Vtemp_h60eb240a__0[1U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[1U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[1U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2617)
                  ? __Vtemp_h3f0b4583__0[1U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[1U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[2U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT____VdfgTmp_h45b941fa__0)
             ? (~ __Vtemp_h60eb240a__0[2U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[2U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[2U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2617)
                  ? __Vtemp_h3f0b4583__0[2U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[2U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[3U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT____VdfgTmp_h45b941fa__0)
             ? (~ __Vtemp_h60eb240a__0[3U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[3U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[3U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2617)
                  ? __Vtemp_h3f0b4583__0[3U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[3U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[4U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT____VdfgTmp_h45b941fa__0)
             ? (~ __Vtemp_h60eb240a__0[4U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[4U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[4U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2617)
                  ? __Vtemp_h3f0b4583__0[4U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[4U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[5U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT____VdfgTmp_h45b941fa__0)
             ? (~ __Vtemp_h60eb240a__0[5U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[5U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[5U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2617)
                  ? __Vtemp_h3f0b4583__0[5U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[5U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[6U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT____VdfgTmp_h45b941fa__0)
             ? (~ __Vtemp_h60eb240a__0[6U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[6U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[6U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2617)
                  ? __Vtemp_h3f0b4583__0[6U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[6U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[7U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT____VdfgTmp_h45b941fa__0)
             ? (~ __Vtemp_h60eb240a__0[7U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[7U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[7U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2617)
                  ? __Vtemp_h3f0b4583__0[7U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[7U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[8U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT____VdfgTmp_h45b941fa__0)
             ? (~ __Vtemp_h60eb240a__0[8U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[8U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[8U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2617)
                  ? __Vtemp_h3f0b4583__0[8U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[8U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[9U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT____VdfgTmp_h45b941fa__0)
             ? (~ __Vtemp_h60eb240a__0[9U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[9U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[9U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2617)
                  ? __Vtemp_h3f0b4583__0[9U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[9U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[0xaU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT____VdfgTmp_h45b941fa__0)
             ? (~ __Vtemp_h60eb240a__0[0xaU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xaU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[0xaU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2617)
                  ? __Vtemp_h3f0b4583__0[0xaU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xaU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[0xbU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT____VdfgTmp_h45b941fa__0)
             ? (~ __Vtemp_h60eb240a__0[0xbU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xbU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[0xbU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2617)
                  ? __Vtemp_h3f0b4583__0[0xbU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xbU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[0xcU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT____VdfgTmp_h45b941fa__0)
             ? (~ __Vtemp_h60eb240a__0[0xcU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xcU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[0xcU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2617)
                  ? __Vtemp_h3f0b4583__0[0xcU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xcU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[0xdU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT____VdfgTmp_h45b941fa__0)
             ? (~ __Vtemp_h60eb240a__0[0xdU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xdU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[0xdU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2617)
                  ? __Vtemp_h3f0b4583__0[0xdU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xdU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[0xeU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT____VdfgTmp_h45b941fa__0)
             ? (~ __Vtemp_h60eb240a__0[0xeU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xeU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[0xeU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2617)
                  ? __Vtemp_h3f0b4583__0[0xeU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xeU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[0xfU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT____VdfgTmp_h45b941fa__0)
             ? (~ __Vtemp_h60eb240a__0[0xfU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xfU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[0xfU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2617)
                  ? __Vtemp_h3f0b4583__0[0xfU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xfU])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__c_sizes_set_interm 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___T_2476)
            ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_size) 
                     << 1U)) : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_T_5 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ (1ULL << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source)))
             : 0xffffffffffffffffULL) & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_1 
                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___T_2476)
                                             ? (1ULL 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source))
                                             : 0ULL)));
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
    VL_SHIFTL_WWI(256,256,8, __Vtemp_hb5d5870d__0, VysyxSoCFull__ConstPool__CONST_h57168600_0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                   << 2U));
    __Vtemp_hcbb4492d__0[0U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__c_sizes_set_interm;
    __Vtemp_hcbb4492d__0[1U] = 0U;
    __Vtemp_hcbb4492d__0[2U] = 0U;
    __Vtemp_hcbb4492d__0[3U] = 0U;
    __Vtemp_hcbb4492d__0[4U] = 0U;
    __Vtemp_hcbb4492d__0[5U] = 0U;
    __Vtemp_hcbb4492d__0[6U] = 0U;
    __Vtemp_hcbb4492d__0[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp_ha85c2284__0, __Vtemp_hcbb4492d__0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT___io_c_bits_source_T) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[0U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ __Vtemp_hb5d5870d__0[0U]) : VysyxSoCFull__ConstPool__CONST_h5b979007_0[0U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[0U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2476)
                  ? __Vtemp_ha85c2284__0[0U] : VysyxSoCFull__ConstPool__CONST_h9e67c271_0[0U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[1U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ __Vtemp_hb5d5870d__0[1U]) : VysyxSoCFull__ConstPool__CONST_h5b979007_0[1U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[1U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2476)
                  ? __Vtemp_ha85c2284__0[1U] : VysyxSoCFull__ConstPool__CONST_h9e67c271_0[1U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[2U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ __Vtemp_hb5d5870d__0[2U]) : VysyxSoCFull__ConstPool__CONST_h5b979007_0[2U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[2U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2476)
                  ? __Vtemp_ha85c2284__0[2U] : VysyxSoCFull__ConstPool__CONST_h9e67c271_0[2U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[3U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ __Vtemp_hb5d5870d__0[3U]) : VysyxSoCFull__ConstPool__CONST_h5b979007_0[3U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[3U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2476)
                  ? __Vtemp_ha85c2284__0[3U] : VysyxSoCFull__ConstPool__CONST_h9e67c271_0[3U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[4U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ __Vtemp_hb5d5870d__0[4U]) : VysyxSoCFull__ConstPool__CONST_h5b979007_0[4U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[4U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2476)
                  ? __Vtemp_ha85c2284__0[4U] : VysyxSoCFull__ConstPool__CONST_h9e67c271_0[4U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[5U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ __Vtemp_hb5d5870d__0[5U]) : VysyxSoCFull__ConstPool__CONST_h5b979007_0[5U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[5U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2476)
                  ? __Vtemp_ha85c2284__0[5U] : VysyxSoCFull__ConstPool__CONST_h9e67c271_0[5U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[6U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ __Vtemp_hb5d5870d__0[6U]) : VysyxSoCFull__ConstPool__CONST_h5b979007_0[6U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[6U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2476)
                  ? __Vtemp_ha85c2284__0[6U] : VysyxSoCFull__ConstPool__CONST_h9e67c271_0[6U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___inflight_sizes_T_5[7U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ __Vtemp_hb5d5870d__0[7U]) : VysyxSoCFull__ConstPool__CONST_h5b979007_0[7U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT__inflight_sizes_1[7U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1__DOT___T_2476)
                  ? __Vtemp_ha85c2284__0[7U] : VysyxSoCFull__ConstPool__CONST_h9e67c271_0[7U])));
    VL_SHIFTL_WWI(512,512,9, __Vtemp_h60eb240a__1, VysyxSoCFull__ConstPool__CONST_hffd88623_0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                   << 3U));
    __Vtemp_h18fc88e8__0[0U] = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__c_sizes_set_interm;
    __Vtemp_h18fc88e8__0[1U] = 0U;
    __Vtemp_h18fc88e8__0[2U] = 0U;
    __Vtemp_h18fc88e8__0[3U] = 0U;
    __Vtemp_h18fc88e8__0[4U] = 0U;
    __Vtemp_h18fc88e8__0[5U] = 0U;
    __Vtemp_h18fc88e8__0[6U] = 0U;
    __Vtemp_h18fc88e8__0[7U] = 0U;
    __Vtemp_h18fc88e8__0[8U] = 0U;
    __Vtemp_h18fc88e8__0[9U] = 0U;
    __Vtemp_h18fc88e8__0[0xaU] = 0U;
    __Vtemp_h18fc88e8__0[0xbU] = 0U;
    __Vtemp_h18fc88e8__0[0xcU] = 0U;
    __Vtemp_h18fc88e8__0[0xdU] = 0U;
    __Vtemp_h18fc88e8__0[0xeU] = 0U;
    __Vtemp_h18fc88e8__0[0xfU] = 0U;
    VL_SHIFTL_WWI(512,512,9, __Vtemp_h28d0e98f__0, __Vtemp_h18fc88e8__0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 3U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[0U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT____VdfgTmp_h45b941fa__0)
             ? (~ __Vtemp_h60eb240a__1[0U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[0U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2617)
                  ? __Vtemp_h28d0e98f__0[0U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[1U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT____VdfgTmp_h45b941fa__0)
             ? (~ __Vtemp_h60eb240a__1[1U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[1U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[1U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2617)
                  ? __Vtemp_h28d0e98f__0[1U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[1U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[2U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT____VdfgTmp_h45b941fa__0)
             ? (~ __Vtemp_h60eb240a__1[2U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[2U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[2U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2617)
                  ? __Vtemp_h28d0e98f__0[2U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[2U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[3U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT____VdfgTmp_h45b941fa__0)
             ? (~ __Vtemp_h60eb240a__1[3U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[3U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[3U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2617)
                  ? __Vtemp_h28d0e98f__0[3U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[3U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[4U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT____VdfgTmp_h45b941fa__0)
             ? (~ __Vtemp_h60eb240a__1[4U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[4U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[4U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2617)
                  ? __Vtemp_h28d0e98f__0[4U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[4U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[5U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT____VdfgTmp_h45b941fa__0)
             ? (~ __Vtemp_h60eb240a__1[5U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[5U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[5U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2617)
                  ? __Vtemp_h28d0e98f__0[5U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[5U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[6U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT____VdfgTmp_h45b941fa__0)
             ? (~ __Vtemp_h60eb240a__1[6U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[6U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[6U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2617)
                  ? __Vtemp_h28d0e98f__0[6U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[6U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[7U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT____VdfgTmp_h45b941fa__0)
             ? (~ __Vtemp_h60eb240a__1[7U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[7U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[7U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2617)
                  ? __Vtemp_h28d0e98f__0[7U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[7U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[8U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT____VdfgTmp_h45b941fa__0)
             ? (~ __Vtemp_h60eb240a__1[8U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[8U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[8U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2617)
                  ? __Vtemp_h28d0e98f__0[8U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[8U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[9U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT____VdfgTmp_h45b941fa__0)
             ? (~ __Vtemp_h60eb240a__1[9U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[9U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[9U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2617)
                  ? __Vtemp_h28d0e98f__0[9U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[9U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[0xaU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT____VdfgTmp_h45b941fa__0)
             ? (~ __Vtemp_h60eb240a__1[0xaU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xaU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2617)
                  ? __Vtemp_h28d0e98f__0[0xaU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xaU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[0xbU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT____VdfgTmp_h45b941fa__0)
             ? (~ __Vtemp_h60eb240a__1[0xbU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xbU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2617)
                  ? __Vtemp_h28d0e98f__0[0xbU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xbU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[0xcU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT____VdfgTmp_h45b941fa__0)
             ? (~ __Vtemp_h60eb240a__1[0xcU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xcU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2617)
                  ? __Vtemp_h28d0e98f__0[0xcU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xcU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[0xdU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT____VdfgTmp_h45b941fa__0)
             ? (~ __Vtemp_h60eb240a__1[0xdU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xdU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2617)
                  ? __Vtemp_h28d0e98f__0[0xdU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xdU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[0xeU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT____VdfgTmp_h45b941fa__0)
             ? (~ __Vtemp_h60eb240a__1[0xeU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xeU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2617)
                  ? __Vtemp_h28d0e98f__0[0xeU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xeU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[0xfU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT____VdfgTmp_h45b941fa__0)
             ? (~ __Vtemp_h60eb240a__1[0xfU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xfU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__monitor__DOT___T_2617)
                  ? __Vtemp_h28d0e98f__0[0xfU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xfU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___T_2342 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_opcode_MPORT_en) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT____VdfgTmp_h95ec52b7__0));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_sizes_set_interm 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2618)
            ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size) 
                     << 1U)) : 0U);
    __Vtemp_hd2b6c582__0[0U] = 1U;
    __Vtemp_hd2b6c582__0[1U] = 0U;
    __Vtemp_hd2b6c582__0[2U] = 0U;
    __Vtemp_hd2b6c582__0[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_haac69bac__0, __Vtemp_hd2b6c582__0, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source));
    __Vtemp_hd2b6c582__1[0U] = 1U;
    __Vtemp_hd2b6c582__1[1U] = 0U;
    __Vtemp_hd2b6c582__1[2U] = 0U;
    __Vtemp_hd2b6c582__1[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h7a2dfbd6__0, __Vtemp_hd2b6c582__1, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_T_5[0U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_haac69bac__0[0U]) : 0xffffffffU) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_1[0U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2618)
                  ? __Vtemp_h7a2dfbd6__0[0U] : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_T_5[1U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_haac69bac__0[1U]) : 0xffffffffU) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_1[1U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2618)
                  ? __Vtemp_h7a2dfbd6__0[1U] : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_T_5[2U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_haac69bac__0[2U]) : 0xffffffffU) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_1[2U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2618)
                  ? __Vtemp_h7a2dfbd6__0[2U] : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_T_5[3U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_haac69bac__0[3U]) : 0xffffffffU) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_1[3U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2618)
                  ? __Vtemp_h7a2dfbd6__0[3U] : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_sizes_set_interm 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2614)
            ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size) 
                     << 1U)) : 0U);
    __Vtemp_hd2b6c582__2[0U] = 1U;
    __Vtemp_hd2b6c582__2[1U] = 0U;
    __Vtemp_hd2b6c582__2[2U] = 0U;
    __Vtemp_hd2b6c582__2[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h042d7f7e__0, __Vtemp_hd2b6c582__2, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source));
    __Vtemp_hd2b6c582__3[0U] = 1U;
    __Vtemp_hd2b6c582__3[1U] = 0U;
    __Vtemp_hd2b6c582__3[2U] = 0U;
    __Vtemp_hd2b6c582__3[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hfefa9ade__0, __Vtemp_hd2b6c582__3, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_T_5[0U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h042d7f7e__0[0U]) : 0xffffffffU) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_1[0U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_hfefa9ade__0[0U] : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_T_5[1U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h042d7f7e__0[1U]) : 0xffffffffU) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_1[1U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_hfefa9ade__0[1U] : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_T_5[2U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h042d7f7e__0[2U]) : 0xffffffffU) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_1[2U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_hfefa9ade__0[2U] : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_T_5[3U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h042d7f7e__0[3U]) : 0xffffffffU) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_1[3U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_hfefa9ade__0[3U] : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_sizes_set_interm 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2614)
            ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size) 
                     << 1U)) : 0U);
    __Vtemp_hd2b6c582__4[0U] = 1U;
    __Vtemp_hd2b6c582__4[1U] = 0U;
    __Vtemp_hd2b6c582__4[2U] = 0U;
    __Vtemp_hd2b6c582__4[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hbd11f9cb__0, __Vtemp_hd2b6c582__4, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source));
    __Vtemp_hd2b6c582__5[0U] = 1U;
    __Vtemp_hd2b6c582__5[1U] = 0U;
    __Vtemp_hd2b6c582__5[2U] = 0U;
    __Vtemp_hd2b6c582__5[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h05e8feab__0, __Vtemp_hd2b6c582__5, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_T_5[0U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_hbd11f9cb__0[0U]) : 0xffffffffU) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_1[0U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_h05e8feab__0[0U] : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_T_5[1U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_hbd11f9cb__0[1U]) : 0xffffffffU) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_1[1U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_h05e8feab__0[1U] : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_T_5[2U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_hbd11f9cb__0[2U]) : 0xffffffffU) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_1[2U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_h05e8feab__0[2U] : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_T_5[3U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_hbd11f9cb__0[3U]) : 0xffffffffU) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_1[3U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_h05e8feab__0[3U] : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_sizes_set_interm 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2617)
            ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_c_bits_size) 
                     << 1U)) : 0U);
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_T_5 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ (1ULL << (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                     >> 1U)))) : 0xffffffffffffffffULL) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_1 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2617)
                  ? (1ULL << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source))
                  : 0ULL)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_sizes_set_interm 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2342)
            ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_c_bits_size) 
                     << 1U)) : 0U);
    __Vtemp_hd2b6c582__6[0U] = 1U;
    __Vtemp_hd2b6c582__6[1U] = 0U;
    __Vtemp_hd2b6c582__6[2U] = 0U;
    __Vtemp_hd2b6c582__6[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h374d78d0__0, __Vtemp_hd2b6c582__6, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source));
    __Vtemp_hd2b6c582__7[0U] = 1U;
    __Vtemp_hd2b6c582__7[1U] = 0U;
    __Vtemp_hd2b6c582__7[2U] = 0U;
    __Vtemp_hd2b6c582__7[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_he75cff79__0, __Vtemp_hd2b6c582__7, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_T_5[0U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h374d78d0__0[0U]) : 0xffffffffU) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_1[0U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_he75cff79__0[0U] : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_T_5[1U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h374d78d0__0[1U]) : 0xffffffffU) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_1[1U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_he75cff79__0[1U] : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_T_5[2U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h374d78d0__0[2U]) : 0xffffffffU) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_1[2U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_he75cff79__0[2U] : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_T_5[3U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h374d78d0__0[3U]) : 0xffffffffU) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_1[3U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_he75cff79__0[3U] : 0U)));
    VL_SHIFTL_WWI(256,256,8, __Vtemp_hb5d5870d__1, VysyxSoCFull__ConstPool__CONST_h57168600_0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                   << 2U));
    __Vtemp_h6345fb0f__0[0U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__c_sizes_set_interm;
    __Vtemp_h6345fb0f__0[1U] = 0U;
    __Vtemp_h6345fb0f__0[2U] = 0U;
    __Vtemp_h6345fb0f__0[3U] = 0U;
    __Vtemp_h6345fb0f__0[4U] = 0U;
    __Vtemp_h6345fb0f__0[5U] = 0U;
    __Vtemp_h6345fb0f__0[6U] = 0U;
    __Vtemp_h6345fb0f__0[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp_h3548a753__0, __Vtemp_h6345fb0f__0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[0U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ __Vtemp_hb5d5870d__1[0U]) : VysyxSoCFull__ConstPool__CONST_h5b979007_0[0U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[0U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___T_2476)
                  ? __Vtemp_h3548a753__0[0U] : VysyxSoCFull__ConstPool__CONST_h9e67c271_0[0U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[1U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ __Vtemp_hb5d5870d__1[1U]) : VysyxSoCFull__ConstPool__CONST_h5b979007_0[1U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[1U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___T_2476)
                  ? __Vtemp_h3548a753__0[1U] : VysyxSoCFull__ConstPool__CONST_h9e67c271_0[1U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[2U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ __Vtemp_hb5d5870d__1[2U]) : VysyxSoCFull__ConstPool__CONST_h5b979007_0[2U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[2U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___T_2476)
                  ? __Vtemp_h3548a753__0[2U] : VysyxSoCFull__ConstPool__CONST_h9e67c271_0[2U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[3U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ __Vtemp_hb5d5870d__1[3U]) : VysyxSoCFull__ConstPool__CONST_h5b979007_0[3U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[3U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___T_2476)
                  ? __Vtemp_h3548a753__0[3U] : VysyxSoCFull__ConstPool__CONST_h9e67c271_0[3U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[4U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ __Vtemp_hb5d5870d__1[4U]) : VysyxSoCFull__ConstPool__CONST_h5b979007_0[4U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[4U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___T_2476)
                  ? __Vtemp_h3548a753__0[4U] : VysyxSoCFull__ConstPool__CONST_h9e67c271_0[4U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[5U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ __Vtemp_hb5d5870d__1[5U]) : VysyxSoCFull__ConstPool__CONST_h5b979007_0[5U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[5U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___T_2476)
                  ? __Vtemp_h3548a753__0[5U] : VysyxSoCFull__ConstPool__CONST_h9e67c271_0[5U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[6U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ __Vtemp_hb5d5870d__1[6U]) : VysyxSoCFull__ConstPool__CONST_h5b979007_0[6U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[6U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___T_2476)
                  ? __Vtemp_h3548a753__0[6U] : VysyxSoCFull__ConstPool__CONST_h9e67c271_0[6U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___inflight_sizes_T_5[7U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ __Vtemp_hb5d5870d__1[7U]) : VysyxSoCFull__ConstPool__CONST_h5b979007_0[7U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT__inflight_sizes_1[7U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__monitor__DOT___T_2476)
                  ? __Vtemp_h3548a753__0[7U] : VysyxSoCFull__ConstPool__CONST_h9e67c271_0[7U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2342 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___c_first_T) 
           & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT____VdfgTmp_h95ec52b7__0));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_sizes_set_interm 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2482)
            ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_size) 
                     << 1U)) : 0U);
    __Vtemp_hd2b6c582__8[0U] = 1U;
    __Vtemp_hd2b6c582__8[1U] = 0U;
    __Vtemp_hd2b6c582__8[2U] = 0U;
    __Vtemp_hd2b6c582__8[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hab503110__0, __Vtemp_hd2b6c582__8, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source));
    __Vtemp_hd2b6c582__9[0U] = 1U;
    __Vtemp_hd2b6c582__9[1U] = 0U;
    __Vtemp_hd2b6c582__9[2U] = 0U;
    __Vtemp_hd2b6c582__9[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h1e54f44f__0, __Vtemp_hd2b6c582__9, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_T_5[0U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_hab503110__0[0U]) : 0xffffffffU) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_1[0U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2482)
                  ? __Vtemp_h1e54f44f__0[0U] : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_T_5[1U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_hab503110__0[1U]) : 0xffffffffU) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_1[1U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2482)
                  ? __Vtemp_h1e54f44f__0[1U] : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_T_5[2U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_hab503110__0[2U]) : 0xffffffffU) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_1[2U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2482)
                  ? __Vtemp_h1e54f44f__0[2U] : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_T_5[3U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_hab503110__0[3U]) : 0xffffffffU) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_1[3U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2482)
                  ? __Vtemp_h1e54f44f__0[3U] : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_sizes_set_interm 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2478)
            ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_size) 
                     << 1U)) : 0U);
    __Vtemp_hd2b6c582__10[0U] = 1U;
    __Vtemp_hd2b6c582__10[1U] = 0U;
    __Vtemp_hd2b6c582__10[2U] = 0U;
    __Vtemp_hd2b6c582__10[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hbdf88bad__0, __Vtemp_hd2b6c582__10, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source));
    __Vtemp_hd2b6c582__11[0U] = 1U;
    __Vtemp_hd2b6c582__11[1U] = 0U;
    __Vtemp_hd2b6c582__11[2U] = 0U;
    __Vtemp_hd2b6c582__11[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h991c2491__0, __Vtemp_hd2b6c582__11, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_T_5[0U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_hbdf88bad__0[0U]) : 0xffffffffU) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_1[0U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2478)
                  ? __Vtemp_h991c2491__0[0U] : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_T_5[1U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_hbdf88bad__0[1U]) : 0xffffffffU) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_1[1U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2478)
                  ? __Vtemp_h991c2491__0[1U] : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_T_5[2U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_hbdf88bad__0[2U]) : 0xffffffffU) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_1[2U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2478)
                  ? __Vtemp_h991c2491__0[2U] : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_T_5[3U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_hbdf88bad__0[3U]) : 0xffffffffU) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_1[3U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2478)
                  ? __Vtemp_h991c2491__0[3U] : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_sizes_set_interm 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2478)
            ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_size) 
                     << 1U)) : 0U);
    __Vtemp_hd2b6c582__12[0U] = 1U;
    __Vtemp_hd2b6c582__12[1U] = 0U;
    __Vtemp_hd2b6c582__12[2U] = 0U;
    __Vtemp_hd2b6c582__12[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_ha46e8e7e__0, __Vtemp_hd2b6c582__12, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source));
    __Vtemp_hd2b6c582__13[0U] = 1U;
    __Vtemp_hd2b6c582__13[1U] = 0U;
    __Vtemp_hd2b6c582__13[2U] = 0U;
    __Vtemp_hd2b6c582__13[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hc47fd079__0, __Vtemp_hd2b6c582__13, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_T_5[0U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_ha46e8e7e__0[0U]) : 0xffffffffU) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_1[0U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2478)
                  ? __Vtemp_hc47fd079__0[0U] : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_T_5[1U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_ha46e8e7e__0[1U]) : 0xffffffffU) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_1[1U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2478)
                  ? __Vtemp_hc47fd079__0[1U] : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_T_5[2U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_ha46e8e7e__0[2U]) : 0xffffffffU) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_1[2U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2478)
                  ? __Vtemp_hc47fd079__0[2U] : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_T_5[3U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_ha46e8e7e__0[3U]) : 0xffffffffU) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_1[3U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2478)
                  ? __Vtemp_hc47fd079__0[3U] : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_sizes_set_interm 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2476)
            ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_size) 
                     << 1U)) : 0U);
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_T_5 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ (1ULL << (0x3fU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                                     >> 1U)))) : 0xffffffffffffffffULL) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_1 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2476)
                  ? (1ULL << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source))
                  : 0ULL)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_sizes_set_interm 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2342)
            ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_c_bits_size) 
                     << 1U)) : 0U);
    __Vtemp_hd2b6c582__14[0U] = 1U;
    __Vtemp_hd2b6c582__14[1U] = 0U;
    __Vtemp_hd2b6c582__14[2U] = 0U;
    __Vtemp_hd2b6c582__14[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h4a0d37f4__0, __Vtemp_hd2b6c582__14, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source));
    __Vtemp_hd2b6c582__15[0U] = 1U;
    __Vtemp_hd2b6c582__15[1U] = 0U;
    __Vtemp_hd2b6c582__15[2U] = 0U;
    __Vtemp_hd2b6c582__15[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_ha5921605__0, __Vtemp_hd2b6c582__15, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 1U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_T_5[0U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h4a0d37f4__0[0U]) : 0xffffffffU) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_1[0U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_ha5921605__0[0U] : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_T_5[1U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h4a0d37f4__0[1U]) : 0xffffffffU) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_1[1U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_ha5921605__0[1U] : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_T_5[2U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h4a0d37f4__0[2U]) : 0xffffffffU) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_1[2U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_ha5921605__0[2U] : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_T_5[3U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h4a0d37f4__0[3U]) : 0xffffffffU) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_1[3U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_ha5921605__0[3U] : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__c_sizes_set_interm 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___T_2342)
            ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_size_MPORT_data) 
                     << 1U)) : 0U);
    __Vtemp_hd2b6c582__16[0U] = 1U;
    __Vtemp_hd2b6c582__16[1U] = 0U;
    __Vtemp_hd2b6c582__16[2U] = 0U;
    __Vtemp_hd2b6c582__16[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hc73bce29__0, __Vtemp_hd2b6c582__16, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source));
    __Vtemp_hd2b6c582__17[0U] = 1U;
    __Vtemp_hd2b6c582__17[1U] = 0U;
    __Vtemp_hd2b6c582__17[2U] = 0U;
    __Vtemp_hd2b6c582__17[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h194c40db__0, __Vtemp_hd2b6c582__17, (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_source_MPORT_data));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_T_5[0U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ __Vtemp_hc73bce29__0[0U]) : 0xffffffffU) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_1[0U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_h194c40db__0[0U] : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_T_5[1U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ __Vtemp_hc73bce29__0[1U]) : 0xffffffffU) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_1[1U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_h194c40db__0[1U] : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_T_5[2U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ __Vtemp_hc73bce29__0[2U]) : 0xffffffffU) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_1[2U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_h194c40db__0[2U] : 0U)));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_T_5[3U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ __Vtemp_hc73bce29__0[3U]) : 0xffffffffU) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_1[3U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_h194c40db__0[3U] : 0U)));
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp_h1044627f__0, VysyxSoCFull__ConstPool__CONST_h7bd5304c_0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    __Vtemp_h0a647d74__0[0U] = vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__c_sizes_set_interm;
    __Vtemp_h0a647d74__0[1U] = 0U;
    __Vtemp_h0a647d74__0[2U] = 0U;
    __Vtemp_h0a647d74__0[3U] = 0U;
    __Vtemp_h0a647d74__0[4U] = 0U;
    __Vtemp_h0a647d74__0[5U] = 0U;
    __Vtemp_h0a647d74__0[6U] = 0U;
    __Vtemp_h0a647d74__0[7U] = 0U;
    __Vtemp_h0a647d74__0[8U] = 0U;
    __Vtemp_h0a647d74__0[9U] = 0U;
    __Vtemp_h0a647d74__0[0xaU] = 0U;
    __Vtemp_h0a647d74__0[0xbU] = 0U;
    __Vtemp_h0a647d74__0[0xcU] = 0U;
    __Vtemp_h0a647d74__0[0xdU] = 0U;
    __Vtemp_h0a647d74__0[0xeU] = 0U;
    __Vtemp_h0a647d74__0[0xfU] = 0U;
    __Vtemp_h0a647d74__0[0x10U] = 0U;
    __Vtemp_h0a647d74__0[0x11U] = 0U;
    __Vtemp_h0a647d74__0[0x12U] = 0U;
    __Vtemp_h0a647d74__0[0x13U] = 0U;
    __Vtemp_h0a647d74__0[0x14U] = 0U;
    __Vtemp_h0a647d74__0[0x15U] = 0U;
    __Vtemp_h0a647d74__0[0x16U] = 0U;
    __Vtemp_h0a647d74__0[0x17U] = 0U;
    __Vtemp_h0a647d74__0[0x18U] = 0U;
    __Vtemp_h0a647d74__0[0x19U] = 0U;
    __Vtemp_h0a647d74__0[0x1aU] = 0U;
    __Vtemp_h0a647d74__0[0x1bU] = 0U;
    __Vtemp_h0a647d74__0[0x1cU] = 0U;
    __Vtemp_h0a647d74__0[0x1dU] = 0U;
    __Vtemp_h0a647d74__0[0x1eU] = 0U;
    __Vtemp_h0a647d74__0[0x1fU] = 0U;
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp_h2dd64540__0, __Vtemp_h0a647d74__0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 4U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__0[0U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2618)
                  ? __Vtemp_h2dd64540__0[0U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[1U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__0[1U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[1U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[1U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2618)
                  ? __Vtemp_h2dd64540__0[1U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[1U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[2U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__0[2U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[2U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[2U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2618)
                  ? __Vtemp_h2dd64540__0[2U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[2U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[3U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__0[3U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[3U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[3U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2618)
                  ? __Vtemp_h2dd64540__0[3U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[3U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[4U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__0[4U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[4U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[4U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2618)
                  ? __Vtemp_h2dd64540__0[4U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[4U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[5U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__0[5U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[5U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[5U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2618)
                  ? __Vtemp_h2dd64540__0[5U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[5U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[6U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__0[6U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[6U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[6U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2618)
                  ? __Vtemp_h2dd64540__0[6U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[6U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[7U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__0[7U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[7U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[7U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2618)
                  ? __Vtemp_h2dd64540__0[7U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[7U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[8U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__0[8U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[8U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[8U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2618)
                  ? __Vtemp_h2dd64540__0[8U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[8U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[9U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__0[9U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[9U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[9U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2618)
                  ? __Vtemp_h2dd64540__0[9U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[9U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0xaU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__0[0xaU]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0xaU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2618)
                  ? __Vtemp_h2dd64540__0[0xaU] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0xaU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0xbU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__0[0xbU]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0xbU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2618)
                  ? __Vtemp_h2dd64540__0[0xbU] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0xbU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0xcU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__0[0xcU]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0xcU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2618)
                  ? __Vtemp_h2dd64540__0[0xcU] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0xcU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0xdU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__0[0xdU]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0xdU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2618)
                  ? __Vtemp_h2dd64540__0[0xdU] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0xdU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0xeU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__0[0xeU]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0xeU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2618)
                  ? __Vtemp_h2dd64540__0[0xeU] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0xeU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0xfU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__0[0xfU]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0xfU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2618)
                  ? __Vtemp_h2dd64540__0[0xfU] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0xfU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0x10U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__0[0x10U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x10U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x10U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2618)
                  ? __Vtemp_h2dd64540__0[0x10U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0x10U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0x11U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__0[0x11U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x11U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x11U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2618)
                  ? __Vtemp_h2dd64540__0[0x11U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0x11U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0x12U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__0[0x12U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x12U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x12U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2618)
                  ? __Vtemp_h2dd64540__0[0x12U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0x12U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0x13U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__0[0x13U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x13U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x13U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2618)
                  ? __Vtemp_h2dd64540__0[0x13U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0x13U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0x14U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__0[0x14U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x14U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x14U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2618)
                  ? __Vtemp_h2dd64540__0[0x14U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0x14U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0x15U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__0[0x15U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x15U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x15U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2618)
                  ? __Vtemp_h2dd64540__0[0x15U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0x15U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0x16U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__0[0x16U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x16U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x16U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2618)
                  ? __Vtemp_h2dd64540__0[0x16U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0x16U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0x17U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__0[0x17U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x17U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x17U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2618)
                  ? __Vtemp_h2dd64540__0[0x17U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0x17U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0x18U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__0[0x18U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x18U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x18U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2618)
                  ? __Vtemp_h2dd64540__0[0x18U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0x18U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0x19U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__0[0x19U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x19U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x19U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2618)
                  ? __Vtemp_h2dd64540__0[0x19U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0x19U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0x1aU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__0[0x1aU]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x1aU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x1aU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2618)
                  ? __Vtemp_h2dd64540__0[0x1aU] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0x1aU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0x1bU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__0[0x1bU]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x1bU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x1bU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2618)
                  ? __Vtemp_h2dd64540__0[0x1bU] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0x1bU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0x1cU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__0[0x1cU]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x1cU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x1cU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2618)
                  ? __Vtemp_h2dd64540__0[0x1cU] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0x1cU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0x1dU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__0[0x1dU]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x1dU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x1dU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2618)
                  ? __Vtemp_h2dd64540__0[0x1dU] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0x1dU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0x1eU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__0[0x1eU]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x1eU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x1eU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2618)
                  ? __Vtemp_h2dd64540__0[0x1eU] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0x1eU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0x1fU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__0[0x1fU]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x1fU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0x1fU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor__DOT___T_2618)
                  ? __Vtemp_h2dd64540__0[0x1fU] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0x1fU])));
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp_h1044627f__1, VysyxSoCFull__ConstPool__CONST_h7bd5304c_0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    __Vtemp_h573c882e__0[0U] = vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__c_sizes_set_interm;
    __Vtemp_h573c882e__0[1U] = 0U;
    __Vtemp_h573c882e__0[2U] = 0U;
    __Vtemp_h573c882e__0[3U] = 0U;
    __Vtemp_h573c882e__0[4U] = 0U;
    __Vtemp_h573c882e__0[5U] = 0U;
    __Vtemp_h573c882e__0[6U] = 0U;
    __Vtemp_h573c882e__0[7U] = 0U;
    __Vtemp_h573c882e__0[8U] = 0U;
    __Vtemp_h573c882e__0[9U] = 0U;
    __Vtemp_h573c882e__0[0xaU] = 0U;
    __Vtemp_h573c882e__0[0xbU] = 0U;
    __Vtemp_h573c882e__0[0xcU] = 0U;
    __Vtemp_h573c882e__0[0xdU] = 0U;
    __Vtemp_h573c882e__0[0xeU] = 0U;
    __Vtemp_h573c882e__0[0xfU] = 0U;
    __Vtemp_h573c882e__0[0x10U] = 0U;
    __Vtemp_h573c882e__0[0x11U] = 0U;
    __Vtemp_h573c882e__0[0x12U] = 0U;
    __Vtemp_h573c882e__0[0x13U] = 0U;
    __Vtemp_h573c882e__0[0x14U] = 0U;
    __Vtemp_h573c882e__0[0x15U] = 0U;
    __Vtemp_h573c882e__0[0x16U] = 0U;
    __Vtemp_h573c882e__0[0x17U] = 0U;
    __Vtemp_h573c882e__0[0x18U] = 0U;
    __Vtemp_h573c882e__0[0x19U] = 0U;
    __Vtemp_h573c882e__0[0x1aU] = 0U;
    __Vtemp_h573c882e__0[0x1bU] = 0U;
    __Vtemp_h573c882e__0[0x1cU] = 0U;
    __Vtemp_h573c882e__0[0x1dU] = 0U;
    __Vtemp_h573c882e__0[0x1eU] = 0U;
    __Vtemp_h573c882e__0[0x1fU] = 0U;
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp_ha958f336__0, __Vtemp_h573c882e__0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 4U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__1[0U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_ha958f336__0[0U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[1U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__1[1U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[1U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[1U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_ha958f336__0[1U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[1U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[2U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__1[2U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[2U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[2U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_ha958f336__0[2U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[2U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[3U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__1[3U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[3U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[3U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_ha958f336__0[3U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[3U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[4U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__1[4U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[4U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[4U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_ha958f336__0[4U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[4U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[5U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__1[5U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[5U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[5U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_ha958f336__0[5U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[5U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[6U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__1[6U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[6U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[6U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_ha958f336__0[6U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[6U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[7U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__1[7U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[7U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[7U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_ha958f336__0[7U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[7U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[8U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__1[8U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[8U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[8U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_ha958f336__0[8U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[8U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[9U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__1[9U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[9U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[9U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_ha958f336__0[9U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[9U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0xaU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__1[0xaU]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0xaU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_ha958f336__0[0xaU] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0xaU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0xbU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__1[0xbU]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0xbU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_ha958f336__0[0xbU] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0xbU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0xcU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__1[0xcU]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0xcU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_ha958f336__0[0xcU] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0xcU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0xdU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__1[0xdU]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0xdU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_ha958f336__0[0xdU] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0xdU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0xeU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__1[0xeU]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0xeU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_ha958f336__0[0xeU] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0xeU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0xfU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__1[0xfU]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0xfU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_ha958f336__0[0xfU] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0xfU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0x10U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__1[0x10U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x10U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x10U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_ha958f336__0[0x10U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0x10U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0x11U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__1[0x11U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x11U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x11U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_ha958f336__0[0x11U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0x11U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0x12U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__1[0x12U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x12U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x12U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_ha958f336__0[0x12U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0x12U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0x13U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__1[0x13U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x13U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x13U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_ha958f336__0[0x13U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0x13U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0x14U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__1[0x14U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x14U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x14U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_ha958f336__0[0x14U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0x14U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0x15U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__1[0x15U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x15U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x15U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_ha958f336__0[0x15U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0x15U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0x16U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__1[0x16U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x16U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x16U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_ha958f336__0[0x16U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0x16U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0x17U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__1[0x17U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x17U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x17U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_ha958f336__0[0x17U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0x17U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0x18U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__1[0x18U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x18U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x18U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_ha958f336__0[0x18U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0x18U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0x19U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__1[0x19U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x19U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x19U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_ha958f336__0[0x19U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0x19U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0x1aU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__1[0x1aU]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x1aU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x1aU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_ha958f336__0[0x1aU] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0x1aU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0x1bU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__1[0x1bU]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x1bU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x1bU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_ha958f336__0[0x1bU] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0x1bU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0x1cU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__1[0x1cU]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x1cU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x1cU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_ha958f336__0[0x1cU] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0x1cU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0x1dU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__1[0x1dU]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x1dU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x1dU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_ha958f336__0[0x1dU] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0x1dU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0x1eU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__1[0x1eU]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x1eU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x1eU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_ha958f336__0[0x1eU] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0x1eU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0x1fU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__1[0x1fU]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x1fU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x1fU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_ha958f336__0[0x1fU] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0x1fU])));
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp_h1044627f__2, VysyxSoCFull__ConstPool__CONST_h7bd5304c_0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                   << 3U));
    __Vtemp_h99a08fe7__0[0U] = vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__c_sizes_set_interm;
    __Vtemp_h99a08fe7__0[1U] = 0U;
    __Vtemp_h99a08fe7__0[2U] = 0U;
    __Vtemp_h99a08fe7__0[3U] = 0U;
    __Vtemp_h99a08fe7__0[4U] = 0U;
    __Vtemp_h99a08fe7__0[5U] = 0U;
    __Vtemp_h99a08fe7__0[6U] = 0U;
    __Vtemp_h99a08fe7__0[7U] = 0U;
    __Vtemp_h99a08fe7__0[8U] = 0U;
    __Vtemp_h99a08fe7__0[9U] = 0U;
    __Vtemp_h99a08fe7__0[0xaU] = 0U;
    __Vtemp_h99a08fe7__0[0xbU] = 0U;
    __Vtemp_h99a08fe7__0[0xcU] = 0U;
    __Vtemp_h99a08fe7__0[0xdU] = 0U;
    __Vtemp_h99a08fe7__0[0xeU] = 0U;
    __Vtemp_h99a08fe7__0[0xfU] = 0U;
    __Vtemp_h99a08fe7__0[0x10U] = 0U;
    __Vtemp_h99a08fe7__0[0x11U] = 0U;
    __Vtemp_h99a08fe7__0[0x12U] = 0U;
    __Vtemp_h99a08fe7__0[0x13U] = 0U;
    __Vtemp_h99a08fe7__0[0x14U] = 0U;
    __Vtemp_h99a08fe7__0[0x15U] = 0U;
    __Vtemp_h99a08fe7__0[0x16U] = 0U;
    __Vtemp_h99a08fe7__0[0x17U] = 0U;
    __Vtemp_h99a08fe7__0[0x18U] = 0U;
    __Vtemp_h99a08fe7__0[0x19U] = 0U;
    __Vtemp_h99a08fe7__0[0x1aU] = 0U;
    __Vtemp_h99a08fe7__0[0x1bU] = 0U;
    __Vtemp_h99a08fe7__0[0x1cU] = 0U;
    __Vtemp_h99a08fe7__0[0x1dU] = 0U;
    __Vtemp_h99a08fe7__0[0x1eU] = 0U;
    __Vtemp_h99a08fe7__0[0x1fU] = 0U;
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp_hcd780bb8__0, __Vtemp_h99a08fe7__0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 4U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__2[0U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_hcd780bb8__0[0U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[1U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__2[1U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[1U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[1U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_hcd780bb8__0[1U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[1U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[2U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__2[2U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[2U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[2U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_hcd780bb8__0[2U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[2U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[3U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__2[3U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[3U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[3U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_hcd780bb8__0[3U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[3U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[4U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__2[4U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[4U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[4U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_hcd780bb8__0[4U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[4U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[5U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__2[5U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[5U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[5U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_hcd780bb8__0[5U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[5U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[6U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__2[6U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[6U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[6U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_hcd780bb8__0[6U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[6U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[7U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__2[7U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[7U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[7U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_hcd780bb8__0[7U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[7U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[8U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__2[8U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[8U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[8U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_hcd780bb8__0[8U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[8U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[9U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__2[9U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[9U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[9U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_hcd780bb8__0[9U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[9U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0xaU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__2[0xaU]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0xaU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_hcd780bb8__0[0xaU] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0xaU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0xbU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__2[0xbU]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0xbU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_hcd780bb8__0[0xbU] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0xbU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0xcU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__2[0xcU]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0xcU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_hcd780bb8__0[0xcU] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0xcU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0xdU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__2[0xdU]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0xdU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_hcd780bb8__0[0xdU] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0xdU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0xeU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__2[0xeU]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0xeU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_hcd780bb8__0[0xeU] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0xeU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0xfU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__2[0xfU]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0xfU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_hcd780bb8__0[0xfU] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0xfU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0x10U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__2[0x10U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x10U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x10U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_hcd780bb8__0[0x10U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0x10U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0x11U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__2[0x11U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x11U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x11U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_hcd780bb8__0[0x11U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0x11U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0x12U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__2[0x12U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x12U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x12U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_hcd780bb8__0[0x12U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0x12U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0x13U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__2[0x13U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x13U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x13U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_hcd780bb8__0[0x13U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0x13U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0x14U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__2[0x14U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x14U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x14U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_hcd780bb8__0[0x14U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0x14U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0x15U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__2[0x15U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x15U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x15U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_hcd780bb8__0[0x15U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0x15U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0x16U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__2[0x16U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x16U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x16U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_hcd780bb8__0[0x16U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0x16U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0x17U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__2[0x17U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x17U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x17U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_hcd780bb8__0[0x17U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0x17U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0x18U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__2[0x18U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x18U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x18U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_hcd780bb8__0[0x18U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0x18U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0x19U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__2[0x19U]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x19U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x19U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_hcd780bb8__0[0x19U] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0x19U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0x1aU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__2[0x1aU]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x1aU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x1aU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_hcd780bb8__0[0x1aU] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0x1aU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0x1bU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__2[0x1bU]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x1bU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x1bU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_hcd780bb8__0[0x1bU] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0x1bU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0x1cU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__2[0x1cU]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x1cU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x1cU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_hcd780bb8__0[0x1cU] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0x1cU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0x1dU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__2[0x1dU]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x1dU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x1dU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_hcd780bb8__0[0x1dU] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0x1dU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0x1eU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__2[0x1eU]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x1eU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x1eU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_hcd780bb8__0[0x1eU] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0x1eU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0x1fU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h1044627f__2[0x1fU]) : VysyxSoCFull__ConstPool__CONST_ha6258237_0[0x1fU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0x1fU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__fixer_1__DOT__monitor__DOT___T_2614)
                  ? __Vtemp_hcd780bb8__0[0x1fU] : VysyxSoCFull__ConstPool__CONST_hd6b7ba52_0[0x1fU])));
    VL_SHIFTL_WWI(512,512,9, __Vtemp_h68fdfb23__0, VysyxSoCFull__ConstPool__CONST_hffd88623_0, 
                  (0x1f8U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                             << 2U)));
    __Vtemp_h1c13dfc3__0[0U] = vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__c_sizes_set_interm;
    __Vtemp_h1c13dfc3__0[1U] = 0U;
    __Vtemp_h1c13dfc3__0[2U] = 0U;
    __Vtemp_h1c13dfc3__0[3U] = 0U;
    __Vtemp_h1c13dfc3__0[4U] = 0U;
    __Vtemp_h1c13dfc3__0[5U] = 0U;
    __Vtemp_h1c13dfc3__0[6U] = 0U;
    __Vtemp_h1c13dfc3__0[7U] = 0U;
    __Vtemp_h1c13dfc3__0[8U] = 0U;
    __Vtemp_h1c13dfc3__0[9U] = 0U;
    __Vtemp_h1c13dfc3__0[0xaU] = 0U;
    __Vtemp_h1c13dfc3__0[0xbU] = 0U;
    __Vtemp_h1c13dfc3__0[0xcU] = 0U;
    __Vtemp_h1c13dfc3__0[0xdU] = 0U;
    __Vtemp_h1c13dfc3__0[0xeU] = 0U;
    __Vtemp_h1c13dfc3__0[0xfU] = 0U;
    VL_SHIFTL_WWI(512,512,9, __Vtemp_hae827845__0, __Vtemp_h1c13dfc3__0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 3U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[0U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h68fdfb23__0[0U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[0U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2617)
                  ? __Vtemp_hae827845__0[0U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[1U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h68fdfb23__0[1U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[1U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[1U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2617)
                  ? __Vtemp_hae827845__0[1U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[1U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[2U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h68fdfb23__0[2U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[2U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[2U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2617)
                  ? __Vtemp_hae827845__0[2U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[2U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[3U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h68fdfb23__0[3U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[3U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[3U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2617)
                  ? __Vtemp_hae827845__0[3U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[3U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[4U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h68fdfb23__0[4U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[4U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[4U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2617)
                  ? __Vtemp_hae827845__0[4U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[4U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[5U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h68fdfb23__0[5U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[5U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[5U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2617)
                  ? __Vtemp_hae827845__0[5U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[5U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[6U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h68fdfb23__0[6U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[6U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[6U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2617)
                  ? __Vtemp_hae827845__0[6U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[6U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[7U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h68fdfb23__0[7U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[7U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[7U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2617)
                  ? __Vtemp_hae827845__0[7U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[7U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[8U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h68fdfb23__0[8U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[8U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[8U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2617)
                  ? __Vtemp_hae827845__0[8U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[8U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[9U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h68fdfb23__0[9U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[9U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[9U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2617)
                  ? __Vtemp_hae827845__0[9U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[9U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[0xaU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h68fdfb23__0[0xaU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xaU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2617)
                  ? __Vtemp_hae827845__0[0xaU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xaU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[0xbU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h68fdfb23__0[0xbU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xbU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2617)
                  ? __Vtemp_hae827845__0[0xbU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xbU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[0xcU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h68fdfb23__0[0xcU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xcU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2617)
                  ? __Vtemp_hae827845__0[0xcU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xcU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[0xdU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h68fdfb23__0[0xdU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xdU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2617)
                  ? __Vtemp_hae827845__0[0xdU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xdU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[0xeU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h68fdfb23__0[0xeU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xeU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2617)
                  ? __Vtemp_hae827845__0[0xeU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xeU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[0xfU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT____VdfgTmp_h32db990d__0)
             ? (~ __Vtemp_h68fdfb23__0[0xfU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xfU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__hints__DOT__monitor__DOT___T_2617)
                  ? __Vtemp_hae827845__0[0xfU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xfU])));
    VL_SHIFTL_WWI(512,512,9, __Vtemp_hcd3e0595__0, VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    __Vtemp_h6c69caa1__0[0U] = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__c_sizes_set_interm;
    __Vtemp_h6c69caa1__0[1U] = 0U;
    __Vtemp_h6c69caa1__0[2U] = 0U;
    __Vtemp_h6c69caa1__0[3U] = 0U;
    __Vtemp_h6c69caa1__0[4U] = 0U;
    __Vtemp_h6c69caa1__0[5U] = 0U;
    __Vtemp_h6c69caa1__0[6U] = 0U;
    __Vtemp_h6c69caa1__0[7U] = 0U;
    __Vtemp_h6c69caa1__0[8U] = 0U;
    __Vtemp_h6c69caa1__0[9U] = 0U;
    __Vtemp_h6c69caa1__0[0xaU] = 0U;
    __Vtemp_h6c69caa1__0[0xbU] = 0U;
    __Vtemp_h6c69caa1__0[0xcU] = 0U;
    __Vtemp_h6c69caa1__0[0xdU] = 0U;
    __Vtemp_h6c69caa1__0[0xeU] = 0U;
    __Vtemp_h6c69caa1__0[0xfU] = 0U;
    VL_SHIFTL_WWI(512,512,9, __Vtemp_h5aff5c72__0, __Vtemp_h6c69caa1__0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 3U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[0U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_hcd3e0595__0[0U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[0U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_h5aff5c72__0[0U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[1U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_hcd3e0595__0[1U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[1U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[1U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_h5aff5c72__0[1U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[1U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[2U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_hcd3e0595__0[2U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[2U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[2U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_h5aff5c72__0[2U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[2U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[3U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_hcd3e0595__0[3U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[3U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[3U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_h5aff5c72__0[3U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[3U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[4U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_hcd3e0595__0[4U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[4U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[4U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_h5aff5c72__0[4U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[4U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[5U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_hcd3e0595__0[5U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[5U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[5U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_h5aff5c72__0[5U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[5U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[6U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_hcd3e0595__0[6U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[6U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[6U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_h5aff5c72__0[6U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[6U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[7U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_hcd3e0595__0[7U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[7U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[7U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_h5aff5c72__0[7U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[7U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[8U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_hcd3e0595__0[8U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[8U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[8U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_h5aff5c72__0[8U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[8U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[9U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_hcd3e0595__0[9U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[9U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[9U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_h5aff5c72__0[9U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[9U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[0xaU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_hcd3e0595__0[0xaU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xaU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_h5aff5c72__0[0xaU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xaU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[0xbU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_hcd3e0595__0[0xbU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xbU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_h5aff5c72__0[0xbU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xbU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[0xcU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_hcd3e0595__0[0xcU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xcU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_h5aff5c72__0[0xcU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xcU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[0xdU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_hcd3e0595__0[0xdU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xdU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_h5aff5c72__0[0xdU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xdU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[0xeU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_hcd3e0595__0[0xeU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xeU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_h5aff5c72__0[0xeU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xeU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[0xfU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_hcd3e0595__0[0xfU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xfU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_h5aff5c72__0[0xfU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xfU])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_sizes_set_interm 
        = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2342)
            ? (1U | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__ram_size_MPORT_data) 
                     << 1U)) : 0U);
    __Vtemp_hd2b6c582__18[0U] = 1U;
    __Vtemp_hd2b6c582__18[1U] = 0U;
    __Vtemp_hd2b6c582__18[2U] = 0U;
    __Vtemp_hd2b6c582__18[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_he1d30aa8__0, __Vtemp_hd2b6c582__18, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source));
    __Vtemp_hd2b6c582__19[0U] = 1U;
    __Vtemp_hd2b6c582__19[1U] = 0U;
    __Vtemp_hd2b6c582__19[2U] = 0U;
    __Vtemp_hd2b6c582__19[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h2755c3c1__0, __Vtemp_hd2b6c582__19, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__ram_source_MPORT_data));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_T_5[0U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ __Vtemp_he1d30aa8__0[0U]) : 0xffffffffU) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_1[0U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_h2755c3c1__0[0U] : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_T_5[1U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ __Vtemp_he1d30aa8__0[1U]) : 0xffffffffU) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_1[1U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_h2755c3c1__0[1U] : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_T_5[2U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ __Vtemp_he1d30aa8__0[2U]) : 0xffffffffU) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_1[2U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_h2755c3c1__0[2U] : 0U)));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_T_5[3U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ __Vtemp_he1d30aa8__0[3U]) : 0xffffffffU) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_1[3U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_h2755c3c1__0[3U] : 0U)));
    VL_SHIFTL_WWI(512,512,9, __Vtemp_h064b736b__0, VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    __Vtemp_h7bcab632__0[0U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__c_sizes_set_interm;
    __Vtemp_h7bcab632__0[1U] = 0U;
    __Vtemp_h7bcab632__0[2U] = 0U;
    __Vtemp_h7bcab632__0[3U] = 0U;
    __Vtemp_h7bcab632__0[4U] = 0U;
    __Vtemp_h7bcab632__0[5U] = 0U;
    __Vtemp_h7bcab632__0[6U] = 0U;
    __Vtemp_h7bcab632__0[7U] = 0U;
    __Vtemp_h7bcab632__0[8U] = 0U;
    __Vtemp_h7bcab632__0[9U] = 0U;
    __Vtemp_h7bcab632__0[0xaU] = 0U;
    __Vtemp_h7bcab632__0[0xbU] = 0U;
    __Vtemp_h7bcab632__0[0xcU] = 0U;
    __Vtemp_h7bcab632__0[0xdU] = 0U;
    __Vtemp_h7bcab632__0[0xeU] = 0U;
    __Vtemp_h7bcab632__0[0xfU] = 0U;
    VL_SHIFTL_WWI(512,512,9, __Vtemp_hbad014cf__0, __Vtemp_h7bcab632__0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 3U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h064b736b__0[0U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2482)
                  ? __Vtemp_hbad014cf__0[0U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[1U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h064b736b__0[1U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[1U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[1U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2482)
                  ? __Vtemp_hbad014cf__0[1U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[1U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[2U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h064b736b__0[2U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[2U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[2U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2482)
                  ? __Vtemp_hbad014cf__0[2U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[2U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[3U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h064b736b__0[3U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[3U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[3U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2482)
                  ? __Vtemp_hbad014cf__0[3U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[3U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[4U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h064b736b__0[4U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[4U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[4U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2482)
                  ? __Vtemp_hbad014cf__0[4U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[4U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[5U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h064b736b__0[5U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[5U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[5U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2482)
                  ? __Vtemp_hbad014cf__0[5U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[5U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[6U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h064b736b__0[6U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[6U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[6U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2482)
                  ? __Vtemp_hbad014cf__0[6U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[6U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[7U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h064b736b__0[7U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[7U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[7U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2482)
                  ? __Vtemp_hbad014cf__0[7U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[7U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[8U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h064b736b__0[8U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[8U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[8U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2482)
                  ? __Vtemp_hbad014cf__0[8U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[8U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[9U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h064b736b__0[9U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[9U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[9U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2482)
                  ? __Vtemp_hbad014cf__0[9U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[9U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0xaU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h064b736b__0[0xaU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xaU]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2482)
                  ? __Vtemp_hbad014cf__0[0xaU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xaU])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0xbU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h064b736b__0[0xbU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xbU]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2482)
                  ? __Vtemp_hbad014cf__0[0xbU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xbU])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0xcU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h064b736b__0[0xcU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xcU]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2482)
                  ? __Vtemp_hbad014cf__0[0xcU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xcU])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0xdU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h064b736b__0[0xdU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xdU]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2482)
                  ? __Vtemp_hbad014cf__0[0xdU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xdU])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0xeU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h064b736b__0[0xeU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xeU]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2482)
                  ? __Vtemp_hbad014cf__0[0xeU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xeU])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5[0xfU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h064b736b__0[0xfU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xfU]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_2482)
                  ? __Vtemp_hbad014cf__0[0xfU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xfU])));
    VL_SHIFTL_WWI(512,512,9, __Vtemp_h064b736b__1, VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    __Vtemp_hf4cd7c01__0[0U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__c_sizes_set_interm;
    __Vtemp_hf4cd7c01__0[1U] = 0U;
    __Vtemp_hf4cd7c01__0[2U] = 0U;
    __Vtemp_hf4cd7c01__0[3U] = 0U;
    __Vtemp_hf4cd7c01__0[4U] = 0U;
    __Vtemp_hf4cd7c01__0[5U] = 0U;
    __Vtemp_hf4cd7c01__0[6U] = 0U;
    __Vtemp_hf4cd7c01__0[7U] = 0U;
    __Vtemp_hf4cd7c01__0[8U] = 0U;
    __Vtemp_hf4cd7c01__0[9U] = 0U;
    __Vtemp_hf4cd7c01__0[0xaU] = 0U;
    __Vtemp_hf4cd7c01__0[0xbU] = 0U;
    __Vtemp_hf4cd7c01__0[0xcU] = 0U;
    __Vtemp_hf4cd7c01__0[0xdU] = 0U;
    __Vtemp_hf4cd7c01__0[0xeU] = 0U;
    __Vtemp_hf4cd7c01__0[0xfU] = 0U;
    VL_SHIFTL_WWI(512,512,9, __Vtemp_hb47bbe68__0, __Vtemp_hf4cd7c01__0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 3U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h064b736b__1[0U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2478)
                  ? __Vtemp_hb47bbe68__0[0U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[1U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h064b736b__1[1U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[1U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[1U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2478)
                  ? __Vtemp_hb47bbe68__0[1U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[1U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[2U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h064b736b__1[2U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[2U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[2U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2478)
                  ? __Vtemp_hb47bbe68__0[2U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[2U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[3U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h064b736b__1[3U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[3U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[3U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2478)
                  ? __Vtemp_hb47bbe68__0[3U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[3U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[4U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h064b736b__1[4U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[4U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[4U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2478)
                  ? __Vtemp_hb47bbe68__0[4U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[4U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[5U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h064b736b__1[5U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[5U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[5U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2478)
                  ? __Vtemp_hb47bbe68__0[5U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[5U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[6U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h064b736b__1[6U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[6U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[6U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2478)
                  ? __Vtemp_hb47bbe68__0[6U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[6U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[7U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h064b736b__1[7U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[7U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[7U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2478)
                  ? __Vtemp_hb47bbe68__0[7U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[7U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[8U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h064b736b__1[8U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[8U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[8U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2478)
                  ? __Vtemp_hb47bbe68__0[8U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[8U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[9U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h064b736b__1[9U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[9U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[9U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2478)
                  ? __Vtemp_hb47bbe68__0[9U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[9U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0xaU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h064b736b__1[0xaU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xaU]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2478)
                  ? __Vtemp_hb47bbe68__0[0xaU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xaU])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0xbU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h064b736b__1[0xbU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xbU]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2478)
                  ? __Vtemp_hb47bbe68__0[0xbU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xbU])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0xcU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h064b736b__1[0xcU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xcU]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2478)
                  ? __Vtemp_hb47bbe68__0[0xcU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xcU])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0xdU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h064b736b__1[0xdU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xdU]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2478)
                  ? __Vtemp_hb47bbe68__0[0xdU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xdU])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0xeU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h064b736b__1[0xeU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xeU]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2478)
                  ? __Vtemp_hb47bbe68__0[0xeU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xeU])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0xfU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h064b736b__1[0xfU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xfU]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor__DOT___T_2478)
                  ? __Vtemp_hb47bbe68__0[0xfU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xfU])));
    VL_SHIFTL_WWI(512,512,9, __Vtemp_h064b736b__2, VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    __Vtemp_h089248f9__0[0U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__c_sizes_set_interm;
    __Vtemp_h089248f9__0[1U] = 0U;
    __Vtemp_h089248f9__0[2U] = 0U;
    __Vtemp_h089248f9__0[3U] = 0U;
    __Vtemp_h089248f9__0[4U] = 0U;
    __Vtemp_h089248f9__0[5U] = 0U;
    __Vtemp_h089248f9__0[6U] = 0U;
    __Vtemp_h089248f9__0[7U] = 0U;
    __Vtemp_h089248f9__0[8U] = 0U;
    __Vtemp_h089248f9__0[9U] = 0U;
    __Vtemp_h089248f9__0[0xaU] = 0U;
    __Vtemp_h089248f9__0[0xbU] = 0U;
    __Vtemp_h089248f9__0[0xcU] = 0U;
    __Vtemp_h089248f9__0[0xdU] = 0U;
    __Vtemp_h089248f9__0[0xeU] = 0U;
    __Vtemp_h089248f9__0[0xfU] = 0U;
    VL_SHIFTL_WWI(512,512,9, __Vtemp_h55b07938__0, __Vtemp_h089248f9__0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 3U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h064b736b__2[0U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2478)
                  ? __Vtemp_h55b07938__0[0U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[1U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h064b736b__2[1U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[1U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[1U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2478)
                  ? __Vtemp_h55b07938__0[1U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[1U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[2U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h064b736b__2[2U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[2U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[2U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2478)
                  ? __Vtemp_h55b07938__0[2U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[2U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[3U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h064b736b__2[3U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[3U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[3U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2478)
                  ? __Vtemp_h55b07938__0[3U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[3U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[4U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h064b736b__2[4U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[4U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[4U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2478)
                  ? __Vtemp_h55b07938__0[4U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[4U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[5U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h064b736b__2[5U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[5U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[5U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2478)
                  ? __Vtemp_h55b07938__0[5U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[5U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[6U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h064b736b__2[6U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[6U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[6U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2478)
                  ? __Vtemp_h55b07938__0[6U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[6U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[7U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h064b736b__2[7U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[7U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[7U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2478)
                  ? __Vtemp_h55b07938__0[7U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[7U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[8U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h064b736b__2[8U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[8U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[8U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2478)
                  ? __Vtemp_h55b07938__0[8U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[8U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[9U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h064b736b__2[9U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[9U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[9U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2478)
                  ? __Vtemp_h55b07938__0[9U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[9U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0xaU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h064b736b__2[0xaU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xaU]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2478)
                  ? __Vtemp_h55b07938__0[0xaU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xaU])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0xbU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h064b736b__2[0xbU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xbU]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2478)
                  ? __Vtemp_h55b07938__0[0xbU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xbU])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0xcU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h064b736b__2[0xcU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xcU]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2478)
                  ? __Vtemp_h55b07938__0[0xcU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xcU])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0xdU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h064b736b__2[0xdU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xdU]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2478)
                  ? __Vtemp_h55b07938__0[0xdU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xdU])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0xeU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h064b736b__2[0xeU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xeU]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2478)
                  ? __Vtemp_h55b07938__0[0xeU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xeU])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___inflight_sizes_T_5[0xfU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h064b736b__2[0xfU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xfU]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__fixer_1__DOT__monitor__DOT___T_2478)
                  ? __Vtemp_h55b07938__0[0xfU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xfU])));
    VL_SHIFTL_WWI(256,256,8, __Vtemp_h6dd39924__0, VysyxSoCFull__ConstPool__CONST_h57168600_0, 
                  (0xfcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_source) 
                            << 1U)));
    __Vtemp_h132c8ac8__0[0U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__c_sizes_set_interm;
    __Vtemp_h132c8ac8__0[1U] = 0U;
    __Vtemp_h132c8ac8__0[2U] = 0U;
    __Vtemp_h132c8ac8__0[3U] = 0U;
    __Vtemp_h132c8ac8__0[4U] = 0U;
    __Vtemp_h132c8ac8__0[5U] = 0U;
    __Vtemp_h132c8ac8__0[6U] = 0U;
    __Vtemp_h132c8ac8__0[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp_h16e7d29b__0, __Vtemp_h132c8ac8__0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[0U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h6dd39924__0[0U]) : VysyxSoCFull__ConstPool__CONST_h5b979007_0[0U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[0U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2476)
                  ? __Vtemp_h16e7d29b__0[0U] : VysyxSoCFull__ConstPool__CONST_h9e67c271_0[0U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[1U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h6dd39924__0[1U]) : VysyxSoCFull__ConstPool__CONST_h5b979007_0[1U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[1U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2476)
                  ? __Vtemp_h16e7d29b__0[1U] : VysyxSoCFull__ConstPool__CONST_h9e67c271_0[1U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[2U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h6dd39924__0[2U]) : VysyxSoCFull__ConstPool__CONST_h5b979007_0[2U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[2U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2476)
                  ? __Vtemp_h16e7d29b__0[2U] : VysyxSoCFull__ConstPool__CONST_h9e67c271_0[2U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[3U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h6dd39924__0[3U]) : VysyxSoCFull__ConstPool__CONST_h5b979007_0[3U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[3U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2476)
                  ? __Vtemp_h16e7d29b__0[3U] : VysyxSoCFull__ConstPool__CONST_h9e67c271_0[3U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[4U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h6dd39924__0[4U]) : VysyxSoCFull__ConstPool__CONST_h5b979007_0[4U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[4U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2476)
                  ? __Vtemp_h16e7d29b__0[4U] : VysyxSoCFull__ConstPool__CONST_h9e67c271_0[4U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[5U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h6dd39924__0[5U]) : VysyxSoCFull__ConstPool__CONST_h5b979007_0[5U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[5U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2476)
                  ? __Vtemp_h16e7d29b__0[5U] : VysyxSoCFull__ConstPool__CONST_h9e67c271_0[5U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[6U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h6dd39924__0[6U]) : VysyxSoCFull__ConstPool__CONST_h5b979007_0[6U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[6U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2476)
                  ? __Vtemp_h16e7d29b__0[6U] : VysyxSoCFull__ConstPool__CONST_h9e67c271_0[6U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___inflight_sizes_T_5[7U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h6dd39924__0[7U]) : VysyxSoCFull__ConstPool__CONST_h5b979007_0[7U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT__inflight_sizes_1[7U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__hints__DOT__monitor__DOT___T_2476)
                  ? __Vtemp_h16e7d29b__0[7U] : VysyxSoCFull__ConstPool__CONST_h9e67c271_0[7U])));
    VL_SHIFTL_WWI(512,512,9, __Vtemp_h92fe3747__0, VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    __Vtemp_hecbdfaee__0[0U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__c_sizes_set_interm;
    __Vtemp_hecbdfaee__0[1U] = 0U;
    __Vtemp_hecbdfaee__0[2U] = 0U;
    __Vtemp_hecbdfaee__0[3U] = 0U;
    __Vtemp_hecbdfaee__0[4U] = 0U;
    __Vtemp_hecbdfaee__0[5U] = 0U;
    __Vtemp_hecbdfaee__0[6U] = 0U;
    __Vtemp_hecbdfaee__0[7U] = 0U;
    __Vtemp_hecbdfaee__0[8U] = 0U;
    __Vtemp_hecbdfaee__0[9U] = 0U;
    __Vtemp_hecbdfaee__0[0xaU] = 0U;
    __Vtemp_hecbdfaee__0[0xbU] = 0U;
    __Vtemp_hecbdfaee__0[0xcU] = 0U;
    __Vtemp_hecbdfaee__0[0xdU] = 0U;
    __Vtemp_hecbdfaee__0[0xeU] = 0U;
    __Vtemp_hecbdfaee__0[0xfU] = 0U;
    VL_SHIFTL_WWI(512,512,9, __Vtemp_h648dca23__0, __Vtemp_hecbdfaee__0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass_auto_out_c_bits_source) 
                   << 3U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[0U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h92fe3747__0[0U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[0U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_h648dca23__0[0U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[1U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h92fe3747__0[1U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[1U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[1U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_h648dca23__0[1U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[1U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[2U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h92fe3747__0[2U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[2U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[2U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_h648dca23__0[2U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[2U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[3U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h92fe3747__0[3U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[3U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[3U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_h648dca23__0[3U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[3U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[4U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h92fe3747__0[4U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[4U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[4U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_h648dca23__0[4U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[4U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[5U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h92fe3747__0[5U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[5U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[5U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_h648dca23__0[5U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[5U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[6U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h92fe3747__0[6U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[6U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[6U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_h648dca23__0[6U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[6U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[7U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h92fe3747__0[7U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[7U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[7U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_h648dca23__0[7U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[7U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[8U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h92fe3747__0[8U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[8U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[8U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_h648dca23__0[8U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[8U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[9U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h92fe3747__0[9U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[9U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[9U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_h648dca23__0[9U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[9U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[0xaU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h92fe3747__0[0xaU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xaU]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_h648dca23__0[0xaU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xaU])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[0xbU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h92fe3747__0[0xbU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xbU]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_h648dca23__0[0xbU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xbU])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[0xcU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h92fe3747__0[0xcU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xcU]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_h648dca23__0[0xcU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xcU])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[0xdU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h92fe3747__0[0xdU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xdU]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_h648dca23__0[0xdU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xdU])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[0xeU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h92fe3747__0[0xeU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xeU]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_h648dca23__0[0xeU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xeU])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___inflight_sizes_T_5[0xfU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT____VdfgTmp_hc83f17dc__0)
             ? (~ __Vtemp_h92fe3747__0[0xfU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xfU]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_h648dca23__0[0xfU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xfU])));
    VL_SHIFTL_WWI(512,512,9, __Vtemp_hcd3e0595__1, VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    __Vtemp_h5ff39152__0[0U] = vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__c_sizes_set_interm;
    __Vtemp_h5ff39152__0[1U] = 0U;
    __Vtemp_h5ff39152__0[2U] = 0U;
    __Vtemp_h5ff39152__0[3U] = 0U;
    __Vtemp_h5ff39152__0[4U] = 0U;
    __Vtemp_h5ff39152__0[5U] = 0U;
    __Vtemp_h5ff39152__0[6U] = 0U;
    __Vtemp_h5ff39152__0[7U] = 0U;
    __Vtemp_h5ff39152__0[8U] = 0U;
    __Vtemp_h5ff39152__0[9U] = 0U;
    __Vtemp_h5ff39152__0[0xaU] = 0U;
    __Vtemp_h5ff39152__0[0xbU] = 0U;
    __Vtemp_h5ff39152__0[0xcU] = 0U;
    __Vtemp_h5ff39152__0[0xdU] = 0U;
    __Vtemp_h5ff39152__0[0xeU] = 0U;
    __Vtemp_h5ff39152__0[0xfU] = 0U;
    VL_SHIFTL_WWI(512,512,9, __Vtemp_hb3630b24__0, __Vtemp_h5ff39152__0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_source_MPORT_data) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[0U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ __Vtemp_hcd3e0595__1[0U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[0U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_hb3630b24__0[0U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[1U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ __Vtemp_hcd3e0595__1[1U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[1U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[1U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_hb3630b24__0[1U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[1U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[2U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ __Vtemp_hcd3e0595__1[2U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[2U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[2U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_hb3630b24__0[2U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[2U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[3U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ __Vtemp_hcd3e0595__1[3U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[3U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[3U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_hb3630b24__0[3U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[3U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[4U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ __Vtemp_hcd3e0595__1[4U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[4U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[4U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_hb3630b24__0[4U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[4U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[5U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ __Vtemp_hcd3e0595__1[5U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[5U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[5U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_hb3630b24__0[5U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[5U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[6U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ __Vtemp_hcd3e0595__1[6U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[6U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[6U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_hb3630b24__0[6U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[6U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[7U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ __Vtemp_hcd3e0595__1[7U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[7U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[7U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_hb3630b24__0[7U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[7U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[8U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ __Vtemp_hcd3e0595__1[8U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[8U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[8U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_hb3630b24__0[8U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[8U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[9U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ __Vtemp_hcd3e0595__1[9U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[9U]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[9U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_hb3630b24__0[9U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[9U])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[0xaU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ __Vtemp_hcd3e0595__1[0xaU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xaU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_hb3630b24__0[0xaU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xaU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[0xbU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ __Vtemp_hcd3e0595__1[0xbU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xbU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_hb3630b24__0[0xbU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xbU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[0xcU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ __Vtemp_hcd3e0595__1[0xcU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xcU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_hb3630b24__0[0xcU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xcU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[0xdU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ __Vtemp_hcd3e0595__1[0xdU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xdU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_hb3630b24__0[0xdU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xdU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[0xeU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ __Vtemp_hcd3e0595__1[0xeU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xeU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_hb3630b24__0[0xeU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xeU])));
    vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[0xfU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ __Vtemp_hcd3e0595__1[0xfU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xfU]) 
           & (vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__err__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_hb3630b24__0[0xfU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xfU])));
    VL_SHIFTL_WWI(512,512,9, __Vtemp_h92fe3747__1, VysyxSoCFull__ConstPool__CONST_h3ad9c2be_0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor_io_in_d_bits_source) 
                   << 2U));
    __Vtemp_he22596d6__0[0U] = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__c_sizes_set_interm;
    __Vtemp_he22596d6__0[1U] = 0U;
    __Vtemp_he22596d6__0[2U] = 0U;
    __Vtemp_he22596d6__0[3U] = 0U;
    __Vtemp_he22596d6__0[4U] = 0U;
    __Vtemp_he22596d6__0[5U] = 0U;
    __Vtemp_he22596d6__0[6U] = 0U;
    __Vtemp_he22596d6__0[7U] = 0U;
    __Vtemp_he22596d6__0[8U] = 0U;
    __Vtemp_he22596d6__0[9U] = 0U;
    __Vtemp_he22596d6__0[0xaU] = 0U;
    __Vtemp_he22596d6__0[0xbU] = 0U;
    __Vtemp_he22596d6__0[0xcU] = 0U;
    __Vtemp_he22596d6__0[0xdU] = 0U;
    __Vtemp_he22596d6__0[0xeU] = 0U;
    __Vtemp_he22596d6__0[0xfU] = 0U;
    VL_SHIFTL_WWI(512,512,9, __Vtemp_hb36275cc__0, __Vtemp_he22596d6__0, 
                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__ram_source_MPORT_data) 
                   << 2U));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[0U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ __Vtemp_h92fe3747__1[0U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[0U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_hb36275cc__0[0U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[1U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ __Vtemp_h92fe3747__1[1U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[1U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[1U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_hb36275cc__0[1U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[1U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[2U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ __Vtemp_h92fe3747__1[2U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[2U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[2U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_hb36275cc__0[2U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[2U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[3U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ __Vtemp_h92fe3747__1[3U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[3U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[3U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_hb36275cc__0[3U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[3U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[4U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ __Vtemp_h92fe3747__1[4U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[4U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[4U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_hb36275cc__0[4U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[4U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[5U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ __Vtemp_h92fe3747__1[5U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[5U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[5U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_hb36275cc__0[5U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[5U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[6U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ __Vtemp_h92fe3747__1[6U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[6U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[6U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_hb36275cc__0[6U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[6U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[7U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ __Vtemp_h92fe3747__1[7U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[7U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[7U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_hb36275cc__0[7U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[7U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[8U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ __Vtemp_h92fe3747__1[8U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[8U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[8U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_hb36275cc__0[8U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[8U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[9U] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ __Vtemp_h92fe3747__1[9U]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[9U]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[9U] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_hb36275cc__0[9U] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[9U])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[0xaU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ __Vtemp_h92fe3747__1[0xaU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xaU]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_hb36275cc__0[0xaU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xaU])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[0xbU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ __Vtemp_h92fe3747__1[0xbU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xbU]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_hb36275cc__0[0xbU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xbU])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[0xcU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ __Vtemp_h92fe3747__1[0xcU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xcU]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_hb36275cc__0[0xcU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xcU])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[0xdU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ __Vtemp_h92fe3747__1[0xdU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xdU]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_hb36275cc__0[0xdU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xdU])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[0xeU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ __Vtemp_h92fe3747__1[0xeU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xeU]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_hb36275cc__0[0xeU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xeU])));
    vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___inflight_sizes_T_5[0xfU] 
        = (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT____VdfgTmp_hbf6a8095__0)
             ? (~ __Vtemp_h92fe3747__1[0xfU]) : VysyxSoCFull__ConstPool__CONST_h8b2d9f06_0[0xfU]) 
           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__monitor__DOT___T_2342)
                  ? __Vtemp_hb36275cc__0[0xfU] : VysyxSoCFull__ConstPool__CONST_h93e1b771_0[0xfU])));
}
